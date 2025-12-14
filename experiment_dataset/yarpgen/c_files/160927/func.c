/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160927
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
    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) var_1))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        arr_3 [i_0 + 4] = ((/* implicit */short) ((((/* implicit */_Bool) 2500433902U)) ? (((/* implicit */int) (unsigned short)62601)) : (((/* implicit */int) (_Bool)1))));
        arr_4 [i_0 + 1] = ((/* implicit */unsigned char) ((long long int) (~(arr_1 [i_0 + 2]))));
    }
    /* vectorizable */
    for (short i_1 = 2; i_1 < 13; i_1 += 2) 
    {
        var_20 = ((/* implicit */short) ((((2097151ULL) - (((/* implicit */unsigned long long int) arr_6 [i_1])))) + (arr_5 [i_1 - 2])));
        arr_8 [i_1] = ((/* implicit */unsigned int) arr_0 [i_1 + 2]);
        arr_9 [i_1 - 1] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((var_8) * (((/* implicit */unsigned int) var_0))))) / (var_15)));
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 15; i_2 += 4) 
        {
            for (signed char i_3 = 1; i_3 < 14; i_3 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_4 = 3; i_4 < 13; i_4 += 3) /* same iter space */
                    {
                        arr_17 [i_1 + 2] [i_2] [i_3] [i_4] [i_4] = arr_7 [i_1 + 2];
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)-1)) == (((/* implicit */int) (short)32767))));
                        var_22 *= ((unsigned int) ((((/* implicit */_Bool) var_2)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-13438)))));
                        var_23 = ((/* implicit */signed char) ((((/* implicit */int) var_11)) > (((/* implicit */int) arr_14 [i_4] [i_2]))));
                    }
                    for (unsigned short i_5 = 3; i_5 < 13; i_5 += 3) /* same iter space */
                    {
                        var_24 = ((/* implicit */long long int) ((var_0) <= (((/* implicit */int) (short)14578))));
                        var_25 = ((/* implicit */int) (~((~(var_14)))));
                        /* LoopSeq 4 */
                        for (unsigned long long int i_6 = 1; i_6 < 12; i_6 += 4) 
                        {
                            var_26 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_5])) ? (((/* implicit */int) var_4)) : (arr_21 [i_6] [i_3 + 1] [i_3 - 1] [i_5 - 3] [i_6 + 3] [i_5 - 1])));
                            arr_23 [i_1] [(unsigned char)5] [i_3] [i_6] = ((/* implicit */unsigned long long int) (+(arr_20 [i_3 - 1] [i_3 + 1] [i_3 + 1])));
                            arr_24 [i_1] [i_2] [i_3] [i_6] [i_1 + 2] = ((/* implicit */unsigned long long int) ((short) 1794533394U));
                        }
                        for (short i_7 = 0; i_7 < 15; i_7 += 2) /* same iter space */
                        {
                            arr_27 [i_5 - 1] [14] = ((/* implicit */int) arr_13 [i_5 + 2] [i_5 - 2] [i_5 + 2] [i_5 - 3]);
                            arr_28 [i_1] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_1 - 2]))));
                            var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) arr_13 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1]))));
                        }
                        for (short i_8 = 0; i_8 < 15; i_8 += 2) /* same iter space */
                        {
                            var_28 *= ((/* implicit */long long int) ((((/* implicit */_Bool) 9223372036854775803LL)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (short)(-32767 - 1)))));
                            var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) (-(9223372036854775803LL))))));
                        }
                        for (short i_9 = 0; i_9 < 15; i_9 += 2) /* same iter space */
                        {
                            arr_35 [i_1 + 2] [i_5] [i_5] [i_5] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_3 + 1] [i_3 + 1] [i_1])) && (((/* implicit */_Bool) ((var_9) % (((/* implicit */long long int) ((/* implicit */int) (short)-14808))))))));
                            var_30 = ((/* implicit */unsigned int) arr_31 [i_1 + 2] [i_1 - 1]);
                            arr_36 [i_1 + 2] [i_2] [i_3] [12LL] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [(unsigned short)8] [i_5] [i_3 + 1] [i_2])) ? (((/* implicit */int) arr_25 [i_5] [i_5] [i_3 - 1] [i_1])) : (((/* implicit */int) arr_26 [i_5 + 2] [i_5 + 1] [i_3 - 1] [i_3 - 1] [i_2]))));
                        }
                    }
                    for (long long int i_10 = 2; i_10 < 14; i_10 += 1) 
                    {
                        arr_40 [i_2] [i_3 - 1] [i_10 - 1] = arr_13 [i_1] [i_3 + 1] [i_3] [i_10];
                        arr_41 [i_1 - 2] [i_1 - 2] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) ((var_15) >= (((/* implicit */long long int) var_1)))))));
                    }
                    /* LoopNest 2 */
                    for (short i_11 = 0; i_11 < 15; i_11 += 3) 
                    {
                        for (unsigned int i_12 = 1; i_12 < 14; i_12 += 1) 
                        {
                            {
                                arr_49 [i_11] [i_11] [i_11] [i_3 - 1] [i_2] [i_11] = ((/* implicit */_Bool) ((((/* implicit */int) arr_43 [i_1] [i_11] [i_1 + 1] [i_1 - 2] [i_3 + 1])) & ((~(((/* implicit */int) arr_0 [i_12]))))));
                                var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) (+(arr_20 [i_12 + 1] [i_3 + 1] [i_1 + 2]))))));
                                var_32 = ((/* implicit */unsigned short) ((-5821765123868968084LL) / (((/* implicit */long long int) -712645913))));
                            }
                        } 
                    } 
                    var_33 = ((/* implicit */short) arr_31 [i_3] [i_1]);
                }
            } 
        } 
    }
    var_34 = ((/* implicit */int) var_7);
}
