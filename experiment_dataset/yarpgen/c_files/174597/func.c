/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174597
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 3; i_1 < 9; i_1 += 4) 
        {
            for (int i_2 = 2; i_2 < 9; i_2 += 4) 
            {
                for (unsigned short i_3 = 0; i_3 < 11; i_3 += 4) 
                {
                    {
                        var_14 += ((/* implicit */unsigned long long int) ((long long int) arr_3 [i_0]));
                        var_15 = ((/* implicit */unsigned long long int) arr_12 [i_3] [i_2] [i_2] [i_0] [i_0]);
                        arr_13 [(unsigned short)7] &= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_2 [(signed char)0])) ? (((/* implicit */int) arr_7 [i_3])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_4 = 2; i_4 < 9; i_4 += 2) 
        {
            for (unsigned short i_5 = 1; i_5 < 8; i_5 += 1) 
            {
                {
                    var_16 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_4 - 1] [i_4 - 2])) ? (arr_8 [i_4] [i_4 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_4] [i_4 + 1] [i_5 + 2])))));
                    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)23749)) - (((/* implicit */int) var_10))))) != (((((/* implicit */long long int) ((/* implicit */int) var_10))) | (var_7))))))));
                }
            } 
        } 
        var_18 -= ((/* implicit */signed char) arr_11 [i_0] [i_0] [4LL] [(unsigned short)8]);
    }
    for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */signed char) ((long long int) (+(((/* implicit */int) arr_18 [i_6])))));
        /* LoopNest 2 */
        for (short i_7 = 0; i_7 < 11; i_7 += 4) 
        {
            for (unsigned short i_8 = 1; i_8 < 8; i_8 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 0; i_9 < 11; i_9 += 2) 
                    {
                        for (unsigned short i_10 = 0; i_10 < 11; i_10 += 4) 
                        {
                            {
                                var_20 |= ((((/* implicit */_Bool) ((((/* implicit */int) arr_32 [i_8 + 1] [i_8 + 3] [i_8 + 3] [i_10] [i_8 + 2])) & (((/* implicit */int) (signed char)103))))) ? (arr_8 [i_8] [i_8 + 2]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)103))));
                                var_21 += ((/* implicit */int) ((signed char) (-(arr_21 [i_8 - 1] [i_8 + 1]))));
                                var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-100)) / (((/* implicit */int) arr_6 [i_6] [i_8 + 1] [i_8]))))) ? (((((((/* implicit */int) arr_6 [i_6] [i_8 + 3] [i_8])) + (2147483647))) >> (((((/* implicit */int) arr_6 [i_9] [i_8 + 2] [i_7])) + (103))))) : (((/* implicit */int) ((unsigned short) (signed char)-103))))))));
                                arr_33 [i_6] [i_6] [i_7] [i_9] [i_10] &= ((/* implicit */_Bool) (unsigned short)30324);
                            }
                        } 
                    } 
                    var_23 -= ((/* implicit */unsigned char) (unsigned short)35212);
                    var_24 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 14ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_6] [i_6]))) : (((((/* implicit */_Bool) (signed char)103)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (signed char)103)))))))) + (max(((+(var_11))), (((/* implicit */unsigned long long int) max((arr_8 [i_6] [i_6]), (((/* implicit */long long int) (unsigned short)35211)))))))));
                    var_25 *= ((/* implicit */unsigned char) (((((~(arr_17 [i_6] [i_6] [i_6]))) ^ (max((var_7), (((/* implicit */long long int) arr_0 [(unsigned short)3] [(unsigned short)3])))))) % (((/* implicit */long long int) ((/* implicit */int) (unsigned short)35212)))));
                }
            } 
        } 
        var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_13)))) ? ((+(var_13))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)22)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)30325))))))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) arr_6 [i_6] [i_6] [(short)0])), (var_0)))) : (max((((((/* implicit */int) (unsigned short)65535)) >> (((/* implicit */int) (signed char)30)))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)30324))))))))))));
        var_27 = (unsigned short)30324;
    }
    for (unsigned long long int i_11 = 0; i_11 < 11; i_11 += 4) /* same iter space */
    {
        var_28 = ((long long int) max((((/* implicit */unsigned long long int) 2985680608U)), (arr_15 [i_11] [i_11])));
        /* LoopSeq 2 */
        for (signed char i_12 = 0; i_12 < 11; i_12 += 2) 
        {
            var_29 = ((/* implicit */unsigned short) var_0);
            arr_39 [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) min(((~(4073732334U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 0U)))))))) ? ((-(((/* implicit */int) max((var_2), (((/* implicit */short) (unsigned char)0))))))) : (((/* implicit */int) arr_24 [i_11] [i_12]))));
            var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) (unsigned short)30324))));
        }
        for (unsigned short i_13 = 3; i_13 < 10; i_13 += 4) 
        {
            arr_43 [(short)2] [(signed char)5] = ((/* implicit */unsigned short) max(((~(arr_8 [i_11] [i_13]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_11] [i_11])) || (((/* implicit */_Bool) arr_8 [i_11] [i_13 - 3])))))));
            var_31 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)77)) >> (((((/* implicit */int) arr_25 [i_13] [i_13 + 1])) - (128)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_25 [i_13 + 1] [i_13 - 1])) ? (((/* implicit */int) arr_25 [i_13] [i_13 - 1])) : (((/* implicit */int) arr_25 [i_13] [i_13 + 1]))))) : (max((var_1), (((/* implicit */unsigned long long int) arr_25 [i_13] [i_13 - 1]))))));
            var_32 = ((/* implicit */unsigned char) (+((-(arr_15 [i_11] [i_13 - 3])))));
        }
        arr_44 [i_11] [i_11] = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_11] [i_11])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)30324))) : (var_8)))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-103))) : (arr_8 [i_11] [i_11]))), (((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) arr_19 [i_11] [i_11])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)30324))) : (-1LL)))))));
    }
    for (unsigned long long int i_14 = 2; i_14 < 12; i_14 += 1) 
    {
        arr_48 [i_14] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_45 [(unsigned char)4] [i_14 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_45 [i_14] [i_14 + 1]))) : (var_7)))) ? ((-(((/* implicit */int) arr_45 [i_14] [i_14 - 2])))) : (((/* implicit */int) arr_45 [i_14 + 2] [i_14 + 3]))));
        arr_49 [i_14] = ((/* implicit */unsigned char) (+(((((/* implicit */unsigned long long int) 0)) ^ (var_13)))));
    }
    var_33 = ((/* implicit */unsigned short) var_5);
}
