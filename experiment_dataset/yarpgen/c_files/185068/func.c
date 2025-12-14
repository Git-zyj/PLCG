/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185068
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
    for (long long int i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (long long int i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 11; i_3 += 3) 
                {
                    for (int i_4 = 0; i_4 < 11; i_4 += 1) 
                    {
                        {
                            var_16 = arr_12 [(unsigned short)8] [(signed char)4] [i_2] [i_3] [3LL];
                            var_17 = ((/* implicit */unsigned long long int) arr_6 [i_0]);
                            var_18 = ((/* implicit */unsigned char) arr_7 [i_0] [i_0] [5U] [(short)8]);
                            var_19 = ((/* implicit */signed char) arr_8 [i_3] [0LL] [(signed char)10] [(signed char)10]);
                            var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) arr_3 [i_3] [4U]))));
                        }
                    } 
                } 
            } 
            var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_5 = 0; i_5 < 11; i_5 += 3) 
            {
                var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) arr_0 [i_0] [i_0]))));
                arr_17 [i_0 - 1] = ((/* implicit */_Bool) arr_15 [0U] [i_1] [i_1] [i_5]);
            }
            var_23 = ((/* implicit */short) arr_0 [(unsigned char)9] [(unsigned char)9]);
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            var_24 = ((/* implicit */unsigned char) arr_16 [i_0] [9LL] [i_6]);
            var_25 += ((/* implicit */int) arr_18 [i_0]);
        }
        for (short i_7 = 3; i_7 < 10; i_7 += 2) 
        {
            /* LoopSeq 2 */
            for (int i_8 = 0; i_8 < 11; i_8 += 4) 
            {
                var_26 = ((/* implicit */unsigned short) arr_13 [4LL] [i_7] [8LL] [i_7 - 3] [i_7] [i_0]);
                /* LoopNest 2 */
                for (signed char i_9 = 2; i_9 < 7; i_9 += 1) 
                {
                    for (long long int i_10 = 0; i_10 < 11; i_10 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */short) arr_19 [i_7]);
                            var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) arr_15 [(unsigned short)9] [i_9] [2] [(unsigned short)6]))));
                            var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) arr_16 [(unsigned char)3] [(unsigned char)4] [0ULL]))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (unsigned char i_11 = 0; i_11 < 11; i_11 += 3) 
            {
                var_30 += ((/* implicit */unsigned char) arr_20 [i_7]);
                var_31 = ((/* implicit */long long int) max((var_31), (arr_15 [i_0] [i_11] [i_11] [(signed char)4])));
                /* LoopSeq 4 */
                for (long long int i_12 = 0; i_12 < 11; i_12 += 3) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (signed char i_13 = 0; i_13 < 11; i_13 += 1) 
                    {
                        var_32 = arr_35 [10LL] [i_7 - 2] [i_11] [i_12] [i_13];
                        var_33 -= ((/* implicit */short) arr_11 [i_0] [i_0] [i_0] [i_0] [1LL] [(signed char)5] [(unsigned char)2]);
                        var_34 = arr_3 [i_0] [i_0];
                        var_35 = ((/* implicit */short) arr_25 [i_0] [i_11] [i_11] [i_11] [(unsigned short)2]);
                        arr_39 [(unsigned short)5] [i_7] [(short)5] [i_12] [i_13] = ((/* implicit */unsigned char) arr_2 [i_0] [i_7 + 1]);
                    }
                    for (short i_14 = 1; i_14 < 9; i_14 += 2) /* same iter space */
                    {
                        var_36 = ((/* implicit */unsigned char) arr_28 [i_11] [i_11] [i_11] [1LL] [i_11]);
                        var_37 = arr_27 [i_0] [i_7 - 3] [(_Bool)1] [i_12] [i_14];
                        arr_43 [i_14] [i_14 + 2] [(unsigned char)7] [i_11] [i_14] [i_14] [i_14] = ((/* implicit */signed char) arr_3 [i_11] [i_12]);
                        var_38 = ((/* implicit */short) arr_3 [i_0] [i_12]);
                        var_39 = ((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [i_0]);
                    }
                    for (short i_15 = 1; i_15 < 9; i_15 += 2) /* same iter space */
                    {
                        var_40 = ((/* implicit */unsigned short) arr_35 [(unsigned short)3] [i_7 + 1] [i_11] [i_12] [i_15]);
                        var_41 = arr_11 [(signed char)5] [(signed char)5] [(unsigned char)1] [(short)7] [i_15 + 1] [i_15] [(short)2];
                        var_42 = ((/* implicit */signed char) arr_18 [i_11]);
                        arr_46 [i_0] [i_0 - 2] [i_0] [i_0 - 2] [i_0 + 1] = ((/* implicit */signed char) arr_12 [(signed char)5] [7U] [i_15 + 2] [i_15] [i_15]);
                        var_43 = ((/* implicit */int) arr_15 [i_0] [i_0] [i_7] [i_12]);
                    }
                    var_44 = ((/* implicit */long long int) arr_30 [i_12] [(short)7] [(unsigned char)8]);
                    var_45 = ((/* implicit */unsigned short) max((var_45), (arr_11 [i_0] [i_0] [(short)5] [i_7] [i_7] [i_11] [i_12])));
                }
                for (long long int i_16 = 0; i_16 < 11; i_16 += 3) /* same iter space */
                {
                    var_46 = ((/* implicit */short) arr_48 [i_0] [i_0] [i_11] [(short)5]);
                    arr_49 [(short)0] [(short)0] [(short)0] [(short)0] [i_16] [i_16] = ((/* implicit */int) arr_8 [i_0] [i_7] [i_0] [i_16]);
                }
                for (long long int i_17 = 0; i_17 < 11; i_17 += 3) /* same iter space */
                {
                    arr_53 [(unsigned short)7] [0LL] [0LL] [i_17] = ((/* implicit */long long int) arr_7 [i_11] [i_7] [i_11] [i_17]);
                    var_47 *= ((/* implicit */signed char) arr_48 [i_17] [i_11] [i_7] [i_0]);
                    var_48 = ((/* implicit */signed char) max((var_48), (((/* implicit */signed char) arr_48 [i_0 - 2] [i_0] [7] [i_0]))));
                    var_49 ^= ((/* implicit */long long int) arr_40 [i_0 + 1] [(signed char)2] [(unsigned short)6] [i_0] [i_0 + 1]);
                }
                for (long long int i_18 = 0; i_18 < 11; i_18 += 3) /* same iter space */
                {
                    var_50 = ((/* implicit */unsigned char) arr_28 [i_0] [i_0] [(unsigned char)4] [3] [(signed char)2]);
                    /* LoopSeq 2 */
                    for (unsigned char i_19 = 0; i_19 < 11; i_19 += 4) 
                    {
                        var_51 &= arr_51 [i_7] [i_7];
                        var_52 -= ((/* implicit */short) arr_45 [i_0 + 1] [i_0]);
                    }
                    for (unsigned int i_20 = 0; i_20 < 11; i_20 += 1) 
                    {
                        var_53 = ((/* implicit */unsigned char) max((var_53), (((/* implicit */unsigned char) arr_14 [(_Bool)1] [i_11] [i_18]))));
                        var_54 = ((/* implicit */long long int) arr_16 [0LL] [i_18] [i_20]);
                        var_55 = ((/* implicit */unsigned char) arr_50 [i_11] [i_11] [i_11]);
                        var_56 = ((/* implicit */signed char) arr_21 [i_0] [i_20]);
                    }
                    var_57 = ((/* implicit */unsigned int) arr_30 [i_11] [7ULL] [i_11]);
                    var_58 = ((/* implicit */unsigned long long int) min((var_58), (((/* implicit */unsigned long long int) arr_34 [1] [i_0 + 1] [(_Bool)1] [i_7] [1] [1]))));
                }
            }
            /* LoopNest 3 */
            for (short i_21 = 3; i_21 < 9; i_21 += 4) 
            {
                for (long long int i_22 = 0; i_22 < 11; i_22 += 2) 
                {
                    for (long long int i_23 = 0; i_23 < 11; i_23 += 3) 
                    {
                        {
                            var_59 = ((/* implicit */long long int) arr_24 [i_22] [i_7] [i_21]);
                            var_60 = ((/* implicit */_Bool) arr_38 [(short)3] [(unsigned short)0] [i_7]);
                            var_61 = ((/* implicit */unsigned short) arr_35 [(unsigned char)4] [i_0] [i_0] [i_0] [i_0]);
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (signed char i_24 = 2; i_24 < 8; i_24 += 1) 
            {
                for (unsigned char i_25 = 0; i_25 < 11; i_25 += 2) 
                {
                    {
                        var_62 &= ((/* implicit */unsigned short) arr_61 [(signed char)6] [i_7 - 1] [i_24] [i_0]);
                        var_63 = ((/* implicit */unsigned int) arr_65 [2U] [i_7] [i_24] [i_25]);
                    }
                } 
            } 
        }
        /* LoopSeq 2 */
        for (unsigned char i_26 = 0; i_26 < 11; i_26 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (long long int i_27 = 0; i_27 < 11; i_27 += 3) 
            {
                for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
                {
                    for (unsigned short i_29 = 2; i_29 < 8; i_29 += 2) 
                    {
                        {
                            var_64 = ((/* implicit */unsigned short) arr_7 [i_0] [i_26] [i_27] [(short)9]);
                            arr_85 [i_29] &= ((/* implicit */long long int) arr_73 [i_27]);
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (long long int i_30 = 0; i_30 < 11; i_30 += 3) 
            {
                var_65 |= ((/* implicit */unsigned char) arr_60 [i_0] [i_26] [(unsigned short)7] [6ULL] [i_30]);
                var_66 = ((/* implicit */int) arr_22 [i_26]);
                var_67 += ((/* implicit */unsigned char) arr_4 [i_26]);
            }
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_31 = 0; i_31 < 11; i_31 += 2) 
            {
                var_68 = ((/* implicit */short) arr_34 [(signed char)5] [i_0 - 1] [i_26] [i_26] [i_31] [3LL]);
                arr_92 [i_0] [i_0 - 2] [i_0] = arr_22 [6ULL];
                /* LoopSeq 3 */
                for (short i_32 = 0; i_32 < 11; i_32 += 4) 
                {
                    var_69 = ((/* implicit */unsigned int) arr_76 [i_0] [i_0] [i_0]);
                    arr_96 [i_0] [i_0] [i_31] = ((/* implicit */long long int) arr_68 [6] [(unsigned char)2] [i_31] [i_31]);
                }
                for (short i_33 = 0; i_33 < 11; i_33 += 4) 
                {
                    var_70 = ((/* implicit */long long int) arr_28 [i_0] [i_26] [i_26] [(signed char)3] [(short)9]);
                    var_71 = ((/* implicit */unsigned short) arr_83 [3] [7U] [(short)0] [i_26] [(short)0] [i_0 - 2]);
                    /* LoopSeq 1 */
                    for (signed char i_34 = 0; i_34 < 11; i_34 += 2) 
                    {
                        var_72 |= ((/* implicit */short) arr_62 [i_0 - 2] [i_26] [i_34]);
                        var_73 = ((/* implicit */unsigned int) arr_47 [i_31]);
                    }
                    var_74 = ((/* implicit */short) arr_66 [i_0] [i_33] [i_0] [i_0] [i_0]);
                }
                for (long long int i_35 = 0; i_35 < 11; i_35 += 3) 
                {
                    var_75 = ((/* implicit */unsigned short) arr_6 [i_35]);
                    var_76 = ((/* implicit */unsigned int) arr_77 [i_0] [i_0] [i_35]);
                    var_77 = ((/* implicit */unsigned short) arr_61 [i_0 - 1] [i_0] [(unsigned char)10] [i_0]);
                    var_78 *= ((/* implicit */short) arr_70 [i_0] [i_0] [i_31] [i_35] [i_0] [i_35]);
                }
                /* LoopNest 2 */
                for (int i_36 = 0; i_36 < 11; i_36 += 4) 
                {
                    for (short i_37 = 4; i_37 < 10; i_37 += 1) 
                    {
                        {
                            arr_112 [i_0] [i_37] [1LL] [i_36] [i_37] = ((/* implicit */unsigned int) arr_69 [i_0] [i_36] [i_0] [i_26] [i_0]);
                            var_79 = arr_33 [i_37] [(unsigned char)8] [i_31] [i_37];
                        }
                    } 
                } 
            }
            /* LoopNest 2 */
            for (long long int i_38 = 0; i_38 < 11; i_38 += 4) 
            {
                for (short i_39 = 0; i_39 < 11; i_39 += 1) 
                {
                    {
                        arr_118 [i_39] [i_39] [(unsigned short)8] [(_Bool)1] [i_0 - 2] [i_0] = arr_69 [i_26] [i_26] [i_26] [i_26] [i_26];
                        var_80 = ((/* implicit */long long int) arr_56 [(signed char)9] [(signed char)5] [(unsigned char)1] [0U] [(_Bool)1] [6LL]);
                    }
                } 
            } 
        }
        for (unsigned char i_40 = 0; i_40 < 11; i_40 += 1) /* same iter space */
        {
            var_81 = ((/* implicit */short) arr_94 [i_0] [(signed char)9] [(signed char)9]);
            var_82 = ((/* implicit */unsigned char) arr_60 [i_0] [i_0] [i_0] [i_40] [(unsigned short)6]);
        }
        var_83 = ((/* implicit */long long int) arr_45 [i_0] [i_0 + 1]);
        var_84 = ((/* implicit */signed char) max((var_84), (((/* implicit */signed char) arr_88 [5LL] [i_0] [i_0]))));
    }
    var_85 = ((/* implicit */short) var_6);
}
