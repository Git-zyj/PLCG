/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11526
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            var_18 = ((/* implicit */long long int) (unsigned short)2394);
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_3 = 0; i_3 < 15; i_3 += 1) 
                {
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */short) var_9);
                    var_19 = ((/* implicit */signed char) ((int) (unsigned short)2394));
                    var_20 = ((/* implicit */unsigned short) arr_7 [i_0] [i_0] [i_0]);
                }
                for (unsigned short i_4 = 0; i_4 < 15; i_4 += 2) 
                {
                    var_21 = ((/* implicit */long long int) ((((/* implicit */int) var_11)) != (arr_7 [i_1] [i_2] [i_4])));
                    var_22 += ((/* implicit */long long int) ((arr_5 [i_4]) * (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
                    var_23 = ((/* implicit */short) arr_7 [i_0] [i_0] [i_0]);
                }
                var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) && (((/* implicit */_Bool) (unsigned short)63141))));
            }
        }
        var_25 &= ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) (unsigned short)2394)) || (((/* implicit */_Bool) arr_4 [i_0] [i_0])))));
    }
    for (int i_5 = 0; i_5 < 10; i_5 += 2) 
    {
        var_26 = ((/* implicit */long long int) var_11);
        arr_15 [i_5] = ((/* implicit */unsigned short) max((((-4011846379933765020LL) | (max((var_12), (arr_3 [i_5] [i_5] [i_5]))))), (max((max((4011846379933765020LL), (((/* implicit */long long int) var_7)))), (((/* implicit */long long int) arr_7 [i_5] [i_5] [i_5]))))));
        arr_16 [i_5] = ((/* implicit */signed char) max((var_5), (((-4011846379933765020LL) ^ (((((/* implicit */_Bool) arr_9 [i_5] [i_5] [i_5] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_12)))))));
    }
    /* vectorizable */
    for (unsigned char i_6 = 0; i_6 < 12; i_6 += 3) 
    {
        var_27 = ((((/* implicit */_Bool) ((unsigned char) 3871923668080795838LL))) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_6] [i_6] [i_6] [i_6] [i_6]))) : (((((/* implicit */_Bool) 4011846379933765020LL)) ? (((/* implicit */long long int) arr_5 [i_6])) : (-1LL))));
        var_28 = ((long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_10))));
    }
    /* LoopSeq 2 */
    for (long long int i_7 = 0; i_7 < 10; i_7 += 3) 
    {
        var_29 = ((/* implicit */unsigned char) (unsigned short)8614);
        /* LoopNest 2 */
        for (long long int i_8 = 0; i_8 < 10; i_8 += 2) 
        {
            for (long long int i_9 = 0; i_9 < 10; i_9 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_10 = 0; i_10 < 10; i_10 += 2) 
                    {
                        var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) (unsigned char)0))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_11 = 0; i_11 < 10; i_11 += 3) 
                        {
                            var_31 += ((/* implicit */int) ((((/* implicit */_Bool) -4011846379933765020LL)) || (((/* implicit */_Bool) 0LL))));
                            var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-2762)) ? (arr_11 [i_7] [i_7] [i_7] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15082)))));
                            var_33 = ((/* implicit */long long int) arr_21 [i_7]);
                        }
                    }
                    /* LoopSeq 3 */
                    for (signed char i_12 = 0; i_12 < 10; i_12 += 2) 
                    {
                        var_34 = ((/* implicit */int) var_8);
                        arr_35 [i_7] [i_8] [i_9] [i_12] [i_12] = ((/* implicit */long long int) ((((/* implicit */int) ((signed char) var_9))) << (((-7505802564255601023LL) + (7505802564255601036LL)))));
                        arr_36 [i_7] [i_8] [i_9] [i_12] = ((long long int) ((short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)33099))) : (var_12))));
                        var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_29 [i_7] [i_7] [i_9] [i_12] [i_12]))) ? (((arr_13 [i_7] [i_7]) ^ (((/* implicit */int) (short)-29254)))) : (((((/* implicit */int) var_4)) ^ (((/* implicit */int) (short)29253))))))) ? (((var_6) + (((long long int) (signed char)98)))) : (((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) -1672731342439723826LL))))), ((~(((/* implicit */int) var_11)))))))));
                        var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) ((((long long int) arr_23 [i_7] [i_8] [i_12])) < (var_3))))));
                    }
                    for (signed char i_13 = 0; i_13 < 10; i_13 += 2) 
                    {
                        arr_39 [i_7] [i_7] = ((((((/* implicit */_Bool) max((var_3), (((/* implicit */long long int) var_8))))) || (((/* implicit */_Bool) arr_4 [i_7] [i_7])))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)29253)));
                        arr_40 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (short)15789))) - (max((arr_11 [i_8] [i_8] [i_9] [i_8]), (((/* implicit */long long int) -585284638))))));
                        var_37 = ((/* implicit */unsigned char) var_17);
                        var_38 = 0LL;
                        arr_41 [i_7] [i_8] [i_9] [i_9] = ((((((/* implicit */_Bool) var_17)) || (((/* implicit */_Bool) (unsigned char)255)))) ? (((((/* implicit */_Bool) 0LL)) ? (var_5) : (var_6))) : (((/* implicit */long long int) ((/* implicit */int) (short)-2762))));
                    }
                    for (long long int i_14 = 0; i_14 < 10; i_14 += 1) 
                    {
                        var_39 ^= max((((long long int) arr_22 [i_8])), (((/* implicit */long long int) ((int) 274877841408LL))));
                        var_40 -= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)186)) % (((/* implicit */int) var_13))))) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) < (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_7] [i_8] [i_9] [i_14] [i_7])))));
                    }
                    arr_44 [i_7] [i_8] [i_9] [i_9] = ((/* implicit */int) var_14);
                }
            } 
        } 
        arr_45 [i_7] = max((((/* implicit */long long int) arr_7 [i_7] [i_7] [i_7])), (max((-5181041988340012230LL), (((/* implicit */long long int) arr_7 [i_7] [i_7] [i_7])))));
    }
    for (short i_15 = 0; i_15 < 18; i_15 += 4) 
    {
        /* LoopNest 3 */
        for (short i_16 = 0; i_16 < 18; i_16 += 3) 
        {
            for (short i_17 = 0; i_17 < 18; i_17 += 2) 
            {
                for (long long int i_18 = 0; i_18 < 18; i_18 += 2) 
                {
                    {
                        arr_55 [i_15] [i_15] [i_15] [i_15] [i_15] = ((((/* implicit */_Bool) arr_53 [i_15] [i_16] [i_15] [i_18] [i_15])) ? (((((/* implicit */_Bool) ((-4011846379933765020LL) - (((/* implicit */long long int) ((/* implicit */int) var_9)))))) ? (max((arr_51 [i_15] [i_15] [i_15] [i_18]), (((/* implicit */long long int) var_9)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) -6659830889762802656LL)) ? (((/* implicit */int) (unsigned short)57545)) : (((/* implicit */int) var_15))))))) : (((/* implicit */long long int) ((/* implicit */int) ((var_6) == (((/* implicit */long long int) ((/* implicit */int) arr_52 [i_15] [i_16] [i_17] [i_18]))))))));
                        arr_56 [i_18] [i_17] [i_16] [i_15] = ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) arr_48 [i_16] [i_17] [i_16])) ? (((/* implicit */long long int) var_17)) : (arr_48 [i_16] [i_17] [i_16]))) : (((arr_48 [i_15] [i_17] [i_18]) ^ (var_3))));
                        var_41 = ((((/* implicit */_Bool) (signed char)-31)) ? (arr_50 [i_18] [i_17] [i_16]) : (((((/* implicit */_Bool) arr_51 [i_18] [i_17] [i_16] [i_15])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_50 [i_15] [i_16] [i_17]))));
                        var_42 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) var_13)), ((-2147483647 - 1))))) ? (((/* implicit */int) max((arr_49 [i_16]), (arr_49 [i_15])))) : (((/* implicit */int) ((unsigned char) arr_49 [i_16])))));
                        var_43 = max((((/* implicit */long long int) (!(((/* implicit */_Bool) (short)-29254))))), (max((((/* implicit */long long int) (signed char)-31)), (max((-4011846379933765021LL), (((/* implicit */long long int) arr_49 [i_15])))))));
                    }
                } 
            } 
        } 
        arr_57 [i_15] [i_15] = ((/* implicit */long long int) ((((/* implicit */int) (signed char)-1)) + (((/* implicit */int) var_8))));
        /* LoopSeq 1 */
        for (long long int i_19 = 0; i_19 < 18; i_19 += 2) 
        {
            var_44 = max(((((!(((/* implicit */_Bool) arr_59 [i_15])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (signed char)-44)) : (((/* implicit */int) arr_52 [i_15] [i_15] [i_15] [i_15]))))) : (var_2))), (((((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) arr_48 [i_19] [i_15] [i_15])))) ? (-6192793668907953100LL) : (((((/* implicit */_Bool) var_3)) ? (274877841408LL) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))));
            arr_60 [i_15] [i_15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((max((-3871562988236688575LL), (((/* implicit */long long int) var_9)))), (((((/* implicit */_Bool) (unsigned char)204)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-77))) : (var_5)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((var_17), (((/* implicit */unsigned int) (unsigned char)70))))))))) : ((-9223372036854775807LL - 1LL))));
            /* LoopSeq 4 */
            for (long long int i_20 = 0; i_20 < 18; i_20 += 2) 
            {
                /* LoopSeq 1 */
                for (long long int i_21 = 0; i_21 < 18; i_21 += 3) 
                {
                    arr_67 [i_15] [i_21] [i_15] [i_21] = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) arr_46 [i_15] [i_19])) ? (((((/* implicit */long long int) ((/* implicit */int) var_7))) & (var_12))) : (((long long int) (signed char)-59)))));
                    var_45 = ((/* implicit */long long int) max(((short)-29253), (((/* implicit */short) ((signed char) var_11)))));
                }
                /* LoopNest 2 */
                for (unsigned int i_22 = 0; i_22 < 18; i_22 += 2) 
                {
                    for (long long int i_23 = 0; i_23 < 18; i_23 += 3) 
                    {
                        {
                            arr_72 [i_23] [i_15] [i_19] [i_15] [i_19] [i_15] [i_15] = ((/* implicit */signed char) var_6);
                            var_46 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-9970)) ? (((/* implicit */int) (short)29253)) : (-314901697)))) ? (var_12) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_46 [i_22] [i_23])) : (((/* implicit */int) var_9))))))))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (long long int i_24 = 0; i_24 < 18; i_24 += 1) 
            {
                arr_76 [i_15] = ((/* implicit */int) arr_48 [i_15] [i_19] [i_15]);
                var_47 = ((/* implicit */signed char) min((var_47), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)63109))) / (arr_75 [i_24] [i_24] [i_24] [i_24]))))));
                /* LoopNest 2 */
                for (long long int i_25 = 0; i_25 < 18; i_25 += 1) 
                {
                    for (long long int i_26 = 0; i_26 < 18; i_26 += 2) 
                    {
                        {
                            arr_82 [i_25] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -4011846379933765021LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_16)))) ? (((long long int) 4011846379933765020LL)) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_78 [i_15] [i_24] [i_25] [i_26])) : (((/* implicit */int) var_13)))))));
                            var_48 = ((((((/* implicit */_Bool) var_9)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) var_13))))) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))));
                        }
                    } 
                } 
                var_49 = ((/* implicit */long long int) max((var_49), (((/* implicit */long long int) arr_64 [i_15] [i_19] [i_15] [i_19]))));
            }
            /* vectorizable */
            for (long long int i_27 = 0; i_27 < 18; i_27 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (signed char i_28 = 0; i_28 < 18; i_28 += 1) 
                {
                    for (long long int i_29 = 0; i_29 < 18; i_29 += 2) 
                    {
                        {
                            arr_92 [i_28] = ((((/* implicit */_Bool) arr_91 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15] [i_15])) ? ((~(4011846379933765021LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_81 [i_15] [i_15] [i_15] [i_15] [i_15]))));
                            arr_93 [i_29] [i_28] [i_28] [i_15] = ((/* implicit */signed char) (-(-1190204716255016842LL)));
                            arr_94 [i_15] [i_19] [i_27] [i_28] [i_29] = ((/* implicit */unsigned char) ((unsigned short) (!(((/* implicit */_Bool) var_14)))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (signed char i_30 = 0; i_30 < 18; i_30 += 3) 
                {
                    arr_97 [i_27] = ((((/* implicit */_Bool) var_9)) ? (var_6) : (((long long int) -4011846379933765020LL)));
                    arr_98 [i_30] [i_27] [i_19] [i_19] [i_15] = ((/* implicit */short) ((((/* implicit */_Bool) arr_69 [i_15] [i_19] [i_27] [i_30] [i_30] [i_27])) ? (((/* implicit */int) (signed char)2)) : (((/* implicit */int) arr_69 [i_30] [i_27] [i_27] [i_27] [i_19] [i_15]))));
                    arr_99 [i_19] [i_15] |= ((((/* implicit */_Bool) arr_63 [i_15] [i_19] [i_27] [i_30])) ? (((/* implicit */long long int) 524272)) : (arr_63 [i_15] [i_15] [i_27] [i_30]));
                }
            }
            for (long long int i_31 = 0; i_31 < 18; i_31 += 2) /* same iter space */
            {
                /* LoopSeq 1 */
                for (long long int i_32 = 0; i_32 < 18; i_32 += 2) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_33 = 0; i_33 < 18; i_33 += 2) 
                    {
                        var_50 = ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_6))) | (((/* implicit */long long int) ((/* implicit */int) (signed char)46))));
                        var_51 += ((/* implicit */long long int) (+(((/* implicit */int) arr_70 [i_19]))));
                        arr_107 [i_15] [i_19] [i_15] [i_32] [i_32] [i_33] = ((/* implicit */long long int) var_13);
                    }
                    arr_108 [i_15] [i_31] [i_31] [i_32] [i_19] = ((/* implicit */signed char) var_0);
                    arr_109 [i_31] = ((/* implicit */long long int) (unsigned char)186);
                    arr_110 [i_15] [i_15] [i_19] [i_31] [i_32] [i_32] = ((/* implicit */long long int) (-((+(((/* implicit */int) arr_105 [i_15] [i_19] [i_19] [i_32]))))));
                    arr_111 [i_32] [i_31] [i_19] [i_15] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) arr_80 [i_32] [i_32] [i_32] [i_31] [i_19] [i_32] [i_19])), (((int) 9223372036854775807LL))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-77))) : (((((/* implicit */_Bool) arr_59 [i_31])) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_15)))) : (arr_101 [i_15] [i_31] [i_15])))));
                }
                arr_112 [i_31] [i_15] [i_15] = ((/* implicit */long long int) max((max((((/* implicit */short) arr_53 [i_15] [i_15] [i_15] [i_15] [i_15])), ((short)-17760))), ((short)-29254)));
                var_52 = ((/* implicit */signed char) max((var_52), (((/* implicit */signed char) ((((((/* implicit */int) max(((unsigned short)34702), (((/* implicit */unsigned short) var_1))))) + (((/* implicit */int) (unsigned short)51587)))) < (((/* implicit */int) (signed char)76)))))));
            }
        }
    }
    /* LoopNest 2 */
    for (long long int i_34 = 0; i_34 < 14; i_34 += 2) 
    {
        for (signed char i_35 = 0; i_35 < 14; i_35 += 2) 
        {
            {
                var_53 = ((/* implicit */signed char) max((var_53), (((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) var_1))) && (((/* implicit */_Bool) arr_46 [i_34] [i_35])))))));
                var_54 = ((/* implicit */long long int) min((var_54), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)19871)) && (((/* implicit */_Bool) ((long long int) var_9))))))));
                /* LoopNest 3 */
                for (signed char i_36 = 0; i_36 < 14; i_36 += 2) 
                {
                    for (int i_37 = 0; i_37 < 14; i_37 += 1) 
                    {
                        for (signed char i_38 = 0; i_38 < 14; i_38 += 3) 
                        {
                            {
                                var_55 = ((/* implicit */long long int) min((var_55), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned short) 630168519))))))));
                                var_56 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) (unsigned short)14026))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_39 = 0; i_39 < 20; i_39 += 1) 
    {
        for (signed char i_40 = 0; i_40 < 20; i_40 += 2) 
        {
            for (long long int i_41 = 0; i_41 < 20; i_41 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_42 = 0; i_42 < 20; i_42 += 2) 
                    {
                        for (long long int i_43 = 0; i_43 < 20; i_43 += 2) 
                        {
                            {
                                arr_140 [i_39] [i_40] [i_41] [i_41] [i_43] [i_39] = 1682724254;
                                var_57 ^= ((/* implicit */long long int) max((((/* implicit */unsigned int) ((max((8588886016LL), (arr_136 [i_39] [i_40] [i_42] [i_42]))) > (((/* implicit */long long int) max((1565620760), (630168519))))))), (var_17)));
                                var_58 = ((/* implicit */long long int) ((max((arr_128 [i_39] [i_39] [i_39]), (((/* implicit */unsigned int) max((((/* implicit */short) var_8)), ((short)29253)))))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_0)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)34702)) ? (var_5) : (var_12))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_44 = 0; i_44 < 20; i_44 += 2) 
                    {
                        for (unsigned short i_45 = 0; i_45 < 20; i_45 += 1) 
                        {
                            {
                                arr_146 [i_39] [i_40] = var_5;
                                arr_147 [i_45] [i_44] [i_40] [i_40] [i_39] = ((/* implicit */short) (-(max((((/* implicit */long long int) var_10)), (var_3)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
