/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182028
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
    var_20 ^= ((/* implicit */long long int) ((signed char) (~(((unsigned int) var_1)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */int) arr_1 [i_1])) <= (((/* implicit */int) min((arr_1 [i_1]), (arr_1 [i_1]))))));
                var_21 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)16383))) <= (0ULL)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 12; i_2 += 2) 
    {
        for (unsigned long long int i_3 = 4; i_3 < 14; i_3 += 2) 
        {
            {
                var_22 = ((/* implicit */unsigned short) ((_Bool) var_19));
                arr_10 [i_2] [i_3] [i_3] |= ((/* implicit */short) ((unsigned int) ((int) arr_1 [(unsigned short)17])));
                /* LoopSeq 2 */
                for (unsigned char i_4 = 0; i_4 < 15; i_4 += 2) 
                {
                    arr_13 [i_2 + 2] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) arr_4 [i_2 - 1] [i_2 - 1])), (min((((((/* implicit */_Bool) 18446744073709551614ULL)) ? (18446744073709551600ULL) : (((/* implicit */unsigned long long int) arr_4 [i_2] [13])))), (((/* implicit */unsigned long long int) min((((/* implicit */short) (_Bool)0)), ((short)-1))))))));
                    arr_14 [(unsigned short)1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_2 + 3] [i_3 - 3])) ? (1ULL) : (((/* implicit */unsigned long long int) 573334243))))) ? (((/* implicit */int) arr_8 [i_2 + 1] [i_3] [i_3 - 2])) : (((((/* implicit */_Bool) arr_9 [i_2 + 2] [i_3 + 1])) ? (((/* implicit */int) arr_12 [i_2 + 1])) : (((/* implicit */int) (unsigned short)65535))))));
                    arr_15 [i_2] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) (short)-19)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)95)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */signed char) ((var_6) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-9)))))), (min((arr_2 [i_4]), (((/* implicit */signed char) var_4)))))))) : (18446744073709551591ULL)));
                    arr_16 [i_3] &= ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((unsigned char) (unsigned short)16720))), (min((max((var_8), (((/* implicit */unsigned int) arr_11 [i_2] [i_3] [i_3] [i_4])))), (((/* implicit */unsigned int) ((((/* implicit */int) var_9)) >> (((arr_6 [i_2]) - (12271650765277002080ULL))))))))));
                }
                for (short i_5 = 0; i_5 < 15; i_5 += 2) 
                {
                    arr_20 [i_2] [i_2] [i_3] [(unsigned short)10] = ((/* implicit */long long int) var_16);
                    /* LoopSeq 3 */
                    for (signed char i_6 = 1; i_6 < 13; i_6 += 2) 
                    {
                        var_23 = ((/* implicit */int) ((var_11) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
                        arr_25 [i_2 + 1] [i_3] [i_5] = ((/* implicit */unsigned char) var_13);
                        var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) (+(((((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_5])) * (((/* implicit */int) arr_21 [i_2] [(short)7] [i_2] [i_2]))))) ? (min((((/* implicit */unsigned long long int) arr_7 [i_2])), (11ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-44))))))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_8 = 0; i_8 < 15; i_8 += 2) 
                        {
                            var_25 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_28 [i_2] [i_3 + 1] [i_3] [i_5])) ? (((/* implicit */int) arr_28 [i_2] [i_3 - 2] [i_8] [i_8])) : (((/* implicit */int) (unsigned short)20929))));
                            var_26 = ((/* implicit */signed char) -6955535040147045234LL);
                            var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)20913)) ? (((/* implicit */unsigned int) 130624361)) : (arr_19 [i_2] [i_2] [i_2])))) ? (((/* implicit */int) (short)-30453)) : (((/* implicit */int) (short)-17360))));
                            var_28 = ((/* implicit */int) var_9);
                        }
                        for (long long int i_9 = 0; i_9 < 15; i_9 += 2) 
                        {
                            var_29 = ((/* implicit */unsigned char) ((_Bool) (+(18446744073709551615ULL))));
                            arr_36 [i_2] [i_2] [i_3] [i_5] [i_5] [i_7] [i_9] = ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned char)241)) <= (((/* implicit */int) var_4)))) ? (arr_22 [i_3 - 1] [8] [i_7] [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_23 [i_9] [i_3] [i_2]))))));
                        }
                        var_30 = ((/* implicit */int) min((var_30), (arr_18 [i_2 - 1] [i_3] [i_5])));
                        arr_37 [i_7] = ((/* implicit */unsigned int) arr_35 [i_2 + 1] [i_3] [i_3] [i_3] [i_3] [i_5] [i_7]);
                        /* LoopSeq 3 */
                        for (unsigned long long int i_10 = 0; i_10 < 15; i_10 += 1) 
                        {
                            var_31 = ((/* implicit */short) var_5);
                            arr_40 [i_2] [i_3] [i_10] [i_5] [i_7] [i_7] [i_10] = ((/* implicit */int) var_2);
                            arr_41 [i_2] [i_10] [i_5] [i_2] [i_10] [i_3 - 2] = ((/* implicit */long long int) var_1);
                        }
                        for (long long int i_11 = 0; i_11 < 15; i_11 += 2) 
                        {
                            arr_45 [12ULL] [(unsigned short)2] [i_7] [i_5] [i_3] [i_2] = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */int) arr_35 [i_2] [i_2] [i_3] [i_5] [i_7] [i_11] [i_11])) : (((/* implicit */int) var_19))))) - (var_14)));
                            var_32 *= ((/* implicit */unsigned char) arr_18 [i_2 + 3] [i_3 - 1] [i_3 + 1]);
                            arr_46 [i_11] [i_7] [i_5] [i_3 + 1] [i_2] &= ((/* implicit */unsigned int) arr_9 [i_2 + 1] [i_3 - 3]);
                        }
                        for (short i_12 = 0; i_12 < 15; i_12 += 2) 
                        {
                            var_33 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) arr_39 [i_2] [i_3] [i_5] [i_7])))) ? (((/* implicit */int) ((unsigned char) arr_6 [i_2 + 2]))) : (((((/* implicit */int) var_0)) << (((((/* implicit */int) arr_27 [i_2] [i_3 - 1] [i_5] [i_12])) - (25676)))))));
                            var_34 = ((/* implicit */long long int) min((var_34), (arr_31 [i_2] [i_2] [i_2] [i_2] [(_Bool)1])));
                            arr_49 [i_2] [i_3] [i_5] [i_7] [i_12] [i_12] = ((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? ((~(((/* implicit */int) (short)8191)))) : (((/* implicit */int) (signed char)-3)));
                        }
                    }
                    /* vectorizable */
                    for (int i_13 = 0; i_13 < 15; i_13 += 2) 
                    {
                        arr_52 [i_2] [i_3 - 1] [i_3] [i_5] [i_13] = ((((/* implicit */int) arr_35 [i_3 - 2] [i_3] [i_5] [i_13] [i_13] [i_13] [i_13])) / (((/* implicit */int) arr_32 [i_3 - 2] [(unsigned char)1] [i_5] [i_5] [(signed char)8] [i_13] [i_13])));
                        arr_53 [(_Bool)1] [i_3] [i_5] [i_13] = ((/* implicit */int) arr_4 [i_2] [i_2 + 3]);
                        arr_54 [i_2] [0LL] [i_2] = ((/* implicit */long long int) var_18);
                    }
                    var_35 = ((/* implicit */signed char) max(((+(((/* implicit */int) (unsigned short)44616)))), (((/* implicit */int) max(((unsigned short)44628), (arr_29 [i_3 + 1]))))));
                    /* LoopNest 2 */
                    for (unsigned int i_14 = 0; i_14 < 15; i_14 += 1) 
                    {
                        for (short i_15 = 0; i_15 < 15; i_15 += 1) 
                        {
                            {
                                var_36 = ((/* implicit */signed char) arr_43 [i_2] [i_3] [i_5] [i_15] [i_15] [i_14] [i_14]);
                                var_37 = ((/* implicit */long long int) (unsigned short)48808);
                            }
                        } 
                    } 
                }
                var_38 *= ((/* implicit */_Bool) arr_47 [i_2] [i_2 + 2] [i_2] [i_2] [5U]);
                arr_59 [i_2] [i_3] = ((/* implicit */unsigned int) var_17);
            }
        } 
    } 
    var_39 = ((/* implicit */signed char) min((var_39), (((/* implicit */signed char) (~(((/* implicit */int) var_0)))))));
    var_40 = ((/* implicit */short) var_3);
}
