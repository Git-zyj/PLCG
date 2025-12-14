/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116020
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
    for (short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        {
                            arr_11 [i_0] [i_1] [i_0] [i_3] = ((/* implicit */unsigned char) (_Bool)1);
                            /* LoopSeq 3 */
                            for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 4) 
                            {
                                var_12 &= ((/* implicit */_Bool) min((((/* implicit */unsigned int) (((!((_Bool)1))) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_3])) : (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)120))))) ? (((((/* implicit */_Bool) 309594354)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */signed char) var_5)), (arr_3 [i_3] [i_4])))))))));
                                arr_14 [(short)16] [3U] [i_1] [i_3] [i_0] = ((/* implicit */unsigned int) (~(((arr_1 [i_2] [i_2]) / (arr_1 [i_2] [i_1])))));
                                var_13 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) min((arr_8 [i_0] [i_1] [i_2] [i_2]), (arr_8 [i_0] [i_1] [i_3] [i_3])))), (((unsigned int) arr_8 [i_0] [i_0] [i_2] [i_2]))));
                                var_14 ^= ((/* implicit */unsigned char) arr_6 [i_1] [i_2] [i_4] [i_4]);
                                arr_15 [i_0] [i_1] [i_0] [i_1] [i_4] = ((/* implicit */int) (short)-4713);
                            }
                            for (short i_5 = 0; i_5 < 17; i_5 += 2) 
                            {
                                var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)10))))));
                                arr_20 [i_0] [i_1] [(short)6] [i_3] [i_0] = ((/* implicit */signed char) arr_0 [i_2]);
                            }
                            /* vectorizable */
                            for (unsigned char i_6 = 0; i_6 < 17; i_6 += 3) 
                            {
                                var_16 += ((/* implicit */signed char) ((((/* implicit */_Bool) 1839489092528096341ULL)) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_3])) : (((/* implicit */int) arr_3 [i_0] [i_0]))));
                                var_17 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_19 [i_1] [i_6] [i_3] [i_0] [i_2] [i_1] [i_0]))));
                            }
                        }
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_7 = 3; i_7 < 14; i_7 += 2) 
                {
                    arr_25 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_7 + 1])) ? (arr_10 [15LL] [15LL] [i_0] [i_0] [i_7 + 2] [i_7 + 3]) : (((/* implicit */int) arr_5 [i_7 - 1] [i_7] [i_7] [i_7 + 3]))));
                    arr_26 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */signed char) (unsigned char)135);
                }
                arr_27 [i_0] [i_0] [(signed char)14] &= ((/* implicit */short) max((((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_6))), (((/* implicit */long long int) ((unsigned char) arr_4 [i_0])))));
                /* LoopNest 3 */
                for (unsigned char i_8 = 0; i_8 < 17; i_8 += 2) 
                {
                    for (short i_9 = 0; i_9 < 17; i_9 += 2) 
                    {
                        for (unsigned long long int i_10 = 2; i_10 < 16; i_10 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)0))));
                                var_19 ^= ((/* implicit */signed char) (~(((((_Bool) (signed char)42)) ? (((/* implicit */int) (signed char)117)) : (((/* implicit */int) (_Bool)1))))));
                            }
                        } 
                    } 
                } 
                arr_37 [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */short) var_2)), (((short) ((unsigned char) arr_3 [i_0] [i_0])))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
    {
        for (signed char i_12 = 0; i_12 < 16; i_12 += 2) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (signed char i_13 = 2; i_13 < 14; i_13 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_14 = 0; i_14 < 16; i_14 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (signed char i_15 = 2; i_15 < 14; i_15 += 2) 
                        {
                            arr_53 [i_11] [i_11] [4U] [i_13] [i_12] [i_15] &= ((/* implicit */int) (((~(-6759462156240230696LL))) / (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-29)))))));
                            arr_54 [i_11] [i_11] [i_11] [i_11] [i_15] = ((/* implicit */unsigned short) ((unsigned long long int) arr_9 [i_11] [i_11 + 1] [i_15 + 1] [(unsigned char)16] [i_13 + 2]));
                            var_20 &= ((/* implicit */_Bool) arr_24 [i_11] [i_13] [i_13] [i_11]);
                        }
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                        {
                            var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((((/* implicit */int) arr_42 [i_11 + 1] [i_12])) / ((-(((/* implicit */int) (short)-4431)))))))));
                            var_22 -= (((_Bool)1) ? (var_11) : (arr_44 [i_13] [i_13] [i_13] [i_13 + 1]));
                        }
                        arr_57 [i_11] [i_12] [i_12] [i_12] = ((/* implicit */_Bool) (+((+(((/* implicit */int) arr_49 [i_11] [i_12] [i_13] [i_11] [i_11] [i_14] [i_11]))))));
                    }
                    /* LoopSeq 2 */
                    for (signed char i_17 = 3; i_17 < 15; i_17 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned char) (~((+(8178272002451299257LL)))));
                        /* LoopSeq 1 */
                        for (short i_18 = 0; i_18 < 16; i_18 += 3) 
                        {
                            var_24 *= ((/* implicit */short) (!((!(((/* implicit */_Bool) arr_1 [6LL] [6LL]))))));
                            arr_63 [i_11] [i_11] [i_12] [i_13] [i_13] [i_13] [i_18] = ((/* implicit */unsigned int) ((unsigned long long int) 18402556150088378147ULL));
                            var_25 = ((/* implicit */long long int) (~(((/* implicit */int) arr_23 [i_11 + 1]))));
                        }
                        arr_64 [i_11] [i_12] [i_11] [i_17] [i_13] [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) arr_60 [i_17] [i_13] [i_11] [i_11])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_11] [i_11] [i_12] [i_13] [11U] [i_13] [i_17]))) : (0U)));
                        arr_65 [i_11] [i_12] [i_13] [i_11] = (+(((/* implicit */int) arr_33 [i_11] [i_11 + 1] [i_13 - 1] [i_17 - 2] [i_17 - 1])));
                        var_26 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 7415134059088057218ULL)))))) * (((((/* implicit */long long int) ((/* implicit */int) (short)12238))) / (arr_59 [i_13] [i_13] [i_12])))));
                    }
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_20 = 0; i_20 < 16; i_20 += 3) 
                        {
                            arr_72 [i_11] [i_12] [i_13] [i_11] [i_20] = ((/* implicit */short) ((_Bool) ((((/* implicit */int) (signed char)121)) / (var_10))));
                            arr_73 [i_11] [i_20] [i_13] [i_11] [(_Bool)1] [i_20] [(_Bool)1] = ((/* implicit */short) ((((/* implicit */unsigned int) -90671707)) / (arr_43 [i_11] [i_12] [i_11] [i_20])));
                            arr_74 [i_11] [i_11] [i_11] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_49 [i_11] [i_12] [i_12] [i_12] [i_11] [i_19] [i_11]))));
                        }
                        for (int i_21 = 0; i_21 < 16; i_21 += 2) 
                        {
                            var_27 &= ((/* implicit */unsigned short) ((((/* implicit */int) arr_71 [i_11] [i_12] [i_13] [i_19] [(short)12])) / (((/* implicit */int) arr_52 [i_11 + 1] [i_12] [i_12] [i_19]))));
                            var_28 = ((/* implicit */long long int) (((-(14ULL))) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_11] [i_12] [i_11] [i_19] [i_21])))));
                            var_29 = ((/* implicit */_Bool) var_8);
                        }
                        /* LoopSeq 3 */
                        for (short i_22 = 0; i_22 < 16; i_22 += 3) 
                        {
                            arr_79 [i_13] [i_13] [i_13] [i_11] [i_22] [4U] [i_11] = ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) (_Bool)1))))));
                            arr_80 [i_11] [i_12] = ((/* implicit */unsigned char) 2276814290U);
                            arr_81 [i_11] [i_11] [10LL] = ((/* implicit */signed char) ((arr_45 [i_11 + 1] [i_11 + 1] [i_11 + 1] [i_11 + 1]) / (((/* implicit */unsigned long long int) -423271541))));
                            var_30 ^= ((/* implicit */short) (((-(0U))) / (((/* implicit */unsigned int) ((/* implicit */int) arr_75 [i_13 - 1] [(short)1] [i_22])))));
                            arr_82 [i_11] [i_11] [i_11] [i_22] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_19 [i_11 + 1] [i_11] [i_11] [i_11 + 1] [i_13 + 2] [i_22] [i_22]))));
                        }
                        for (int i_23 = 0; i_23 < 16; i_23 += 2) 
                        {
                            arr_87 [i_11] [i_12] [i_13] [i_13] [i_12] = ((/* implicit */unsigned char) (~((~(((/* implicit */int) (unsigned char)38))))));
                            arr_88 [i_11] [i_11] [i_13] [i_11] [i_11] = ((/* implicit */short) (!((!(((/* implicit */_Bool) 2276814290U))))));
                        }
                        for (signed char i_24 = 1; i_24 < 15; i_24 += 2) 
                        {
                            var_31 = ((/* implicit */_Bool) (unsigned char)120);
                            arr_91 [i_11] [i_11] [i_12] [i_12] [i_13] [i_11] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)185)) ? ((+(((/* implicit */int) (unsigned char)120)))) : (((/* implicit */int) (signed char)74))));
                            arr_92 [i_24] [i_11] [i_13] [i_11] [i_11] = ((/* implicit */unsigned int) arr_1 [i_11 + 1] [i_12]);
                        }
                        arr_93 [i_12] [i_12] [i_11] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_2))));
                    }
                    arr_94 [i_11] [i_12] [i_11] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)197)) / (((/* implicit */int) arr_75 [i_11] [i_11 + 1] [i_11 + 1]))));
                }
                for (int i_25 = 2; i_25 < 13; i_25 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (short i_26 = 0; i_26 < 16; i_26 += 4) 
                    {
                        for (unsigned char i_27 = 0; i_27 < 16; i_27 += 3) 
                        {
                            {
                                var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)13063)) : (((/* implicit */int) (unsigned short)26517))));
                                arr_101 [i_11] [i_12] [i_25] [i_11] [i_27] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (signed char)28)) ? (-5854127068340462024LL) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)136))))) ? (((/* implicit */int) ((unsigned char) 2276814266U))) : ((+(((/* implicit */int) (unsigned char)145)))))) : (((((/* implicit */int) arr_23 [i_26])) + (((/* implicit */int) var_5))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (int i_28 = 0; i_28 < 16; i_28 += 1) 
                    {
                        arr_105 [i_28] [i_28] [i_25] [i_11] [(short)7] [12U] = ((/* implicit */short) min((((/* implicit */unsigned long long int) arr_85 [i_11] [(_Bool)1] [i_25] [i_25] [(_Bool)1])), (((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (min((((/* implicit */unsigned long long int) (unsigned char)230)), (18406454909135678609ULL))) : (((/* implicit */unsigned long long int) ((arr_49 [i_11] [i_11] [i_25] [i_11] [i_11] [i_28] [i_11]) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) var_4)))))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_29 = 0; i_29 < 16; i_29 += 3) 
                        {
                            var_33 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_50 [i_11] [i_28] [i_25] [i_11] [i_11]))))), (min((((/* implicit */unsigned int) ((_Bool) (_Bool)1))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_34 [(signed char)1] [(signed char)1] [i_25] [(signed char)1] [i_11] [i_25]))) / (arr_50 [i_11] [i_12] [i_25] [i_28] [(signed char)13])))))));
                            var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) ((int) ((((/* implicit */_Bool) (unsigned char)155)) ? (((((/* implicit */_Bool) 2147483647)) ? (2147483636) : (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) ((short) (unsigned char)31)))))))));
                            arr_109 [i_11] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)30)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)1))));
                            arr_110 [i_11] [i_11] [i_11] [6] = ((/* implicit */signed char) min(((short)13063), (((/* implicit */short) (unsigned char)115))));
                        }
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_30 = 0; i_30 < 16; i_30 += 3) 
                        {
                            arr_113 [i_11] [i_11] [i_25] [i_28] [i_30] = ((/* implicit */long long int) ((((/* implicit */int) arr_32 [i_11])) / (((/* implicit */int) ((_Bool) (short)26441)))));
                            var_35 = ((/* implicit */unsigned char) 2147483640);
                        }
                    }
                    for (unsigned char i_31 = 0; i_31 < 16; i_31 += 3) 
                    {
                        var_36 = ((/* implicit */unsigned int) var_2);
                        /* LoopSeq 2 */
                        for (unsigned char i_32 = 0; i_32 < 16; i_32 += 4) /* same iter space */
                        {
                            arr_120 [i_11] [i_11] [(unsigned char)5] [i_31] [i_31] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_32 [i_11])) ? (((/* implicit */int) arr_8 [i_32] [i_25] [i_12] [i_11])) : (((/* implicit */int) arr_8 [i_32] [i_31] [i_12] [i_11 + 1]))))));
                            arr_121 [2U] [i_11] [2U] [2U] [i_32] [i_11] [i_12] = ((/* implicit */unsigned char) 1524373884U);
                            var_37 = ((/* implicit */unsigned int) max((var_37), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~((-2147483647 - 1))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_70 [i_32] [i_32] [i_31] [i_25] [i_11] [i_12] [i_11])) ? (((/* implicit */unsigned int) (-(-2147483641)))) : (arr_43 [i_31] [i_32] [i_31] [i_31])))) : (((((/* implicit */_Bool) arr_47 [(short)6] [i_12] [i_25 + 1])) ? (arr_40 [(unsigned char)5]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_11] [i_11] [i_25 + 1] [i_31] [i_11] [i_32] [i_32])))))))))))));
                            var_38 = ((signed char) max((arr_111 [i_11] [i_25] [i_25 - 2] [i_25] [i_25 - 1] [i_25 + 2]), (arr_111 [i_11] [i_25] [i_25 - 2] [i_25] [i_25] [i_25 + 2])));
                        }
                        /* vectorizable */
                        for (unsigned char i_33 = 0; i_33 < 16; i_33 += 4) /* same iter space */
                        {
                            var_39 &= ((/* implicit */_Bool) ((var_11) / (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
                            arr_126 [i_11] [i_11] [i_11] = (~(((var_11) / (((/* implicit */unsigned int) ((/* implicit */int) (short)14284))))));
                        }
                    }
                    arr_127 [i_11] [i_12] [i_11 + 1] [i_11] = ((/* implicit */unsigned int) min(((short)(-32767 - 1)), (((/* implicit */short) (unsigned char)240))));
                }
                /* vectorizable */
                for (int i_34 = 2; i_34 < 13; i_34 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned char i_35 = 0; i_35 < 16; i_35 += 3) 
                    {
                        for (_Bool i_36 = 0; i_36 < 1; i_36 += 1) 
                        {
                            {
                                var_40 = ((/* implicit */short) ((((/* implicit */int) arr_6 [i_34 + 2] [i_11 + 1] [i_11] [i_35])) / ((+(((/* implicit */int) arr_95 [i_11]))))));
                                arr_137 [i_11] [(_Bool)1] [i_11] [i_35] [i_11 + 1] [i_12] = ((/* implicit */unsigned int) ((_Bool) (signed char)-108));
                                arr_138 [i_11] [i_12] [i_34] [i_11] [i_36] = ((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned short) 16607254981181455275ULL)))));
                                arr_139 [i_12] [i_12] [i_12] |= ((/* implicit */signed char) (~(((/* implicit */int) var_4))));
                            }
                        } 
                    } 
                    arr_140 [i_11] [i_12] [i_11] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_16 [i_11] [i_11] [i_11] [i_11 + 1] [i_12] [i_34] [i_34 - 1]))));
                }
                /* LoopNest 3 */
                for (unsigned int i_37 = 3; i_37 < 14; i_37 += 3) 
                {
                    for (_Bool i_38 = 0; i_38 < 1; i_38 += 1) 
                    {
                        for (_Bool i_39 = 0; i_39 < 1; i_39 += 1) 
                        {
                            {
                                var_41 = ((/* implicit */short) min((((((/* implicit */_Bool) (+(((/* implicit */int) arr_122 [i_39] [(unsigned char)12] [i_37] [i_12] [i_11]))))) ? (((var_1) ? (((/* implicit */int) arr_144 [i_11] [i_11])) : (((/* implicit */int) arr_83 [i_11 + 1] [i_12] [(signed char)12] [i_38] [i_38] [i_38])))) : ((+(((/* implicit */int) var_4)))))), (((((/* implicit */int) arr_119 [i_37 + 2] [i_37 + 2] [i_37] [i_37 - 1] [i_37 - 2])) / (((/* implicit */int) (signed char)-9))))));
                                var_42 = ((/* implicit */_Bool) var_6);
                                var_43 -= ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_28 [i_12] [i_37 + 2] [i_37] [i_39])) ? (((/* implicit */int) (short)20909)) : (((/* implicit */int) (unsigned char)37))))), (max((((/* implicit */long long int) (short)14292)), (var_7)))));
                                var_44 = ((/* implicit */unsigned char) (-2147483647 - 1));
                                var_45 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) arr_58 [i_11])) : (((/* implicit */int) arr_58 [i_11]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_70 [i_38] [i_12] [i_38] [i_38] [i_11] [i_12] [i_11])) ? (((/* implicit */int) (short)-14592)) : (arr_70 [i_11 + 1] [i_12] [i_12] [i_12] [i_38] [i_39] [i_39])))) : (-9223372036854775803LL)));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_40 = 0; i_40 < 16; i_40 += 3) 
                {
                    for (_Bool i_41 = 0; i_41 < 1; i_41 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned long long int i_42 = 0; i_42 < 16; i_42 += 2) 
                            {
                                var_46 &= ((/* implicit */short) max((((/* implicit */int) ((unsigned char) min((2147483647), (((/* implicit */int) var_1)))))), (((((/* implicit */int) arr_144 [i_11 + 1] [i_11 + 1])) / (((((/* implicit */int) arr_17 [i_12] [i_42])) / (((/* implicit */int) var_4))))))));
                                arr_158 [i_12] [(unsigned char)8] [i_41] [i_11] [i_42] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_117 [(_Bool)1] [i_11] [i_40] [i_11 + 1])) ? (arr_1 [i_11] [i_12]) : (arr_1 [i_40] [i_12]))))));
                            }
                            var_47 = ((/* implicit */unsigned short) (~(((/* implicit */int) min((arr_130 [i_11]), (((/* implicit */signed char) (_Bool)1)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_48 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-((+(((/* implicit */int) var_4))))))) ? (((/* implicit */long long int) min(((+(((/* implicit */int) (unsigned char)13)))), (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_3))))))) : ((+((-(var_7)))))));
}
