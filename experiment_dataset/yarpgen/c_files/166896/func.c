/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166896
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 10; i_2 += 3) 
            {
                for (short i_3 = 0; i_3 < 11; i_3 += 4) 
                {
                    {
                        arr_8 [i_0] [i_0] [i_1] = ((/* implicit */short) var_8);
                        arr_9 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_7);
                        /* LoopSeq 2 */
                        for (unsigned short i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            var_11 ^= ((/* implicit */long long int) var_7);
                            arr_14 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_5);
                        }
                        for (long long int i_5 = 0; i_5 < 11; i_5 += 1) 
                        {
                            arr_18 [i_0] [i_0] [i_1] [i_0] [i_1] [i_1] [i_1] = ((/* implicit */long long int) var_10);
                            var_12 -= ((/* implicit */long long int) var_7);
                            arr_19 [i_1] [i_3] [i_2] [i_0] [i_0] [i_1] = ((/* implicit */_Bool) var_7);
                        }
                        var_13 = ((/* implicit */signed char) var_10);
                    }
                } 
            } 
        } 
        arr_20 [i_0] = ((/* implicit */unsigned int) var_3);
        var_14 = ((/* implicit */unsigned short) var_8);
        /* LoopNest 3 */
        for (unsigned long long int i_6 = 2; i_6 < 9; i_6 += 4) 
        {
            for (short i_7 = 0; i_7 < 11; i_7 += 4) 
            {
                for (unsigned short i_8 = 0; i_8 < 11; i_8 += 2) 
                {
                    {
                        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) var_5))));
                        arr_29 [i_7] [i_0] = ((/* implicit */unsigned long long int) var_1);
                        arr_30 [i_0] [i_0] [i_7] [i_7] = ((/* implicit */short) var_1);
                        /* LoopSeq 3 */
                        for (unsigned short i_9 = 0; i_9 < 11; i_9 += 1) 
                        {
                            arr_33 [i_0] [i_6] [i_6] [i_8] [i_7] [i_9] [i_6] = var_6;
                            var_16 = ((/* implicit */unsigned char) var_8);
                            var_17 *= var_0;
                            var_18 = var_9;
                        }
                        for (short i_10 = 3; i_10 < 9; i_10 += 3) 
                        {
                            arr_36 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */signed char) var_6);
                            arr_37 [i_0] [i_0] [i_0] [i_0] [i_10] [i_10] = ((/* implicit */signed char) var_3);
                            var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) var_6))));
                            var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) var_7))));
                        }
                        /* vectorizable */
                        for (long long int i_11 = 0; i_11 < 11; i_11 += 2) 
                        {
                            arr_40 [i_0] [i_6] [i_0] [i_8] [i_8] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_1);
                            arr_41 [i_0 - 1] [i_6] [i_6] [i_8] [i_6] [i_0 - 1] [i_6] = ((/* implicit */unsigned short) var_9);
                            arr_42 [i_0] [i_0] [i_0] [i_11] [i_11] [i_11] [i_8] = var_3;
                            var_21 &= ((/* implicit */unsigned long long int) var_3);
                        }
                        var_22 = ((/* implicit */unsigned int) var_6);
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned long long int i_12 = 0; i_12 < 11; i_12 += 1) 
        {
            arr_45 [i_0] = ((/* implicit */unsigned char) var_9);
            var_23 = ((/* implicit */unsigned char) var_0);
        }
        for (unsigned long long int i_13 = 0; i_13 < 11; i_13 += 1) 
        {
            var_24 = ((/* implicit */long long int) var_8);
            var_25 = ((/* implicit */unsigned long long int) var_3);
            /* LoopSeq 2 */
            for (unsigned char i_14 = 0; i_14 < 11; i_14 += 1) 
            {
                arr_51 [i_14] [i_14] [i_14] = ((/* implicit */short) var_8);
                var_26 = ((/* implicit */unsigned long long int) var_7);
                var_27 = ((/* implicit */_Bool) var_4);
                /* LoopSeq 2 */
                for (unsigned long long int i_15 = 0; i_15 < 11; i_15 += 2) 
                {
                    arr_54 [i_15] [i_14] [i_13] [i_14] [i_0] = ((/* implicit */unsigned short) var_1);
                    var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) var_8))));
                    arr_55 [i_14] [i_13] [i_15] = ((/* implicit */signed char) var_10);
                }
                for (signed char i_16 = 0; i_16 < 11; i_16 += 3) 
                {
                    var_29 -= ((/* implicit */unsigned char) var_5);
                    /* LoopSeq 3 */
                    for (unsigned long long int i_17 = 4; i_17 < 9; i_17 += 2) /* same iter space */
                    {
                        var_30 = ((/* implicit */unsigned int) var_2);
                        var_31 -= ((/* implicit */short) var_9);
                        var_32 = ((/* implicit */_Bool) var_6);
                    }
                    for (unsigned long long int i_18 = 4; i_18 < 9; i_18 += 2) /* same iter space */
                    {
                        arr_64 [i_14] [i_14] [i_14] [i_14] = ((/* implicit */int) var_0);
                        var_33 *= ((/* implicit */short) var_0);
                        var_34 = ((/* implicit */unsigned long long int) var_2);
                        arr_65 [i_14] [i_14] [i_14] [i_14] [i_18] [i_14] = ((/* implicit */long long int) var_8);
                        var_35 = ((/* implicit */short) var_0);
                    }
                    /* vectorizable */
                    for (unsigned long long int i_19 = 4; i_19 < 9; i_19 += 2) /* same iter space */
                    {
                        var_36 = ((/* implicit */long long int) var_2);
                        var_37 = var_3;
                        var_38 = ((/* implicit */unsigned int) var_3);
                        arr_68 [i_0] [i_0] [i_14] [i_14] [i_14] = ((/* implicit */unsigned long long int) var_7);
                    }
                }
            }
            for (short i_20 = 1; i_20 < 9; i_20 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned char i_21 = 3; i_21 < 9; i_21 += 1) 
                {
                    for (unsigned int i_22 = 1; i_22 < 10; i_22 += 2) 
                    {
                        {
                            var_39 = var_0;
                            arr_75 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) var_9);
                            arr_76 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) var_6);
                        }
                    } 
                } 
                arr_77 [i_0] [i_0] [i_0] [i_20] = ((/* implicit */unsigned int) var_8);
            }
            var_40 = ((/* implicit */unsigned short) var_6);
            arr_78 [i_0] &= ((/* implicit */_Bool) var_7);
        }
    }
    var_41 = var_10;
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_23 = 0; i_23 < 13; i_23 += 4) 
    {
        /* LoopNest 3 */
        for (int i_24 = 3; i_24 < 11; i_24 += 3) 
        {
            for (unsigned char i_25 = 3; i_25 < 10; i_25 += 4) 
            {
                for (int i_26 = 0; i_26 < 13; i_26 += 4) 
                {
                    {
                        var_42 = ((/* implicit */unsigned short) var_10);
                        var_43 -= ((/* implicit */unsigned long long int) var_5);
                        arr_90 [i_23] [i_24] [i_25] [i_26] [i_24] = ((/* implicit */signed char) var_8);
                    }
                } 
            } 
        } 
        var_44 = ((/* implicit */int) var_1);
    }
    for (long long int i_27 = 0; i_27 < 18; i_27 += 3) 
    {
        arr_94 [i_27] = ((/* implicit */unsigned short) var_10);
        arr_95 [i_27] = ((/* implicit */unsigned int) var_6);
        arr_96 [i_27] [i_27] = ((/* implicit */unsigned short) var_3);
        var_45 -= ((/* implicit */_Bool) var_0);
    }
    for (unsigned long long int i_28 = 0; i_28 < 12; i_28 += 2) 
    {
        /* LoopNest 2 */
        for (short i_29 = 2; i_29 < 8; i_29 += 1) 
        {
            for (unsigned int i_30 = 3; i_30 < 11; i_30 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_31 = 1; i_31 < 10; i_31 += 2) 
                    {
                        arr_108 [i_28] [i_28] [i_30] [i_31] = ((/* implicit */int) var_8);
                        arr_109 [i_28] [i_29] [i_30] [i_31] [i_31] &= ((/* implicit */_Bool) var_7);
                        arr_110 [i_31] = var_0;
                        var_46 = ((/* implicit */unsigned char) var_9);
                    }
                    var_47 = ((/* implicit */int) var_5);
                }
            } 
        } 
        /* LoopSeq 2 */
        for (int i_32 = 0; i_32 < 12; i_32 += 4) 
        {
            arr_113 [i_28] [i_28] [i_28] = ((/* implicit */short) var_0);
            var_48 = ((/* implicit */short) var_6);
            var_49 = var_2;
        }
        /* vectorizable */
        for (signed char i_33 = 1; i_33 < 10; i_33 += 1) 
        {
            arr_117 [i_28] [i_33] [i_33] = ((/* implicit */short) var_6);
            /* LoopSeq 1 */
            for (unsigned char i_34 = 1; i_34 < 9; i_34 += 2) 
            {
                arr_120 [i_34 + 2] [i_33] [i_28] = ((/* implicit */signed char) var_0);
                /* LoopSeq 4 */
                for (unsigned int i_35 = 0; i_35 < 12; i_35 += 1) 
                {
                    var_50 = ((/* implicit */signed char) max((var_50), (((/* implicit */signed char) var_8))));
                    var_51 &= ((/* implicit */signed char) var_7);
                    arr_123 [i_28] [i_28] [i_33 + 2] [i_35] = ((/* implicit */short) var_10);
                }
                for (int i_36 = 0; i_36 < 12; i_36 += 2) 
                {
                    var_52 = ((/* implicit */unsigned short) var_2);
                    var_53 = ((/* implicit */int) min((var_53), (((/* implicit */int) var_10))));
                }
                for (unsigned int i_37 = 0; i_37 < 12; i_37 += 4) 
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_38 = 0; i_38 < 12; i_38 += 3) 
                    {
                        arr_131 [i_28] [i_33] [i_37] = ((/* implicit */unsigned short) var_10);
                        arr_132 [i_28] = ((/* implicit */_Bool) var_9);
                        var_54 -= ((/* implicit */unsigned short) var_8);
                        var_55 ^= ((/* implicit */unsigned long long int) var_2);
                    }
                    for (unsigned short i_39 = 1; i_39 < 11; i_39 += 2) 
                    {
                        arr_136 [i_39] [i_39] [i_39] [i_37] [i_37] = ((/* implicit */unsigned char) var_2);
                        var_56 -= ((/* implicit */unsigned short) var_0);
                    }
                    for (unsigned long long int i_40 = 2; i_40 < 10; i_40 += 1) 
                    {
                        arr_139 [i_28] [i_33 + 2] [i_34] [i_28] [i_28] [i_37] [i_37] = ((/* implicit */unsigned char) var_4);
                        arr_140 [i_33] [i_33 - 1] [i_33 - 1] [i_33] [i_33] = ((/* implicit */unsigned int) var_10);
                        var_57 = ((/* implicit */signed char) var_2);
                        var_58 = ((/* implicit */unsigned long long int) var_1);
                        var_59 *= ((/* implicit */signed char) var_5);
                    }
                    var_60 ^= ((/* implicit */_Bool) var_0);
                    arr_141 [i_28] [i_28] [i_28] [i_28] = var_9;
                    arr_142 [i_37] [i_34] [i_28] [i_28] = ((/* implicit */unsigned long long int) var_10);
                }
                for (short i_41 = 0; i_41 < 12; i_41 += 4) 
                {
                    var_61 = ((/* implicit */int) var_5);
                    var_62 = ((/* implicit */unsigned long long int) var_3);
                    arr_145 [i_28] = ((/* implicit */int) var_8);
                }
                arr_146 [i_33] [i_33] [i_34] = ((/* implicit */long long int) var_6);
                /* LoopNest 2 */
                for (unsigned short i_42 = 0; i_42 < 12; i_42 += 2) 
                {
                    for (signed char i_43 = 0; i_43 < 12; i_43 += 1) 
                    {
                        {
                            arr_154 [i_43] [i_42] [i_43] [i_42] [i_43] [i_43] [i_34] = ((/* implicit */unsigned short) var_7);
                            arr_155 [i_43] [i_43] [i_43] [i_28] [i_43] = ((/* implicit */unsigned short) var_4);
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned short i_44 = 0; i_44 < 12; i_44 += 1) 
                {
                    arr_158 [i_28] [i_28] [i_28] [i_28] [i_34] [i_34] &= ((/* implicit */int) var_0);
                    var_63 = ((/* implicit */unsigned int) var_3);
                }
                for (int i_45 = 0; i_45 < 12; i_45 += 3) 
                {
                    arr_162 [i_45] [i_34 + 3] [i_45] [i_45] = ((/* implicit */int) var_9);
                    /* LoopSeq 2 */
                    for (unsigned char i_46 = 0; i_46 < 12; i_46 += 1) 
                    {
                        var_64 = ((/* implicit */unsigned short) var_0);
                        var_65 = ((/* implicit */_Bool) min((var_65), (((/* implicit */_Bool) var_8))));
                    }
                    for (unsigned long long int i_47 = 0; i_47 < 12; i_47 += 3) 
                    {
                        var_66 = ((/* implicit */signed char) var_3);
                        var_67 = ((/* implicit */_Bool) var_6);
                        var_68 = ((/* implicit */unsigned int) var_5);
                    }
                    /* LoopSeq 3 */
                    for (_Bool i_48 = 0; i_48 < 1; i_48 += 1) 
                    {
                        arr_172 [i_28] [i_28] [i_28] [i_45] [i_28] = ((/* implicit */_Bool) var_7);
                        var_69 = ((/* implicit */unsigned int) var_9);
                    }
                    for (long long int i_49 = 1; i_49 < 10; i_49 += 2) 
                    {
                        arr_177 [i_34] [i_45] [i_45] [i_34] [i_45] [i_28] = ((/* implicit */_Bool) var_2);
                        var_70 = ((/* implicit */long long int) var_4);
                        var_71 = ((/* implicit */int) max((var_71), (((/* implicit */int) var_1))));
                    }
                    for (short i_50 = 1; i_50 < 10; i_50 += 2) 
                    {
                        var_72 = ((/* implicit */unsigned short) var_6);
                        arr_182 [i_45] = var_8;
                        arr_183 [i_34] [i_33] [i_45] [i_45] = ((/* implicit */long long int) var_9);
                        var_73 = ((/* implicit */long long int) min((var_73), (((/* implicit */long long int) var_5))));
                    }
                    arr_184 [i_28] [i_28] [i_45] [i_28] [i_28] = ((/* implicit */short) var_5);
                }
            }
            arr_185 [i_28] = ((/* implicit */int) var_4);
            arr_186 [i_28] [i_33 + 2] [i_33 + 2] = ((/* implicit */int) var_6);
        }
        /* LoopNest 2 */
        for (unsigned long long int i_51 = 0; i_51 < 12; i_51 += 2) 
        {
            for (signed char i_52 = 0; i_52 < 12; i_52 += 4) 
            {
                {
                    var_74 -= ((/* implicit */unsigned short) var_10);
                    /* LoopSeq 3 */
                    for (unsigned long long int i_53 = 2; i_53 < 11; i_53 += 3) 
                    {
                        arr_194 [i_28] [i_28] [i_28] [i_28] = ((/* implicit */unsigned int) var_9);
                        var_75 = ((/* implicit */unsigned long long int) var_7);
                    }
                    /* vectorizable */
                    for (long long int i_54 = 0; i_54 < 12; i_54 += 1) 
                    {
                        var_76 = ((/* implicit */long long int) var_0);
                        var_77 = ((/* implicit */long long int) var_5);
                        arr_197 [i_54] [i_51] [i_52] [i_54] = ((/* implicit */int) var_1);
                        /* LoopSeq 4 */
                        for (int i_55 = 0; i_55 < 12; i_55 += 3) 
                        {
                            arr_200 [i_55] [i_54] [i_28] [i_51] [i_28] &= ((/* implicit */unsigned char) var_2);
                            arr_201 [i_28] [i_51] [i_51] [i_51] [i_51] = ((/* implicit */_Bool) var_8);
                        }
                        for (unsigned long long int i_56 = 1; i_56 < 11; i_56 += 2) 
                        {
                            arr_206 [i_28] [i_51] [i_52] [i_28] [i_56] = ((/* implicit */unsigned short) var_6);
                            var_78 = ((/* implicit */unsigned short) var_4);
                        }
                        for (signed char i_57 = 0; i_57 < 12; i_57 += 2) 
                        {
                            arr_210 [i_57] [i_54] [i_28] [i_51] [i_28] = ((/* implicit */unsigned int) var_6);
                            arr_211 [i_28] [i_28] [i_52] [i_52] [i_57] &= var_2;
                        }
                        for (short i_58 = 0; i_58 < 12; i_58 += 1) 
                        {
                            var_79 = ((/* implicit */short) var_10);
                            arr_214 [i_28] [i_54] [i_28] [i_28] [i_28] = ((/* implicit */long long int) var_0);
                        }
                    }
                    /* vectorizable */
                    for (unsigned long long int i_59 = 0; i_59 < 12; i_59 += 1) 
                    {
                        arr_218 [i_28] [i_59] [i_59] [i_28] [i_59] = ((/* implicit */short) var_1);
                        var_80 = ((/* implicit */_Bool) max((var_80), (var_5)));
                        var_81 *= ((/* implicit */unsigned char) var_7);
                    }
                }
            } 
        } 
    }
}
