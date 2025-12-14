/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16477
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
    for (long long int i_0 = 3; i_0 < 12; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_7) ? (var_11) : (var_4)))) ? (var_4) : (max((var_11), (((/* implicit */unsigned long long int) var_0))))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) max((((/* implicit */unsigned short) var_3)), (var_6)))), (((var_5) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0))))))) : (max((var_4), (var_14))))))));
                                var_16 = ((/* implicit */unsigned long long int) max((var_16), (((((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) (_Bool)1)), (var_8))), (min((2301430412037724022ULL), (17164664295115862945ULL)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_5))))) ? (((var_7) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_9))))))) : (((((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned short) var_9))))) ? (max((var_11), (((/* implicit */unsigned long long int) var_3)))) : (((((/* implicit */_Bool) var_3)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))))));
                            }
                        } 
                    } 
                    var_17 = min((min((((((/* implicit */_Bool) var_12)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))), (((var_7) ? (var_4) : (var_4))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_14) : (var_13)))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_14))) : (var_8))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_5 = 2; i_5 < 12; i_5 += 2) /* same iter space */
                    {
                        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_14)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_5), (var_1)))))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_5))))), (min((8066404693718404593ULL), (8088699664775820197ULL))))) : (var_10)))));
                        var_19 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_12))) : (max((((/* implicit */unsigned long long int) var_5)), (var_11)))))) ? (var_14) : (min((min((((/* implicit */unsigned long long int) var_6)), (var_13))), (((/* implicit */unsigned long long int) var_3))))));
                        arr_14 [i_5] = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_9)), (((var_1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_8)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((max((var_3), (var_2))), (var_9))))) : (min((((((/* implicit */_Bool) var_3)) ? (var_12) : (var_14))), (((var_5) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_13))))));
                        /* LoopSeq 1 */
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            arr_17 [i_0] [i_1 - 1] [i_2] [i_5] [i_5] [i_6] = var_4;
                            arr_18 [i_6 - 1] [i_6] [i_6 - 1] [i_6 - 1] [i_6] = ((/* implicit */_Bool) var_13);
                        }
                    }
                    /* vectorizable */
                    for (unsigned long long int i_7 = 2; i_7 < 12; i_7 += 2) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_8 = 2; i_8 < 12; i_8 += 3) 
                        {
                            var_20 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_1) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) var_3)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_5)))))));
                            arr_24 [i_0] [i_1] [i_8] [4U] [i_2] [i_2 - 1] [(_Bool)1] = ((/* implicit */long long int) var_4);
                        }
                        for (unsigned char i_9 = 0; i_9 < 15; i_9 += 4) 
                        {
                            arr_27 [i_0] [i_9] [(unsigned char)9] [i_7 + 3] [i_7] [i_0 + 1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_10)))) ? (((var_7) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_7))))));
                            var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)158))) : (8066404693718404593ULL))))));
                        }
                        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_7))));
                    }
                }
                for (unsigned long long int i_10 = 2; i_10 < 14; i_10 += 4) 
                {
                    var_23 = ((/* implicit */_Bool) max((var_14), (((((/* implicit */_Bool) var_9)) ? (var_14) : (min((var_8), (var_11)))))));
                    var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_6))))) ? (max((((/* implicit */unsigned long long int) var_6)), (var_11))) : (var_8)))) ? (max((((/* implicit */unsigned long long int) var_1)), (min((((/* implicit */unsigned long long int) var_1)), (var_8))))) : (min((((/* implicit */unsigned long long int) var_0)), (((((/* implicit */_Bool) var_9)) ? (var_4) : (var_10)))))));
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_11 = 1; i_11 < 11; i_11 += 3) 
                {
                    var_25 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) ? (var_4) : (((var_1) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
                    var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_14)))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_5)))))))));
                    var_27 = ((/* implicit */unsigned long long int) var_7);
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
    {
        for (unsigned long long int i_13 = 0; i_13 < 25; i_13 += 2) 
        {
            {
                var_28 = ((/* implicit */short) min((var_10), (((/* implicit */unsigned long long int) max((((/* implicit */short) min((var_1), (var_5)))), (max((var_9), (var_3))))))));
                /* LoopNest 2 */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    for (unsigned long long int i_15 = 3; i_15 < 22; i_15 += 3) 
                    {
                        {
                            var_29 &= ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) 17164664295115862930ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) var_1)))), (((/* implicit */int) var_2))));
                            var_30 = max((((((/* implicit */_Bool) max((var_12), (var_4)))) ? (((((/* implicit */_Bool) var_10)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) : (max((var_4), (var_4))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)118)))));
                            var_31 = ((/* implicit */unsigned long long int) max((var_31), (((var_7) ? (max((((var_7) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_14))), (max((((/* implicit */unsigned long long int) var_1)), (var_11))))) : (max((((/* implicit */unsigned long long int) var_0)), (((((/* implicit */_Bool) var_9)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))))));
                            var_32 = ((/* implicit */unsigned long long int) min((var_32), (((((/* implicit */_Bool) max((max((((/* implicit */short) (_Bool)1)), (var_9))), (max((((/* implicit */short) (_Bool)1)), (var_2)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)95))) : (var_14)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_33 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_11) : (var_11)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_1))))) : (((((/* implicit */_Bool) var_2)) ? (var_4) : (var_10)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_14));
    /* LoopNest 2 */
    for (unsigned long long int i_16 = 0; i_16 < 14; i_16 += 2) 
    {
        for (unsigned short i_17 = 0; i_17 < 14; i_17 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_19 = 0; i_19 < 14; i_19 += 2) 
                    {
                        var_34 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_6)), (min((((/* implicit */unsigned long long int) var_3)), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_12)))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                        {
                            var_35 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (((var_7) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
                            arr_56 [i_16] [i_17] [i_18] [i_17] = ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_4));
                            var_36 = ((/* implicit */short) ((var_7) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_14)));
                        }
                        var_37 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((max((var_13), (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) var_7))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_9)), (var_12)))) ? (var_14) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_14))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
                    }
                    for (unsigned long long int i_21 = 2; i_21 < 10; i_21 += 2) 
                    {
                        arr_59 [i_17] [i_17] [i_18] [i_21 + 4] = ((var_1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (max((var_8), (var_4))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_22 = 0; i_22 < 14; i_22 += 2) 
                        {
                            var_38 = ((/* implicit */_Bool) var_4);
                            var_39 = max((max((((/* implicit */unsigned long long int) ((var_1) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_0))))), (var_14))), (((((/* implicit */_Bool) var_14)) ? (max((var_10), (((/* implicit */unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((_Bool)1), ((_Bool)1))))))));
                            var_40 = ((/* implicit */unsigned long long int) max((var_40), (((/* implicit */unsigned long long int) var_3))));
                        }
                        for (long long int i_23 = 0; i_23 < 14; i_23 += 2) 
                        {
                            var_41 = max((max((min((var_14), (var_8))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_9))))))), (max((((/* implicit */unsigned long long int) var_1)), (max((17164664295115862923ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))));
                            var_42 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_4)))) ? (var_13) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_0))))))), (((/* implicit */unsigned long long int) ((var_1) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_5)))) : (((/* implicit */int) max((var_7), (var_0)))))))));
                        }
                        /* vectorizable */
                        for (_Bool i_24 = 0; i_24 < 0; i_24 += 1) 
                        {
                            var_43 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_0) ? (var_11) : (var_13)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (1282079778593688721ULL)));
                            var_44 += ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (var_4) : (((/* implicit */unsigned long long int) ((var_7) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_5)))))));
                            arr_69 [i_17] [i_17] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_8) : (var_13)))) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
                        }
                        arr_70 [i_16] [i_17] [i_17] [i_18] [i_21] = ((/* implicit */_Bool) max((max((max((var_14), (((/* implicit */unsigned long long int) var_7)))), (min((var_12), (((/* implicit */unsigned long long int) var_7)))))), (((/* implicit */unsigned long long int) var_7))));
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_25 = 0; i_25 < 14; i_25 += 1) 
                    {
                        for (short i_26 = 1; i_26 < 12; i_26 += 3) 
                        {
                            {
                                var_45 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_5)), (var_14)))) ? (max((var_12), (((/* implicit */unsigned long long int) var_2)))) : (max((var_4), (var_12))))), (max((((((/* implicit */_Bool) var_11)) ? (var_13) : (var_14))), (((/* implicit */unsigned long long int) min((var_1), (var_5))))))));
                                arr_75 [i_17] [i_25] [i_18] [i_17] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (((((/* implicit */_Bool) var_10)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 17164664295115862904ULL)) ? (-931041908101333045LL) : (((/* implicit */long long int) ((/* implicit */int) (short)32767))))))));
                                arr_76 [(_Bool)1] [i_26 + 2] [i_26] [0ULL] [i_17] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((var_1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_10))), (((((/* implicit */_Bool) var_9)) ? (var_14) : (var_13)))))) ? (var_12) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) ? (max((var_10), (((/* implicit */unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))));
                                var_46 = ((/* implicit */_Bool) max((var_46), (((/* implicit */_Bool) max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (((var_0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_11))))), (((/* implicit */unsigned long long int) max((((/* implicit */int) min((var_5), (var_0)))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_6))))))))))));
                                var_47 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_6)), (var_12)))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_14))) : (var_14))), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_2)), (var_12)))) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) var_1)), (var_2)))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned int i_27 = 0; i_27 < 14; i_27 += 1) 
                    {
                        arr_79 [i_27] [i_17] [11U] = var_11;
                        var_48 = max((((var_7) ? (min((var_12), (((/* implicit */unsigned long long int) var_6)))) : (((((/* implicit */_Bool) var_9)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)126))))))), (((/* implicit */unsigned long long int) var_3)));
                    }
                }
                /* LoopNest 3 */
                for (unsigned long long int i_28 = 0; i_28 < 14; i_28 += 2) 
                {
                    for (signed char i_29 = 0; i_29 < 14; i_29 += 4) 
                    {
                        for (unsigned int i_30 = 0; i_30 < 14; i_30 += 1) 
                        {
                            {
                                arr_87 [i_16] [i_17] [i_17] [(_Bool)1] [4U] [i_30] = min((((((/* implicit */_Bool) max((var_14), (((/* implicit */unsigned long long int) var_2))))) ? (var_14) : (var_14))), (((/* implicit */unsigned long long int) var_2)));
                                var_49 = ((/* implicit */signed char) var_10);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
