/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125253
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
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        arr_3 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */int) ((signed char) var_6))) - (((var_15) % (var_4)))))) ? (((((/* implicit */int) var_2)) * (((/* implicit */int) var_2)))) : (((((/* implicit */_Bool) ((unsigned char) var_6))) ? (var_4) : (var_10))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 4; i_1 < 9; i_1 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 1) /* same iter space */
            {
                var_16 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_6) / (var_6)))) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) var_11)) ? (var_15) : (var_7)))))) ? (min((var_7), (var_4))) : (((/* implicit */int) ((((/* implicit */int) var_5)) >= (var_15))))));
                arr_11 [i_0] [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_12)) ? (var_4) : (((/* implicit */int) var_9)))), (max((((/* implicit */int) var_14)), (var_15)))));
                var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) var_14))) ? (((((/* implicit */_Bool) max((((/* implicit */long long int) var_4)), (9223371487098961920LL)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_5)))) : (((/* implicit */int) min((((/* implicit */unsigned short) ((unsigned char) (unsigned short)65526))), (min((var_14), (((/* implicit */unsigned short) var_1)))))))));
                var_18 = ((/* implicit */unsigned char) ((long long int) ((_Bool) var_3)));
            }
            for (unsigned char i_3 = 0; i_3 < 12; i_3 += 1) /* same iter space */
            {
                arr_14 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((signed char) ((((/* implicit */int) var_1)) / (((/* implicit */int) var_8)))));
                var_19 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_15))) ? (((((/* implicit */_Bool) var_6)) ? (var_12) : (((/* implicit */int) var_1)))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_5))))))) ? (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 9223371487098961894LL)) ? (9223371487098961899LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) : (max((((((/* implicit */int) var_14)) >> (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) 29360128)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))))));
            }
            for (unsigned char i_4 = 0; i_4 < 12; i_4 += 1) /* same iter space */
            {
                var_20 = ((/* implicit */int) max((var_20), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_7) : (((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) ((unsigned char) var_15)))))));
                /* LoopSeq 2 */
                for (int i_5 = 0; i_5 < 12; i_5 += 3) 
                {
                    arr_19 [i_0] [i_1 + 3] [(unsigned char)1] [i_1] [i_1 + 2] = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) var_15)) ? (var_10) : (var_7))));
                    var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_9)) : (var_4)))) ? (((/* implicit */int) ((var_4) != (((/* implicit */int) var_13))))) : (((/* implicit */int) var_0))))) ? (((int) var_13)) : (((/* implicit */int) ((signed char) max((((/* implicit */int) var_2)), (var_12))))));
                }
                for (unsigned char i_6 = 0; i_6 < 12; i_6 += 1) 
                {
                    var_22 += ((/* implicit */unsigned char) ((((/* implicit */int) max((((var_13) || (((/* implicit */_Bool) var_0)))), (var_13)))) * (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_11)) : (var_10)))))));
                    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) var_9))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_4) : (((/* implicit */int) var_13))))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_0)))) : (((((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_10)))) ? (((((/* implicit */_Bool) var_8)) ? (var_7) : (((/* implicit */int) var_5)))) : (((int) var_9))))));
                    var_24 = ((((/* implicit */_Bool) max((((/* implicit */int) var_0)), (var_10)))) ? (((int) ((((/* implicit */_Bool) var_5)) ? (var_4) : (((/* implicit */int) var_2))))) : (((/* implicit */int) ((unsigned char) var_3))));
                }
                /* LoopSeq 1 */
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                {
                    arr_26 [i_1] [i_4] [i_0] = ((/* implicit */long long int) min((((((/* implicit */_Bool) var_3)) ? (var_15) : (var_15))), (((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (var_13))))));
                    var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_14))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_8))))) : (((((/* implicit */_Bool) var_1)) ? (var_15) : (((/* implicit */int) var_11)))))))));
                    var_26 = ((/* implicit */int) max((var_26), (((((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_12))))) * (((/* implicit */int) ((unsigned char) var_3)))))));
                    var_27 -= ((((/* implicit */_Bool) ((unsigned char) max((var_6), (var_15))))) ? (((((/* implicit */_Bool) -9223371487098961920LL)) ? (((/* implicit */int) (unsigned char)9)) : (((/* implicit */int) (unsigned char)224)))) : (((/* implicit */int) ((_Bool) var_5))));
                    /* LoopSeq 1 */
                    for (long long int i_8 = 1; i_8 < 10; i_8 += 4) 
                    {
                        var_28 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_15) : (var_7)))) ? (((((/* implicit */int) var_1)) - (var_15))) : (((/* implicit */int) ((unsigned char) var_4)))));
                        var_29 = ((min((((/* implicit */int) var_11)), (((((/* implicit */int) var_14)) << (((((((/* implicit */int) var_5)) + (88))) - (12))))))) + (((((/* implicit */int) var_2)) << (((((int) -2594065073579347730LL)) - (1024340203))))));
                    }
                }
                var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_6) : (((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) var_7)) ? (max((((/* implicit */int) var_3)), (var_15))) : (((/* implicit */int) var_5)))) : (((int) var_1))));
            }
            arr_30 [i_0] [i_0] = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_0)) : (var_7))));
            /* LoopNest 2 */
            for (unsigned char i_9 = 3; i_9 < 9; i_9 += 1) 
            {
                for (unsigned char i_10 = 2; i_10 < 11; i_10 += 3) 
                {
                    {
                        arr_37 [(unsigned char)0] [(unsigned char)0] [(unsigned char)0] [i_0] [i_10] = ((((/* implicit */_Bool) ((int) var_12))) ? (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_14)) ? (var_7) : (((/* implicit */int) var_8)))))) : (var_15));
                        var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_8)) ? (var_6) : (((/* implicit */int) var_0)))) + (((int) var_11))))) ? (((((/* implicit */_Bool) var_11)) ? (var_12) : (((/* implicit */int) var_9)))) : (((var_7) * (((/* implicit */int) ((_Bool) (unsigned short)0)))))));
                        var_32 -= min((((int) var_0)), (max((-825179099), (((/* implicit */int) (_Bool)1)))));
                    }
                } 
            } 
        }
        /* LoopSeq 1 */
        for (int i_11 = 0; i_11 < 12; i_11 += 4) 
        {
            /* LoopSeq 2 */
            for (signed char i_12 = 0; i_12 < 12; i_12 += 2) 
            {
                var_33 = ((/* implicit */signed char) ((unsigned char) min((var_4), (((var_12) / (((/* implicit */int) var_0)))))));
                /* LoopSeq 2 */
                for (unsigned char i_13 = 0; i_13 < 12; i_13 += 1) /* same iter space */
                {
                    var_34 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_9)) : (var_7)))) ? (((((/* implicit */_Bool) var_3)) ? (var_12) : (((/* implicit */int) var_13)))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_13)) : (var_12))));
                    var_35 -= ((/* implicit */int) ((_Bool) var_9));
                    var_36 = ((/* implicit */_Bool) ((unsigned char) var_5));
                }
                /* vectorizable */
                for (unsigned char i_14 = 0; i_14 < 12; i_14 += 1) /* same iter space */
                {
                    arr_49 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) var_1))) ? (((/* implicit */int) ((_Bool) var_14))) : (((/* implicit */int) var_11))));
                    var_37 = ((/* implicit */long long int) ((var_13) ? (((/* implicit */int) ((unsigned char) var_4))) : (((int) var_13))));
                    arr_50 [i_0] [i_0] [i_11] [i_11] [i_12] [i_14] = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_14)) : (var_6))));
                }
            }
            for (int i_15 = 2; i_15 < 10; i_15 += 3) 
            {
                var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) var_13))) ? (((/* implicit */int) ((var_7) < (var_10)))) : (min((((/* implicit */int) var_9)), (max((((/* implicit */int) var_1)), (var_12)))))));
                arr_55 [i_0] [i_0] [(unsigned char)8] = ((/* implicit */signed char) min(((((_Bool)1) ? (((/* implicit */int) (unsigned short)51414)) : (((/* implicit */int) (_Bool)1)))), (((int) var_6))));
                arr_56 [i_15] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */int) ((((int) 68585259008LL)) < (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_11))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_2))))) ? (((var_13) ? (var_6) : (var_6))) : (((int) var_14))))));
                arr_57 [i_0] [i_11] = ((int) var_0);
                arr_58 [i_0] [i_0] [i_15] = ((/* implicit */int) ((signed char) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((int) (_Bool)1)))));
            }
            var_39 = ((/* implicit */int) min((var_39), (((((/* implicit */_Bool) ((unsigned char) ((int) var_13)))) ? (((/* implicit */int) ((unsigned short) max(((signed char)0), (((/* implicit */signed char) (_Bool)1)))))) : (((/* implicit */int) ((unsigned char) var_15)))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (long long int i_16 = 0; i_16 < 12; i_16 += 3) 
            {
                var_40 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) var_14))) ? (((var_2) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_13)))) : (((/* implicit */int) var_5))));
                /* LoopNest 2 */
                for (unsigned short i_17 = 3; i_17 < 10; i_17 += 1) 
                {
                    for (unsigned char i_18 = 1; i_18 < 11; i_18 += 1) 
                    {
                        {
                            var_41 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_7) - (((/* implicit */int) var_0))))) ? (var_12) : (((/* implicit */int) var_9))));
                            var_42 = ((int) 2147483647);
                        }
                    } 
                } 
            }
            for (long long int i_19 = 0; i_19 < 12; i_19 += 1) 
            {
                var_43 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) var_0)), (var_10)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_0)) : (var_12))))));
                arr_69 [i_0] [i_0] [i_0] [(unsigned char)1] = ((/* implicit */int) var_5);
                /* LoopSeq 4 */
                for (int i_20 = 4; i_20 < 11; i_20 += 4) /* same iter space */
                {
                    var_44 = ((((/* implicit */int) ((unsigned char) var_9))) - (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_0)) : (var_15))));
                    var_45 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_8)) : (var_6))) + (((var_2) ? (var_12) : (var_12)))))) ? (((((var_2) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8)))) << (((((((((/* implicit */_Bool) var_10)) ? (var_6) : (((/* implicit */int) var_1)))) + (1740303169))) - (21))))) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (1048448)))));
                    var_46 = ((/* implicit */int) max((var_46), (min((max((((/* implicit */int) (_Bool)1)), (399691786))), (((((/* implicit */_Bool) var_3)) ? (var_6) : (((/* implicit */int) var_1))))))));
                }
                for (int i_21 = 4; i_21 < 11; i_21 += 4) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (_Bool i_22 = 1; i_22 < 1; i_22 += 1) 
                    {
                        arr_77 [i_0] [i_0] [i_0] [i_19] [i_0] [i_0] [i_22] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) ((_Bool) var_12)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((int) var_10))))) : (((((/* implicit */_Bool) (unsigned char)13)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-4625792735949504267LL)))));
                        var_47 = var_11;
                        var_48 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) var_2))) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_5))))));
                        var_49 = ((((/* implicit */_Bool) ((signed char) var_6))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_3)))) : (((/* implicit */int) var_1)));
                    }
                    for (int i_23 = 0; i_23 < 12; i_23 += 2) 
                    {
                        arr_80 [i_0] [i_0] [i_0] [i_0] [1] = var_7;
                        var_50 = ((/* implicit */unsigned char) min((var_50), (((/* implicit */unsigned char) ((signed char) ((int) (_Bool)1))))));
                        arr_81 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((((/* implicit */int) var_1)) + (2147483647))) << (((((/* implicit */int) var_14)) - (63426))))), (((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (var_4) : (((/* implicit */int) var_8))))) ? (((/* implicit */int) var_5)) : (var_4))) : (((((/* implicit */int) var_13)) - (((((/* implicit */int) var_8)) / (var_10)))))));
                    }
                    var_51 = ((/* implicit */unsigned char) ((int) max((((/* implicit */int) var_0)), (((var_4) >> (((((/* implicit */int) var_1)) + (87))))))));
                }
                for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                {
                    var_52 = ((/* implicit */int) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((unsigned char) var_14))) : (var_10))) <= (((/* implicit */int) ((unsigned char) var_15)))));
                    var_53 = ((/* implicit */int) max(((_Bool)1), ((_Bool)1)));
                    /* LoopSeq 2 */
                    for (unsigned char i_25 = 0; i_25 < 12; i_25 += 3) /* same iter space */
                    {
                        var_54 = ((/* implicit */_Bool) (((((_Bool)1) && ((_Bool)1))) ? (((((/* implicit */_Bool) (unsigned short)19106)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)131)))) : (((/* implicit */int) (unsigned char)19))));
                        var_55 += ((/* implicit */unsigned short) ((signed char) (unsigned char)125));
                    }
                    for (unsigned char i_26 = 0; i_26 < 12; i_26 += 3) /* same iter space */
                    {
                        arr_91 [i_0] [i_0] [i_0] [i_24] [i_26] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_0))))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (((long long int) (unsigned char)215))))) ? (((((/* implicit */_Bool) var_8)) ? (var_10) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_2)))))) : (((/* implicit */int) ((var_10) <= (((/* implicit */int) var_5)))))));
                        var_56 = ((/* implicit */_Bool) max((var_56), (((/* implicit */_Bool) ((unsigned char) min((var_7), (var_10)))))));
                    }
                }
                for (unsigned short i_27 = 1; i_27 < 11; i_27 += 1) 
                {
                    var_57 = ((unsigned char) ((var_4) - (((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_6)))))));
                    var_58 = ((int) var_10);
                }
            }
        }
    }
    for (unsigned char i_28 = 0; i_28 < 11; i_28 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_29 = 0; i_29 < 11; i_29 += 4) 
        {
            for (unsigned char i_30 = 1; i_30 < 7; i_30 += 4) 
            {
                {
                    var_59 = ((min((((/* implicit */int) var_11)), (((var_2) ? (((/* implicit */int) var_2)) : (var_6))))) < (((/* implicit */int) var_14)));
                    arr_102 [i_30] [i_29] [i_29] = ((((/* implicit */_Bool) min((((var_7) & (((/* implicit */int) var_13)))), (((/* implicit */int) var_1))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_2) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0))))) ? (((int) var_0)) : (((((/* implicit */_Bool) (unsigned char)124)) ? (((/* implicit */int) (unsigned short)8458)) : (6291456)))))));
                }
            } 
        } 
        arr_103 [i_28] [i_28] = min((((((/* implicit */int) var_9)) ^ (((/* implicit */int) var_1)))), (((/* implicit */int) ((unsigned short) var_2))));
    }
    /* vectorizable */
    for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
    {
        var_60 = ((/* implicit */_Bool) var_14);
        var_61 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_4))));
    }
    for (unsigned char i_32 = 0; i_32 < 25; i_32 += 2) 
    {
        var_62 = ((/* implicit */unsigned char) min((var_62), (((/* implicit */unsigned char) ((((((((/* implicit */_Bool) var_12)) ? (var_10) : (((/* implicit */int) var_9)))) << (((((int) var_7)) - (722943333))))) | (((((/* implicit */_Bool) var_7)) ? (var_7) : (((/* implicit */int) var_11)))))))));
        var_63 = ((/* implicit */int) ((signed char) ((((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_9)))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_8)))));
        var_64 = ((((/* implicit */_Bool) ((unsigned char) -399691787))) ? (((/* implicit */int) ((unsigned char) var_8))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_14)))));
    }
    var_65 = ((/* implicit */int) min((var_65), (min((var_4), (((var_2) ? (((int) var_15)) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_9))))))))));
    var_66 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((signed char) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (unsigned short)10)))))) : (((/* implicit */int) (signed char)48))));
}
