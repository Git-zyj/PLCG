/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179329
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_15 = ((/* implicit */long long int) arr_0 [i_0]);
        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) && (((/* implicit */_Bool) (short)8191)))))));
        var_17 = ((/* implicit */unsigned short) (-(arr_0 [i_0])));
        var_18 = arr_2 [i_0];
        var_19 |= ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) arr_0 [i_0]))))));
    }
    /* vectorizable */
    for (signed char i_1 = 1; i_1 < 11; i_1 += 2) 
    {
        var_20 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)31899)) ? (arr_2 [i_1 - 1]) : (arr_2 [i_1 - 1])));
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 12; i_2 += 4) 
        {
            for (long long int i_3 = 1; i_3 < 8; i_3 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (int i_4 = 0; i_4 < 12; i_4 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_5 = 0; i_5 < 12; i_5 += 4) 
                        {
                            arr_16 [i_1 - 1] [i_2] [i_3] [(short)0] [i_5] &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_1 - 1] [i_3 - 1])) ? (((/* implicit */int) arr_9 [i_1] [i_1] [i_1 + 1])) : ((+(arr_11 [i_3] [i_5])))));
                            var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_1] [i_1] [i_1 - 1])) ? (((/* implicit */int) arr_14 [(signed char)11] [i_1] [i_1 + 1])) : (((/* implicit */int) arr_14 [i_1] [1U] [i_1 - 1]))));
                            var_22 = ((/* implicit */long long int) var_11);
                        }
                        var_23 |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_4])) ? (((/* implicit */int) arr_9 [i_1] [i_2] [i_3])) : (((/* implicit */int) var_0))))) ? (arr_7 [i_1] [(signed char)7]) : (arr_11 [i_3] [i_1])));
                    }
                    for (short i_6 = 4; i_6 < 8; i_6 += 4) 
                    {
                        /* LoopSeq 4 */
                        for (long long int i_7 = 0; i_7 < 12; i_7 += 2) 
                        {
                            var_24 = ((/* implicit */short) arr_3 [i_1 - 1] [i_3 - 1]);
                            arr_21 [i_1] [6LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_14)) ? (arr_5 [i_1]) : (((/* implicit */unsigned int) arr_13 [i_1 - 1] [i_2] [i_3 + 3]))));
                            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -202301811778323337LL)) ? (4799303614440801640LL) : (((/* implicit */long long int) 268304384U))));
                            arr_22 [i_1] [11LL] [11LL] [i_1] [i_1 + 1] [i_1] [(unsigned short)6] = ((/* implicit */unsigned long long int) arr_8 [i_3]);
                        }
                        for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 4) 
                        {
                            var_26 ^= ((/* implicit */_Bool) (~(arr_4 [i_6 + 4] [i_2])));
                            var_27 &= ((/* implicit */long long int) var_5);
                            var_28 = ((/* implicit */unsigned int) arr_25 [i_1] [i_2] [i_3] [i_6 - 1] [i_8]);
                        }
                        for (int i_9 = 0; i_9 < 12; i_9 += 3) 
                        {
                            var_29 = ((/* implicit */int) arr_15 [i_3 + 3] [i_6 - 4] [i_9] [i_9]);
                            var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 4799303614440801640LL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                            var_31 &= ((/* implicit */_Bool) var_14);
                            var_32 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_26 [i_1] [i_2] [i_3 + 2] [i_6 - 4])) : (((/* implicit */int) arr_6 [i_1 - 1]))))));
                        }
                        for (int i_10 = 3; i_10 < 11; i_10 += 4) 
                        {
                            var_33 &= ((/* implicit */long long int) (+(((/* implicit */int) arr_6 [i_1 + 1]))));
                            var_34 &= ((/* implicit */int) ((((/* implicit */_Bool) (short)-8201)) ? (2130706432U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)243)))));
                        }
                        var_35 = ((/* implicit */short) ((arr_19 [i_1]) != (arr_19 [i_3 - 1])));
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        arr_37 [i_1] [i_2] [(unsigned char)0] [i_2] [i_11] = ((/* implicit */unsigned char) (+(((/* implicit */int) (short)8191))));
                        /* LoopSeq 1 */
                        for (unsigned int i_12 = 0; i_12 < 12; i_12 += 4) 
                        {
                            var_36 |= (+(((/* implicit */int) var_6)));
                            var_37 |= ((/* implicit */unsigned int) (+(((/* implicit */int) arr_10 [i_1 - 1] [i_1 + 1] [i_1 - 1]))));
                            var_38 = ((/* implicit */unsigned int) var_9);
                            var_39 |= ((/* implicit */short) arr_8 [i_1 + 1]);
                            arr_40 [i_1] [i_2] [i_3 + 1] [i_11] [i_12] [i_11] [i_12] = ((/* implicit */unsigned char) var_3);
                        }
                    }
                    var_40 = ((/* implicit */int) var_1);
                    arr_41 [i_1] [(short)2] [i_3] = ((/* implicit */short) ((arr_23 [i_1] [i_1] [i_3 - 1] [i_3] [i_3 + 4] [i_3] [i_3]) != (arr_23 [i_1] [i_1] [i_1] [i_3] [i_3 - 1] [i_3] [0U])));
                    arr_42 [(unsigned char)11] [(short)9] [i_3] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_4))));
                }
            } 
        } 
    }
    var_41 ^= ((/* implicit */int) max((var_9), (var_6)));
}
