/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185804
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
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? ((-(var_4))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_9))))))) ? (((((/* implicit */_Bool) ((short) -432954378))) ? (((/* implicit */int) var_12)) : (((((/* implicit */_Bool) var_12)) ? (-731325339) : (((/* implicit */int) var_7)))))) : (((((((/* implicit */_Bool) -4112101468279744481LL)) ? (1619675904) : (((/* implicit */int) (_Bool)1)))) + ((+(var_11)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */int) max((((long long int) min((((/* implicit */long long int) var_16)), ((-9223372036854775807LL - 1LL))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_1])) ? (((/* implicit */int) arr_0 [i_1])) : (var_1)))) ? (((/* implicit */long long int) arr_1 [(short)4])) : (((((/* implicit */_Bool) var_11)) ? (var_10) : (((/* implicit */long long int) arr_2 [9] [10ULL] [9]))))))));
                /* LoopSeq 3 */
                for (signed char i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    var_18 = arr_3 [i_0] [i_2];
                    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) max((arr_2 [i_0] [i_0] [i_2]), (var_13))))));
                }
                for (short i_3 = 0; i_3 < 15; i_3 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 2) 
                    {
                        for (unsigned short i_5 = 1; i_5 < 12; i_5 += 2) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) ((min((((((/* implicit */_Bool) arr_5 [i_4])) ? (-4112101468279744458LL) : (((/* implicit */long long int) 479231332)))), (((/* implicit */long long int) var_13)))) + (var_3)));
                                var_20 = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((((/* implicit */_Bool) 1619675904)) ? (((/* implicit */int) arr_9 [i_5] [i_0] [i_1] [i_0])) : (arr_1 [i_5]))) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]))))) <= (min((((/* implicit */unsigned int) min((((/* implicit */int) arr_7 [i_4])), (64)))), (min((0U), (((/* implicit */unsigned int) (signed char)96))))))));
                                var_21 = ((/* implicit */signed char) max((((unsigned int) arr_13 [i_5 + 2] [i_5 + 1] [i_5 - 1] [i_4] [i_1])), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_13 [14] [i_5 + 1] [i_5] [i_5] [i_5])))))));
                            }
                        } 
                    } 
                    arr_15 [i_3] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) var_3);
                    /* LoopNest 2 */
                    for (short i_6 = 3; i_6 < 14; i_6 += 3) 
                    {
                        for (int i_7 = 0; i_7 < 15; i_7 += 2) 
                        {
                            {
                                arr_20 [5] [i_1] [i_3] [5] = max((((/* implicit */long long int) arr_8 [i_0])), (((((/* implicit */_Bool) arr_12 [i_6 + 1] [i_6 - 1])) ? (min((((/* implicit */long long int) (unsigned short)38516)), (var_10))) : (((/* implicit */long long int) ((/* implicit */int) var_15))))));
                                var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_6]))) - ((-(-4112101468279744465LL))))))));
                                arr_21 [i_1] [i_3] [i_1] [(_Bool)0] = ((/* implicit */unsigned char) min((((unsigned long long int) min((((/* implicit */long long int) arr_3 [i_6] [i_3])), (-4112101468279744448LL)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)38516)) ? (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)32767)))) : ((+(((/* implicit */int) (unsigned short)38503)))))))));
                            }
                        } 
                    } 
                    arr_22 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((max((479231308), (arr_6 [i_3]))) != (((/* implicit */int) arr_7 [i_3])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0]))))) : (((/* implicit */int) ((((/* implicit */int) min((arr_5 [i_3]), (((/* implicit */signed char) var_8))))) > (((((((/* implicit */int) (signed char)-97)) + (2147483647))) << (((((/* implicit */int) arr_12 [i_1] [i_0])) - (62))))))))));
                }
                for (short i_8 = 1; i_8 < 11; i_8 += 2) 
                {
                    var_23 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (~(var_9)))), (var_4)));
                    /* LoopSeq 4 */
                    for (long long int i_9 = 2; i_9 < 14; i_9 += 3) 
                    {
                        var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) (+(((/* implicit */int) (short)-15810)))))));
                        arr_27 [i_0] [i_0] [i_0] [i_9 - 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_15), (var_15)))) ? (((((/* implicit */int) arr_24 [i_0] [i_1] [5LL] [i_9])) ^ (((/* implicit */int) var_8)))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_8))))))) ? (var_11) : (((((/* implicit */_Bool) ((var_16) ? (var_13) : (((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (arr_17 [i_0] [i_1] [i_8 + 1] [i_9]) : (((/* implicit */int) var_8)))) : ((+(((/* implicit */int) (unsigned short)53315))))))));
                        var_25 = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_13 [i_9] [i_1] [i_8 + 2] [i_9 + 1] [i_9 - 2])) : (((/* implicit */int) arr_13 [i_0] [14] [i_8 + 2] [i_9] [i_9 - 2])))));
                    }
                    for (unsigned short i_10 = 0; i_10 < 15; i_10 += 3) 
                    {
                        var_26 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) arr_18 [i_8] [i_8] [i_8 + 3] [i_8 + 2] [i_0]))))));
                        var_27 = var_7;
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((signed char) (unsigned short)31065))) ? (4294967291U) : (((/* implicit */unsigned int) (~(arr_19 [i_0] [i_0] [(_Bool)1])))))))))));
                        arr_34 [i_0] [i_11] = ((/* implicit */long long int) (+((~(3703847504U)))));
                    }
                    for (long long int i_12 = 2; i_12 < 14; i_12 += 3) 
                    {
                        var_29 = ((/* implicit */unsigned long long int) (_Bool)1);
                        var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)76)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (591119768U)));
                        var_31 = (signed char)-14;
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_13 = 0; i_13 < 15; i_13 += 3) 
                    {
                        for (signed char i_14 = 3; i_14 < 14; i_14 += 1) 
                        {
                            {
                                var_32 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)31)))))))) ? (((/* implicit */unsigned long long int) ((arr_38 [i_14] [i_14 + 1] [i_14] [i_14 - 3] [i_14]) + (((/* implicit */unsigned int) ((/* implicit */int) (short)-15184)))))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) + (var_4)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_11) >= (var_9))))) : (arr_18 [i_0] [i_1] [i_8] [i_13] [i_14 - 3])))));
                                var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_36 [i_0] [(unsigned short)0] [i_8 + 1] [i_14 - 2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_0] [i_0] [5ULL] [i_0]))) : (((((1125882726973440ULL) << (((2951091955U) - (2951091944U))))) & (((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) | (var_9))))))));
                            }
                        } 
                    } 
                    arr_43 [i_0] [i_0] [i_0] |= ((int) max((((/* implicit */unsigned long long int) -823917423)), (max((var_4), (arr_28 [i_0] [i_0] [i_0])))));
                }
            }
        } 
    } 
}
