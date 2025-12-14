/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176156
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
    var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */int) var_11)) : (-1))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 18; i_2 += 4) 
            {
                {
                    var_19 |= ((/* implicit */unsigned short) arr_6 [i_2] [i_2] [i_2 + 1] [i_2]);
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (short i_4 = 3; i_4 < 21; i_4 += 3) 
                        {
                            var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((/* implicit */int) var_16)) - (arr_11 [i_0] [i_2] [i_2] [i_3] [i_4]))))));
                            arr_14 [i_1] [(unsigned char)7] [i_2] [i_1] [i_1] = ((/* implicit */short) arr_5 [i_0] [i_0] [i_0]);
                        }
                        for (signed char i_5 = 0; i_5 < 22; i_5 += 1) /* same iter space */
                        {
                            var_21 = ((/* implicit */int) ((var_16) || (arr_17 [i_1])));
                            arr_18 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) ^ (((unsigned long long int) ((((/* implicit */int) var_9)) + (((/* implicit */int) arr_3 [i_1])))))));
                            var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) arr_11 [i_2 + 1] [i_3] [i_5] [i_5] [i_5]))));
                            var_23 *= ((/* implicit */signed char) ((arr_11 [i_0] [i_2] [i_2] [i_3] [i_5]) >= (((/* implicit */int) (_Bool)1))));
                            var_24 = ((/* implicit */unsigned int) min((var_24), (2784966415U)));
                        }
                        for (signed char i_6 = 0; i_6 < 22; i_6 += 1) /* same iter space */
                        {
                            var_25 = ((/* implicit */unsigned int) ((7U) > (((/* implicit */unsigned int) (~(((/* implicit */int) var_10)))))));
                            arr_22 [i_1] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)249))))));
                            arr_23 [i_0] [i_1] [i_1] [i_3] [i_6] = ((/* implicit */short) (unsigned short)320);
                        }
                        var_26 = ((/* implicit */unsigned char) ((unsigned int) (unsigned char)255));
                        var_27 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((short) (!(arr_7 [i_0] [i_2] [i_1])))))));
                        var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)24385)) ? (-257029286) : (((/* implicit */int) (unsigned char)255)))))));
                    }
                    for (int i_7 = 0; i_7 < 22; i_7 += 2) 
                    {
                        arr_26 [i_0] [i_1] [i_0] = (+(((((/* implicit */int) arr_16 [i_2] [i_2 - 2] [i_2 - 2] [i_2 - 2] [i_2])) | (((/* implicit */int) min((arr_7 [i_0] [i_1] [i_1]), ((_Bool)1)))))));
                        var_29 = ((/* implicit */short) max((((/* implicit */unsigned int) min((((/* implicit */int) ((short) var_15))), (((((/* implicit */_Bool) 18U)) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_0 [i_0] [i_2]))))))), ((-(((((/* implicit */_Bool) arr_10 [i_1])) ? (4294967292U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))))));
                        var_30 = ((/* implicit */short) max((var_30), (arr_20 [i_0] [i_2] [i_1] [i_0])));
                    }
                    for (signed char i_8 = 0; i_8 < 22; i_8 += 2) 
                    {
                        arr_30 [i_0] [i_1] [i_1] = ((/* implicit */short) var_16);
                        var_31 -= ((/* implicit */int) 4294967250U);
                        /* LoopSeq 3 */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                        {
                            arr_33 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((unsigned long long int) (unsigned char)252)) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_20 [i_9] [i_8] [i_2 + 3] [i_1]), ((short)1)))) ? (((/* implicit */int) (short)-16653)) : (((/* implicit */int) arr_25 [i_2 + 2] [i_2 + 2] [i_2 + 2] [i_2] [18ULL])))))));
                            var_32 = ((/* implicit */short) min(((unsigned char)245), ((unsigned char)6)));
                        }
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                        {
                            var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_16 [i_0] [i_0] [1ULL] [i_0] [i_10])))))));
                            arr_36 [i_1] [i_2 + 2] [i_1] = ((/* implicit */short) (unsigned char)243);
                            var_34 = ((((/* implicit */unsigned int) ((/* implicit */int) (short)14308))) & (9U));
                        }
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                        {
                            var_35 = ((/* implicit */unsigned int) min((var_35), (((/* implicit */unsigned int) arr_13 [i_0]))));
                            var_36 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)75))));
                            var_37 = ((/* implicit */int) max((var_37), (((/* implicit */int) min((((/* implicit */unsigned int) (unsigned char)23)), (14U))))));
                        }
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (int i_12 = 0; i_12 < 13; i_12 += 2) 
    {
        var_38 = ((/* implicit */int) min((var_38), (((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) 18253579907667579959ULL)))))) | ((-(((/* implicit */int) (unsigned char)254))))))));
        /* LoopSeq 1 */
        for (signed char i_13 = 0; i_13 < 13; i_13 += 1) 
        {
            var_39 = ((/* implicit */short) ((2488625294U) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)15)))));
            var_40 = arr_10 [i_12];
            var_41 = (~(((((/* implicit */_Bool) (signed char)-6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)77))) : (4294967263U))));
        }
    }
    for (unsigned long long int i_14 = 1; i_14 < 13; i_14 += 4) /* same iter space */
    {
        var_42 = ((/* implicit */long long int) ((((int) 1365908153)) - (((/* implicit */int) var_9))));
        var_43 = ((/* implicit */int) min((var_43), (((/* implicit */int) var_10))));
        arr_45 [i_14] [i_14] = ((/* implicit */int) (short)-9396);
        var_44 = ((/* implicit */unsigned int) max((var_44), (((/* implicit */unsigned int) arr_19 [i_14 + 1] [i_14 + 1] [i_14 + 1]))));
    }
    /* vectorizable */
    for (unsigned long long int i_15 = 1; i_15 < 13; i_15 += 4) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned char i_16 = 1; i_16 < 15; i_16 += 1) /* same iter space */
        {
            var_45 -= ((/* implicit */short) (+(arr_5 [i_15] [i_15] [i_15 + 2])));
            var_46 ^= ((/* implicit */short) var_8);
        }
        for (unsigned char i_17 = 1; i_17 < 15; i_17 += 1) /* same iter space */
        {
            var_47 = ((/* implicit */_Bool) (-(arr_49 [i_15] [i_17])));
            var_48 = ((short) arr_27 [i_15]);
        }
        for (unsigned char i_18 = 1; i_18 < 15; i_18 += 1) /* same iter space */
        {
            arr_56 [i_15] [i_15] = ((/* implicit */int) 2693062268U);
            /* LoopSeq 3 */
            for (unsigned short i_19 = 0; i_19 < 16; i_19 += 1) 
            {
                var_49 *= ((/* implicit */unsigned long long int) arr_47 [i_19]);
                arr_59 [i_15] = ((/* implicit */unsigned short) var_5);
                /* LoopSeq 1 */
                for (signed char i_20 = 3; i_20 < 14; i_20 += 3) 
                {
                    arr_63 [i_15] [i_18 - 1] [i_15] = ((/* implicit */unsigned long long int) arr_47 [i_20]);
                    var_50 *= ((/* implicit */signed char) arr_8 [i_15] [i_18] [i_19] [i_18] [18] [i_15]);
                    var_51 *= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)25)) ? (arr_21 [i_15] [i_15 - 1] [i_15] [i_15] [(unsigned char)6]) : (((/* implicit */unsigned int) ((/* implicit */int) var_16)))));
                    var_52 = ((/* implicit */long long int) max((var_52), ((~(var_8)))));
                }
                var_53 = ((/* implicit */unsigned int) arr_17 [i_15]);
            }
            for (unsigned int i_21 = 0; i_21 < 16; i_21 += 2) 
            {
                var_54 = ((short) 16579106449988593593ULL);
                /* LoopSeq 1 */
                for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                {
                    /* LoopSeq 2 */
                    for (short i_23 = 0; i_23 < 16; i_23 += 2) /* same iter space */
                    {
                        arr_70 [i_15] [i_15] [i_21] [i_18 + 1] [i_21] [i_22] [i_23] &= ((/* implicit */signed char) ((int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)6))) - (4294967282U))));
                        var_55 -= ((/* implicit */short) arr_68 [i_15] [i_15 + 1]);
                        arr_71 [i_23] [i_15] [i_15] [i_15] = ((/* implicit */_Bool) arr_57 [i_15] [i_15]);
                    }
                    for (short i_24 = 0; i_24 < 16; i_24 += 2) /* same iter space */
                    {
                        var_56 += ((/* implicit */short) ((((/* implicit */int) arr_6 [i_24] [i_18 - 1] [8] [i_15 + 1])) / (((/* implicit */int) (_Bool)1))));
                        var_57 *= ((/* implicit */short) var_6);
                        arr_75 [i_15] [i_18] [i_15] [i_22] [i_24] = ((/* implicit */_Bool) (unsigned char)245);
                        arr_76 [i_15] [i_15] [i_18] [i_18] [i_22] = ((/* implicit */int) 2047U);
                    }
                    var_58 -= ((/* implicit */_Bool) arr_60 [i_15] [(signed char)14] [i_21] [i_21]);
                    arr_77 [i_15] [i_18] [i_21] [i_22] [i_18] = ((/* implicit */short) ((unsigned int) ((unsigned int) var_5)));
                    var_59 |= ((/* implicit */signed char) arr_10 [i_21]);
                }
                var_60 = ((/* implicit */short) arr_44 [i_18 + 1]);
                /* LoopNest 2 */
                for (signed char i_25 = 0; i_25 < 16; i_25 += 2) 
                {
                    for (unsigned long long int i_26 = 0; i_26 < 16; i_26 += 4) 
                    {
                        {
                            arr_83 [i_15] [i_18] [i_21] [i_25] [i_25] [i_15] [i_26] = arr_28 [i_15 + 3] [i_15 + 3] [i_21] [i_25] [i_21] [i_26];
                            var_61 -= ((/* implicit */signed char) (_Bool)1);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_27 = 1; i_27 < 12; i_27 += 1) 
                {
                    for (int i_28 = 0; i_28 < 16; i_28 += 4) 
                    {
                        {
                            var_62 = ((/* implicit */long long int) min((var_62), (((/* implicit */long long int) (-(((/* implicit */int) (signed char)-34)))))));
                            var_63 = (-((+(((/* implicit */int) (_Bool)1)))));
                            var_64 = (i_15 % 2 == 0) ? (((/* implicit */unsigned char) ((arr_53 [i_15]) << (((arr_31 [i_15] [i_15 + 1] [i_15] [i_15] [i_18 - 1] [i_27 + 4]) - (4075564942U)))))) : (((/* implicit */unsigned char) ((arr_53 [i_15]) << (((((arr_31 [i_15] [i_15 + 1] [i_15] [i_15] [i_18 - 1] [i_27 + 4]) - (4075564942U))) - (2079785286U))))));
                        }
                    } 
                } 
            }
            for (signed char i_29 = 0; i_29 < 16; i_29 += 4) 
            {
                var_65 = ((/* implicit */unsigned long long int) min((var_65), (((/* implicit */unsigned long long int) var_5))));
                /* LoopNest 2 */
                for (unsigned int i_30 = 0; i_30 < 16; i_30 += 4) 
                {
                    for (signed char i_31 = 0; i_31 < 16; i_31 += 4) 
                    {
                        {
                            var_66 &= ((/* implicit */unsigned int) 2147483647ULL);
                            arr_101 [i_15] [i_30] [i_15] [i_18] [i_15] = ((/* implicit */short) ((unsigned int) arr_99 [i_18 + 1] [i_18] [i_15 + 2] [i_18 + 1] [i_15 + 2]));
                        }
                    } 
                } 
            }
        }
        arr_102 [i_15] = ((/* implicit */int) arr_65 [i_15] [i_15] [i_15]);
        /* LoopSeq 3 */
        for (unsigned int i_32 = 0; i_32 < 16; i_32 += 3) /* same iter space */
        {
            arr_105 [i_15] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_97 [i_32] [i_32] [i_32] [i_15 + 1] [i_15] [5U] [i_15 + 2]))));
            var_67 = ((/* implicit */unsigned char) 3U);
            arr_106 [i_15] [i_15] = (signed char)51;
        }
        for (unsigned int i_33 = 0; i_33 < 16; i_33 += 3) /* same iter space */
        {
            var_68 = ((/* implicit */signed char) min((var_68), (((/* implicit */signed char) ((((/* implicit */int) arr_73 [14U] [i_15 + 2] [i_15 + 2] [i_33] [i_15 + 2] [i_33])) - (((((/* implicit */int) var_13)) / (((/* implicit */int) arr_52 [i_15] [(unsigned short)14] [(short)8])))))))));
            var_69 = ((/* implicit */signed char) (-(((/* implicit */int) arr_64 [i_15] [i_15]))));
            var_70 -= ((/* implicit */_Bool) var_17);
            var_71 = ((/* implicit */short) max((var_71), (((/* implicit */short) (~(((/* implicit */int) arr_32 [(short)14] [(short)14])))))));
        }
        for (unsigned int i_34 = 0; i_34 < 16; i_34 += 3) /* same iter space */
        {
            var_72 = ((/* implicit */unsigned int) min((var_72), (((/* implicit */unsigned int) var_8))));
            var_73 = ((/* implicit */short) max((var_73), (((/* implicit */short) ((((/* implicit */int) (unsigned char)248)) << (((((/* implicit */int) (short)-1544)) + (1565))))))));
            var_74 += ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_20 [i_15 - 1] [i_15 + 2] [i_15 + 2] [i_15 - 1]))) < (var_8)));
            /* LoopSeq 4 */
            for (long long int i_35 = 1; i_35 < 13; i_35 += 2) 
            {
                var_75 = ((/* implicit */_Bool) (-(arr_38 [i_15 - 1] [i_35 - 1] [i_15 - 1] [i_35 - 1])));
                var_76 = ((/* implicit */int) max((var_76), (((/* implicit */int) var_17))));
            }
            for (int i_36 = 0; i_36 < 16; i_36 += 1) 
            {
                var_77 -= ((/* implicit */unsigned short) ((((/* implicit */int) arr_7 [i_15 + 1] [i_15 + 1] [16U])) << (((((/* implicit */int) (unsigned short)40754)) - (40733)))));
                arr_117 [i_15] [i_34] [i_15] = ((/* implicit */unsigned char) arr_46 [i_36]);
            }
            for (unsigned int i_37 = 3; i_37 < 13; i_37 += 4) 
            {
                var_78 = ((/* implicit */int) var_14);
                var_79 += ((/* implicit */long long int) (+((+(2147483661ULL)))));
            }
            for (unsigned int i_38 = 2; i_38 < 15; i_38 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_39 = 4; i_39 < 13; i_39 += 4) 
                {
                    var_80 = ((int) (unsigned short)40767);
                    var_81 -= ((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) var_9))) % (2898938000U))) << (((arr_51 [(signed char)7] [i_15]) - (3042879057U)))));
                    var_82 = ((/* implicit */unsigned int) 13945326890786142591ULL);
                    /* LoopSeq 2 */
                    for (signed char i_40 = 0; i_40 < 16; i_40 += 1) 
                    {
                        var_83 *= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 7U)) % (2147483652ULL)));
                        var_84 = ((/* implicit */unsigned short) arr_115 [i_15 + 2] [i_38] [i_38] [i_39 + 1]);
                        arr_130 [i_15] [i_15] [i_34] [i_38] [i_39] [i_38] &= ((/* implicit */unsigned short) arr_112 [i_38 - 2] [i_39] [i_38]);
                        var_85 -= ((/* implicit */signed char) (+(arr_118 [i_39])));
                    }
                    for (int i_41 = 1; i_41 < 15; i_41 += 1) 
                    {
                        arr_134 [i_15] [i_15] [i_15] [i_15] [(unsigned char)4] [i_15] = ((/* implicit */signed char) 31);
                        var_86 += (!(((/* implicit */_Bool) arr_126 [i_41 + 1] [i_39 + 2] [i_34] [i_15])));
                    }
                    var_87 = ((/* implicit */short) ((unsigned int) var_1));
                }
                var_88 = ((/* implicit */unsigned int) min((var_88), (arr_87 [i_38])));
                var_89 |= ((/* implicit */int) var_12);
            }
        }
        /* LoopNest 2 */
        for (long long int i_42 = 2; i_42 < 13; i_42 += 4) 
        {
            for (unsigned char i_43 = 2; i_43 < 12; i_43 += 1) 
            {
                {
                    arr_140 [i_15] [i_42] [i_42] [(unsigned char)13] = ((/* implicit */unsigned short) arr_100 [i_15 + 3]);
                    /* LoopSeq 1 */
                    for (short i_44 = 1; i_44 < 15; i_44 += 3) 
                    {
                        var_90 = ((/* implicit */long long int) max((var_90), (((/* implicit */long long int) var_3))));
                        /* LoopSeq 2 */
                        for (unsigned int i_45 = 0; i_45 < 16; i_45 += 3) 
                        {
                            arr_145 [i_15] [8] [i_43] [i_44] [i_15] [i_15] [i_15] = ((/* implicit */short) ((((/* implicit */_Bool) arr_97 [i_44] [i_43 + 4] [i_43 + 3] [i_43] [i_43] [i_43 + 3] [12U])) || (((/* implicit */_Bool) 2372680699U))));
                            arr_146 [i_15] = ((short) arr_84 [i_15] [i_15] [i_15] [i_15 + 3] [i_15 + 3] [i_15 - 1]);
                            arr_147 [i_15] [i_42] [i_43 + 1] [i_44 + 1] [14U] [i_15] [i_45] = ((/* implicit */short) (-(((long long int) arr_51 [i_44] [i_43]))));
                            var_91 = ((/* implicit */long long int) max((var_91), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)28504)) ? (((/* implicit */int) (short)1530)) : (((/* implicit */int) (unsigned char)120)))))));
                            arr_148 [i_42] [i_42] [i_43] [0U] [i_45] &= arr_25 [7U] [i_44] [i_15 + 2] [i_15 + 2] [i_15 + 2];
                        }
                        for (signed char i_46 = 0; i_46 < 16; i_46 += 4) 
                        {
                            var_92 += ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)1531)) <= (((((/* implicit */_Bool) var_9)) ? (var_3) : (((/* implicit */int) (_Bool)1))))));
                            var_93 += (!(((/* implicit */_Bool) arr_139 [i_42] [i_15] [i_42])));
                            var_94 = ((/* implicit */unsigned int) arr_15 [i_15] [i_15] [i_15] [i_15] [i_15]);
                            var_95 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_123 [i_15] [i_42] [i_43]))));
                        }
                        var_96 = ((/* implicit */unsigned int) var_5);
                    }
                }
            } 
        } 
    }
}
