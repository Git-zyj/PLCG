/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179792
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
    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) var_4))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 3; i_0 < 11; i_0 += 2) /* same iter space */
    {
        var_17 *= ((/* implicit */unsigned int) ((var_12) | (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (arr_0 [i_0]) : (arr_0 [i_0]))))));
        arr_2 [i_0] = ((/* implicit */unsigned int) var_14);
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (int i_2 = 3; i_2 < 14; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_3 = 3; i_3 < 14; i_3 += 1) 
                    {
                        arr_11 [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) var_2))));
                        var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0 + 3] [i_2 - 2]))));
                        arr_12 [i_0] [i_0 - 2] [i_1] [i_0] [i_3] = ((int) (!(((/* implicit */_Bool) (short)-23649))));
                        arr_13 [i_3 - 1] [i_1] [i_2] [i_3 - 2] [i_2] [10] |= ((/* implicit */unsigned short) (+(var_8)));
                        arr_14 [i_3] [i_3] [i_0] = ((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_2 - 1] [i_3] [i_0]);
                    }
                    for (unsigned short i_4 = 0; i_4 < 15; i_4 += 4) 
                    {
                        arr_17 [i_0] [i_0] = ((/* implicit */unsigned char) var_15);
                        arr_18 [i_0] [i_1] [i_2 - 2] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((unsigned short) arr_10 [i_0] [i_0 - 3] [i_2 - 1] [i_2 - 3] [i_2 + 1] [i_0]));
                        /* LoopSeq 1 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_19 &= ((/* implicit */short) (!(((/* implicit */_Bool) arr_15 [i_0] [i_0] [7ULL] [i_0 + 4] [i_0 - 2]))));
                            arr_22 [i_1] [i_2] [i_4] [i_5] |= ((/* implicit */unsigned long long int) arr_4 [i_2 - 1] [i_4] [i_2]);
                            arr_23 [i_5] [i_0] [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) arr_6 [i_0] [i_1]);
                        }
                        var_20 ^= (+(arr_10 [i_2 - 2] [i_1] [i_1] [i_4] [i_1] [i_4]));
                    }
                    var_21 = ((/* implicit */unsigned long long int) arr_0 [i_2]);
                }
            } 
        } 
        arr_24 [i_0] = ((/* implicit */_Bool) ((unsigned int) arr_9 [i_0 + 3] [i_0] [i_0] [i_0 + 1] [i_0 + 4] [i_0 - 3]));
    }
    for (unsigned long long int i_6 = 3; i_6 < 11; i_6 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (signed char i_7 = 2; i_7 < 12; i_7 += 2) 
        {
            arr_29 [i_6] [i_7 + 1] [i_7] = arr_27 [i_6] [i_7];
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_8 = 1; i_8 < 14; i_8 += 1) 
            {
                arr_32 [i_6] [i_6] [i_7] [i_8 - 1] = ((/* implicit */unsigned long long int) arr_28 [i_6 - 2] [i_7 + 1] [i_8 + 1]);
                arr_33 [i_8 - 1] = ((/* implicit */unsigned long long int) var_4);
                var_22 = ((/* implicit */signed char) arr_9 [i_6] [i_6] [i_6 + 2] [i_8 + 1] [i_8 - 1] [i_8 + 1]);
            }
            var_23 |= ((/* implicit */unsigned long long int) (~(min((((/* implicit */int) arr_7 [i_7 + 2] [i_7] [i_7] [i_6 - 3] [i_7] [i_6])), (((((/* implicit */int) arr_26 [i_6 - 1])) >> (((arr_8 [i_6] [i_7]) - (3088145062909122438LL)))))))));
        }
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            arr_37 [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_0 [i_6 + 3])) + (min((arr_16 [i_6]), (((/* implicit */unsigned int) var_10))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : ((-(18446744073709551615ULL)))));
            var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) min((min(((+(arr_15 [i_6] [i_6 - 2] [i_9] [i_9] [i_9]))), (var_6))), (min((((/* implicit */int) arr_34 [i_6] [i_6] [i_9])), ((+(arr_36 [i_6] [i_9]))))))))));
        }
        /* LoopNest 3 */
        for (short i_10 = 0; i_10 < 15; i_10 += 1) 
        {
            for (signed char i_11 = 0; i_11 < 15; i_11 += 1) 
            {
                for (unsigned long long int i_12 = 0; i_12 < 15; i_12 += 1) 
                {
                    {
                        arr_45 [i_6] [i_11] = ((/* implicit */short) (~(((/* implicit */int) arr_28 [(unsigned char)6] [i_10] [i_6]))));
                        var_25 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((arr_41 [i_6 + 1] [i_6 + 2] [i_6 + 1]) <= (((/* implicit */unsigned long long int) arr_35 [i_6 + 1] [i_6 + 2]))))), (min((((/* implicit */unsigned long long int) arr_0 [i_6 + 1])), (arr_41 [i_6 + 1] [i_6 + 2] [i_6])))));
                        /* LoopSeq 3 */
                        for (unsigned char i_13 = 0; i_13 < 15; i_13 += 4) 
                        {
                            arr_49 [i_6] [9ULL] [i_6 + 3] [i_6 + 3] [i_6] [i_6] [i_6] = ((/* implicit */int) ((((/* implicit */long long int) min((((((/* implicit */_Bool) arr_43 [i_6])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_14)))), (((/* implicit */int) ((_Bool) arr_16 [i_13])))))) * (arr_8 [i_6] [i_6])));
                            arr_50 [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_12] [i_6 + 1] [i_13] [(unsigned char)4] = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) 3838000300U)) + (((4954314112901091671ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_10] [i_10] [i_11]))))))) << ((((+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) arr_27 [i_12] [i_11])) : (var_8))))) - (18446744071659974820ULL)))));
                        }
                        for (unsigned short i_14 = 0; i_14 < 15; i_14 += 4) 
                        {
                            arr_53 [i_12] [i_10] [i_12] [i_12] [i_14] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((arr_3 [i_14] [i_10]) + (((/* implicit */long long int) arr_27 [i_6] [i_6]))))) & (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) | (arr_39 [i_6 + 4])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_1)))) : (((long long int) (+(((/* implicit */int) arr_34 [(signed char)4] [(signed char)4] [i_11])))))));
                            arr_54 [(unsigned char)5] |= ((((/* implicit */_Bool) (~(-3226788414987225825LL)))) ? (arr_39 [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)56923))));
                        }
                        /* vectorizable */
                        for (int i_15 = 0; i_15 < 15; i_15 += 4) 
                        {
                            var_26 *= ((/* implicit */short) ((3899694927U) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)74)))));
                            arr_58 [i_11] [i_11] = ((/* implicit */unsigned int) (~(((arr_56 [i_6] [i_10] [i_10] [5ULL] [i_15]) / (((/* implicit */int) arr_55 [i_11] [i_10] [(signed char)2] [i_11] [(short)14] [i_15]))))));
                            arr_59 [i_15] [i_12] [i_11] [10U] [10U] = ((/* implicit */unsigned long long int) ((((unsigned long long int) arr_47 [i_6] [i_10] [i_6] [i_6] [(unsigned char)12] [i_15])) == (((/* implicit */unsigned long long int) ((int) (short)8892)))));
                            var_27 = ((/* implicit */int) var_14);
                        }
                    }
                } 
            } 
        } 
        arr_60 [i_6 - 2] = ((/* implicit */_Bool) arr_7 [i_6] [i_6 - 1] [i_6] [i_6] [i_6 - 1] [i_6]);
    }
    /* vectorizable */
    for (short i_16 = 0; i_16 < 17; i_16 += 4) 
    {
        var_28 ^= ((/* implicit */unsigned short) arr_61 [i_16]);
        var_29 = ((/* implicit */unsigned short) max((var_29), (arr_62 [i_16])));
    }
    var_30 = ((/* implicit */_Bool) (-(((unsigned long long int) (~(var_6))))));
    var_31 = ((/* implicit */_Bool) (+(((/* implicit */int) var_2))));
}
