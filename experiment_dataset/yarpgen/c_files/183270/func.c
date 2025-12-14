/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183270
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
    var_16 += var_12;
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (int i_1 = 2; i_1 < 14; i_1 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 18; i_3 += 4) 
                {
                    {
                        var_17 = ((/* implicit */int) ((short) max((arr_5 [i_1 - 2] [i_1 - 1]), (arr_5 [i_1 + 1] [i_1 + 3]))));
                        /* LoopSeq 4 */
                        for (unsigned short i_4 = 1; i_4 < 15; i_4 += 3) 
                        {
                            arr_14 [i_0] [i_0] [i_0] [i_0] [8LL] [i_0] = ((/* implicit */int) arr_0 [i_0]);
                            var_18 = ((/* implicit */int) ((unsigned char) ((short) arr_8 [i_0] [i_0] [i_0] [i_0])));
                            var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) min((min((((/* implicit */short) arr_11 [i_0] [i_1] [i_2] [i_3] [i_3])), (arr_0 [i_0]))), (((/* implicit */short) ((unsigned char) arr_3 [i_0])))))), (max((((/* implicit */unsigned long long int) arr_2 [i_4 + 3])), (((unsigned long long int) arr_9 [i_0] [i_0] [15LL] [15LL])))))))));
                            var_20 = ((/* implicit */int) ((unsigned int) ((_Bool) arr_13 [(short)9] [i_4 + 1] [(short)9] [i_4 + 1] [i_4])));
                        }
                        for (unsigned int i_5 = 0; i_5 < 18; i_5 += 2) 
                        {
                            arr_17 [i_0] [i_0] [i_0] [i_0] [i_2] [i_3] [i_5] = ((/* implicit */int) min((((/* implicit */long long int) ((unsigned char) arr_12 [i_1 + 1] [i_1 + 1]))), (arr_12 [i_1 + 4] [13])));
                            var_21 = ((/* implicit */signed char) arr_15 [i_0] [(_Bool)1]);
                            var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((unsigned char) min((arr_2 [i_1 + 4]), (arr_2 [i_1 - 1])))))));
                        }
                        for (short i_6 = 2; i_6 < 17; i_6 += 4) 
                        {
                            arr_21 [8U] = ((/* implicit */unsigned char) max((-1LL), (((/* implicit */long long int) (unsigned char)0))));
                            var_23 = min((((/* implicit */long long int) ((short) arr_1 [i_0]))), (min((arr_13 [i_0] [i_6 - 1] [i_0] [i_3] [i_1 - 1]), (arr_13 [i_0] [i_6 - 1] [i_0] [i_3] [i_1 - 1]))));
                        }
                        for (int i_7 = 0; i_7 < 18; i_7 += 2) 
                        {
                            arr_24 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */unsigned long long int) min((((long long int) arr_22 [i_0] [(short)9] [i_1 - 2] [i_1 + 3] [i_1 + 2])), (((/* implicit */long long int) arr_5 [i_1 + 1] [i_1 + 3]))));
                            arr_25 [i_0] [i_0] [i_2] [i_0] [i_7] = arr_12 [i_0] [i_7];
                            var_24 -= ((long long int) min((((/* implicit */long long int) (unsigned char)106)), (5LL)));
                            var_25 = ((/* implicit */int) ((short) ((int) arr_23 [i_0] [i_0] [i_1 + 2] [i_7] [i_1 + 2])));
                        }
                    }
                } 
            } 
            var_26 ^= ((/* implicit */_Bool) arr_9 [i_1 - 2] [i_0] [(_Bool)1] [i_0]);
            arr_26 [9LL] [i_0] [i_0] = ((/* implicit */int) arr_18 [12ULL] [i_1 - 1] [6LL] [i_1 - 1] [9U]);
        }
        /* vectorizable */
        for (int i_8 = 2; i_8 < 14; i_8 += 2) /* same iter space */
        {
            var_27 = ((/* implicit */unsigned int) ((long long int) arr_10 [i_0] [i_8]));
            arr_29 [i_0] = ((/* implicit */int) arr_1 [2LL]);
            /* LoopSeq 2 */
            for (signed char i_9 = 1; i_9 < 17; i_9 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned int i_10 = 4; i_10 < 15; i_10 += 3) 
                {
                    for (short i_11 = 0; i_11 < 18; i_11 += 2) 
                    {
                        {
                            var_28 *= ((/* implicit */short) arr_18 [i_8 - 2] [i_8 - 1] [i_8 + 1] [i_8 + 3] [i_9 - 1]);
                            var_29 = ((/* implicit */_Bool) arr_34 [i_8] [i_8] [(short)3] [i_8]);
                        }
                    } 
                } 
                var_30 |= ((/* implicit */short) arr_32 [i_8] [i_8]);
                var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) ((int) arr_12 [i_9 + 1] [i_8 + 4])))));
                arr_39 [0U] [i_8] [(short)10] |= ((/* implicit */long long int) ((int) arr_23 [i_0] [(unsigned char)15] [i_8 - 1] [i_9 - 1] [10LL]));
            }
            for (unsigned char i_12 = 0; i_12 < 18; i_12 += 2) 
            {
                var_32 = ((/* implicit */short) arr_41 [4ULL] [4ULL] [i_8 + 2] [(signed char)8]);
                var_33 = ((/* implicit */unsigned char) ((signed char) -1LL));
            }
        }
        for (int i_13 = 2; i_13 < 14; i_13 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned short i_14 = 4; i_14 < 16; i_14 += 3) 
            {
                var_34 = arr_7 [i_14 - 2] [(signed char)13];
                /* LoopSeq 2 */
                for (short i_15 = 3; i_15 < 17; i_15 += 3) /* same iter space */
                {
                    var_35 += min((((/* implicit */unsigned int) max((arr_35 [i_14 - 1] [i_15] [i_13]), (arr_47 [i_14 - 1] [i_14 - 1] [i_14 - 1] [i_15])))), (((unsigned int) arr_35 [i_14 - 1] [(short)0] [i_13])));
                    var_36 = ((/* implicit */_Bool) ((int) ((signed char) arr_50 [i_14])));
                }
                for (short i_16 = 3; i_16 < 17; i_16 += 3) /* same iter space */
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (long long int i_17 = 1; i_17 < 16; i_17 += 2) 
                    {
                        arr_56 [(short)0] [i_13] [i_14 - 3] [(short)0] [i_14] [i_13] [i_0] |= ((/* implicit */long long int) arr_4 [17ULL] [i_13 + 1]);
                        var_37 = ((/* implicit */int) arr_3 [i_14 + 1]);
                        arr_57 [i_0] [i_13] [i_16] [i_16] [(unsigned short)9] = ((/* implicit */unsigned int) arr_31 [i_14] [i_14] [i_16] [i_16 + 1]);
                        var_38 = ((/* implicit */long long int) min((var_38), (((long long int) arr_2 [i_13 + 3]))));
                    }
                    for (int i_18 = 0; i_18 < 18; i_18 += 3) 
                    {
                        var_39 |= ((/* implicit */unsigned char) min((min((arr_51 [i_14] [i_14] [i_14 - 4] [i_14 + 2] [(unsigned char)4]), (arr_51 [i_14] [(signed char)1] [i_14 - 4] [i_14 + 2] [i_14]))), (((/* implicit */unsigned long long int) ((long long int) arr_51 [5LL] [(short)4] [i_14 - 4] [i_14 + 2] [i_14 - 4])))));
                        arr_60 [i_16] [(_Bool)1] [i_14] [i_16 - 3] [(short)2] = ((/* implicit */signed char) arr_15 [i_0] [i_0]);
                    }
                    for (int i_19 = 1; i_19 < 17; i_19 += 3) 
                    {
                        arr_65 [10U] [i_16] [i_16] [i_0] = ((/* implicit */unsigned char) ((long long int) ((unsigned char) ((int) arr_36 [(unsigned short)17] [i_13] [(unsigned short)17] [(unsigned short)17] [i_16]))));
                        var_40 = ((/* implicit */signed char) max((var_40), (((/* implicit */signed char) arr_41 [i_0] [i_13 + 4] [i_0] [8]))));
                        arr_66 [i_0] [(unsigned short)0] [i_0] [i_14] [i_13] [i_19] [i_19] &= arr_13 [i_16] [i_16] [(unsigned char)16] [14U] [(unsigned char)13];
                    }
                    var_41 += ((/* implicit */unsigned short) arr_0 [3U]);
                    var_42 = ((/* implicit */unsigned long long int) min((arr_49 [i_0] [i_13 + 4] [i_13 + 4] [i_16] [i_14]), (arr_47 [i_0] [i_0] [i_0] [i_0])));
                    arr_67 [i_16] [i_16] [i_16] [(signed char)9] = ((/* implicit */unsigned short) arr_54 [i_0]);
                }
            }
            var_43 ^= ((/* implicit */unsigned int) min((((/* implicit */int) ((short) arr_35 [i_13] [i_0] [i_13]))), (arr_33 [i_0] [12] [i_0])));
        }
        /* LoopNest 3 */
        for (long long int i_20 = 1; i_20 < 16; i_20 += 3) 
        {
            for (long long int i_21 = 0; i_21 < 18; i_21 += 3) 
            {
                for (unsigned char i_22 = 1; i_22 < 15; i_22 += 4) 
                {
                    {
                        var_44 = ((/* implicit */short) ((long long int) arr_49 [i_20] [i_20 - 1] [i_20 - 1] [i_20 - 1] [i_20 - 1]));
                        /* LoopSeq 4 */
                        for (unsigned int i_23 = 2; i_23 < 14; i_23 += 3) 
                        {
                            arr_76 [i_21] = ((/* implicit */short) min((((long long int) ((_Bool) arr_13 [i_0] [(unsigned short)2] [i_0] [i_22] [i_23]))), (((/* implicit */long long int) arr_18 [i_0] [17LL] [i_0] [i_0] [i_23]))));
                            var_45 = ((/* implicit */long long int) ((unsigned int) ((unsigned short) arr_64 [i_0] [i_20] [i_21] [0LL] [i_23])));
                            arr_77 [i_23] [i_21] [i_21] [i_21] [i_0] [10LL] = ((/* implicit */signed char) min((arr_62 [i_23 + 2] [(short)17] [i_21] [i_22 + 3] [(short)17]), (((/* implicit */int) arr_10 [i_0] [4LL]))));
                        }
                        for (unsigned char i_24 = 0; i_24 < 18; i_24 += 1) 
                        {
                            var_46 = ((/* implicit */short) arr_70 [i_20 + 2] [(unsigned short)6]);
                            var_47 = ((/* implicit */int) ((long long int) ((unsigned char) arr_75 [i_20 - 1] [i_20 - 1] [i_21] [i_22] [i_20 - 1])));
                            var_48 -= ((/* implicit */unsigned char) arr_51 [i_24] [i_22] [i_0] [7] [i_0]);
                            var_49 = ((/* implicit */long long int) min((var_49), (((/* implicit */long long int) min((arr_35 [i_0] [i_0] [(short)8]), (((/* implicit */unsigned char) arr_75 [12U] [i_20] [2LL] [i_20 + 1] [i_20])))))));
                        }
                        for (unsigned int i_25 = 0; i_25 < 18; i_25 += 3) 
                        {
                            var_50 = ((/* implicit */_Bool) max((var_50), (((/* implicit */_Bool) ((unsigned short) ((unsigned short) max((4527968698844438880LL), (((/* implicit */long long int) (_Bool)0)))))))));
                            arr_83 [i_0] [i_21] [i_22] = ((/* implicit */long long int) arr_27 [i_0]);
                        }
                        /* vectorizable */
                        for (short i_26 = 0; i_26 < 18; i_26 += 1) 
                        {
                            arr_86 [i_21] [i_22] [i_21] [i_20 + 2] [i_21] = ((/* implicit */signed char) ((unsigned short) arr_22 [i_20 + 1] [i_20 + 1] [i_22 + 1] [i_22 + 2] [i_22 + 1]));
                            var_51 = ((/* implicit */unsigned char) min((var_51), (((/* implicit */unsigned char) arr_34 [i_0] [i_0] [i_0] [1LL]))));
                        }
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (signed char i_27 = 4; i_27 < 17; i_27 += 3) 
        {
            arr_89 [i_27] [i_27] = ((/* implicit */long long int) ((signed char) max((min((arr_71 [i_27] [i_27] [i_0]), (((/* implicit */long long int) 367787360)))), (((/* implicit */long long int) ((int) arr_43 [i_0] [i_0]))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_28 = 0; i_28 < 18; i_28 += 4) 
            {
                /* LoopSeq 3 */
                for (unsigned char i_29 = 1; i_29 < 17; i_29 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_30 = 0; i_30 < 18; i_30 += 4) 
                    {
                        var_52 -= ((/* implicit */unsigned char) ((int) arr_96 [i_0] [i_27 + 1] [i_29 - 1] [i_29 - 1] [i_30] [13LL]));
                        var_53 += ((/* implicit */_Bool) arr_37 [i_28] [i_28] [i_30]);
                        arr_99 [(unsigned char)4] [i_27] [1LL] [i_27] [i_27] = ((/* implicit */int) ((_Bool) arr_4 [i_29 - 1] [i_27 - 1]));
                        var_54 -= ((long long int) arr_87 [i_0] [i_30]);
                    }
                    for (int i_31 = 0; i_31 < 18; i_31 += 3) 
                    {
                        var_55 = ((/* implicit */int) arr_84 [i_27 - 1] [i_29 - 1]);
                        var_56 = ((/* implicit */long long int) max((var_56), (((/* implicit */long long int) ((unsigned char) arr_96 [15U] [i_29 + 1] [5LL] [8U] [8U] [15U])))));
                        var_57 *= ((/* implicit */unsigned char) arr_54 [i_29 + 1]);
                    }
                    /* LoopSeq 1 */
                    for (int i_32 = 0; i_32 < 18; i_32 += 3) 
                    {
                        var_58 += ((/* implicit */_Bool) arr_72 [i_27] [i_28] [i_27 + 1] [i_27 - 4] [i_27 - 4] [i_27 - 2]);
                        arr_104 [i_27] [i_27] = ((/* implicit */unsigned short) ((short) 367787360));
                    }
                }
                for (unsigned short i_33 = 0; i_33 < 18; i_33 += 3) 
                {
                    var_59 *= ((/* implicit */unsigned char) arr_30 [i_33] [i_28] [i_28] [i_0]);
                    var_60 = ((/* implicit */_Bool) min((var_60), (((/* implicit */_Bool) arr_87 [i_27 - 1] [i_28]))));
                    var_61 = ((/* implicit */unsigned char) ((short) arr_41 [i_28] [i_27 + 1] [i_28] [i_27 + 1]));
                    arr_108 [13LL] [i_27] [i_27] [9U] [13LL] = ((/* implicit */long long int) arr_20 [i_27 - 2] [i_27]);
                    /* LoopSeq 4 */
                    for (unsigned long long int i_34 = 0; i_34 < 18; i_34 += 4) 
                    {
                        var_62 *= ((/* implicit */signed char) arr_91 [i_34] [i_34]);
                        arr_111 [i_27] = ((/* implicit */long long int) ((unsigned char) arr_69 [i_27] [i_28] [i_27]));
                        var_63 = ((/* implicit */long long int) max((var_63), (((/* implicit */long long int) arr_15 [i_28] [i_27]))));
                        arr_112 [i_0] [i_34] [i_28] &= ((/* implicit */long long int) arr_98 [i_27 - 1] [i_27 - 2] [i_34] [i_27 - 2] [i_27] [i_34] [i_27 - 1]);
                        var_64 = ((/* implicit */unsigned char) ((int) arr_30 [17U] [i_27] [i_27] [i_27 - 2]));
                    }
                    for (signed char i_35 = 0; i_35 < 18; i_35 += 3) 
                    {
                        var_65 = ((short) arr_35 [i_0] [i_27] [i_27]);
                        var_66 = ((/* implicit */long long int) ((short) arr_79 [(short)13] [i_27] [i_28] [i_27] [i_35]));
                    }
                    for (int i_36 = 2; i_36 < 17; i_36 += 3) 
                    {
                        var_67 = ((/* implicit */unsigned int) min((var_67), (((/* implicit */unsigned int) ((_Bool) arr_69 [i_0] [i_0] [i_0])))));
                        arr_121 [i_27] [i_27] = arr_72 [i_0] [i_27] [i_0] [i_0] [i_27] [i_27];
                    }
                    for (_Bool i_37 = 0; i_37 < 1; i_37 += 1) 
                    {
                        var_68 = arr_74 [i_27 - 3] [i_27 - 2] [i_27 - 4] [i_27 + 1] [i_27 - 3];
                        var_69 = arr_35 [i_0] [i_0] [i_27];
                        var_70 = ((/* implicit */short) min((var_70), (((short) arr_105 [i_28]))));
                        arr_125 [i_27] [i_27] [i_27] = ((/* implicit */long long int) arr_11 [i_0] [i_27] [i_28] [i_27 - 2] [i_33]);
                    }
                }
                for (long long int i_38 = 2; i_38 < 16; i_38 += 2) 
                {
                    var_71 = ((unsigned int) arr_5 [i_27 - 1] [i_27]);
                    var_72 = ((/* implicit */unsigned int) max((var_72), (((/* implicit */unsigned int) ((unsigned char) arr_120 [i_38 + 1] [i_38 + 1] [i_38 + 1] [i_38] [i_38 + 1])))));
                    var_73 = ((/* implicit */signed char) min((var_73), (((/* implicit */signed char) arr_64 [i_0] [i_27 - 1] [i_28] [2LL] [i_38]))));
                    arr_128 [i_0] [i_27] [i_0] = ((int) (unsigned char)101);
                    /* LoopSeq 1 */
                    for (long long int i_39 = 2; i_39 < 15; i_39 += 3) 
                    {
                        arr_132 [i_27] [7LL] [i_28] [4LL] [i_39] = ((/* implicit */unsigned int) ((_Bool) arr_10 [(unsigned char)15] [(unsigned char)15]));
                        arr_133 [i_27] [i_27] [i_28] [i_38] = ((/* implicit */int) arr_4 [(short)1] [i_27]);
                        arr_134 [i_27] [i_38 + 2] [i_28] [i_38] = ((/* implicit */long long int) ((unsigned char) arr_52 [i_27] [i_27]));
                        var_74 = ((/* implicit */short) max((var_74), (((/* implicit */short) ((unsigned char) arr_61 [i_39 + 3] [i_39 + 3] [i_27 - 1] [2U] [i_38])))));
                        var_75 = ((/* implicit */unsigned int) ((_Bool) arr_45 [i_27 - 4] [i_39 - 1]));
                    }
                }
                arr_135 [i_27] [i_27] [i_28] [(_Bool)1] = ((/* implicit */_Bool) arr_40 [i_0] [i_27 - 2] [i_28] [(unsigned short)8]);
                arr_136 [i_0] [i_27] [i_28] = ((/* implicit */int) ((short) arr_41 [i_27 + 1] [i_27 + 1] [(signed char)12] [i_27 - 1]));
                arr_137 [i_27] [i_27] [i_27] = ((/* implicit */unsigned char) arr_88 [i_0]);
            }
            arr_138 [i_0] [(unsigned char)4] [(short)2] &= ((/* implicit */unsigned char) ((long long int) max((arr_32 [i_27 - 4] [16LL]), (((/* implicit */unsigned int) ((signed char) arr_22 [i_0] [i_0] [i_27] [16LL] [i_0]))))));
        }
        var_76 -= ((/* implicit */short) arr_71 [i_0] [i_0] [(short)4]);
    }
    var_77 = ((/* implicit */long long int) min((((unsigned int) 1900662965U)), (((/* implicit */unsigned int) ((short) ((long long int) var_3))))));
    var_78 = ((/* implicit */unsigned int) ((signed char) min((((/* implicit */unsigned int) ((_Bool) var_14))), (((unsigned int) 367787360)))));
}
