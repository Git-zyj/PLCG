/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115978
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
    var_11 = ((/* implicit */unsigned char) var_3);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (long long int i_2 = 1; i_2 < 11; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_3 = 1; i_3 < 13; i_3 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            arr_13 [i_0] [i_1] [i_2] [i_2] [i_2 + 3] = ((/* implicit */unsigned char) var_5);
                            arr_14 [i_0] [i_2] [i_2] = ((/* implicit */unsigned int) ((int) arr_0 [i_3 + 1] [i_4]));
                            arr_15 [7] [i_2] [2U] [i_2 + 4] [i_2] [i_2 - 1] [i_2] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_9 [(short)0] [i_4] [i_4] [i_3 + 2] [i_3] [i_2 - 1]))));
                        }
                        arr_16 [i_2] = ((/* implicit */unsigned char) (+((-(2504895154U)))));
                        arr_17 [i_2] [i_1] [i_1] [i_2 + 2] [i_3 + 2] [i_3] = ((/* implicit */unsigned int) arr_4 [i_0] [i_1]);
                    }
                    for (unsigned char i_5 = 0; i_5 < 15; i_5 += 3) 
                    {
                        arr_20 [i_5] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) arr_19 [i_0] [i_1] [i_2] [i_5] [i_5] [i_0])) << (((((/* implicit */int) var_2)) - (174)))));
                        arr_21 [i_2] = ((/* implicit */unsigned int) max((((((/* implicit */long long int) ((((/* implicit */int) (short)-10085)) + (262800843)))) / (((long long int) arr_9 [i_0] [i_0] [i_0] [7] [i_1] [i_2 + 1])))), (((/* implicit */long long int) ((max((((/* implicit */unsigned int) (short)-11559)), (var_8))) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_2] [i_2 + 1] [i_2] [i_2 + 1] [i_2] [i_2 + 3]))))))));
                        /* LoopSeq 1 */
                        for (long long int i_6 = 2; i_6 < 14; i_6 += 4) 
                        {
                            arr_25 [i_2] [i_1] [i_5] [i_2] [i_1] [i_1] [i_2] = arr_10 [i_2 - 1] [i_2];
                            arr_26 [i_0] [i_2] [i_5] [i_6 + 1] = ((/* implicit */short) var_8);
                            arr_27 [i_0] [i_1] [i_2 - 1] [i_2] [i_5] [i_2] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_2] [i_0] [i_2] [i_0])) && (((/* implicit */_Bool) 2212572110U))))), ((+(2082395179U)))))) : (arr_4 [i_0] [i_0])));
                            arr_28 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_3 [i_2 + 2] [i_2 - 1])))) ? (((arr_10 [i_2 + 2] [i_2]) ? (((/* implicit */int) arr_10 [i_0] [i_2])) : (((/* implicit */int) arr_10 [i_0] [i_2])))) : (((/* implicit */int) ((_Bool) arr_11 [(short)6] [i_1] [i_0] [i_2] [i_6])))));
                        }
                        arr_29 [i_0] [(unsigned char)2] [i_2] [i_5] [i_1] |= ((/* implicit */_Bool) max((2082395169U), (((/* implicit */unsigned int) (signed char)101))));
                    }
                    arr_30 [i_2] [i_1] = var_2;
                    /* LoopNest 2 */
                    for (signed char i_7 = 2; i_7 < 14; i_7 += 3) 
                    {
                        for (short i_8 = 2; i_8 < 12; i_8 += 3) 
                        {
                            {
                                arr_37 [3U] [2LL] [i_2] = ((/* implicit */long long int) arr_32 [i_0] [i_0]);
                                arr_38 [i_0] [i_2] [i_2] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_36 [i_2 - 1] [i_2] [i_2] [i_2 + 1] [i_0])) || (((/* implicit */_Bool) arr_36 [11] [i_8] [i_2] [i_2 + 3] [(_Bool)1])))), (((_Bool) arr_12 [i_0] [i_1] [i_2] [i_7 - 1]))));
                                arr_39 [i_1] [i_1] [4LL] [i_7] [i_1] |= ((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [i_0] [14U] [i_1] [i_7] [i_0] [i_2 - 1])) ? (((/* implicit */int) arr_19 [i_0] [i_0] [i_1] [i_7 + 1] [i_8] [i_1])) : (((/* implicit */int) arr_19 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0]))))), (((((/* implicit */_Bool) arr_19 [i_0] [i_1] [i_1] [i_2] [10LL] [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_2] [4] [i_1] [i_7 - 2] [i_8] [8U]))) : (2082395169U)))));
                                arr_40 [i_0] [i_1] [i_2 + 1] [i_2] [i_8 + 1] = ((/* implicit */long long int) ((((((/* implicit */int) arr_7 [i_0])) - (((/* implicit */int) arr_7 [i_0])))) <= (((/* implicit */int) ((_Bool) ((((-3923683611665829466LL) + (9223372036854775807LL))) << (((2082395169U) - (2082395169U)))))))));
                                arr_41 [10LL] [i_2] [i_7] = ((/* implicit */short) max((((/* implicit */long long int) max((((/* implicit */unsigned char) arr_10 [i_7 - 2] [i_2])), (var_2)))), (max((((/* implicit */long long int) arr_35 [i_2] [i_2] [i_2 - 1] [i_7])), (((long long int) arr_34 [i_2]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
