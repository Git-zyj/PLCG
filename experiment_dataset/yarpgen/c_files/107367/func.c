/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107367
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    var_13 &= ((/* implicit */int) ((unsigned long long int) (+(arr_0 [(unsigned short)24]))));
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) arr_4 [i_1] [i_1] [i_3] [i_3]))) ? ((-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) == (arr_5 [i_0])))))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)8824))))));
                        arr_8 [i_0] [i_1] [i_1] = arr_3 [i_1] [i_0] [i_3];
                        arr_9 [i_0] [i_0] [i_2] = ((/* implicit */short) (_Bool)0);
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 1) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned short i_5 = 0; i_5 < 25; i_5 += 1) 
                        {
                            var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2759724155U))))));
                            var_16 = ((/* implicit */int) ((unsigned int) var_10));
                        }
                        for (signed char i_6 = 0; i_6 < 25; i_6 += 2) 
                        {
                            arr_17 [i_0] [(short)21] [i_2] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_13 [i_0] [(unsigned short)18] [i_0 - 1] [i_4] [i_0])))) ? ((~(arr_13 [i_1] [i_1] [i_0 - 1] [i_4] [i_6]))) : (((((/* implicit */_Bool) arr_13 [4U] [i_1] [i_0 + 1] [i_2] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (arr_13 [i_0 + 1] [i_2] [i_0 + 1] [i_2] [i_0 - 1])))));
                            var_17 |= ((/* implicit */unsigned short) arr_2 [i_2] [i_4]);
                            var_18 |= ((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)58522))));
                            var_19 &= (((_Bool)1) ? (((((/* implicit */int) arr_6 [i_6] [i_6] [i_2] [i_2] [i_4] [i_6])) * (((/* implicit */int) arr_6 [i_0 + 2] [i_0 + 2] [i_1] [i_2] [i_4] [i_6])))) : (((/* implicit */int) (_Bool)1)));
                        }
                        var_20 += ((/* implicit */unsigned char) -7184758891223845285LL);
                    }
                    var_21 = min((((/* implicit */int) arr_11 [i_0 + 2] [i_0 + 1] [i_0] [i_0 + 2])), (((((/* implicit */int) arr_11 [i_0 + 2] [i_0 + 1] [i_0] [i_0 + 2])) + (((/* implicit */int) (unsigned short)65535)))));
                }
                /* vectorizable */
                for (short i_7 = 1; i_7 < 24; i_7 += 1) 
                {
                    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) || ((_Bool)1)));
                    /* LoopSeq 1 */
                    for (unsigned short i_8 = 0; i_8 < 25; i_8 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned short) (signed char)-9);
                        var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) var_2))));
                        var_25 &= ((/* implicit */unsigned long long int) var_4);
                        arr_23 [i_0] [i_1] [i_0] [i_8] [i_0] = ((/* implicit */_Bool) ((int) ((_Bool) var_11)));
                    }
                    var_26 = ((/* implicit */_Bool) arr_10 [i_0 - 1] [(_Bool)1] [i_0 + 2] [i_7 + 1]);
                }
                for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                {
                    var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) (_Bool)1))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_10 = 1; i_10 < 24; i_10 += 3) 
                    {
                        for (long long int i_11 = 0; i_11 < 25; i_11 += 4) 
                        {
                            {
                                var_28 *= ((/* implicit */unsigned long long int) arr_16 [i_0] [i_0] [i_0 + 1] [i_0] [i_11] [i_0]);
                                var_29 = ((/* implicit */_Bool) arr_11 [i_1] [i_9 - 1] [i_0] [i_1]);
                                arr_33 [i_11] [i_0] [i_0] [i_0] [i_0] = (i_0 % 2 == 0) ? (((/* implicit */short) (((!(((/* implicit */_Bool) arr_26 [i_0 - 1] [i_1] [i_1] [i_0] [i_10 - 1])))) ? (((((/* implicit */_Bool) arr_26 [i_0 - 1] [i_9] [i_9 - 1] [i_0] [i_10 - 1])) ? (arr_26 [i_0 + 1] [i_1] [(_Bool)1] [i_0] [i_10 - 1]) : (arr_26 [i_0 + 1] [i_9 - 1] [i_9 - 1] [i_0] [i_10 - 1]))) : (((arr_26 [i_0 - 1] [i_9 - 1] [i_9 - 1] [i_0] [i_10 - 1]) << (((arr_26 [i_0 + 2] [i_0 + 2] [i_1] [i_0] [i_10 - 1]) - (697679027)))))))) : (((/* implicit */short) (((!(((/* implicit */_Bool) arr_26 [i_0 - 1] [i_1] [i_1] [i_0] [i_10 - 1])))) ? (((((/* implicit */_Bool) arr_26 [i_0 - 1] [i_9] [i_9 - 1] [i_0] [i_10 - 1])) ? (arr_26 [i_0 + 1] [i_1] [(_Bool)1] [i_0] [i_10 - 1]) : (arr_26 [i_0 + 1] [i_9 - 1] [i_9 - 1] [i_0] [i_10 - 1]))) : (((arr_26 [i_0 - 1] [i_9 - 1] [i_9 - 1] [i_0] [i_10 - 1]) << (((((((arr_26 [i_0 + 2] [i_0 + 2] [i_1] [i_0] [i_10 - 1]) - (697679027))) + (86566019))) - (11))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (long long int i_12 = 0; i_12 < 25; i_12 += 4) 
                    {
                        var_30 = ((/* implicit */short) var_7);
                        var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) (-((-(arr_18 [(short)21] [i_0 - 1]))))))));
                        var_32 *= ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) arr_24 [i_12])) ? (((/* implicit */int) arr_28 [i_12])) : (((/* implicit */int) ((unsigned short) 2394821718U))))));
                        arr_37 [(unsigned short)22] [i_12] [i_9 - 1] [(unsigned short)22] |= ((/* implicit */short) (_Bool)1);
                    }
                }
                for (long long int i_13 = 0; i_13 < 25; i_13 += 1) 
                {
                    /* LoopNest 2 */
                    for (signed char i_14 = 1; i_14 < 24; i_14 += 1) 
                    {
                        for (unsigned short i_15 = 2; i_15 < 22; i_15 += 4) 
                        {
                            {
                                var_33 *= ((/* implicit */unsigned int) ((_Bool) ((unsigned char) arr_32 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_14 + 1] [i_15 - 1])));
                                arr_44 [i_15] [i_15 - 1] [i_0] [i_0] [i_1] [i_0] = (_Bool)1;
                                arr_45 [i_0] [i_0 - 1] [i_0] = ((/* implicit */int) arr_22 [i_0 + 2] [i_0] [i_14 - 1]);
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (unsigned long long int i_16 = 2; i_16 < 21; i_16 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_17 = 0; i_17 < 25; i_17 += 1) 
                        {
                            var_34 = ((/* implicit */int) min((var_34), (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)70)))))));
                            var_35 *= ((/* implicit */short) (unsigned char)118);
                        }
                        arr_51 [i_0] [13U] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_13 [(_Bool)1] [i_1] [i_1] [i_13] [i_16])) ? (((/* implicit */long long int) max((arr_39 [i_0 + 2]), (((/* implicit */int) (short)32767))))) : (((long long int) ((unsigned long long int) arr_30 [i_0 + 2] [i_0 + 2] [i_13] [i_0] [i_0] [i_16 + 4])))));
                        arr_52 [i_0 - 1] [i_16] [i_16] [i_16 + 1] &= ((/* implicit */short) ((((/* implicit */int) (unsigned char)132)) == (((/* implicit */int) arr_3 [i_1] [i_16] [i_16 + 4]))));
                        var_36 ^= ((/* implicit */unsigned short) (+(min((max((1433572364U), (arr_21 [i_0 + 2] [i_1] [i_13] [i_16 - 1]))), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)33)))))))));
                        arr_53 [i_0 + 1] [i_16 + 4] [i_1] [i_0 + 1] [i_0] = ((/* implicit */signed char) 16383);
                    }
                    for (short i_18 = 3; i_18 < 22; i_18 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (short i_19 = 0; i_19 < 25; i_19 += 2) 
                        {
                            var_37 *= ((/* implicit */signed char) var_1);
                            arr_59 [i_1] [i_1] [i_13] [i_1] [i_0] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_19] [i_0] [i_0] [i_0])) ? (arr_49 [i_0] [i_0] [i_1] [19ULL] [i_18] [i_18] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_19] [i_1] [i_13] [(unsigned short)23] [i_1] [i_18])))))) ? (((/* implicit */int) (unsigned char)156)) : (((/* implicit */int) arr_6 [i_19] [i_18 - 2] [i_13] [(short)9] [i_1] [i_0 + 1]))))));
                            var_38 = min((((/* implicit */unsigned int) (-(arr_42 [i_18 + 2] [(unsigned char)24] [i_13] [i_0 - 1])))), (4294967280U));
                        }
                        var_39 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_46 [i_0] [i_0] [(_Bool)1] [i_18])) ? ((-(arr_39 [i_0 + 2]))) : (((/* implicit */int) ((short) ((unsigned int) var_0))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_20 = 0; i_20 < 25; i_20 += 1) 
                    {
                        var_40 = ((/* implicit */_Bool) max((var_40), (((/* implicit */_Bool) arr_5 [8U]))));
                        arr_62 [(short)12] [i_13] [i_1] [(short)12] |= ((/* implicit */_Bool) ((unsigned short) arr_30 [i_20] [14LL] [i_13] [i_1] [i_0] [i_0 + 1]));
                        var_41 &= ((/* implicit */unsigned char) (-((~(((/* implicit */int) arr_24 [18LL]))))));
                        var_42 = ((/* implicit */unsigned long long int) max((var_42), (((/* implicit */unsigned long long int) (short)-32758))));
                    }
                    var_43 |= ((/* implicit */unsigned char) (~(((/* implicit */int) arr_35 [i_0] [i_13] [i_0] [i_0] [i_13] [i_0 + 1]))));
                }
                arr_63 [i_0] = ((/* implicit */unsigned char) arr_16 [6LL] [i_0 - 1] [i_0] [i_0 + 1] [i_0] [i_0]);
                var_44 = ((/* implicit */signed char) max((var_44), (((/* implicit */signed char) arr_35 [i_0 + 1] [i_0 - 1] [i_1] [i_1] [i_1] [i_1]))));
                var_45 = ((/* implicit */unsigned short) ((unsigned long long int) (+(((/* implicit */int) arr_28 [i_0])))));
                /* LoopNest 2 */
                for (unsigned short i_21 = 2; i_21 < 24; i_21 += 2) 
                {
                    for (unsigned long long int i_22 = 0; i_22 < 25; i_22 += 2) 
                    {
                        {
                            var_46 = ((/* implicit */unsigned short) min((var_46), (((/* implicit */unsigned short) -1411187378312391999LL))));
                            var_47 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_64 [i_0 + 2] [i_1] [i_21 - 1])) ? (((/* implicit */int) arr_22 [i_0 + 1] [i_0] [i_0 + 1])) : (((/* implicit */int) ((unsigned short) arr_7 [i_0 - 1] [i_0] [i_0] [i_21 + 1])))));
                            var_48 = ((/* implicit */short) max((var_48), (((/* implicit */short) (unsigned char)253))));
                            var_49 |= ((/* implicit */_Bool) (+(arr_13 [i_0] [i_0] [i_21 - 1] [i_22] [i_0])));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_23 = 0; i_23 < 15; i_23 += 4) 
    {
        for (unsigned int i_24 = 0; i_24 < 15; i_24 += 2) 
        {
            {
                arr_73 [i_23] = ((/* implicit */unsigned long long int) ((unsigned int) arr_6 [i_24] [i_24] [i_24] [i_23] [i_23] [i_24]));
                var_50 &= ((/* implicit */signed char) (unsigned char)156);
            }
        } 
    } 
}
