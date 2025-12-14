/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105719
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
    var_13 = ((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) - ((+(13357640525159672061ULL))))), (((/* implicit */unsigned long long int) min(((((_Bool)1) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned int) 595741513)))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        var_14 = ((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) var_8)))));
        var_15 = ((/* implicit */unsigned short) ((arr_0 [i_0 + 2]) ? (arr_2 [i_0]) : (((((/* implicit */int) var_4)) % (arr_2 [i_0])))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 2) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_2 = 0; i_2 < 14; i_2 += 3) 
        {
            var_16 = ((/* implicit */unsigned short) ((arr_2 [i_1]) + (((/* implicit */int) arr_5 [i_1] [i_2]))));
            var_17 = ((/* implicit */long long int) (((~(1285712415))) & (((/* implicit */int) arr_0 [i_2]))));
            var_18 = ((((/* implicit */_Bool) -595741514)) ? (arr_4 [i_1] [i_2]) : (((/* implicit */unsigned long long int) arr_6 [6] [i_1] [i_1])));
            var_19 += ((/* implicit */unsigned short) var_11);
        }
        /* vectorizable */
        for (short i_3 = 0; i_3 < 14; i_3 += 3) 
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 14; i_4 += 2) 
            {
                for (int i_5 = 0; i_5 < 14; i_5 += 4) 
                {
                    {
                        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) var_6))));
                        arr_14 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18014398509219840ULL)) ? (-595741514) : (-595741514)));
                    }
                } 
            } 
            arr_15 [i_3] [i_3] [i_3] = ((/* implicit */long long int) arr_2 [i_3]);
            var_21 = ((/* implicit */int) ((arr_7 [i_1] [(unsigned short)6] [i_3]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [i_1])))));
            /* LoopSeq 2 */
            for (int i_6 = 4; i_6 < 11; i_6 += 2) 
            {
                arr_19 [i_3] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_10 [13U] [i_3] [i_3]))))) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_6] [6U] [i_3] [i_3] [i_1] [i_1]))) * (13277254473332087408ULL)))));
                var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((arr_8 [i_1] [i_6 + 2] [i_6]) | (arr_8 [i_1] [i_6 + 1] [i_6]))))));
                /* LoopSeq 4 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                {
                    var_23 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)511)) ? (arr_7 [i_7] [i_6 + 1] [i_1]) : (arr_12 [i_7] [i_3] [i_1])));
                    var_24 = ((/* implicit */unsigned long long int) arr_17 [4] [i_3] [i_1] [i_6 - 2]);
                }
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                {
                    var_25 = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) arr_10 [i_1] [i_1] [i_3])))))));
                    /* LoopSeq 1 */
                    for (int i_9 = 0; i_9 < 14; i_9 += 4) 
                    {
                        var_26 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_7))));
                        var_27 = ((/* implicit */int) arr_27 [(unsigned char)11] [(unsigned char)11] [i_3] [i_8] [i_8]);
                        arr_28 [i_1] [i_3] [i_3] [i_8] [i_9] = ((int) arr_7 [i_6 - 2] [i_6 - 2] [i_6 - 4]);
                    }
                }
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                {
                    var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_20 [i_3] [i_3])) ? (((/* implicit */int) arr_0 [21LL])) : (((/* implicit */int) arr_18 [i_1]))));
                    arr_33 [i_1] [i_1] [i_1] [i_1] [i_3] = ((/* implicit */unsigned char) var_12);
                    var_29 = ((/* implicit */unsigned short) var_3);
                }
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                {
                    var_30 &= ((/* implicit */short) arr_35 [i_11]);
                    arr_36 [i_11] [i_3] [6LL] [i_3] [i_1] = ((/* implicit */_Bool) (+(arr_35 [i_1])));
                }
                var_31 = ((/* implicit */unsigned short) ((((_Bool) (unsigned char)122)) ? ((~(arr_27 [i_1] [i_3] [i_1] [(short)4] [i_6 + 2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_3] [i_1]))))))));
            }
            for (unsigned long long int i_12 = 0; i_12 < 14; i_12 += 3) 
            {
                var_32 += ((/* implicit */unsigned short) (unsigned char)28);
                arr_39 [i_3] = ((/* implicit */_Bool) ((arr_12 [i_12] [i_1] [i_1]) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
                var_33 = ((/* implicit */_Bool) arr_23 [i_1] [i_1] [i_3] [i_3] [i_1] [i_12]);
            }
        }
        /* LoopNest 3 */
        for (unsigned char i_13 = 3; i_13 < 11; i_13 += 3) 
        {
            for (signed char i_14 = 0; i_14 < 14; i_14 += 2) 
            {
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    {
                        var_34 = ((/* implicit */short) min((var_34), (((short) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (short)15539)))))));
                        arr_51 [i_13] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_29 [i_13] [i_13]))));
                    }
                } 
            } 
        } 
        arr_52 [i_1] [i_1] = max(((~(var_11))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_25 [i_1] [(_Bool)1] [i_1]))))));
    }
    for (short i_16 = 0; i_16 < 14; i_16 += 4) 
    {
        var_35 = ((/* implicit */unsigned long long int) max((((/* implicit */int) (signed char)0)), (-595741514)));
        var_36 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_25 [i_16] [i_16] [i_16])) ? (var_8) : (((/* implicit */unsigned int) arr_32 [i_16] [i_16] [i_16] [i_16])))), (((/* implicit */unsigned int) ((short) arr_32 [i_16] [i_16] [i_16] [i_16])))));
        var_37 = ((/* implicit */_Bool) (-(((arr_54 [i_16]) | (arr_54 [i_16])))));
    }
    for (long long int i_17 = 0; i_17 < 23; i_17 += 4) 
    {
        arr_58 [i_17] [i_17] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_55 [(unsigned short)19] [i_17]))));
        arr_59 [i_17] = ((/* implicit */_Bool) min((((/* implicit */long long int) ((int) (+(((/* implicit */int) var_5)))))), (arr_56 [i_17])));
    }
    var_38 ^= ((/* implicit */long long int) (!(((_Bool) var_2))));
}
