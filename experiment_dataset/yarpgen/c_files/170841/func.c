/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170841
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                arr_15 [i_1] [i_1] [i_2] [i_3] [5LL] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_12)) : (var_15)))) : (min((var_9), (var_9)))))) ? (var_1) : (((int) var_0))));
                                arr_16 [i_0] [i_1] [i_1] [i_1] [i_4] = ((/* implicit */_Bool) max((((/* implicit */int) var_4)), (max((((/* implicit */int) var_7)), (var_1)))));
                                var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */int) var_2)) * (((/* implicit */int) var_2))))) ? (max((((/* implicit */unsigned long long int) var_14)), (var_9))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) ((unsigned char) var_13))), (var_6))))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_5 = 0; i_5 < 17; i_5 += 3) 
                    {
                        var_17 -= ((/* implicit */unsigned char) var_6);
                        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) / (((/* implicit */int) var_0)))))));
                        arr_19 [i_5] [i_0] [9ULL] [i_2] [(unsigned char)1] [i_0] = var_4;
                        /* LoopSeq 2 */
                        for (long long int i_6 = 0; i_6 < 17; i_6 += 3) 
                        {
                            var_19 = ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_0)))) : (var_13));
                            arr_22 [i_0] [i_1] [i_0] [i_1] [(unsigned char)12] |= ((((/* implicit */_Bool) ((var_1) + (((/* implicit */int) var_6))))) ? (((var_3) / (((/* implicit */long long int) ((/* implicit */int) var_0))))) : (((((/* implicit */long long int) var_14)) + (var_3))));
                        }
                        for (short i_7 = 2; i_7 < 16; i_7 += 3) 
                        {
                            arr_25 [i_7 + 1] [i_5] [i_5] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_12)) + (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) var_1)) : (var_9)));
                            arr_26 [i_0] [i_1] [i_5] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (var_13) : (((/* implicit */unsigned int) var_15))));
                        }
                    }
                    for (unsigned short i_8 = 2; i_8 < 15; i_8 += 3) 
                    {
                        var_20 += ((/* implicit */unsigned int) ((((((((/* implicit */int) var_2)) ^ (((/* implicit */int) var_4)))) >= (((/* implicit */int) var_12)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_12))));
                        /* LoopSeq 4 */
                        for (short i_9 = 0; i_9 < 17; i_9 += 3) 
                        {
                            var_21 += ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) < (((long long int) var_10))))), (((var_3) & (((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_3)))))));
                            var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) var_11))));
                        }
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            var_23 |= ((/* implicit */unsigned int) ((_Bool) max((((/* implicit */unsigned long long int) var_5)), (var_9))));
                            var_24 = ((/* implicit */long long int) var_7);
                        }
                        for (short i_11 = 0; i_11 < 17; i_11 += 3) 
                        {
                            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (var_3) : (var_3)))) + (var_9)))) ? (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) var_15)) : (var_13))))) : (((/* implicit */int) max((min((((/* implicit */unsigned short) var_4)), (var_6))), (((/* implicit */unsigned short) ((((/* implicit */int) var_4)) < (var_1)))))))));
                            arr_36 [i_1] [i_2] [i_8 + 1] = ((/* implicit */unsigned char) ((long long int) ((_Bool) var_3)));
                            arr_37 [(short)11] [i_8 + 1] [i_2] [i_1] [i_1] [(short)3] [i_0] = max((((((/* implicit */_Bool) var_4)) ? (var_9) : (((/* implicit */unsigned long long int) var_3)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_13)))));
                        }
                        for (short i_12 = 0; i_12 < 17; i_12 += 3) 
                        {
                            var_26 -= ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((var_14) - (((/* implicit */int) var_6))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_0)))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_2))))));
                            var_27 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0)))));
                            arr_42 [i_0] [5LL] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */short) max((min((((/* implicit */unsigned short) var_12)), (var_6))), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_8)))))));
                        }
                        arr_43 [i_0] [i_1] [i_2] [i_8 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((max((var_3), (((/* implicit */long long int) var_14)))) ^ (((/* implicit */long long int) var_15))))) ? (((((/* implicit */_Bool) min((var_13), (((/* implicit */unsigned int) var_8))))) ? (((((/* implicit */int) var_0)) * (((/* implicit */int) var_4)))) : (var_11))) : (max((((/* implicit */int) var_2)), (var_1)))));
                        arr_44 [i_8] [i_1] [i_1] [i_1] [i_8] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) var_8)) : (var_3)))) ? (((unsigned long long int) var_8)) : (((/* implicit */unsigned long long int) max((var_1), (((/* implicit */int) var_0)))))));
                    }
                    var_28 = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (min((var_14), (var_8)))))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_9))));
                    var_29 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_15) : (((/* implicit */int) var_7))))) ? (((((/* implicit */int) var_4)) ^ (((/* implicit */int) var_7)))) : (((/* implicit */int) var_4))))), (((((/* implicit */_Bool) var_11)) ? (var_9) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) var_15)) : (var_13))))))));
                    var_30 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((short) var_15))), (min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_10))), (((/* implicit */long long int) ((var_14) | (var_15))))))));
                }
            } 
        } 
    } 
    var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) min((var_11), (var_8))))) ? (((/* implicit */long long int) var_8)) : (min((min((((/* implicit */long long int) var_13)), (var_3))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_10)))))));
    var_32 = ((/* implicit */_Bool) min((var_13), (((/* implicit */unsigned int) var_11))));
    var_33 = ((/* implicit */signed char) var_0);
    var_34 -= ((/* implicit */long long int) var_15);
}
