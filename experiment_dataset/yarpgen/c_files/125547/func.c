/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125547
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
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */int) var_11)) ^ (((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)16)) >= (((/* implicit */int) (unsigned char)126))))), ((unsigned char)67))))));
    var_13 = (unsigned char)14;
    var_14 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)255))));
    var_15 = (unsigned char)241;
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            arr_4 [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_1 [(unsigned char)9] [i_1]))));
            arr_5 [(unsigned char)8] [(unsigned char)0] [(unsigned char)0] = min((max(((unsigned char)119), ((unsigned char)188))), (arr_3 [i_0] [i_0] [i_1]));
            arr_6 [i_0] [i_1] [i_1] &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((((/* implicit */int) (unsigned char)3)) * (((/* implicit */int) (unsigned char)14)))), (((/* implicit */int) (unsigned char)120)))))));
        }
        for (unsigned char i_2 = 0; i_2 < 14; i_2 += 4) 
        {
            arr_11 [i_0] = ((/* implicit */unsigned char) (((~((~(((/* implicit */int) (unsigned char)25)))))) << (((((/* implicit */int) ((unsigned char) max((arr_2 [i_0] [i_2]), ((unsigned char)202))))) - (185)))));
            var_16 -= (unsigned char)4;
            arr_12 [(unsigned char)13] [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)138))));
        }
        for (unsigned char i_3 = 3; i_3 < 10; i_3 += 1) 
        {
            var_17 = ((unsigned char) (unsigned char)140);
            arr_16 [i_0] &= (unsigned char)14;
            arr_17 [i_3] = arr_9 [i_0] [i_0] [i_0];
        }
        var_18 -= max(((unsigned char)241), (arr_14 [i_0] [i_0]));
        var_19 = arr_7 [i_0] [(unsigned char)9] [i_0];
    }
    for (unsigned char i_4 = 0; i_4 < 20; i_4 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_5 = 0; i_5 < 20; i_5 += 4) 
        {
            for (unsigned char i_6 = 0; i_6 < 20; i_6 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_7 = 1; i_7 < 16; i_7 += 4) 
                    {
                        var_20 *= ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)6))));
                        /* LoopSeq 1 */
                        for (unsigned char i_8 = 0; i_8 < 20; i_8 += 3) 
                        {
                            arr_30 [i_7] [i_7] [i_7] [i_6] [i_5] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)16)) - (((/* implicit */int) (unsigned char)0))))) && (((/* implicit */_Bool) (unsigned char)1))));
                            arr_31 [i_8] [i_5] [i_6] [i_5] [i_7] [i_8] = (unsigned char)64;
                        }
                    }
                    arr_32 [i_5] [i_5] [i_4] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)4))));
                    /* LoopSeq 1 */
                    for (unsigned char i_9 = 0; i_9 < 20; i_9 += 4) 
                    {
                        arr_35 [i_4] [i_4] [i_6] [i_9] = (unsigned char)0;
                        arr_36 [(unsigned char)12] [i_5] [i_6] [i_5] [i_6] [i_4] = (unsigned char)0;
                    }
                    var_21 = arr_29 [i_4] [i_6] [i_5] [i_4];
                    arr_37 [i_4] [(unsigned char)15] [i_6] &= (unsigned char)212;
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_10 = 0; i_10 < 20; i_10 += 2) 
        {
            for (unsigned char i_11 = 0; i_11 < 20; i_11 += 3) 
            {
                {
                    arr_44 [i_4] [i_11] = ((unsigned char) arr_28 [i_11] [i_4] [i_4] [i_4] [(unsigned char)10]);
                    arr_45 [i_11] [i_11] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_24 [i_4] [i_11] [i_11] [i_4])) / (((/* implicit */int) arr_24 [i_4] [i_4] [i_4] [i_4])))) < (((/* implicit */int) ((((/* implicit */int) (unsigned char)202)) > (((/* implicit */int) arr_24 [i_11] [i_4] [i_10] [i_4])))))));
                }
            } 
        } 
        arr_46 [i_4] [i_4] = ((unsigned char) ((unsigned char) arr_21 [i_4] [i_4]));
    }
    /* vectorizable */
    for (unsigned char i_12 = 0; i_12 < 19; i_12 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_13 = 1; i_13 < 18; i_13 += 2) /* same iter space */
        {
            /* LoopSeq 3 */
            for (unsigned char i_14 = 0; i_14 < 19; i_14 += 4) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_15 = 0; i_15 < 19; i_15 += 4) 
                {
                    /* LoopSeq 4 */
                    for (unsigned char i_16 = 0; i_16 < 19; i_16 += 2) 
                    {
                        var_22 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)170))));
                        arr_61 [i_14] [i_12] [(unsigned char)3] [i_12] [i_16] [i_14] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_27 [i_15] [i_14])))))));
                        var_23 = ((unsigned char) (unsigned char)40);
                    }
                    for (unsigned char i_17 = 0; i_17 < 19; i_17 += 4) 
                    {
                        var_24 = (unsigned char)1;
                        arr_64 [i_17] [i_15] [i_13] [i_14] [i_13] [i_12] = (unsigned char)25;
                        arr_65 [i_12] [(unsigned char)5] [i_14] [i_15] [i_17] = arr_21 [i_13] [i_15];
                    }
                    for (unsigned char i_18 = 0; i_18 < 19; i_18 += 4) 
                    {
                        arr_68 [i_15] [i_15] [i_15] [i_15] = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)131))));
                        arr_69 [i_18] [i_13] [i_12] [(unsigned char)1] [i_18] = arr_63 [i_12] [i_13] [i_14] [i_15] [i_15] [(unsigned char)8] [i_18];
                    }
                    for (unsigned char i_19 = 0; i_19 < 19; i_19 += 4) 
                    {
                        arr_72 [i_13 + 1] [i_13] [i_15] [i_15] [i_19] = (unsigned char)86;
                        var_25 = (unsigned char)220;
                    }
                    arr_73 [i_14] = (unsigned char)243;
                    arr_74 [i_15] [i_12] [(unsigned char)7] [i_12] = ((unsigned char) (unsigned char)224);
                }
                for (unsigned char i_20 = 0; i_20 < 19; i_20 += 1) 
                {
                    var_26 -= ((/* implicit */unsigned char) (+(((((/* implicit */int) (unsigned char)6)) % (((/* implicit */int) arr_38 [i_12] [i_12]))))));
                    arr_77 [i_20] [i_13] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned char) arr_29 [i_20] [i_13 + 1] [(unsigned char)7] [i_20])))));
                    arr_78 [i_20] [i_20] [i_20] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)25)) >> (((((/* implicit */int) (unsigned char)202)) - (187)))));
                }
                arr_79 [i_12] [i_13] [i_14] = arr_62 [i_13 + 1];
                arr_80 [(unsigned char)15] [i_12] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_48 [i_12] [i_14]))));
                arr_81 [(unsigned char)17] [i_13] [i_13 + 1] [i_13] = (unsigned char)135;
                arr_82 [i_12] [(unsigned char)4] [i_13] [(unsigned char)14] &= ((/* implicit */unsigned char) (+(((((/* implicit */int) (unsigned char)255)) - (((/* implicit */int) arr_54 [i_12] [i_12]))))));
            }
            for (unsigned char i_21 = 0; i_21 < 19; i_21 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned char i_22 = 0; i_22 < 19; i_22 += 3) 
                {
                    for (unsigned char i_23 = 0; i_23 < 19; i_23 += 2) 
                    {
                        {
                            arr_91 [i_22] [i_22] [i_22] [i_21] [i_22] [i_12] = (unsigned char)71;
                            var_27 = ((/* implicit */unsigned char) max((var_27), (arr_41 [i_22])));
                            arr_92 [i_23] [i_22] [i_13] = (unsigned char)0;
                        }
                    } 
                } 
                arr_93 [i_21] &= ((/* implicit */unsigned char) (~((-(((/* implicit */int) (unsigned char)128))))));
            }
            for (unsigned char i_24 = 0; i_24 < 19; i_24 += 4) 
            {
                arr_96 [(unsigned char)8] [i_12] [i_24] = ((/* implicit */unsigned char) (-((~(((/* implicit */int) (unsigned char)16))))));
                arr_97 [i_12] [i_13] [(unsigned char)12] = (unsigned char)94;
                arr_98 [i_12] [(unsigned char)7] [i_12] [(unsigned char)7] &= arr_89 [i_12] [i_13] [i_13] [i_12] [i_24];
                /* LoopNest 2 */
                for (unsigned char i_25 = 0; i_25 < 19; i_25 += 4) 
                {
                    for (unsigned char i_26 = 0; i_26 < 19; i_26 += 4) 
                    {
                        {
                            arr_106 [i_26] [i_25] [i_24] [i_24] [i_13] [i_13 + 1] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)0)) == (((/* implicit */int) (unsigned char)24))));
                            arr_107 [i_12] [i_13 + 1] [i_24] [i_25] [i_26] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)0)))))));
                            arr_108 [i_12] [i_24] [i_12] [i_12] [i_12] [i_26] = (unsigned char)70;
                            arr_109 [i_12] [(unsigned char)13] [(unsigned char)13] = arr_101 [i_13] [i_13 - 1] [i_24];
                        }
                    } 
                } 
                var_28 = (unsigned char)14;
            }
            /* LoopNest 2 */
            for (unsigned char i_27 = 4; i_27 < 17; i_27 += 1) 
            {
                for (unsigned char i_28 = 0; i_28 < 19; i_28 += 1) 
                {
                    {
                        arr_115 [(unsigned char)16] [i_13] [i_27] [i_28] = (unsigned char)255;
                        var_29 = (unsigned char)238;
                        arr_116 [i_12] [i_12] [i_12] [(unsigned char)3] [i_27] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_50 [i_27 - 1]))));
                        var_30 = (unsigned char)15;
                    }
                } 
            } 
        }
        for (unsigned char i_29 = 1; i_29 < 18; i_29 += 2) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned char i_30 = 2; i_30 < 17; i_30 += 2) 
            {
                for (unsigned char i_31 = 1; i_31 < 17; i_31 += 1) 
                {
                    for (unsigned char i_32 = 0; i_32 < 19; i_32 += 4) 
                    {
                        {
                            arr_129 [i_12] [i_12] [i_30] [i_30] [i_30] [i_31] = (unsigned char)255;
                            var_31 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned char) arr_88 [i_12] [i_30])))));
                            arr_130 [(unsigned char)1] [i_29 - 1] [(unsigned char)1] [i_31] [i_32] = (unsigned char)0;
                        }
                    } 
                } 
            } 
            /* LoopSeq 3 */
            for (unsigned char i_33 = 0; i_33 < 19; i_33 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned char i_34 = 0; i_34 < 19; i_34 += 2) 
                {
                    for (unsigned char i_35 = 0; i_35 < 19; i_35 += 2) 
                    {
                        {
                            var_32 -= ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)158))));
                            arr_138 [(unsigned char)2] [(unsigned char)9] [i_33] [i_29 - 1] [i_29] [(unsigned char)10] = (unsigned char)53;
                            arr_139 [i_33] [i_34] [i_33] [i_29] [i_12] = (unsigned char)241;
                            arr_140 [(unsigned char)11] [i_34] [i_34] [i_33] [i_29] [i_12] = (unsigned char)0;
                        }
                    } 
                } 
                arr_141 [i_12] [i_33] = (unsigned char)244;
                var_33 = arr_23 [i_12] [i_12];
                arr_142 [i_33] [i_12] &= ((unsigned char) ((((/* implicit */int) (unsigned char)241)) ^ (((/* implicit */int) arr_119 [i_29] [i_29 + 1]))));
            }
            for (unsigned char i_36 = 0; i_36 < 19; i_36 += 4) /* same iter space */
            {
                var_34 = arr_118 [i_12];
                /* LoopNest 2 */
                for (unsigned char i_37 = 0; i_37 < 19; i_37 += 1) 
                {
                    for (unsigned char i_38 = 0; i_38 < 19; i_38 += 4) 
                    {
                        {
                            arr_152 [(unsigned char)6] [i_37] = (unsigned char)141;
                            arr_153 [i_29] [i_37] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)85)) <= (((/* implicit */int) ((((/* implicit */int) (unsigned char)242)) >= (((/* implicit */int) (unsigned char)15)))))));
                            arr_154 [i_12] [i_29 - 1] [i_37] [i_37] [i_29 - 1] = (unsigned char)0;
                            var_35 = (unsigned char)241;
                            var_36 &= ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)0))));
                        }
                    } 
                } 
                var_37 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)140)) < (((/* implicit */int) (unsigned char)62))))) * (((/* implicit */int) (unsigned char)0))));
                /* LoopNest 2 */
                for (unsigned char i_39 = 0; i_39 < 19; i_39 += 4) 
                {
                    for (unsigned char i_40 = 0; i_40 < 19; i_40 += 4) 
                    {
                        {
                            var_38 = (unsigned char)255;
                            var_39 |= (unsigned char)3;
                        }
                    } 
                } 
                arr_162 [i_12] [i_12] [i_36] = ((/* implicit */unsigned char) (+(((((/* implicit */int) (unsigned char)144)) - (((/* implicit */int) (unsigned char)252))))));
            }
            for (unsigned char i_41 = 2; i_41 < 17; i_41 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_42 = 0; i_42 < 19; i_42 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_43 = 0; i_43 < 19; i_43 += 2) 
                    {
                        var_40 = ((unsigned char) (unsigned char)242);
                        var_41 = ((/* implicit */unsigned char) min((var_41), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)83)))))));
                        arr_170 [i_29] = ((/* implicit */unsigned char) (~(((((/* implicit */int) arr_169 [i_43] [i_41 - 2] [(unsigned char)0])) & (((/* implicit */int) arr_102 [i_12] [i_29 + 1]))))));
                    }
                    for (unsigned char i_44 = 0; i_44 < 19; i_44 += 4) 
                    {
                        var_42 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */int) (unsigned char)213)) != (((/* implicit */int) (unsigned char)255)))))));
                        var_43 = (unsigned char)25;
                    }
                    var_44 *= ((/* implicit */unsigned char) (((+(((/* implicit */int) (unsigned char)53)))) != (((/* implicit */int) (unsigned char)255))));
                    var_45 = (unsigned char)59;
                }
                arr_174 [i_12] [i_29] [(unsigned char)14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)53)) || (((/* implicit */_Bool) (unsigned char)2))));
            }
        }
        /* LoopNest 3 */
        for (unsigned char i_45 = 0; i_45 < 19; i_45 += 1) 
        {
            for (unsigned char i_46 = 0; i_46 < 19; i_46 += 4) 
            {
                for (unsigned char i_47 = 0; i_47 < 19; i_47 += 4) 
                {
                    {
                        arr_181 [i_45] = (unsigned char)49;
                        var_46 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)20)) - (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255)))))));
                        arr_182 [i_46] [i_45] = arr_25 [i_12] [i_45] [i_46] [i_47];
                    }
                } 
            } 
        } 
        arr_183 [i_12] [i_12] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned char) (unsigned char)242)))));
        var_47 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_43 [i_12])) && (((/* implicit */_Bool) (unsigned char)64))));
        /* LoopNest 3 */
        for (unsigned char i_48 = 0; i_48 < 19; i_48 += 1) 
        {
            for (unsigned char i_49 = 0; i_49 < 19; i_49 += 3) 
            {
                for (unsigned char i_50 = 0; i_50 < 19; i_50 += 4) 
                {
                    {
                        var_48 = arr_70 [i_12] [i_12];
                        arr_191 [(unsigned char)5] [(unsigned char)5] [i_49] [i_49] [(unsigned char)18] [i_50] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)255)) > (((/* implicit */int) (unsigned char)241))));
                    }
                } 
            } 
        } 
    }
}
