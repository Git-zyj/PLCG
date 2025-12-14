/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180276
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 8; i_1 += 2) 
        {
            for (unsigned char i_2 = 3; i_2 < 10; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                arr_12 [i_2] [i_2] [(unsigned char)10] [(unsigned char)10] [i_2] = ((/* implicit */signed char) (_Bool)0);
                                var_10 = ((/* implicit */unsigned char) max((((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) 2252166747U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)139)))))), (var_2)));
                            }
                        } 
                    } 
                    var_11 |= arr_0 [i_2];
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_5 = 1; i_5 < 22; i_5 += 4) 
    {
        arr_15 [i_5] [i_5] |= ((/* implicit */_Bool) var_7);
        /* LoopSeq 1 */
        for (unsigned int i_6 = 2; i_6 < 21; i_6 += 4) 
        {
            var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((short) -148258400572978013LL))))))));
            /* LoopNest 2 */
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
            {
                for (signed char i_8 = 1; i_8 < 22; i_8 += 2) 
                {
                    {
                        var_13 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_5)))))));
                        var_14 *= ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_4)))) ? (((/* implicit */int) ((_Bool) 745066592U))) : (((int) arr_22 [i_5] [i_6 + 3] [i_7] [i_8 - 1]))));
                        var_15 = ((/* implicit */unsigned short) (_Bool)0);
                    }
                } 
            } 
        }
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 24; i_9 += 4) 
        {
            for (short i_10 = 0; i_10 < 24; i_10 += 4) 
            {
                {
                    arr_30 [i_5] [i_5] [(signed char)0] [i_5] |= ((/* implicit */signed char) var_4);
                    /* LoopNest 2 */
                    for (unsigned short i_11 = 0; i_11 < 24; i_11 += 2) 
                    {
                        for (unsigned int i_12 = 0; i_12 < 24; i_12 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) / (var_4)))) || (((/* implicit */_Bool) var_7))));
                                var_17 = ((/* implicit */_Bool) ((((/* implicit */int) arr_20 [i_5])) | (((/* implicit */int) ((var_6) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_5]))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_13 = 1; i_13 < 22; i_13 += 4) 
                    {
                        for (unsigned long long int i_14 = 0; i_14 < 24; i_14 += 3) 
                        {
                            {
                                var_18 *= ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_38 [i_13 + 1] [i_13 - 1] [i_13] [i_13] [i_13 - 1])) : (((/* implicit */int) var_5))));
                                arr_40 [i_5] [i_5] [i_10] [i_13] [i_5] [(unsigned short)19] [i_14] = ((/* implicit */short) ((unsigned int) (~(((/* implicit */int) arr_38 [i_14] [i_13] [i_10] [i_9] [i_5])))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 3 */
        for (short i_15 = 0; i_15 < 24; i_15 += 1) 
        {
            var_19 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) & (var_3)));
            /* LoopNest 3 */
            for (long long int i_16 = 0; i_16 < 24; i_16 += 1) 
            {
                for (signed char i_17 = 0; i_17 < 24; i_17 += 2) 
                {
                    for (long long int i_18 = 0; i_18 < 24; i_18 += 2) 
                    {
                        {
                            var_20 ^= ((/* implicit */signed char) ((2665320091U) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)89)))));
                            var_21 = ((/* implicit */long long int) ((unsigned int) ((unsigned short) var_4)));
                            arr_50 [8U] [i_15] [i_16] [i_17] [(short)0] [i_15] [i_17] = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) var_2)) ? (2313877391U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))));
                            arr_51 [i_5] [i_5] [i_16] [i_17] [i_15] = ((/* implicit */signed char) arr_26 [(signed char)11] [i_5] [i_5 + 2]);
                            arr_52 [i_15] = ((/* implicit */unsigned short) var_7);
                        }
                    } 
                } 
            } 
        }
        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned char i_20 = 4; i_20 < 23; i_20 += 1) 
            {
                for (signed char i_21 = 1; i_21 < 23; i_21 += 4) 
                {
                    for (short i_22 = 1; i_22 < 21; i_22 += 1) 
                    {
                        {
                            var_22 *= ((/* implicit */_Bool) var_4);
                            var_23 = (!(((/* implicit */_Bool) var_9)));
                            arr_64 [i_22] [(_Bool)1] [i_21] [i_20] [i_5] [i_5] [i_5] = arr_26 [i_5 + 2] [i_5 + 2] [i_20 - 1];
                            var_24 = ((/* implicit */int) ((_Bool) arr_39 [i_20 - 4] [i_20 - 4] [i_20] [i_20] [i_20] [i_20] [i_20]));
                        }
                    } 
                } 
            } 
            var_25 |= ((((/* implicit */_Bool) var_8)) ? (arr_44 [i_19] [i_5] [i_5 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_5 + 2]))));
        }
        for (int i_23 = 3; i_23 < 21; i_23 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned int i_24 = 2; i_24 < 21; i_24 += 2) 
            {
                for (signed char i_25 = 1; i_25 < 21; i_25 += 2) 
                {
                    for (unsigned int i_26 = 0; i_26 < 24; i_26 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned char) ((long long int) arr_68 [i_5]));
                            var_27 = ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_9)) : (340349205315257380ULL))) != (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)116))))));
                            var_28 = ((/* implicit */unsigned long long int) ((((var_7) >> (((((/* implicit */int) var_0)) - (20643))))) & (var_4)));
                            arr_75 [i_5] [i_5] [i_24] [i_24] [i_25] [i_26] |= ((/* implicit */short) ((unsigned char) arr_36 [i_25 + 3] [i_24 + 1] [i_26] [i_23 - 3] [i_25 + 3]));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (long long int i_27 = 0; i_27 < 24; i_27 += 1) 
            {
                arr_78 [i_5] [i_23] [i_27] = ((/* implicit */unsigned long long int) ((signed char) arr_74 [i_23] [i_23 - 1]));
                /* LoopSeq 1 */
                for (unsigned char i_28 = 0; i_28 < 24; i_28 += 1) 
                {
                    /* LoopSeq 1 */
                    for (int i_29 = 0; i_29 < 24; i_29 += 1) 
                    {
                        arr_87 [i_29] [(_Bool)1] [i_27] [i_23] [i_5] = ((/* implicit */short) arr_66 [i_29] [i_23 + 3] [i_5]);
                        var_29 = ((/* implicit */short) ((signed char) arr_58 [i_5] [i_23] [i_5 + 2] [i_28] [i_23 - 3]));
                    }
                    var_30 = ((/* implicit */short) ((((/* implicit */_Bool) arr_61 [i_28] [i_28] [i_27] [i_23] [i_23] [i_5])) ? (((/* implicit */int) arr_61 [i_5] [(unsigned short)20] [i_27] [i_28] [i_28] [i_27])) : (((/* implicit */int) arr_61 [i_5 - 1] [i_5 - 1] [i_27] [i_5 - 1] [i_28] [i_5 - 1]))));
                    var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(var_4)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_6)));
                }
            }
        }
        /* LoopNest 2 */
        for (short i_30 = 1; i_30 < 21; i_30 += 3) 
        {
            for (short i_31 = 2; i_31 < 22; i_31 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_32 = 0; i_32 < 1; i_32 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_33 = 3; i_33 < 21; i_33 += 1) 
                        {
                            var_32 |= ((/* implicit */short) ((var_1) ? (((/* implicit */int) arr_77 [i_31 - 2] [i_30 + 2] [i_5 - 1])) : (((/* implicit */int) arr_49 [i_5] [i_31 + 1] [i_31] [i_32] [i_5 + 1]))));
                            var_33 *= ((/* implicit */unsigned long long int) ((unsigned char) var_2));
                        }
                        for (_Bool i_34 = 0; i_34 < 1; i_34 += 1) 
                        {
                            var_34 *= ((/* implicit */short) arr_95 [i_5 - 1]);
                            var_35 = ((/* implicit */long long int) max((var_35), (((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) (short)-13362)) && (((/* implicit */_Bool) arr_23 [i_5] [i_30] [i_32] [i_34]))))))))));
                        }
                        var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_35 [i_5 + 1] [i_5 - 1] [i_30 - 1] [i_30 + 3] [i_30 + 3] [i_31 - 1])))))));
                        /* LoopSeq 1 */
                        for (int i_35 = 0; i_35 < 24; i_35 += 1) 
                        {
                            var_37 *= ((/* implicit */_Bool) ((var_1) ? (arr_70 [i_5 + 1] [i_5] [i_5] [i_5 + 1] [i_30 + 2]) : (((/* implicit */int) arr_98 [i_5] [i_5 + 1] [i_30 + 1] [i_31 - 1]))));
                            arr_104 [i_5] [2U] [i_30] [i_30] [i_31] [i_31] [(unsigned char)22] |= ((/* implicit */signed char) (~(((/* implicit */int) var_1))));
                            var_38 = ((/* implicit */signed char) ((((/* implicit */_Bool) -5239172121378789186LL)) ? (((var_4) & (((/* implicit */int) var_1)))) : (var_3)));
                            arr_105 [i_31] [i_31] [i_32] [i_35] |= ((/* implicit */signed char) ((((/* implicit */int) var_5)) << (((((((/* implicit */int) (unsigned char)206)) & (var_7))) - (196)))));
                        }
                    }
                    for (unsigned char i_36 = 0; i_36 < 24; i_36 += 1) 
                    {
                        var_39 = ((/* implicit */short) min((var_39), (((/* implicit */short) (+(((((/* implicit */_Bool) (unsigned char)239)) ? (((/* implicit */int) (unsigned char)89)) : (((/* implicit */int) (unsigned char)167)))))))));
                        var_40 = ((/* implicit */unsigned char) min((var_40), (((/* implicit */unsigned char) arr_100 [i_5] [i_5] [i_5 - 1] [i_5] [i_31 - 2]))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_37 = 0; i_37 < 24; i_37 += 4) 
                        {
                            arr_112 [i_5] [i_36] [i_31] [i_36] [i_37] = ((long long int) (short)-16869);
                            arr_113 [i_37] [i_36] [(unsigned short)3] [i_31] [i_36] [i_5] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_69 [i_31 - 2]))));
                            var_41 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)167))) : (1981089936U)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_39 [i_31] [i_31] [i_31] [i_31] [i_31] [i_31 - 1] [i_31])) : (((/* implicit */int) arr_77 [i_36] [i_31] [i_30])))))));
                            arr_114 [i_36] [i_30 + 1] [i_31] [i_36] [i_37] = ((/* implicit */unsigned int) ((var_9) / (((/* implicit */long long int) var_7))));
                            var_42 ^= ((/* implicit */_Bool) var_9);
                        }
                    }
                    /* LoopSeq 2 */
                    for (unsigned int i_38 = 0; i_38 < 24; i_38 += 4) 
                    {
                        var_43 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) var_4)) <= (arr_25 [16LL] [i_5 + 2])));
                        arr_118 [i_5] [i_30] = ((long long int) ((unsigned int) var_0));
                    }
                    for (unsigned int i_39 = 0; i_39 < 24; i_39 += 1) 
                    {
                        var_44 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)88)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_16 [i_30 + 2] [i_31 - 2] [i_5 + 1]))));
                        /* LoopSeq 1 */
                        for (long long int i_40 = 0; i_40 < 24; i_40 += 4) 
                        {
                            arr_127 [i_5] [i_30] [i_31] [i_39] [i_30] = arr_57 [i_5] [i_30] [i_30 - 1] [i_5 + 1];
                            arr_128 [i_39] [i_30] [i_30] [i_31] [i_39] [i_40] = ((/* implicit */_Bool) var_2);
                            var_45 = ((/* implicit */signed char) max((var_45), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_71 [i_31 + 1])))))));
                        }
                        var_46 = ((/* implicit */unsigned short) min((var_46), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) 18435743742677200346ULL)))))));
                    }
                }
            } 
        } 
    }
    var_47 = ((/* implicit */_Bool) max((var_47), (((/* implicit */_Bool) var_6))));
    /* LoopNest 2 */
    for (_Bool i_41 = 0; i_41 < 1; i_41 += 1) 
    {
        for (_Bool i_42 = 0; i_42 < 1; i_42 += 1) 
        {
            {
                var_48 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) arr_74 [i_41] [i_41])) || (((/* implicit */_Bool) arr_116 [i_41] [i_41] [(unsigned char)14] [i_42])))));
                /* LoopSeq 1 */
                for (unsigned int i_43 = 2; i_43 < 21; i_43 += 2) 
                {
                    /* LoopNest 2 */
                    for (int i_44 = 0; i_44 < 23; i_44 += 3) 
                    {
                        for (_Bool i_45 = 0; i_45 < 1; i_45 += 1) 
                        {
                            {
                                arr_144 [i_41] [i_41] [i_41] [i_45] = ((/* implicit */unsigned int) var_7);
                                var_49 = ((/* implicit */unsigned long long int) max((var_49), (max((((/* implicit */unsigned long long int) ((long long int) min((var_7), (((/* implicit */int) var_1)))))), ((((!(((/* implicit */_Bool) var_9)))) ? (((18106394868394294230ULL) >> (((/* implicit */int) var_1)))) : (((((/* implicit */_Bool) (unsigned short)63560)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_6)))))))));
                                arr_145 [i_41] [i_41] [i_41] [i_44] [i_41] [i_41] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) var_1))))) ? (min((((/* implicit */int) ((((/* implicit */int) var_1)) == (((/* implicit */int) (signed char)-66))))), (min((((/* implicit */int) var_8)), (var_7))))) : ((-(arr_84 [i_41] [i_42] [i_41] [i_41] [i_45])))));
                                var_50 = ((/* implicit */int) max((var_50), (max((((/* implicit */int) ((unsigned char) ((arr_96 [i_41] [(unsigned char)14] [i_43] [i_41] [i_41]) <= (((/* implicit */unsigned int) var_4)))))), (max((((/* implicit */int) arr_101 [i_43 + 1] [i_43 - 1] [i_43] [i_43 - 2] [i_44])), (((((/* implicit */_Bool) 8156375056878611274LL)) ? (var_3) : (var_7)))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_46 = 0; i_46 < 23; i_46 += 4) 
                    {
                        for (unsigned short i_47 = 0; i_47 < 23; i_47 += 1) 
                        {
                            {
                                var_51 = ((/* implicit */signed char) max((var_51), (((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)-5594)), ((unsigned short)16883)))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) var_8)), ((+(((/* implicit */int) var_8))))))) : (min((var_6), (((/* implicit */unsigned long long int) arr_94 [i_43] [i_43] [i_43 + 2] [i_43 + 2] [i_43] [i_47])))))))));
                                var_52 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_8)), (4128711380U)));
                            }
                        } 
                    } 
                    arr_151 [i_41] [i_42] [i_41] = min((((long long int) arr_60 [i_43] [i_43 - 2] [i_43 - 2] [i_43 + 2] [i_43 + 2])), (((/* implicit */long long int) min((var_5), (var_2)))));
                }
                /* LoopNest 3 */
                for (unsigned char i_48 = 0; i_48 < 23; i_48 += 1) 
                {
                    for (unsigned int i_49 = 0; i_49 < 23; i_49 += 2) 
                    {
                        for (signed char i_50 = 0; i_50 < 23; i_50 += 3) 
                        {
                            {
                                arr_159 [i_41] [i_41] = ((/* implicit */unsigned int) max((arr_53 [i_50] [i_49] [(short)5]), ((((+(((/* implicit */int) arr_89 [i_41] [i_48])))) <= (((/* implicit */int) ((unsigned short) (_Bool)1)))))));
                                arr_160 [i_41] [i_42] [i_42] [i_49] [i_49] |= ((/* implicit */_Bool) ((int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_122 [i_41] [i_41] [i_41] [i_41])) & (((/* implicit */int) var_1))))), (max((((/* implicit */unsigned long long int) var_5)), (var_6))))));
                                arr_161 [i_41] [i_41] [i_48] [i_49] [12LL] = ((/* implicit */unsigned int) var_9);
                                arr_162 [i_41] [i_41] [i_41] [i_41] [i_49] [i_50] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)15160)) ? (((/* implicit */long long int) 2313877335U)) : (3851538573583131595LL)));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
