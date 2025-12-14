/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17782
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_11 = var_5;
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) var_7))));
        /* LoopSeq 4 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            /* LoopSeq 3 */
            for (unsigned char i_2 = 1; i_2 < 15; i_2 += 4) 
            {
                var_13 ^= ((/* implicit */long long int) ((((var_9) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(signed char)2] [i_1] [8ULL]))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 + 1])))));
                /* LoopSeq 2 */
                for (unsigned short i_3 = 1; i_3 < 13; i_3 += 2) 
                {
                    var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_3 [(unsigned char)10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_8))))))));
                    var_15 = ((/* implicit */signed char) ((arr_6 [i_0] [i_1] [i_1] [i_1]) || (((/* implicit */_Bool) arr_2 [i_1] [i_1] [i_1]))));
                    /* LoopSeq 1 */
                    for (long long int i_4 = 4; i_4 < 14; i_4 += 2) 
                    {
                        arr_12 [i_2] [i_2] [i_2 - 1] [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_4 [15] [i_1] [i_3]))))) || (((/* implicit */_Bool) (-(1879048192U))))));
                        arr_13 [3] [15U] [15U] [15U] [11ULL] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) arr_8 [i_0 - 1] [i_0 + 1] [i_1] [i_2 - 1] [i_3] [i_4])) | (arr_0 [i_2 - 1])));
                        var_16 = ((/* implicit */short) (-((~(1879048190U)))));
                        var_17 = ((((((/* implicit */int) arr_3 [i_0 - 1])) + (2147483647))) >> (((/* implicit */int) ((arr_0 [(unsigned char)0]) == (((/* implicit */int) arr_11 [i_1]))))));
                        var_18 += ((arr_10 [i_2 + 1] [i_4] [i_2 - 1]) ^ (arr_10 [i_2 + 1] [i_4] [i_2 - 1]));
                    }
                }
                for (unsigned char i_5 = 1; i_5 < 15; i_5 += 2) 
                {
                    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_15 [i_0] [i_5 - 1] [i_2 + 1] [i_5 + 1] [(unsigned short)14])) ? (((/* implicit */int) arr_15 [i_0] [i_5 - 1] [i_2] [(short)8] [(short)8])) : (((/* implicit */int) arr_15 [i_2] [i_5 - 1] [i_2] [i_5 - 1] [(unsigned char)4])))))));
                    var_20 = ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) var_4))) % (var_3))) % (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_2] [i_0] [i_5 - 1] [i_2 - 1])))));
                    arr_17 [(unsigned char)14] [(unsigned char)14] &= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)10)) >> (((245760) - (245731)))));
                }
            }
            for (unsigned short i_6 = 3; i_6 < 13; i_6 += 1) 
            {
                var_21 += ((/* implicit */signed char) arr_18 [i_0 - 1] [i_0 - 1] [i_0]);
                var_22 = ((/* implicit */signed char) (-(((((/* implicit */int) arr_5 [(short)0] [(short)0] [(_Bool)1])) * (((/* implicit */int) var_2))))));
                var_23 = ((/* implicit */short) ((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_1])) && (((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0 - 1]))));
            }
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
            {
                var_24 ^= ((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 1]);
                var_25 = ((((/* implicit */_Bool) arr_21 [i_0 - 1] [i_7] [i_7 - 1] [i_7])) && (((/* implicit */_Bool) arr_21 [i_0 - 1] [i_7 - 1] [i_7 - 1] [i_7])));
                arr_22 [i_1] = ((/* implicit */int) arr_8 [i_0] [i_1] [i_0 + 1] [i_0 + 1] [i_0] [i_0]);
            }
            arr_23 [i_0] [i_1] = ((/* implicit */_Bool) arr_15 [i_0 + 1] [i_0] [i_0 + 1] [i_0] [i_1]);
            var_26 = (~(((/* implicit */int) arr_19 [10])));
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (long long int i_9 = 1; i_9 < 13; i_9 += 3) 
            {
                for (unsigned int i_10 = 1; i_10 < 13; i_10 += 3) 
                {
                    for (signed char i_11 = 2; i_11 < 15; i_11 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */long long int) ((arr_7 [i_0] [i_9 + 1] [i_10 + 2] [i_11 + 1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_8] [i_9 - 1])))));
                            var_28 = ((((/* implicit */int) arr_8 [i_9 - 1] [i_9] [i_9 - 1] [i_9 + 2] [i_9 + 1] [i_9 + 3])) + (((/* implicit */int) arr_16 [i_0 + 1] [i_8] [i_9])));
                        }
                    } 
                } 
            } 
            var_29 = ((/* implicit */int) arr_34 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 + 1]);
            var_30 *= ((/* implicit */_Bool) ((arr_34 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 + 1]) + (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_0 + 1])))));
        }
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
        {
            arr_38 [i_12] [(unsigned char)8] [i_12] = ((((/* implicit */_Bool) arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 1])) && (((/* implicit */_Bool) arr_24 [i_0 - 1] [i_0 - 1])));
            var_31 = ((/* implicit */long long int) ((((/* implicit */int) arr_27 [i_0])) - (((/* implicit */int) arr_11 [i_12]))));
        }
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
        {
            var_32 = ((/* implicit */int) ((((/* implicit */_Bool) arr_42 [i_0 + 1])) ? (arr_42 [i_0 + 1]) : (arr_42 [i_0 + 1])));
            var_33 = ((/* implicit */_Bool) ((var_5) ? (arr_18 [i_0 + 1] [i_13] [(short)11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_0 + 1])))));
        }
    }
    for (int i_14 = 1; i_14 < 13; i_14 += 2) /* same iter space */
    {
        var_34 *= ((/* implicit */unsigned long long int) (~(arr_29 [i_14 - 1] [(short)14] [i_14 + 1])));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_15 = 2; i_15 < 13; i_15 += 4) 
        {
            var_35 |= ((/* implicit */_Bool) arr_34 [i_14 - 1] [i_14 + 1] [i_14 - 1] [i_14 - 1]);
            arr_47 [i_14 + 1] [i_14 + 1] [i_14] = ((/* implicit */_Bool) ((arr_11 [i_14]) ? (((((/* implicit */int) arr_45 [i_14])) ^ (((/* implicit */int) var_1)))) : (((/* implicit */int) var_10))));
        }
    }
    for (int i_16 = 1; i_16 < 13; i_16 += 2) /* same iter space */
    {
        var_36 = ((/* implicit */unsigned short) min((var_36), (((/* implicit */unsigned short) ((max((((/* implicit */long long int) var_2)), (var_3))) - (((/* implicit */long long int) ((/* implicit */int) arr_46 [0] [0]))))))));
        var_37 = ((((((/* implicit */_Bool) max((arr_26 [i_16 + 1] [i_16 + 1] [i_16 + 1]), (((/* implicit */long long int) arr_6 [i_16] [i_16] [i_16] [i_16 + 1]))))) ? (((((/* implicit */int) var_0)) & (((/* implicit */int) var_5)))) : (((/* implicit */int) var_1)))) | ((~(((((/* implicit */int) arr_4 [i_16] [i_16] [6U])) ^ (((/* implicit */int) arr_44 [i_16])))))));
        arr_50 [i_16] [i_16] = ((((/* implicit */_Bool) arr_48 [i_16])) && ((!(((((/* implicit */_Bool) arr_49 [i_16] [i_16])) || (((/* implicit */_Bool) arr_19 [(short)1])))))));
    }
    var_38 = ((/* implicit */unsigned char) ((short) (~(((/* implicit */int) ((var_8) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))));
}
