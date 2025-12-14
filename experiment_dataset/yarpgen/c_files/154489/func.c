/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154489
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
    var_18 |= ((/* implicit */_Bool) var_4);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 6; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned int) (unsigned short)3);
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    for (unsigned char i_3 = 1; i_3 < 9; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) min((4294967295U), (3344724936U)))) ? (4294967295U) : (((/* implicit */unsigned int) -1994885009)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -1994885035)) ? (((/* implicit */int) (short)16380)) : (((/* implicit */int) (_Bool)1))))))))));
                                arr_16 [i_0] [i_0] [(short)7] [(short)7] [4LL] [i_3 - 1] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_1 [i_1 + 2])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_1 [i_1 + 1])))) % (-1994885009)));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 4 */
                for (unsigned short i_5 = 1; i_5 < 8; i_5 += 4) /* same iter space */
                {
                    var_20 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)132)) ? (((/* implicit */int) (short)9403)) : (-1994885009)));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (long long int i_6 = 0; i_6 < 10; i_6 += 3) 
                    {
                        var_21 = (_Bool)1;
                        /* LoopSeq 2 */
                        for (int i_7 = 2; i_7 < 7; i_7 += 1) 
                        {
                            arr_26 [i_1] [8] [i_5 + 2] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_15 [(unsigned short)0] [i_7] [i_7 + 2] [i_5 - 1] [i_5] [i_5] [i_5]))));
                            var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)126)) >= (((/* implicit */int) var_0))))) : (((/* implicit */int) (unsigned char)124))));
                            arr_27 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1994885009)) ? (((/* implicit */int) (unsigned short)11)) : (((/* implicit */int) (short)21372))));
                            var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((/* implicit */_Bool) (short)-27558)) ? (((/* implicit */unsigned long long int) var_3)) : (0ULL))))));
                        }
                        for (short i_8 = 0; i_8 < 10; i_8 += 3) 
                        {
                            var_24 *= ((/* implicit */signed char) 1994885009);
                            var_25 = ((/* implicit */unsigned short) ((short) arr_8 [i_1 + 4]));
                            var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) (short)21372))));
                        }
                    }
                    for (unsigned int i_9 = 0; i_9 < 10; i_9 += 1) 
                    {
                        var_27 = ((/* implicit */unsigned int) ((unsigned long long int) arr_4 [i_0] [i_1 - 1] [8U]));
                        var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) 91584458))));
                        var_29 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) (unsigned char)134)) ? (var_3) : (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned int) var_4)) : (4U)))))) : (((/* implicit */long long int) ((((((-1994884997) + (2147483647))) >> (((17924204047353148736ULL) - (17924204047353148721ULL))))) / (arr_15 [i_1 + 2] [i_5 + 1] [i_1 + 2] [i_9] [i_9] [i_9] [i_9]))))));
                        var_30 ^= ((/* implicit */unsigned char) min((((/* implicit */unsigned short) (_Bool)1)), (((unsigned short) (unsigned short)17))));
                    }
                    for (unsigned short i_10 = 0; i_10 < 10; i_10 += 2) 
                    {
                        arr_36 [i_1] = ((/* implicit */unsigned short) var_7);
                        arr_37 [i_1] [i_1] = ((/* implicit */short) min((((/* implicit */long long int) ((short) arr_20 [i_1] [i_5 - 1] [i_1]))), (((((/* implicit */_Bool) (unsigned short)28380)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (var_15)))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) 1994885009)) : (var_3)))))));
                    }
                    for (unsigned short i_11 = 2; i_11 < 7; i_11 += 3) 
                    {
                        arr_40 [i_1] = ((/* implicit */unsigned short) 18446744073709551615ULL);
                        var_31 += ((/* implicit */int) arr_2 [i_1] [i_5] [i_11]);
                        arr_41 [i_0] [i_1] [i_1] [(unsigned short)5] [i_1] = ((/* implicit */unsigned long long int) var_4);
                        arr_42 [i_1] [i_1] [i_5] = ((/* implicit */short) ((long long int) (((_Bool)0) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_17)))));
                    }
                    arr_43 [(unsigned short)2] [i_1] [i_5] [i_5] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_28 [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 422220729403455739ULL)) ? (((/* implicit */int) (short)3441)) : (((/* implicit */int) arr_28 [i_0] [i_0]))))) : (452152156987703850ULL)));
                    arr_44 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((18446744073709551610ULL), (((/* implicit */unsigned long long int) (unsigned short)42394))))) ? (((((/* implicit */_Bool) -6845541958991010923LL)) ? (((/* implicit */int) arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_31 [i_0] [i_0] [i_5 + 2] [i_5] [i_5])))) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) ((unsigned short) (unsigned short)54184))))) : ((((_Bool)1) ? (((((/* implicit */_Bool) arr_6 [i_1] [7LL] [7LL])) ? (((/* implicit */long long int) ((/* implicit */int) (short)27558))) : (var_3))) : (((arr_30 [i_0] [i_0]) & (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_0] [i_1] [i_0])))))))));
                }
                /* vectorizable */
                for (unsigned short i_12 = 1; i_12 < 8; i_12 += 4) /* same iter space */
                {
                    var_32 = ((/* implicit */int) max((var_32), (((/* implicit */int) arr_17 [i_0] [i_1] [i_12]))));
                    var_33 ^= ((/* implicit */unsigned short) (_Bool)1);
                    arr_47 [i_12 - 1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) 511);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_13 = 0; i_13 < 10; i_13 += 4) 
                    {
                        arr_50 [i_13] [i_1] [i_12 + 1] [i_1] [i_1] [i_0] = ((/* implicit */int) arr_38 [i_1 + 2] [i_1] [i_12 + 2]);
                        arr_51 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -119421815)) ? (arr_8 [i_12 - 1]) : (arr_8 [i_12 + 2])));
                    }
                }
                for (unsigned short i_14 = 1; i_14 < 8; i_14 += 4) /* same iter space */
                {
                    var_34 = ((/* implicit */unsigned long long int) min((var_34), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)106)) ? (((/* implicit */int) max((((/* implicit */unsigned short) (short)9519)), (var_6)))) : (((/* implicit */int) ((var_9) <= (((/* implicit */unsigned long long int) 3215644903U)))))))) ? (422220729403455755ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((var_13) << (((2147483647) - (2147483617))))))))))));
                    var_35 = ((/* implicit */signed char) var_15);
                    /* LoopSeq 2 */
                    for (unsigned short i_15 = 0; i_15 < 10; i_15 += 4) 
                    {
                        arr_57 [i_1] [i_1] = ((/* implicit */unsigned short) var_17);
                        arr_58 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_0] [i_1] [i_0])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)129))))) ? (((18LL) % (((/* implicit */long long int) 511)))) : (((/* implicit */long long int) ((int) arr_0 [i_14 - 1])))));
                        arr_59 [i_15] [i_15] |= max((((/* implicit */unsigned int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0])), (min((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) + (arr_17 [(short)9] [(short)9] [i_15]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_2))))))));
                        var_36 = ((/* implicit */int) max((var_36), (((((/* implicit */_Bool) (unsigned short)25174)) ? (((((/* implicit */_Bool) arr_31 [i_0] [i_1 + 4] [i_1] [i_14] [i_14 + 2])) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_10)))) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) arr_35 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (-511) : (arr_35 [i_0] [i_1] [(unsigned short)9] [i_14 + 2] [i_15] [i_15])))))));
                        arr_60 [i_1] [i_1] = ((/* implicit */int) max((((/* implicit */unsigned long long int) (_Bool)1)), (((((/* implicit */_Bool) (short)12033)) ? (arr_25 [i_0] [(short)9] [i_14] [i_14] [i_1] [i_14 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))));
                    }
                    for (unsigned int i_16 = 0; i_16 < 10; i_16 += 2) 
                    {
                        var_37 = var_16;
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (short i_17 = 0; i_17 < 10; i_17 += 4) 
                        {
                            arr_65 [i_0] [i_1] [i_0] = ((/* implicit */signed char) arr_49 [i_0] [i_14 + 2] [i_1 + 2] [i_16]);
                            arr_66 [i_0] [i_1] [i_14 + 1] [i_16] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)134)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_7))));
                        }
                        for (unsigned long long int i_18 = 2; i_18 < 6; i_18 += 2) 
                        {
                            var_38 ^= ((/* implicit */unsigned int) ((1338593090U) > (arr_7 [i_0] [i_0] [i_0] [i_18])));
                            var_39 = var_11;
                        }
                        for (int i_19 = 0; i_19 < 10; i_19 += 1) 
                        {
                            var_40 = ((/* implicit */unsigned int) max((var_40), (((/* implicit */unsigned int) -529))));
                            arr_74 [i_0] [i_1] [i_1] [i_1] [i_0] [i_16] [i_19] = ((/* implicit */unsigned char) (-(((/* implicit */int) min((arr_31 [i_0] [i_1 + 2] [i_14 + 2] [i_16] [i_19]), (arr_31 [i_19] [i_19] [i_19] [i_19] [i_19]))))));
                            arr_75 [i_1] [i_1] [i_16] [i_19] = (-(((/* implicit */int) arr_4 [i_0] [i_1] [i_19])));
                        }
                        for (unsigned long long int i_20 = 2; i_20 < 7; i_20 += 3) 
                        {
                            arr_78 [i_1] [i_20] [i_0] [i_16] [i_20] = ((/* implicit */unsigned long long int) -18LL);
                            var_41 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) 9078344813870883549ULL)) ? (var_8) : (((/* implicit */unsigned long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_20]))))), ((-(((/* implicit */int) (signed char)-24)))))))));
                            arr_79 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */short) max((var_15), (((/* implicit */unsigned int) (-(1978357707))))));
                            var_42 = ((/* implicit */unsigned short) arr_56 [i_0] [i_1] [i_14]);
                            arr_80 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] [9U] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) arr_69 [i_14 + 2] [i_1] [i_14 + 1] [i_14] [i_14 + 2]))) ? (((/* implicit */int) max(((short)32758), ((short)(-32767 - 1))))) : (((/* implicit */int) arr_38 [i_1] [i_1] [i_14 - 1]))));
                        }
                        var_43 = (+(((/* implicit */int) (unsigned short)65457)));
                    }
                    arr_81 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((-18LL) & (18LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_72 [i_14] [i_0] [i_0] [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) var_2)))))) : (max((var_13), (((/* implicit */unsigned int) (unsigned short)65534))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) : (((unsigned int) var_14))));
                }
                for (unsigned int i_21 = 1; i_21 < 9; i_21 += 3) 
                {
                    arr_84 [i_1] [i_21] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_61 [i_1] [i_1 + 3] [i_1 - 2] [i_21 + 1])) ? (var_4) : (arr_61 [i_0] [i_1 + 1] [i_1 + 1] [i_21 - 1])))) ? (((/* implicit */int) ((short) var_2))) : (((((/* implicit */_Bool) 4294967295U)) ? (arr_61 [(short)0] [i_1 + 1] [i_1 - 1] [i_21 + 1]) : (arr_61 [i_0] [i_1 + 1] [i_1 + 4] [i_21 - 1])))));
                    arr_85 [i_0] [i_1] = ((/* implicit */unsigned short) ((_Bool) ((arr_17 [i_0] [i_0] [i_21]) << (((2147483647) - (2147483620))))));
                }
            }
        } 
    } 
}
