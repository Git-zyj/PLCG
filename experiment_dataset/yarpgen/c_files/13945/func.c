/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13945
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
    for (long long int i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            {
                var_13 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_1] [i_0])) ? ((~(var_10))) : (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_4 [7LL] [i_1])))), (((/* implicit */int) var_5)))))));
                /* LoopSeq 2 */
                for (unsigned char i_2 = 3; i_2 < 12; i_2 += 3) 
                {
                    var_14 = ((/* implicit */long long int) max((511), (((/* implicit */int) (unsigned short)16368))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 12; i_3 += 4) 
                    {
                        for (long long int i_4 = 1; i_4 < 11; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (unsigned short)31676)))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)4))))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_8 [6LL]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))));
                                var_16 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8388608ULL)) ? (((/* implicit */int) arr_3 [10LL])) : (((/* implicit */int) (_Bool)1))))) : ((+(max((arr_8 [6ULL]), (((/* implicit */unsigned long long int) arr_9 [i_3 - 2] [i_1 + 2] [i_3 - 2] [i_3 - 2] [i_0 + 2]))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (short i_5 = 0; i_5 < 13; i_5 += 3) 
                    {
                        var_17 *= ((/* implicit */unsigned short) var_9);
                        var_18 -= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_17 [i_2 - 3] [6LL] [i_2] [i_5] [i_1]), (arr_3 [2]))))) * (min((var_6), (((/* implicit */unsigned long long int) arr_17 [i_5] [8U] [i_2] [8U] [i_0 + 1]))))));
                        arr_18 [12ULL] [i_1] [(signed char)7] [i_0] = ((/* implicit */unsigned char) (-(((((/* implicit */long long int) ((/* implicit */int) var_1))) / (((((/* implicit */_Bool) -1495154982)) ? (-4962376331997164857LL) : (((/* implicit */long long int) var_0))))))));
                        arr_19 [1ULL] [i_0] [1ULL] = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) (short)31791)) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2] [(unsigned char)2]))) : (10262054656246930603ULL))) : (min((arr_7 [(unsigned short)9]), (((/* implicit */unsigned long long int) arr_5 [i_0 + 2] [i_0])))))));
                    }
                    for (long long int i_6 = 0; i_6 < 13; i_6 += 1) 
                    {
                        arr_24 [(signed char)9] [(signed char)9] [i_2 - 1] [i_2 - 1] [(short)1] [i_0] = (((_Bool)0) ? ((-(((((/* implicit */_Bool) arr_20 [i_2] [i_2] [i_2] [i_2 + 1])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_12)))))) : (((/* implicit */int) ((short) max((-1923390408493531913LL), (((/* implicit */long long int) arr_13 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_2 + 1] [i_6] [i_6])))))));
                        var_19 &= ((/* implicit */unsigned short) (+((~(((/* implicit */int) var_12))))));
                    }
                }
                /* vectorizable */
                for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 1; i_8 < 9; i_8 += 1) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) var_11)) : (var_6)));
                                var_21 = ((((/* implicit */_Bool) arr_20 [i_0 + 1] [i_1 + 2] [i_8 - 1] [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_0 + 2] [i_1 + 1] [i_8 + 2] [i_9]))) : (var_4));
                                var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) (~(((/* implicit */int) arr_14 [i_7])))))));
                                arr_32 [i_0] [i_1] [(unsigned char)1] [i_8 - 1] [i_9] [i_0 + 2] = ((/* implicit */unsigned long long int) -7557489022121346758LL);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned long long int i_10 = 0; i_10 < 13; i_10 += 3) 
                    {
                        var_23 = ((((/* implicit */int) arr_1 [i_0 - 1])) << (((var_6) - (1241449583191901654ULL))));
                        /* LoopSeq 2 */
                        for (long long int i_11 = 1; i_11 < 11; i_11 += 3) 
                        {
                            var_24 = ((/* implicit */long long int) ((unsigned char) (-(var_3))));
                            var_25 &= ((/* implicit */short) ((((/* implicit */_Bool) arr_15 [i_0 + 1] [i_0] [12U] [(short)5] [(unsigned short)2] [i_0])) ? (((/* implicit */unsigned long long int) arr_2 [i_7])) : ((-(arr_7 [i_0 + 2])))));
                            var_26 |= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_14 [i_7]))));
                            var_27 += (-(((/* implicit */int) arr_17 [i_1 - 1] [i_7] [i_1 - 1] [i_11 + 1] [i_11])));
                        }
                        for (long long int i_12 = 0; i_12 < 13; i_12 += 1) 
                        {
                            var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) (-((((_Bool)1) ? (8770558889311034593LL) : (((/* implicit */long long int) var_0)))))))));
                            var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_20 [i_10] [5ULL] [i_10] [i_10])) ? (((/* implicit */int) arr_21 [i_0 + 1] [i_0 - 1] [i_1 - 1])) : (((((/* implicit */_Bool) arr_38 [i_0] [i_0] [i_0] [i_10] [(unsigned char)1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_3 [i_0]))))));
                            var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) (((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_31 [i_7] [i_10] [i_7] [i_7])) || (((/* implicit */_Bool) var_5)))))) : (((unsigned int) arr_36 [i_0] [i_1] [i_7] [i_10] [i_12])))))));
                        }
                    }
                }
                var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_14 [(unsigned short)8]), (((/* implicit */unsigned char) var_5)))))) % (max((((/* implicit */unsigned long long int) var_3)), (arr_10 [i_1 + 1] [i_1 + 1] [i_1 + 1] [(unsigned char)0]))))))));
                /* LoopSeq 4 */
                for (long long int i_13 = 3; i_13 < 9; i_13 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_14 = 0; i_14 < 13; i_14 += 2) 
                    {
                        for (int i_15 = 0; i_15 < 13; i_15 += 3) 
                        {
                            {
                                var_32 = ((/* implicit */unsigned short) arr_5 [i_0] [i_0]);
                                arr_47 [i_0] [i_0] [4LL] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) arr_2 [i_0]);
                                var_33 = ((/* implicit */int) min((var_33), (((/* implicit */int) min((((/* implicit */long long int) (+(((/* implicit */int) arr_42 [i_14] [i_1 + 2] [(signed char)5] [i_14]))))), (((((/* implicit */_Bool) ((arr_3 [i_14]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_0 + 1] [i_14] [i_14] [i_0 + 1]))) : (arr_16 [i_0] [i_1] [2LL] [2LL])))) ? (((((/* implicit */_Bool) -2147483638)) ? (4338670707728895140LL) : (-1LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)10952))))))))))));
                                var_34 = arr_9 [i_0] [i_0] [i_0 - 1] [i_0 + 1] [i_0 - 1];
                            }
                        } 
                    } 
                    var_35 = ((/* implicit */_Bool) min((var_35), (((/* implicit */_Bool) var_5))));
                }
                for (long long int i_16 = 3; i_16 < 9; i_16 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (long long int i_17 = 0; i_17 < 13; i_17 += 2) 
                    {
                        for (long long int i_18 = 0; i_18 < 13; i_18 += 1) 
                        {
                            {
                                var_36 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (!(max((var_7), (arr_1 [(_Bool)1])))))) : (((/* implicit */int) ((arr_1 [i_0 + 2]) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)-2731)) : (((/* implicit */int) (signed char)-3))))))))));
                                var_37 = ((/* implicit */int) var_9);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_19 = 1; i_19 < 9; i_19 += 1) 
                    {
                        for (int i_20 = 0; i_20 < 13; i_20 += 2) 
                        {
                            {
                                var_38 |= ((/* implicit */unsigned char) arr_9 [i_0] [i_0] [i_0 + 2] [i_0 - 1] [i_0]);
                                arr_63 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) var_4)), (5904787975286761720ULL))) + (min((arr_16 [i_20] [7LL] [i_16] [(unsigned char)11]), (((/* implicit */unsigned long long int) arr_15 [i_0] [i_0] [i_1 - 1] [i_16] [i_19] [i_20]))))))) ? (var_4) : (((/* implicit */long long int) (-2147483647 - 1)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_21 = 3; i_21 < 11; i_21 += 1) 
                    {
                        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                        {
                            {
                                var_39 -= ((/* implicit */long long int) arr_57 [i_0] [6LL] [(unsigned short)0]);
                                arr_70 [i_0] [i_1] [i_16 - 1] [12LL] [i_22] = min((arr_15 [i_0] [i_0] [i_0] [i_0 + 2] [i_0] [i_0]), ((-(max((var_9), (((/* implicit */long long int) arr_35 [i_0] [(unsigned short)6] [i_16])))))));
                                arr_71 [i_0] [i_1 - 1] [i_1 + 2] [i_0] [i_0] = ((/* implicit */int) ((var_11) >= (((/* implicit */unsigned int) (~(((/* implicit */int) min((var_8), (((/* implicit */short) var_7))))))))));
                                var_40 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) ((unsigned short) var_12)))) ? (((/* implicit */int) min((var_8), (((/* implicit */short) arr_56 [i_0 + 2]))))) : (((/* implicit */int) arr_28 [i_0 + 2] [(unsigned char)8] [i_16] [6ULL] [i_22] [i_1]))));
                            }
                        } 
                    } 
                }
                for (long long int i_23 = 3; i_23 < 9; i_23 += 2) /* same iter space */
                {
                    var_41 = ((/* implicit */long long int) min((var_41), (((/* implicit */long long int) min((((((/* implicit */int) var_1)) ^ (((/* implicit */int) var_5)))), (((/* implicit */int) arr_42 [8] [i_1 - 1] [7] [i_23])))))));
                    /* LoopSeq 1 */
                    for (long long int i_24 = 0; i_24 < 13; i_24 += 4) 
                    {
                        var_42 ^= ((/* implicit */unsigned short) (+((-9223372036854775807LL - 1LL))));
                        var_43 = ((/* implicit */signed char) (unsigned short)26282);
                    }
                    var_44 -= ((/* implicit */unsigned char) arr_54 [i_0] [i_1] [i_23] [i_23] [i_23]);
                    var_45 -= ((((((/* implicit */_Bool) max((var_12), (((/* implicit */unsigned char) var_5))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_26 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0])) ? (((/* implicit */int) arr_13 [i_0 + 1] [i_1] [i_1] [i_0 - 1] [i_0 + 1] [i_1] [i_0])) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) var_6)) ? (arr_16 [(signed char)3] [i_1 + 1] [i_1] [i_1 + 1]) : (((/* implicit */unsigned long long int) -135806161735369104LL)))))) - (((/* implicit */unsigned long long int) min((min((((/* implicit */int) (signed char)-1)), (var_0))), (((((/* implicit */int) arr_45 [i_0])) / (var_0)))))));
                }
                for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                {
                    arr_79 [i_0] [i_1] [i_25] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 144112989052600320LL))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_26 = 0; i_26 < 13; i_26 += 1) 
                    {
                        arr_84 [i_0] [i_0] = ((/* implicit */short) arr_28 [i_0 - 1] [i_0] [i_0 - 1] [i_0] [7LL] [i_0]);
                        arr_85 [i_0] [i_1] [i_1 + 1] [i_25] [i_26] = ((/* implicit */unsigned long long int) ((long long int) arr_52 [i_0]));
                    }
                    var_46 |= ((/* implicit */short) (((((((-9223372036854775807LL - 1LL)) + (9223372036854775807LL))) + (9223372036854775807LL))) >> (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [0]))) : (arr_33 [i_0])))))));
                    arr_86 [8] [i_1] [i_25] [(unsigned short)10] &= ((/* implicit */long long int) arr_49 [i_1] [i_1] [i_0 - 1]);
                }
            }
        } 
    } 
    var_47 = ((/* implicit */long long int) max((var_47), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) min((((/* implicit */unsigned long long int) var_8)), (var_6))))) ? (((/* implicit */unsigned long long int) ((long long int) max((((/* implicit */long long int) var_0)), (var_4))))) : (min((((unsigned long long int) var_1)), (((/* implicit */unsigned long long int) var_7)))))))));
    var_48 *= ((/* implicit */unsigned char) ((((unsigned long long int) var_12)) >> (((((((((/* implicit */long long int) ((/* implicit */int) var_7))) >= (1987786729808824840LL))) ? (((/* implicit */int) (unsigned short)224)) : ((-(((/* implicit */int) var_5)))))) + (157)))));
    var_49 = ((/* implicit */unsigned int) max((var_49), (((/* implicit */unsigned int) ((((/* implicit */int) var_7)) << (((min((((/* implicit */long long int) min((((/* implicit */short) var_12)), (var_8)))), (((((/* implicit */_Bool) var_3)) ? (var_4) : (7814201812321374588LL))))) + (5584809540520783788LL))))))));
    var_50 += ((/* implicit */int) var_10);
}
