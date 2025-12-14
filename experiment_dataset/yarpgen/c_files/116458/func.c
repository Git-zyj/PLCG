/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116458
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
    for (int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 19; i_3 += 1) 
                    {
                        for (int i_4 = 2; i_4 < 20; i_4 += 3) 
                        {
                            {
                                arr_14 [i_1] [i_1] [i_1] = arr_6 [i_1] [i_1] [i_3] [(unsigned short)18];
                                var_10 = ((/* implicit */unsigned char) max((var_10), (((/* implicit */unsigned char) (-(((((/* implicit */int) arr_11 [i_1 + 1] [i_3 - 1] [i_4])) * (((/* implicit */int) arr_2 [i_1 - 1])))))))));
                            }
                        } 
                    } 
                    arr_15 [i_2] [i_1] [i_1] [i_1] |= ((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [(signed char)8] [i_2]);
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */_Bool) var_3);
    /* LoopSeq 3 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_12 -= ((/* implicit */_Bool) var_3);
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_6 = 0; i_6 < 10; i_6 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned char i_7 = 0; i_7 < 10; i_7 += 2) 
            {
                for (unsigned short i_8 = 3; i_8 < 9; i_8 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_9 = 1; i_9 < 7; i_9 += 4) 
                        {
                            var_13 *= ((/* implicit */_Bool) arr_4 [i_8 - 2]);
                            var_14 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_11 [i_8 - 2] [i_8 + 1] [i_9 + 1]))));
                            var_15 |= ((/* implicit */unsigned int) (~(((/* implicit */int) arr_27 [i_5] [i_7] [8ULL] [i_5] [i_9] [i_6] [i_7]))));
                            arr_28 [i_5] [i_9] [i_9] = ((/* implicit */unsigned long long int) (!(arr_25 [i_9] [(_Bool)1] [i_5] [i_6] [i_5])));
                        }
                        var_16 = ((/* implicit */unsigned int) arr_17 [i_8 - 3]);
                        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */int) arr_9 [i_7] [i_8 - 1] [i_8 - 1])) - (((/* implicit */int) arr_9 [i_7] [i_8 - 1] [i_8 - 3])))))));
                        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((arr_19 [i_7]) + (9223372036854775807LL))) << (((((arr_19 [i_8 - 3]) + (5830142742974668404LL))) - (14LL))))))));
                    }
                } 
            } 
            var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((arr_10 [i_5] [(unsigned char)18] [i_5] [2LL] [i_6]) <= (arr_10 [i_5] [(unsigned char)10] [(unsigned char)10] [i_6] [(short)16]))))));
            /* LoopSeq 3 */
            for (unsigned char i_10 = 2; i_10 < 6; i_10 += 4) 
            {
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 10; i_11 += 4) 
                {
                    for (int i_12 = 0; i_12 < 10; i_12 += 4) 
                    {
                        {
                            arr_36 [i_5] [i_6] [i_10] [i_11] [i_12] = ((/* implicit */unsigned long long int) arr_3 [i_5] [15LL] [(_Bool)1]);
                            arr_37 [i_5] [i_5] [i_12] = ((/* implicit */int) arr_33 [i_11] [6ULL] [i_6] [i_5]);
                        }
                    } 
                } 
                var_20 |= ((/* implicit */short) ((arr_8 [i_10 + 4] [i_10] [i_10]) < (((/* implicit */unsigned int) arr_13 [i_10 + 3] [i_10] [i_10] [i_10 + 2] [i_10] [i_10 + 4] [i_10 + 3]))));
            }
            for (unsigned int i_13 = 0; i_13 < 10; i_13 += 1) /* same iter space */
            {
                arr_42 [i_5] [i_5] = ((/* implicit */signed char) arr_33 [i_5] [i_5] [i_6] [3U]);
                var_21 += ((/* implicit */unsigned short) (+(((/* implicit */int) arr_5 [i_13] [10] [10] [(unsigned char)16]))));
                var_22 += ((/* implicit */unsigned char) arr_3 [(signed char)8] [i_6] [i_13]);
                arr_43 [i_5] = ((/* implicit */unsigned short) ((arr_24 [i_5] [i_5] [i_5] [i_5]) * (((/* implicit */int) arr_27 [i_5] [(unsigned short)0] [i_6] [(short)4] [i_6] [i_13] [i_13]))));
                var_23 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_40 [i_5] [i_6] [i_6] [i_13]))));
            }
            for (unsigned int i_14 = 0; i_14 < 10; i_14 += 1) /* same iter space */
            {
                var_24 = ((/* implicit */long long int) arr_26 [(unsigned short)7] [(unsigned short)7] [i_14] [(unsigned short)7] [i_14] [i_14]);
                arr_48 [i_5] [i_14] = ((((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_5] [i_14]))) + (arr_8 [(unsigned char)20] [i_6] [(unsigned char)20]));
            }
            var_25 = (~(((/* implicit */int) arr_21 [i_5] [i_6] [i_6])));
        }
        for (short i_15 = 0; i_15 < 10; i_15 += 2) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (long long int i_16 = 1; i_16 < 8; i_16 += 1) 
            {
                arr_55 [i_15] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_16] [i_16 + 1] [i_16 + 1]))) ^ (arr_8 [i_16] [i_15] [i_16])));
                arr_56 [i_5] [i_5] [i_16] [i_16] = ((/* implicit */unsigned int) arr_50 [i_16 - 1]);
                /* LoopSeq 3 */
                for (short i_17 = 0; i_17 < 10; i_17 += 3) 
                {
                    var_26 = ((/* implicit */unsigned char) var_3);
                    var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) arr_12 [i_15] [i_16] [i_16] [i_16 + 1] [i_16] [i_15]))));
                    arr_61 [i_5] [i_15] [8LL] [i_17] &= ((/* implicit */long long int) ((arr_8 [i_16 + 2] [i_16 + 2] [i_15]) ^ (arr_8 [i_16 + 2] [i_16 + 1] [i_15])));
                    arr_62 [i_5] [i_16] = ((/* implicit */long long int) arr_27 [i_5] [i_16] [i_15] [i_5] [i_16] [i_17] [i_17]);
                }
                for (short i_18 = 2; i_18 < 8; i_18 += 1) /* same iter space */
                {
                    var_28 -= arr_18 [i_18];
                    var_29 = (!(((/* implicit */_Bool) arr_4 [i_18 - 1])));
                }
                for (short i_19 = 2; i_19 < 8; i_19 += 1) /* same iter space */
                {
                    var_30 = ((/* implicit */long long int) arr_27 [i_19 - 2] [i_16] [i_19] [i_16 - 1] [i_19] [i_19] [7LL]);
                    arr_68 [i_16] [i_15] [i_15] [i_16] [i_19] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_30 [i_16 - 1] [i_19 - 1] [i_19 + 2])) || (((/* implicit */_Bool) ((arr_26 [i_5] [i_19] [i_16] [i_15] [i_5] [i_5]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_44 [i_5] [i_15] [i_16]))))))));
                }
                /* LoopNest 2 */
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        {
                            var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) arr_27 [i_16 + 1] [i_15] [i_16] [i_16 + 1] [i_16] [i_15] [i_16 - 1]))));
                            var_32 = ((/* implicit */unsigned char) arr_72 [i_5] [1U] [i_16] [i_16]);
                            var_33 = ((/* implicit */unsigned char) (~(arr_34 [i_16] [i_16 - 1])));
                        }
                    } 
                } 
            }
            for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
            {
                arr_75 [(unsigned short)5] [(unsigned short)5] [i_15] [i_22] = ((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-100)) + (2147483647))) << (((((/* implicit */int) (unsigned char)250)) - (250)))));
                var_34 &= ((/* implicit */_Bool) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_15]))) ^ (9231847495917450391ULL)))));
                arr_76 [(signed char)3] [i_15] [(signed char)0] [i_15] = ((/* implicit */unsigned char) (-(11483595080478359705ULL)));
                arr_77 [i_5] [(unsigned char)7] |= ((/* implicit */int) max((min((arr_19 [i_22]), (((/* implicit */long long int) arr_8 [i_22] [i_15] [i_15])))), (min((((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_15] [20U] [i_22]))) & (var_3))), (((/* implicit */long long int) ((((/* implicit */int) var_4)) - (((/* implicit */int) arr_30 [i_5] [i_5] [1ULL])))))))));
            }
            var_35 -= ((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */int) arr_17 [i_15])) < (((/* implicit */int) arr_17 [i_5]))))), (var_5)));
            arr_78 [i_15] [i_5] |= ((/* implicit */unsigned short) arr_11 [i_5] [(unsigned char)8] [i_5]);
            /* LoopSeq 1 */
            for (long long int i_23 = 0; i_23 < 10; i_23 += 1) 
            {
                var_36 *= ((/* implicit */unsigned long long int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)7)));
                var_37 += ((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_23 [i_5] [i_15] [i_15] [i_23])) < (min((arr_73 [i_5]), (arr_16 [(_Bool)1])))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_24 = 0; i_24 < 10; i_24 += 2) /* same iter space */
                {
                    var_38 ^= ((/* implicit */unsigned int) arr_7 [14] [i_24]);
                    var_39 = ((/* implicit */unsigned char) arr_81 [i_5] [i_15] [(_Bool)1] [i_5]);
                    /* LoopSeq 2 */
                    for (unsigned int i_25 = 2; i_25 < 7; i_25 += 3) 
                    {
                        var_40 = ((/* implicit */unsigned char) arr_24 [i_5] [(_Bool)1] [i_5] [i_24]);
                        var_41 = ((/* implicit */int) ((arr_85 [i_25 + 2] [i_25] [i_25 + 1] [i_25] [i_25]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_71 [i_25 - 1] [i_25] [i_25 + 1] [i_25] [i_25] [i_25 + 3])))));
                    }
                    for (signed char i_26 = 4; i_26 < 9; i_26 += 3) 
                    {
                        var_42 ^= ((/* implicit */unsigned int) ((((/* implicit */int) arr_80 [i_15])) - (((/* implicit */int) arr_80 [i_24]))));
                        var_43 = ((/* implicit */long long int) max((var_43), (arr_88 [(unsigned short)4] [i_15] [i_26 - 1] [i_24] [3ULL] [i_15] [(unsigned char)9])));
                    }
                }
                for (short i_27 = 0; i_27 < 10; i_27 += 2) /* same iter space */
                {
                    arr_92 [(short)3] [i_15] [i_15] [i_15] = (~(min((((/* implicit */int) var_4)), (arr_23 [i_27] [i_23] [i_15] [i_5]))));
                    arr_93 [i_5] = ((/* implicit */int) (!(((/* implicit */_Bool) 6963148993231191902ULL))));
                }
                arr_94 [(unsigned char)4] = ((/* implicit */unsigned char) arr_83 [i_5]);
            }
        }
        arr_95 [i_5] &= ((/* implicit */unsigned short) (-(((/* implicit */int) min((arr_1 [i_5]), (arr_1 [i_5]))))));
        var_44 = ((/* implicit */_Bool) ((((/* implicit */int) arr_81 [i_5] [i_5] [i_5] [i_5])) | (((/* implicit */int) arr_57 [i_5] [i_5] [i_5] [i_5]))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_28 = 1; i_28 < 1; i_28 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned char i_29 = 0; i_29 < 10; i_29 += 3) 
            {
                for (signed char i_30 = 1; i_30 < 7; i_30 += 3) 
                {
                    {
                        var_45 = ((/* implicit */signed char) max((var_45), (((/* implicit */signed char) arr_57 [i_5] [i_5] [i_5] [i_30]))));
                        /* LoopSeq 1 */
                        for (short i_31 = 0; i_31 < 10; i_31 += 1) 
                        {
                            arr_108 [i_5] [i_28] [i_28] [i_29] [i_29] [i_28] [i_31] = ((/* implicit */signed char) ((((/* implicit */int) arr_89 [i_5] [i_28] [i_29] [i_30])) >> (((arr_22 [i_5] [7ULL] [i_29]) - (4243443795U)))));
                            arr_109 [i_28] [i_28] [i_28] = ((((((/* implicit */long long int) ((/* implicit */int) var_2))) + (arr_6 [i_28] [i_29] [i_28] [i_28]))) / (((/* implicit */long long int) arr_100 [i_30 + 2] [(_Bool)1] [i_28])));
                            arr_110 [9U] [i_28] [i_28] [i_28] [(short)2] = ((/* implicit */unsigned char) arr_70 [i_5] [i_5] [i_28] [i_5] [1U] [i_5]);
                            arr_111 [(signed char)2] [i_30] [i_28] [i_28] [i_28] [i_5] = ((/* implicit */unsigned int) var_0);
                        }
                        arr_112 [i_30] [i_28] [(short)0] [i_28] [i_28] [i_5] = ((/* implicit */short) arr_19 [i_5]);
                    }
                } 
            } 
            arr_113 [(unsigned short)6] &= ((/* implicit */unsigned char) var_7);
            var_46 = ((/* implicit */long long int) ((((/* implicit */int) arr_39 [7LL] [i_28 - 1] [i_28])) == (arr_104 [i_28] [i_28 - 1] [i_28] [i_28 - 1])));
            /* LoopNest 2 */
            for (short i_32 = 3; i_32 < 6; i_32 += 3) 
            {
                for (short i_33 = 0; i_33 < 10; i_33 += 4) 
                {
                    {
                        arr_119 [i_5] [i_28] [i_32] [i_28] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_51 [i_32 + 3] [i_32]))));
                        var_47 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_99 [i_28]))));
                        var_48 = ((/* implicit */long long int) (~(((/* implicit */int) arr_107 [i_5] [i_28] [7ULL] [i_33] [i_32]))));
                        arr_120 [i_28] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_32 - 3] [i_32 - 3] [i_33] [(_Bool)1]))));
                    }
                } 
            } 
            var_49 = ((/* implicit */unsigned int) max((var_49), (((/* implicit */unsigned int) var_2))));
        }
        /* vectorizable */
        for (unsigned short i_34 = 0; i_34 < 10; i_34 += 1) 
        {
            var_50 = arr_26 [i_5] [i_5] [i_5] [i_34] [i_34] [i_34];
            var_51 = ((/* implicit */unsigned short) arr_9 [i_34] [i_5] [i_34]);
        }
    }
    for (long long int i_35 = 0; i_35 < 13; i_35 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (long long int i_36 = 0; i_36 < 13; i_36 += 1) 
        {
            arr_127 [i_35] [i_35] [i_36] = ((/* implicit */unsigned char) (-(arr_8 [(short)4] [i_36] [i_35])));
            var_52 -= ((/* implicit */unsigned char) arr_2 [i_35]);
        }
        /* vectorizable */
        for (unsigned short i_37 = 0; i_37 < 13; i_37 += 4) 
        {
            var_53 ^= ((/* implicit */unsigned short) ((((/* implicit */int) arr_4 [i_35])) % (((/* implicit */int) arr_4 [i_35]))));
            arr_130 [(_Bool)1] [(_Bool)1] [i_37] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) arr_1 [14]))))));
        }
        /* LoopSeq 3 */
        for (unsigned int i_38 = 1; i_38 < 11; i_38 += 2) 
        {
            arr_135 [i_38] [i_38] [i_35] = ((/* implicit */unsigned int) min(((+(((/* implicit */int) (unsigned short)18)))), (((/* implicit */int) var_2))));
            /* LoopSeq 2 */
            for (short i_39 = 3; i_39 < 11; i_39 += 4) /* same iter space */
            {
                var_54 ^= ((/* implicit */signed char) arr_12 [i_39] [i_39] [i_39] [i_39] [i_39] [i_35]);
                arr_138 [i_35] [i_38] [1] = ((/* implicit */_Bool) arr_124 [i_35] [i_35]);
            }
            for (short i_40 = 3; i_40 < 11; i_40 += 4) /* same iter space */
            {
                var_55 = ((/* implicit */short) min((((/* implicit */unsigned int) arr_11 [i_40] [1LL] [i_35])), (arr_0 [i_35])));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_41 = 0; i_41 < 13; i_41 += 4) 
                {
                    /* LoopSeq 1 */
                    for (short i_42 = 0; i_42 < 13; i_42 += 2) 
                    {
                        arr_146 [i_35] = ((/* implicit */short) arr_1 [i_42]);
                        var_56 ^= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))));
                    }
                    arr_147 [i_35] [i_35] [i_35] [i_35] [i_35] [i_35] = ((/* implicit */signed char) arr_6 [i_41] [i_38] [i_40] [(unsigned char)4]);
                    arr_148 [(signed char)0] [(signed char)0] [i_41] = ((/* implicit */unsigned long long int) arr_4 [(_Bool)1]);
                    /* LoopSeq 4 */
                    for (_Bool i_43 = 0; i_43 < 1; i_43 += 1) 
                    {
                        arr_151 [i_35] [i_35] [i_35] [i_35] [i_35] [(signed char)2] [(short)0] = ((/* implicit */long long int) arr_131 [i_43]);
                        arr_152 [8ULL] = ((/* implicit */_Bool) arr_149 [i_38]);
                    }
                    for (unsigned long long int i_44 = 0; i_44 < 13; i_44 += 1) /* same iter space */
                    {
                        arr_156 [i_35] [i_38] [(unsigned char)7] [i_41] [i_44] = ((/* implicit */signed char) ((((/* implicit */int) arr_137 [i_38] [i_38 + 1])) < (((/* implicit */int) arr_155 [i_40 - 3] [i_40 + 2] [(_Bool)1] [i_38 + 2] [(_Bool)1]))));
                        arr_157 [i_44] [i_41] [i_40] [i_38] [(short)0] = ((/* implicit */unsigned short) (-(arr_132 [i_40 - 1] [i_40 - 2] [i_40])));
                    }
                    for (unsigned long long int i_45 = 0; i_45 < 13; i_45 += 1) /* same iter space */
                    {
                        var_57 = ((/* implicit */int) var_3);
                        arr_161 [i_35] [i_38] [11] [i_41] [i_45] [i_40] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_38 + 1] [i_41] [2] [i_38])) ^ (((/* implicit */int) arr_12 [i_35] [i_35] [i_35] [i_41] [i_45] [i_41]))));
                        var_58 = ((/* implicit */_Bool) min((var_58), (((/* implicit */_Bool) arr_9 [i_41] [i_38] [i_38]))));
                        var_59 = ((/* implicit */unsigned char) min((var_59), (((/* implicit */unsigned char) arr_5 [i_38 + 2] [i_35] [i_40] [i_40 + 2]))));
                    }
                    for (unsigned long long int i_46 = 0; i_46 < 13; i_46 += 1) /* same iter space */
                    {
                        arr_164 [i_35] [i_38] [i_40] [(_Bool)1] [i_46] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_139 [i_38 + 1] [i_40 - 1]))));
                        var_60 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_3))));
                    }
                }
            }
        }
        /* vectorizable */
        for (unsigned char i_47 = 0; i_47 < 13; i_47 += 1) 
        {
            arr_167 [i_47] = ((/* implicit */unsigned int) arr_142 [(unsigned char)8] [i_47] [2U] [(unsigned short)11]);
            var_61 |= ((/* implicit */unsigned short) arr_132 [i_47] [i_47] [i_35]);
        }
        for (int i_48 = 0; i_48 < 13; i_48 += 1) 
        {
            arr_170 [i_35] [i_35] |= ((/* implicit */unsigned int) arr_128 [i_48]);
            arr_171 [i_48] [i_48] [i_48] = ((/* implicit */int) min((((/* implicit */unsigned long long int) (unsigned short)65505)), (9214896577792101217ULL)));
            var_62 *= ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_136 [i_35])))))));
        }
    }
    for (long long int i_49 = 0; i_49 < 13; i_49 += 4) /* same iter space */
    {
        arr_175 [3] [i_49] = arr_173 [i_49];
        arr_176 [i_49] |= ((/* implicit */unsigned char) min(((~(((/* implicit */int) arr_169 [i_49] [i_49] [i_49])))), (((/* implicit */int) arr_169 [4U] [4U] [i_49]))));
    }
    var_63 = ((/* implicit */_Bool) min((((((/* implicit */long long int) ((/* implicit */int) (short)-26760))) / (5510852369752218095LL))), (var_9)));
}
