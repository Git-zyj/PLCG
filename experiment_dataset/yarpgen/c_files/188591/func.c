/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188591
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(min((2425003610532361407LL), (((/* implicit */long long int) arr_1 [i_0]))))))) || (((/* implicit */_Bool) min((((unsigned int) (short)-15069)), (((unsigned int) var_6)))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 12; i_2 += 2) 
                {
                    for (signed char i_3 = 3; i_3 < 10; i_3 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */long long int) 1277835117);
                            var_20 = ((/* implicit */signed char) var_2);
                        }
                    } 
                } 
                arr_11 [i_0] [i_1] = ((/* implicit */unsigned char) min((var_16), (((/* implicit */long long int) (short)3608))));
                var_21 = ((/* implicit */unsigned long long int) max((-1061299228807205109LL), (((/* implicit */long long int) (short)3608))));
                arr_12 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) min((max((((/* implicit */unsigned int) (short)-12426)), (166737788U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)-32051)))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_4 = 4; i_4 < 9; i_4 += 4) 
    {
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    arr_19 [i_4] [i_5] [i_6] &= (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((1450118237U) | (((/* implicit */unsigned int) ((/* implicit */int) (short)-3623)))))), (arr_18 [i_4] [i_4 + 1] [i_4])))));
                    var_22 = ((/* implicit */unsigned int) ((long long int) arr_3 [i_4]));
                    arr_20 [i_5] = ((/* implicit */signed char) min((((((arr_4 [i_4 - 4] [i_4 + 1]) + (9223372036854775807LL))) >> ((((+(((/* implicit */int) arr_8 [i_6] [i_5] [i_4])))) - (31299))))), (((/* implicit */long long int) arr_7 [i_4] [i_5] [12U]))));
                    var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)32508)) - (((/* implicit */int) var_3)))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned short) (-(((/* implicit */int) (short)3630))));
    /* LoopSeq 4 */
    for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 2) 
    {
        arr_23 [i_7] [i_7] = ((/* implicit */int) arr_21 [i_7] [i_7]);
        arr_24 [(unsigned char)11] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */long long int) (~(((/* implicit */int) (short)-15074))))) & ((~(8051540807809795036LL)))));
    }
    /* vectorizable */
    for (unsigned short i_8 = 3; i_8 < 20; i_8 += 3) 
    {
        /* LoopSeq 3 */
        for (int i_9 = 2; i_9 < 17; i_9 += 2) 
        {
            arr_31 [i_8 + 1] [i_8 - 3] = ((/* implicit */unsigned char) ((unsigned short) 1450118244U));
            arr_32 [i_8] [i_8] [i_8] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_22 [i_8 - 3]))));
            var_25 |= ((/* implicit */_Bool) arr_25 [i_8 - 2] [i_8 - 2]);
        }
        for (int i_10 = 0; i_10 < 21; i_10 += 2) 
        {
            /* LoopNest 3 */
            for (short i_11 = 0; i_11 < 21; i_11 += 1) 
            {
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    for (unsigned int i_13 = 0; i_13 < 21; i_13 += 2) 
                    {
                        {
                            arr_46 [i_8] [i_10] [i_11] [i_12] [i_12] = ((/* implicit */long long int) ((unsigned int) (_Bool)1));
                            arr_47 [i_12] = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_17))) < (2844849057U))));
                            var_26 *= ((/* implicit */short) var_10);
                            var_27 = ((/* implicit */_Bool) 0ULL);
                            var_28 = ((/* implicit */unsigned short) 17592186040320LL);
                        }
                    } 
                } 
            } 
            arr_48 [i_8] = ((/* implicit */_Bool) -17592186040325LL);
        }
        for (unsigned int i_14 = 0; i_14 < 21; i_14 += 2) 
        {
            arr_53 [i_14] = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) ^ (arr_40 [i_8] [i_8] [i_14] [i_14]))) == (((/* implicit */unsigned long long int) ((int) 172713186U)))));
            /* LoopSeq 1 */
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                arr_58 [i_8] [i_14] [i_15] &= ((/* implicit */unsigned int) (~(-1)));
                arr_59 [i_8] [i_8] [i_14] [i_15] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_54 [i_15] [i_8 - 3] [i_8] [i_8]))) ^ (17179869183ULL)));
                /* LoopNest 2 */
                for (unsigned char i_16 = 2; i_16 < 19; i_16 += 2) 
                {
                    for (long long int i_17 = 0; i_17 < 21; i_17 += 3) 
                    {
                        {
                            var_29 = ((/* implicit */short) ((-17592186040317LL) < (((/* implicit */long long int) ((/* implicit */int) var_10)))));
                            arr_66 [i_8] [i_8] [i_8] = ((/* implicit */_Bool) ((long long int) ((((/* implicit */long long int) 1000504986)) == (arr_51 [i_8 - 2] [i_14]))));
                            var_30 = ((/* implicit */short) (+((~(var_5)))));
                        }
                    } 
                } 
                var_31 = ((/* implicit */long long int) ((unsigned short) arr_52 [i_8] [i_8] [i_15]));
            }
            arr_67 [i_8] [i_8] = ((/* implicit */unsigned char) var_11);
        }
        /* LoopSeq 4 */
        for (long long int i_18 = 2; i_18 < 20; i_18 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
            {
                for (unsigned int i_20 = 2; i_20 < 19; i_20 += 3) 
                {
                    {
                        arr_75 [i_19] [i_18 + 1] = arr_61 [i_8 - 2] [(unsigned char)18] [i_8 - 2] [(unsigned char)18];
                        var_32 = (~((~(35180077121536LL))));
                        var_33 |= ((/* implicit */short) ((((/* implicit */_Bool) arr_42 [i_18 - 1] [(unsigned char)14] [i_18 + 1])) && (((/* implicit */_Bool) arr_42 [i_18 - 2] [(unsigned char)4] [i_18 + 1]))));
                        arr_76 [i_19] = ((/* implicit */short) (!(((/* implicit */_Bool) (~(140737488355312LL))))));
                    }
                } 
            } 
            var_34 &= ((/* implicit */unsigned short) ((143833713099145216ULL) % (((/* implicit */unsigned long long int) arr_29 [i_8 - 1]))));
            /* LoopSeq 3 */
            for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
            {
                /* LoopSeq 2 */
                for (short i_22 = 0; i_22 < 21; i_22 += 4) /* same iter space */
                {
                    var_35 -= (~(((/* implicit */int) var_9)));
                    arr_84 [i_18] [i_18 - 2] [i_21] [i_22] [i_18 + 1] [i_21] = ((/* implicit */unsigned char) ((unsigned long long int) arr_81 [1LL] [i_18 - 2] [i_18 - 2] [i_18] [i_21] [i_22]));
                    arr_85 [i_18 - 2] [i_18] [i_18] [i_18] [i_18 - 2] = (~(((/* implicit */int) arr_54 [i_8] [i_18] [i_21] [i_22])));
                    arr_86 [i_8 + 1] [i_8] [i_8 + 1] [i_22] [i_21] = ((/* implicit */signed char) (((-(arr_83 [i_22] [i_21] [i_18] [15LL]))) >= (((/* implicit */long long int) ((unsigned int) var_8)))));
                }
                for (short i_23 = 0; i_23 < 21; i_23 += 4) /* same iter space */
                {
                    var_36 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 140737488355312LL))));
                    var_37 = ((/* implicit */long long int) min((var_37), (((/* implicit */long long int) (~(((/* implicit */int) ((arr_61 [13LL] [i_18 - 2] [i_18] [i_18]) <= (arr_26 [i_23])))))))));
                    var_38 += ((/* implicit */long long int) (unsigned char)0);
                    var_39 = ((/* implicit */_Bool) min((var_39), (((/* implicit */_Bool) 3258374538U))));
                    var_40 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-15033)) > (((/* implicit */int) ((var_12) > (((/* implicit */unsigned long long int) -17592186040325LL)))))));
                }
                arr_91 [(short)3] = ((/* implicit */unsigned int) arr_57 [i_8] [i_8] [i_8]);
            }
            for (unsigned long long int i_24 = 1; i_24 < 18; i_24 += 3) 
            {
                /* LoopSeq 2 */
                for (signed char i_25 = 2; i_25 < 19; i_25 += 2) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_26 = 3; i_26 < 20; i_26 += 2) 
                    {
                        arr_101 [i_8] [i_8] [i_24] [i_8] [i_24] [i_8] [i_8 - 3] = ((/* implicit */unsigned char) ((unsigned int) arr_57 [i_8] [i_18] [i_8 - 2]));
                        var_41 = ((/* implicit */short) ((unsigned int) arr_79 [i_18 + 1] [5LL]));
                        arr_102 [i_25] [i_25] [i_8] [i_25 + 1] [i_24] = ((/* implicit */unsigned short) ((_Bool) ((0ULL) << (((((/* implicit */int) (unsigned short)65535)) - (65504))))));
                    }
                    var_42 *= ((/* implicit */short) ((unsigned long long int) arr_65 [i_18] [i_18] [i_18 - 2] [i_18 - 1] [i_18 + 1]));
                }
                for (unsigned long long int i_27 = 3; i_27 < 19; i_27 += 2) 
                {
                    arr_105 [i_24] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_72 [i_24 + 3] [i_18])) & ((-2147483647 - 1))));
                    arr_106 [i_24] [i_18] [i_18] [i_27 - 2] = ((/* implicit */short) ((unsigned long long int) 14288994558409163768ULL));
                    var_43 = ((/* implicit */unsigned char) max((var_43), (((/* implicit */unsigned char) arr_42 [(unsigned short)4] [(unsigned short)20] [i_24 - 1]))));
                    arr_107 [i_24] = ((/* implicit */int) ((short) (short)0));
                    arr_108 [i_8] [i_8] [i_24] [i_8 + 1] [i_8] [i_8] = ((/* implicit */unsigned int) ((arr_103 [i_8 + 1] [i_18 - 2] [i_24] [14U]) % (arr_103 [i_8 - 3] [i_18 + 1] [i_24] [i_24])));
                }
                /* LoopSeq 3 */
                for (unsigned long long int i_28 = 1; i_28 < 18; i_28 += 4) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_29 = 1; i_29 < 1; i_29 += 1) 
                    {
                        arr_114 [i_28 + 2] [i_24] [i_8] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) arr_89 [i_8 - 3] [i_8] [i_8])) > (arr_29 [i_8 - 2])))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) -17592186040330LL)))))));
                        var_44 += ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) == (arr_88 [i_28] [i_28] [i_28 + 1] [i_28 + 2])));
                    }
                    /* LoopSeq 2 */
                    for (unsigned long long int i_30 = 0; i_30 < 21; i_30 += 2) 
                    {
                        arr_117 [i_24] [i_24] = (-(arr_70 [i_18 - 2] [i_8 - 3]));
                        var_45 = ((/* implicit */long long int) (-(((unsigned long long int) var_17))));
                    }
                    for (unsigned short i_31 = 4; i_31 < 19; i_31 += 1) 
                    {
                        var_46 = ((/* implicit */short) arr_116 [20ULL] [i_18] [i_24 - 1] [i_28 + 2] [i_28] [i_31 - 1]);
                        arr_121 [i_8] [i_8] [i_8] [i_24] [i_8] = ((/* implicit */int) arr_93 [i_24] [i_28] [i_24]);
                        var_47 = ((/* implicit */unsigned int) arr_96 [i_8 + 1] [i_8 + 1] [i_24] [i_28 + 1]);
                    }
                }
                for (unsigned int i_32 = 3; i_32 < 17; i_32 += 2) /* same iter space */
                {
                    arr_124 [(short)2] [i_18 + 1] &= ((/* implicit */unsigned int) (~(((/* implicit */int) arr_72 [i_8 - 1] [i_8]))));
                    var_48 = ((/* implicit */unsigned char) arr_87 [i_8] [i_18] [i_24] [i_32 + 3]);
                    var_49 = ((/* implicit */long long int) ((arr_116 [i_32] [i_32] [i_32 + 4] [i_32 + 3] [(unsigned char)11] [(unsigned char)11]) != (-17592186040312LL)));
                    var_50 &= ((/* implicit */_Bool) -862798739);
                }
                for (unsigned int i_33 = 3; i_33 < 17; i_33 += 2) /* same iter space */
                {
                    var_51 = ((/* implicit */unsigned long long int) max((var_51), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_118 [7U] [i_18] [i_18] [i_18] [i_18])) || (((/* implicit */_Bool) (unsigned char)237))))))))));
                    arr_127 [i_24] [i_33] = ((/* implicit */long long int) arr_119 [i_33] [i_33 + 1] [i_33] [i_33] [0] [3] [i_33 + 1]);
                }
                arr_128 [i_24] [i_8 - 3] [i_8 - 3] [(unsigned char)5] = ((/* implicit */long long int) ((unsigned int) -1000504999));
            }
            for (_Bool i_34 = 0; i_34 < 1; i_34 += 1) 
            {
                arr_131 [i_34] [i_18] = ((/* implicit */long long int) arr_56 [i_8 - 3]);
                var_52 = ((/* implicit */unsigned int) min((var_52), (((/* implicit */unsigned int) (-(arr_69 [i_8 - 3]))))));
                var_53 = ((/* implicit */unsigned int) min((var_53), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_99 [i_18 - 2] [i_18 - 2] [i_18 - 2])))))));
            }
        }
        for (long long int i_35 = 2; i_35 < 20; i_35 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (_Bool i_36 = 0; i_36 < 1; i_36 += 1) 
            {
                for (unsigned short i_37 = 0; i_37 < 21; i_37 += 4) 
                {
                    {
                        arr_142 [i_8] [i_36] [18U] [i_37] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-3620))));
                        /* LoopSeq 3 */
                        for (unsigned short i_38 = 4; i_38 < 19; i_38 += 1) 
                        {
                            arr_145 [i_38] [i_38] [i_36] [i_36] [i_36] [i_35] [i_8] = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) 1452391577U)) && (var_1))));
                            arr_146 [i_8] [i_35] [i_36] [i_36] = ((/* implicit */signed char) (~(var_12)));
                        }
                        for (signed char i_39 = 0; i_39 < 21; i_39 += 1) /* same iter space */
                        {
                            var_54 = ((/* implicit */unsigned char) (-(18446744056529682433ULL)));
                            var_55 = ((/* implicit */short) min((var_55), (((/* implicit */short) arr_118 [i_8] [i_35] [i_35] [i_37] [i_39]))));
                            var_56 = ((/* implicit */unsigned long long int) var_8);
                        }
                        for (signed char i_40 = 0; i_40 < 21; i_40 += 1) /* same iter space */
                        {
                            var_57 |= ((/* implicit */unsigned long long int) ((long long int) arr_30 [10LL] [i_8 - 1] [(unsigned char)20]));
                            arr_152 [i_8] [i_35] [i_35] [i_36] [i_40] = ((/* implicit */long long int) ((68711088128ULL) < (((/* implicit */unsigned long long int) ((int) 1052931403907766250LL)))));
                            arr_153 [i_37] [i_35] [i_36] [i_37] [i_36] = ((/* implicit */long long int) ((((/* implicit */int) var_13)) + ((~(((/* implicit */int) arr_39 [(_Bool)1] [i_37]))))));
                        }
                        var_58 |= (~(arr_40 [i_8 + 1] [i_8] [i_8 - 1] [i_8 - 1]));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (int i_41 = 0; i_41 < 21; i_41 += 2) 
            {
                for (unsigned int i_42 = 0; i_42 < 21; i_42 += 1) 
                {
                    {
                        arr_160 [i_8] [i_35 + 1] = ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))));
                        arr_161 [i_8 - 1] [5LL] [i_41] [i_42] [i_35] [i_8] &= ((/* implicit */unsigned char) var_15);
                        arr_162 [i_8] [i_35 + 1] [i_8] [i_8] [i_8] [i_35 + 1] = ((unsigned char) arr_148 [(unsigned char)11]);
                    }
                } 
            } 
        }
        for (long long int i_43 = 2; i_43 < 20; i_43 += 1) /* same iter space */
        {
            arr_165 [i_43] = ((/* implicit */short) 537865311);
            arr_166 [(_Bool)1] |= arr_73 [i_8] [i_43] [i_8] [i_43] [i_8];
            arr_167 [3] [i_8] [i_43] = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */int) var_9)) > (-1000504983))))));
            var_59 = ((/* implicit */short) (-(((1720270028U) << (((-7LL) + (17LL)))))));
        }
        for (_Bool i_44 = 1; i_44 < 1; i_44 += 1) 
        {
            arr_170 [i_44] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_129 [i_8] [i_8 - 2] [7] [i_8 - 3]))));
            var_60 = ((/* implicit */_Bool) min((var_60), (((/* implicit */_Bool) arr_110 [i_8] [i_8] [(short)12] [i_8] [i_8] [i_8 + 1]))));
        }
        var_61 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_115 [i_8 - 1] [14U] [i_8] [(short)15] [i_8]))));
        var_62 = ((/* implicit */unsigned char) arr_159 [i_8 - 2] [i_8]);
        var_63 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) + (-130948369953009646LL)));
    }
    for (_Bool i_45 = 1; i_45 < 1; i_45 += 1) 
    {
        arr_173 [(short)9] = ((/* implicit */unsigned int) 35180077121533LL);
        var_64 = 3019273942799751022LL;
        var_65 = ((/* implicit */unsigned int) (~(min((((/* implicit */long long int) arr_171 [i_45 - 1] [i_45 - 1])), (arr_172 [i_45 - 1] [(short)14])))));
    }
    for (long long int i_46 = 2; i_46 < 9; i_46 += 2) 
    {
        var_66 = ((/* implicit */int) max((var_66), (((/* implicit */int) ((min((arr_88 [i_46] [i_46 + 1] [i_46] [i_46 - 2]), (((/* implicit */unsigned int) var_9)))) > ((+(((unsigned int) var_17)))))))));
        arr_178 [i_46] = ((/* implicit */unsigned long long int) ((_Bool) ((arr_33 [i_46 - 1] [i_46 - 1] [18U]) == (((/* implicit */unsigned int) ((/* implicit */int) arr_94 [i_46 - 2] [i_46 + 1] [i_46 + 1] [i_46]))))));
    }
}
