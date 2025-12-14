/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106004
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            for (long long int i_2 = 2; i_2 < 21; i_2 += 4) 
            {
                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9578757015655141523ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)119))) : (-2LL)));
                arr_8 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [(short)6])) && (((/* implicit */_Bool) arr_4 [i_2 + 1] [i_2] [i_2 + 1]))))) % (((/* implicit */int) ((((/* implicit */int) var_8)) != (((/* implicit */int) arr_3 [(short)15])))))));
                /* LoopSeq 3 */
                for (unsigned short i_3 = 0; i_3 < 23; i_3 += 2) 
                {
                    arr_12 [i_0] [8ULL] [(signed char)8] [i_1] = ((/* implicit */unsigned char) ((unsigned long long int) arr_10 [i_2 + 1] [i_2 + 1] [i_2 - 2] [i_2 - 2]));
                    arr_13 [i_0] [i_1] [i_1] [i_2] [i_2] [i_1] |= ((/* implicit */unsigned long long int) ((short) ((_Bool) 3957283747924809780LL)));
                }
                for (int i_4 = 0; i_4 < 23; i_4 += 2) 
                {
                    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((arr_9 [i_0] [i_0] [(signed char)2] [i_0]) == (arr_6 [i_2] [i_1] [i_0] [i_4]))))));
                    /* LoopSeq 3 */
                    for (unsigned short i_5 = 3; i_5 < 22; i_5 += 1) 
                    {
                        arr_19 [i_5 - 1] [i_4] [i_1] [i_1] [(unsigned char)5] = ((long long int) arr_18 [i_2 + 2] [i_2 + 1] [i_2 + 1] [i_2]);
                        arr_20 [i_1] [i_1] [i_2] [i_1] [(short)2] = ((/* implicit */long long int) (~(((/* implicit */int) arr_4 [i_5 - 2] [i_2 - 2] [i_2 - 2]))));
                        var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_1 [i_1]) : (((/* implicit */unsigned long long int) var_16)))))));
                    }
                    for (long long int i_6 = 0; i_6 < 23; i_6 += 3) /* same iter space */
                    {
                        arr_24 [i_0] [13] [i_2 + 2] [i_1] [i_2 + 2] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [(short)17] [i_4])) ? (arr_6 [i_0] [i_2 - 2] [(unsigned char)16] [i_0]) : (arr_6 [i_6] [i_2 - 1] [i_2 - 1] [i_0])));
                        arr_25 [i_6] [i_4] [i_1] [i_1] [(_Bool)1] [13LL] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_22 [i_1] [16]))));
                    }
                    for (long long int i_7 = 0; i_7 < 23; i_7 += 3) /* same iter space */
                    {
                        arr_28 [i_0] [i_2] [i_2] [6ULL] [i_7] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9578757015655141515ULL)) ? (3957283747924809773LL) : (3957283747924809749LL)));
                        arr_29 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) var_7)) < (((/* implicit */int) arr_7 [i_1] [i_2 - 1] [i_1]))));
                        arr_30 [i_0] [i_4] [i_0] [i_2 - 1] [(signed char)0] [i_7] [i_4] &= ((/* implicit */unsigned char) arr_6 [i_7] [i_2 - 1] [i_2 - 1] [i_1]);
                    }
                }
                for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 1) 
                {
                    /* LoopSeq 3 */
                    for (long long int i_9 = 2; i_9 < 19; i_9 += 3) 
                    {
                        arr_37 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8867987058054410091ULL)) ? (-579394661644364534LL) : (-3957283747924809763LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_0)));
                        arr_38 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) var_15);
                        var_21 += ((/* implicit */_Bool) ((int) var_12));
                    }
                    for (short i_10 = 1; i_10 < 20; i_10 += 2) 
                    {
                        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((/* implicit */int) var_17)) % (((/* implicit */int) ((unsigned char) var_10))))))));
                        arr_41 [i_1] [i_1] [i_1] [i_1] [i_1] = ((long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_40 [i_10 + 3] [(_Bool)1] [(_Bool)1] [i_1] [i_0]))) % (var_11)));
                        arr_42 [i_0] [(short)0] [i_1] [i_8] [i_10] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_32 [16] [(short)7] [(short)7])) & (var_10))))));
                    }
                    for (short i_11 = 4; i_11 < 21; i_11 += 1) 
                    {
                        var_23 ^= ((/* implicit */unsigned long long int) arr_3 [i_0]);
                        var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)147))) : (3957283747924809745LL)))) ? (((((/* implicit */_Bool) arr_18 [i_0] [i_1] [(signed char)20] [i_1])) ? (((/* implicit */int) (signed char)-64)) : (((/* implicit */int) (unsigned short)52103)))) : (((/* implicit */int) (_Bool)1))));
                    }
                    var_25 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_23 [i_8] [i_2] [i_1] [(_Bool)1] [18ULL] [i_0] [i_0])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_0] [i_8])) ? (var_15) : (var_6)))));
                }
            }
            var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) arr_7 [(_Bool)0] [i_0] [i_0]))));
        }
        for (unsigned char i_12 = 0; i_12 < 23; i_12 += 3) /* same iter space */
        {
            var_27 ^= ((/* implicit */unsigned long long int) arr_15 [(unsigned short)4] [i_12] [i_12] [(unsigned char)20] [(unsigned short)4]);
            arr_50 [4LL] [i_0] [4LL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_27 [i_0])) && (((/* implicit */_Bool) arr_39 [i_0] [16ULL] [i_0] [i_0] [i_0]))));
            /* LoopSeq 2 */
            for (signed char i_13 = 0; i_13 < 23; i_13 += 3) 
            {
                /* LoopSeq 2 */
                for (long long int i_14 = 0; i_14 < 23; i_14 += 2) 
                {
                    var_28 -= ((/* implicit */short) ((unsigned long long int) arr_27 [i_13]));
                    var_29 += ((/* implicit */long long int) ((2752831204U) != (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0)))));
                    arr_57 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (-(arr_56 [i_0] [i_13] [i_14] [i_14] [(signed char)22])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (((/* implicit */int) arr_54 [i_0]))));
                    var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (arr_23 [i_0] [i_0] [i_13] [i_0] [i_13] [(short)10] [i_0]) : (var_3)));
                    /* LoopSeq 1 */
                    for (long long int i_15 = 2; i_15 < 20; i_15 += 3) 
                    {
                        var_31 = ((/* implicit */unsigned int) min((var_31), (((arr_45 [i_15] [i_15 + 3] [i_14] [0LL] [i_12] [i_0] [20ULL]) / (((((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_14] [i_14]))) * (var_0)))))));
                        var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_17 [i_0] [i_14])) ? (((/* implicit */int) arr_17 [i_0] [(short)11])) : (((/* implicit */int) arr_17 [i_12] [i_12]))));
                    }
                }
                for (unsigned int i_16 = 0; i_16 < 23; i_16 += 3) 
                {
                    var_33 += ((((/* implicit */int) arr_17 [2ULL] [i_16])) & (((/* implicit */int) arr_17 [i_0] [i_0])));
                    arr_62 [i_16] [i_16] [15LL] [12] [(unsigned short)15] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_4 [i_16] [i_0] [i_0]))));
                }
                var_34 = ((/* implicit */signed char) max((var_34), (arr_43 [(short)6] [i_0] [(unsigned char)12] [(unsigned char)11] [i_0] [i_0])));
                arr_63 [10ULL] [(short)16] [i_13] = ((/* implicit */long long int) arr_49 [(_Bool)1] [i_0]);
            }
            for (long long int i_17 = 1; i_17 < 22; i_17 += 3) 
            {
                var_35 = ((/* implicit */long long int) max((var_35), (((/* implicit */long long int) ((arr_59 [(signed char)6] [i_17 + 1] [i_17] [i_17 - 1] [i_17 - 1] [i_17 + 1] [i_17 + 1]) ? (((/* implicit */int) arr_59 [(_Bool)1] [i_17 - 1] [i_17 + 1] [i_17 - 1] [i_17] [i_17] [i_17 + 1])) : (((/* implicit */int) arr_59 [i_17 + 1] [i_17 + 1] [(_Bool)1] [i_17 + 1] [i_17] [(_Bool)1] [i_17 + 1])))))));
                var_36 = ((/* implicit */short) ((signed char) arr_52 [i_17 - 1] [5ULL] [i_17 + 1]));
                var_37 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) var_15))) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_12] [i_17 - 1])))));
                var_38 += ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) var_16)) : (((((/* implicit */_Bool) var_2)) ? (var_4) : (((/* implicit */unsigned long long int) var_11)))));
            }
            /* LoopSeq 2 */
            for (long long int i_18 = 0; i_18 < 23; i_18 += 4) 
            {
                /* LoopNest 2 */
                for (long long int i_19 = 3; i_19 < 20; i_19 += 3) 
                {
                    for (long long int i_20 = 1; i_20 < 22; i_20 += 1) 
                    {
                        {
                            var_39 *= ((/* implicit */short) ((signed char) var_3));
                            var_40 = ((/* implicit */int) min((var_40), (((((/* implicit */_Bool) arr_73 [i_19] [i_19 - 1] [i_18] [i_20] [i_19 - 3] [(unsigned char)18])) ? (((/* implicit */int) arr_73 [i_0] [22LL] [i_18] [i_19] [i_19 - 3] [i_0])) : (((/* implicit */int) arr_73 [(short)4] [i_12] [i_18] [i_12] [i_19 - 3] [i_0]))))));
                            var_41 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_45 [i_19 + 3] [i_19 + 3] [(_Bool)1] [i_19 + 1] [i_19 - 3] [i_19] [i_19 + 3])) ? (arr_45 [i_19 - 3] [i_19 - 3] [i_19 - 3] [i_19 + 1] [i_19 - 3] [i_19] [i_19 + 2]) : (arr_45 [i_19 + 2] [i_19] [i_19] [i_19 - 1] [i_19 + 3] [i_19 + 2] [i_19 - 2])));
                        }
                    } 
                } 
                var_42 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_16 [i_0] [i_12] [i_18] [i_18])) : (((/* implicit */int) arr_2 [i_18] [i_12] [i_0]))));
            }
            for (unsigned int i_21 = 3; i_21 < 22; i_21 += 4) 
            {
                arr_79 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_64 [(_Bool)1] [11LL] [i_21 - 3] [(_Bool)1])) ? (arr_64 [14LL] [i_12] [i_0] [i_0]) : (arr_64 [i_21 + 1] [i_21 + 1] [i_12] [(unsigned char)16])));
                /* LoopSeq 1 */
                for (signed char i_22 = 3; i_22 < 22; i_22 += 1) 
                {
                    arr_82 [i_22] = ((/* implicit */_Bool) ((unsigned long long int) arr_61 [(short)15] [i_21 - 2]));
                    arr_83 [(signed char)18] [i_22] [i_12] [(signed char)12] [i_21 - 1] = arr_55 [i_21 - 2] [i_21 - 1] [i_22 - 2];
                    arr_84 [i_22] = ((/* implicit */long long int) ((signed char) arr_69 [i_0] [(_Bool)1] [(_Bool)1] [i_22 - 3]));
                    arr_85 [i_21] [4LL] [i_0] [i_12] [i_22] = ((/* implicit */unsigned short) ((_Bool) arr_22 [i_22] [i_22]));
                    var_43 = ((/* implicit */long long int) max((var_43), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_75 [i_21 - 3] [i_12] [i_21 + 1] [(unsigned short)21] [i_22 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_76 [i_21 - 2] [i_21 - 2]))) : (arr_75 [13ULL] [(short)9] [i_21 - 1] [i_22 - 2] [i_22 - 3]))))));
                }
                var_44 += ((/* implicit */long long int) arr_44 [i_0] [i_21 + 1] [i_21 - 1] [i_21] [i_0] [i_21 - 1] [(signed char)21]);
                arr_86 [17LL] [i_12] [(_Bool)1] [i_12] = ((/* implicit */signed char) ((_Bool) arr_52 [i_21 - 1] [i_21 - 1] [i_21 - 3]));
                var_45 ^= ((/* implicit */long long int) ((short) (unsigned char)106));
            }
        }
        var_46 = arr_74 [20ULL] [i_0] [i_0] [i_0] [i_0] [(short)20] [i_0];
        /* LoopSeq 2 */
        for (short i_23 = 0; i_23 < 23; i_23 += 3) 
        {
            var_47 *= ((/* implicit */signed char) (+(var_4)));
            /* LoopSeq 1 */
            for (long long int i_24 = 1; i_24 < 20; i_24 += 3) 
            {
                arr_91 [i_24 + 1] [i_23] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_80 [i_0] [i_23] [i_24 - 1] [0ULL])) ? (arr_80 [i_0] [i_23] [i_23] [(signed char)18]) : (arr_80 [i_0] [4LL] [i_0] [(unsigned char)20])));
                var_48 = ((/* implicit */long long int) ((signed char) arr_6 [i_24 + 3] [i_24 + 2] [i_24 + 2] [i_24 + 2]));
            }
        }
        for (signed char i_25 = 0; i_25 < 23; i_25 += 2) 
        {
            arr_95 [i_25] = ((/* implicit */_Bool) arr_45 [i_25] [(short)14] [i_25] [(short)14] [i_25] [i_25] [i_0]);
            /* LoopNest 2 */
            for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
            {
                for (unsigned long long int i_27 = 0; i_27 < 23; i_27 += 3) 
                {
                    {
                        var_49 = ((/* implicit */unsigned char) min((var_49), (((/* implicit */unsigned char) ((short) arr_71 [i_0] [i_0])))));
                        var_50 += ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (arr_9 [i_26] [i_26] [i_26] [4]) : (arr_9 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_27])));
                    }
                } 
            } 
            arr_101 [i_25] = ((/* implicit */unsigned int) ((short) arr_44 [i_0] [i_0] [i_0] [i_25] [i_25] [(short)19] [i_25]));
        }
        /* LoopNest 3 */
        for (signed char i_28 = 0; i_28 < 23; i_28 += 3) 
        {
            for (unsigned int i_29 = 0; i_29 < 23; i_29 += 1) 
            {
                for (int i_30 = 4; i_30 < 22; i_30 += 3) 
                {
                    {
                        arr_110 [6ULL] [i_30 - 2] [i_29] [i_28] [i_0] |= ((((/* implicit */_Bool) ((arr_9 [i_0] [i_28] [17LL] [(unsigned short)4]) % (((/* implicit */unsigned long long int) var_5))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [18ULL] [i_28] [i_28]))) : (arr_80 [8] [i_30 - 1] [i_30 + 1] [(unsigned char)10]));
                        arr_111 [(unsigned char)3] [i_0] [i_0] [i_28] [i_29] [i_30 - 1] = ((/* implicit */long long int) ((signed char) arr_99 [i_30] [i_30 + 1] [i_30] [i_30]));
                        var_51 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_88 [i_28])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_106 [i_29] [i_30 + 1] [(unsigned short)0]))) : (arr_70 [i_30 - 2] [i_29] [9LL] [(unsigned short)18])));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (short i_31 = 0; i_31 < 23; i_31 += 4) 
        {
            for (short i_32 = 2; i_32 < 22; i_32 += 4) 
            {
                {
                    var_52 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_99 [20ULL] [10] [8] [i_32 + 1])) ? (((((/* implicit */unsigned long long int) var_5)) & (arr_6 [(unsigned char)4] [(short)19] [(short)12] [i_32 - 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_108 [i_0] [(unsigned short)16] [(short)22] [i_32]))))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_33 = 0; i_33 < 23; i_33 += 3) 
                    {
                        var_53 = ((/* implicit */_Bool) var_14);
                        var_54 = ((unsigned short) ((((/* implicit */_Bool) arr_94 [12LL])) || (((/* implicit */_Bool) var_17))));
                        var_55 = ((/* implicit */unsigned short) max((var_55), (((/* implicit */unsigned short) var_4))));
                    }
                    for (_Bool i_34 = 1; i_34 < 1; i_34 += 1) 
                    {
                        arr_124 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((arr_108 [i_34 - 1] [i_34 - 1] [i_34 - 1] [i_34 - 1]) + (((/* implicit */long long int) arr_122 [i_0] [(signed char)14] [i_32] [i_34 - 1] [i_0]))));
                        /* LoopSeq 1 */
                        for (int i_35 = 0; i_35 < 23; i_35 += 3) 
                        {
                            var_56 += ((signed char) arr_52 [i_32 - 2] [(short)8] [3ULL]);
                            var_57 = ((/* implicit */long long int) ((unsigned long long int) arr_126 [i_34] [i_34] [i_32 - 1] [i_32 - 2] [(_Bool)0] [i_31] [i_0]));
                            arr_127 [i_35] [i_35] [i_34] [i_32] [i_31] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_32 - 1] [i_32 - 1] [i_34 - 1] [(unsigned char)0] [i_34 - 1] [i_34 - 1] [3ULL])) ? (arr_23 [i_32 - 1] [i_32 + 1] [i_34 - 1] [i_32 + 1] [i_34 - 1] [i_34] [i_34 - 1]) : (arr_23 [i_32 + 1] [(signed char)21] [i_34 - 1] [19U] [i_34 - 1] [i_34 - 1] [(_Bool)1])));
                            var_58 = ((/* implicit */signed char) ((3957283747924809773LL) & (3957283747924809786LL)));
                        }
                        var_59 = ((/* implicit */signed char) max((var_59), (((/* implicit */signed char) arr_70 [13ULL] [i_31] [i_31] [i_31]))));
                        arr_128 [16] [i_31] [(signed char)15] [16] = ((/* implicit */short) ((((/* implicit */_Bool) arr_16 [i_32 - 2] [i_34] [i_34] [i_34 - 1])) ? (((/* implicit */int) arr_71 [i_32 - 2] [i_32 - 2])) : (((/* implicit */int) arr_16 [i_32 - 1] [21LL] [i_32 - 2] [i_34 - 1]))));
                    }
                }
            } 
        } 
    }
    var_60 ^= ((/* implicit */long long int) (~(18446744073709551615ULL)));
}
