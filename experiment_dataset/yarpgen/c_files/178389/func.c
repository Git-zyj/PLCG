/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178389
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [(_Bool)1] = ((/* implicit */short) ((((/* implicit */int) arr_0 [i_0])) % (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))));
        var_12 *= ((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_0] [(unsigned short)16])) + (((/* implicit */int) arr_1 [i_0] [i_0]))));
        var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) (~(2161727821137838080LL))))));
        /* LoopNest 3 */
        for (long long int i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 19; i_3 += 2) 
                {
                    {
                        var_14 *= ((/* implicit */short) arr_5 [i_0] [i_0]);
                        var_15 *= ((/* implicit */long long int) max((((_Bool) ((unsigned short) (_Bool)1))), (arr_10 [i_0] [i_0] [0ULL])));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_4 = 2; i_4 < 23; i_4 += 2) 
    {
        var_16 = ((/* implicit */unsigned char) (_Bool)1);
        /* LoopNest 3 */
        for (long long int i_5 = 0; i_5 < 24; i_5 += 2) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (unsigned char i_7 = 0; i_7 < 24; i_7 += 1) 
                {
                    {
                        arr_23 [(short)18] [(short)18] [i_6] [i_7] = ((/* implicit */_Bool) ((short) (!(arr_22 [i_7] [i_5] [(unsigned char)20]))));
                        var_17 *= ((/* implicit */short) ((unsigned char) arr_22 [i_5] [i_5] [i_5]));
                        var_18 = ((/* implicit */short) ((((/* implicit */int) arr_17 [i_4 - 1])) + (((/* implicit */int) arr_17 [i_4 + 1]))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 1) 
        {
            for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 3) 
            {
                for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                {
                    {
                        var_19 = ((/* implicit */unsigned short) (+((~(((/* implicit */int) arr_25 [i_4]))))));
                        arr_33 [(short)1] [(short)1] [(unsigned short)12] [i_9] [i_10] = ((/* implicit */_Bool) ((((/* implicit */int) arr_25 [i_4 - 2])) % (((/* implicit */int) arr_25 [i_4 - 1]))));
                    }
                } 
            } 
        } 
    }
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
    {
        var_20 = ((/* implicit */unsigned int) arr_35 [i_11]);
        var_21 = ((/* implicit */_Bool) arr_15 [i_11]);
        /* LoopSeq 1 */
        for (short i_12 = 2; i_12 < 18; i_12 += 2) 
        {
            var_22 *= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) max((arr_39 [i_11] [i_12 + 1]), (((/* implicit */unsigned short) arr_20 [i_11] [i_12] [i_11]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_11] [i_12 + 2]))) : (((unsigned long long int) arr_16 [i_11])))) * (((max((((/* implicit */unsigned long long int) (short)-1)), (4398046511100ULL))) % (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
            arr_40 [i_11] [(signed char)3] = ((/* implicit */unsigned int) arr_15 [i_11]);
            /* LoopSeq 4 */
            /* vectorizable */
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((short) arr_39 [(unsigned short)4] [i_12 - 1])))));
                arr_43 [i_12] [i_12] = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */int) arr_16 [(short)23])) + (((/* implicit */int) (_Bool)1)))));
            }
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                /* LoopSeq 3 */
                for (unsigned short i_15 = 0; i_15 < 20; i_15 += 4) /* same iter space */
                {
                    var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) 4294967295U))));
                    var_25 *= ((/* implicit */short) ((((/* implicit */_Bool) ((short) arr_41 [i_12 - 1]))) ? (((((/* implicit */_Bool) arr_41 [i_12 - 1])) ? (arr_41 [i_11]) : (arr_41 [i_14]))) : (arr_41 [i_11])));
                    arr_48 [i_11] [i_11] [i_12] [i_14] [i_12] [i_15] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((unsigned long long int) (_Bool)1)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_12] [i_14] [i_15]))) % (18446744073709551603ULL))))), (((/* implicit */unsigned long long int) max(((_Bool)1), ((_Bool)1))))));
                    var_26 = ((/* implicit */short) min((((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_17 [(_Bool)1])) ^ (((/* implicit */int) arr_46 [(unsigned short)9] [i_12]))))) % (((arr_38 [i_12] [i_14]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_11] [i_12]))))))), ((-(((((/* implicit */_Bool) arr_31 [(_Bool)1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_46 [i_15] [i_15]))) : (arr_36 [i_11])))))));
                    /* LoopSeq 1 */
                    for (signed char i_16 = 0; i_16 < 20; i_16 += 4) 
                    {
                        arr_51 [i_11] [i_11] [i_12] [i_14] [i_15] [i_11] [(short)8] = ((/* implicit */signed char) arr_37 [i_12] [i_15]);
                        var_27 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)128))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_36 [i_14])))) % ((-(arr_44 [i_14] [i_12])))))));
                    }
                }
                for (unsigned short i_17 = 0; i_17 < 20; i_17 += 4) /* same iter space */
                {
                    var_28 *= ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_21 [i_17] [i_17] [(unsigned short)7] [i_12 + 1] [i_11]))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (short)0)), ((unsigned short)65535)))) : (((/* implicit */int) ((unsigned short) (_Bool)1))))));
                    arr_54 [i_11] [i_12 + 2] [i_11] = ((/* implicit */long long int) ((arr_36 [i_14]) % (((/* implicit */unsigned long long int) ((/* implicit */int) max((max(((_Bool)1), ((_Bool)1))), ((_Bool)1)))))));
                }
                for (unsigned long long int i_18 = 0; i_18 < 20; i_18 += 1) 
                {
                    var_29 = ((/* implicit */signed char) ((((/* implicit */int) ((short) min(((_Bool)1), (arr_28 [i_18] [i_11]))))) + (((/* implicit */int) ((unsigned char) (_Bool)1)))));
                    var_30 *= ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
                    arr_58 [17LL] [i_14] [i_12 - 2] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (9223372036854775807LL)))) ? (max((((/* implicit */unsigned int) ((((/* implicit */int) arr_20 [i_11] [i_12] [i_18])) % (((/* implicit */int) arr_18 [i_12 + 2] [(short)7] [i_18]))))), ((+(134217727U))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)32768)) || (((/* implicit */_Bool) arr_46 [i_12 - 2] [i_12]))))))));
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_19 = 0; i_19 < 0; i_19 += 1) 
                {
                    var_31 *= ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)15)))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_20 = 1; i_20 < 17; i_20 += 2) 
                    {
                        arr_63 [i_19] [0ULL] = ((/* implicit */short) arr_38 [i_11] [i_19]);
                        arr_64 [i_19] [i_19] [i_14] [i_14] [i_12] [i_19] = ((/* implicit */long long int) ((unsigned char) arr_13 [i_19 + 1] [i_20 + 3]));
                    }
                    for (short i_21 = 0; i_21 < 20; i_21 += 1) 
                    {
                        var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) (((~(((/* implicit */int) (_Bool)1)))) + (((/* implicit */int) arr_16 [8ULL])))))));
                        arr_68 [i_19] [i_12 + 1] [i_12 + 2] = ((/* implicit */short) ((((/* implicit */int) arr_37 [i_19 + 1] [i_19 + 1])) & (((/* implicit */int) arr_37 [i_11] [(signed char)15]))));
                        var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) (_Bool)1))));
                    }
                }
                var_34 = ((/* implicit */_Bool) min((((/* implicit */int) arr_62 [(unsigned char)12] [i_12] [i_11] [i_12 - 1] [(unsigned char)12])), (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1))))));
            }
            for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
            {
                /* LoopNest 2 */
                for (long long int i_23 = 4; i_23 < 18; i_23 += 2) 
                {
                    for (unsigned short i_24 = 0; i_24 < 20; i_24 += 2) 
                    {
                        {
                            var_35 *= ((/* implicit */short) ((((/* implicit */int) ((unsigned char) arr_28 [i_11] [i_11]))) | ((~(((/* implicit */int) arr_28 [i_12 + 1] [i_23 - 4]))))));
                            var_36 = ((/* implicit */unsigned short) arr_31 [i_11]);
                            var_37 = ((/* implicit */long long int) min((var_37), (((/* implicit */long long int) arr_41 [(signed char)18]))));
                            var_38 = ((/* implicit */unsigned short) max((var_38), (((/* implicit */unsigned short) (((-(((/* implicit */int) arr_21 [i_12 + 2] [i_23 - 1] [i_24] [i_23] [i_24])))) % (((/* implicit */int) (unsigned char)255)))))));
                            var_39 = ((/* implicit */unsigned long long int) min(((~(((/* implicit */int) arr_18 [i_12 + 1] [i_23 + 2] [i_23 - 1])))), ((+(((/* implicit */int) (_Bool)1))))));
                        }
                    } 
                } 
                var_40 = ((/* implicit */short) (_Bool)1);
                var_41 = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned short)65535))));
                /* LoopNest 2 */
                for (unsigned long long int i_25 = 3; i_25 < 19; i_25 += 4) 
                {
                    for (unsigned short i_26 = 2; i_26 < 16; i_26 += 1) 
                    {
                        {
                            var_42 = (!(((/* implicit */_Bool) ((arr_18 [i_26 + 4] [i_25 - 3] [i_12 + 1]) ? (((/* implicit */int) arr_37 [i_25 - 3] [i_12 + 1])) : (((/* implicit */int) arr_37 [i_25 - 1] [i_12 - 2]))))));
                            var_43 *= ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_50 [i_22] [i_12] [i_22] [i_26 + 4] [i_25 - 1])) ? (arr_66 [i_11] [i_12] [i_22] [i_26 + 4] [i_25 - 1] [i_12] [i_12 + 1]) : (arr_66 [i_12] [6LL] [i_22] [i_26 + 4] [i_25 - 1] [i_12] [i_12])))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (unsigned long long int i_27 = 0; i_27 < 20; i_27 += 3) 
            {
                var_44 = (+(((arr_41 [i_11]) % (((/* implicit */unsigned long long int) arr_76 [5ULL] [i_12] [i_27] [i_11])))));
                arr_85 [i_11] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_11] [(short)21])) ? (((/* implicit */int) arr_80 [(short)8] [i_27] [i_27] [(short)18] [(short)18] [i_12] [i_11])) : (((/* implicit */int) arr_15 [i_11])))))));
                var_45 = arr_16 [i_12 + 2];
                var_46 *= ((/* implicit */signed char) arr_44 [i_11] [i_12]);
            }
        }
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_28 = 0; i_28 < 11; i_28 += 3) 
    {
        arr_89 [i_28] = ((/* implicit */short) arr_87 [i_28]);
        /* LoopSeq 1 */
        for (unsigned char i_29 = 0; i_29 < 11; i_29 += 2) 
        {
            /* LoopNest 3 */
            for (signed char i_30 = 0; i_30 < 11; i_30 += 2) 
            {
                for (unsigned short i_31 = 0; i_31 < 11; i_31 += 2) 
                {
                    for (unsigned short i_32 = 0; i_32 < 11; i_32 += 4) 
                    {
                        {
                            var_47 = ((long long int) arr_74 [(_Bool)1] [i_29] [i_30] [i_31] [i_29] [(_Bool)1] [i_29]);
                            var_48 = ((/* implicit */unsigned char) max((var_48), (((/* implicit */unsigned char) arr_96 [i_28] [i_28] [i_28] [i_28]))));
                        }
                    } 
                } 
            } 
            var_49 *= ((/* implicit */short) (-(((/* implicit */int) arr_84 [i_28] [i_29] [i_29] [i_29]))));
            var_50 = ((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_28]))));
        }
        var_51 *= ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)127)) << (0U)));
    }
    var_52 = var_9;
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_33 = 0; i_33 < 16; i_33 += 2) 
    {
        /* LoopSeq 2 */
        for (short i_34 = 0; i_34 < 16; i_34 += 1) /* same iter space */
        {
            arr_105 [i_34] [i_33] [i_34] = ((/* implicit */_Bool) (~(arr_83 [i_33] [i_34] [(signed char)16] [i_34])));
            var_53 = ((/* implicit */long long int) max((var_53), (((/* implicit */long long int) (~(((/* implicit */int) arr_100 [i_33] [i_34])))))));
            arr_106 [i_33] [i_34] = ((/* implicit */unsigned char) ((unsigned long long int) arr_15 [i_34]));
            var_54 = ((/* implicit */unsigned short) max((var_54), (((/* implicit */unsigned short) ((signed char) arr_19 [i_33] [(_Bool)1])))));
        }
        for (short i_35 = 0; i_35 < 16; i_35 += 1) /* same iter space */
        {
            var_55 = ((/* implicit */int) min((var_55), (((/* implicit */int) ((((/* implicit */_Bool) ((arr_56 [i_33] [i_35] [i_35]) ? (((/* implicit */int) arr_47 [i_35] [i_35] [i_35] [i_33])) : (((/* implicit */int) (_Bool)1))))) || (arr_28 [i_35] [i_33]))))));
            arr_109 [i_33] [i_33] = ((/* implicit */_Bool) arr_82 [i_33] [i_33] [i_35] [i_35]);
        }
        /* LoopSeq 2 */
        for (short i_36 = 0; i_36 < 16; i_36 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_37 = 0; i_37 < 16; i_37 += 2) 
            {
                for (unsigned char i_38 = 0; i_38 < 16; i_38 += 2) 
                {
                    for (_Bool i_39 = 1; i_39 < 1; i_39 += 1) 
                    {
                        {
                            arr_120 [i_33] [i_39] [i_33] = ((/* implicit */unsigned long long int) ((unsigned int) arr_80 [i_37] [i_37] [i_39 - 1] [i_38] [i_37] [i_39] [i_39 - 1]));
                            arr_121 [i_39] [i_38] [i_37] [i_36] [i_39] = ((/* implicit */unsigned char) arr_9 [i_37] [i_33]);
                        }
                    } 
                } 
            } 
            var_56 = ((/* implicit */short) max((var_56), (((/* implicit */short) (+(((/* implicit */int) (unsigned short)0)))))));
        }
        for (_Bool i_40 = 0; i_40 < 1; i_40 += 1) 
        {
            arr_125 [i_33] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_110 [i_33] [i_40]))));
            arr_126 [i_33] [i_40] [i_40] = ((/* implicit */unsigned long long int) arr_22 [i_33] [0] [i_33]);
            /* LoopNest 3 */
            for (short i_41 = 1; i_41 < 14; i_41 += 1) 
            {
                for (short i_42 = 0; i_42 < 16; i_42 += 3) 
                {
                    for (long long int i_43 = 0; i_43 < 16; i_43 += 1) 
                    {
                        {
                            arr_135 [i_33] [i_33] [i_33] [i_33] [i_42] = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)128))));
                            var_57 = ((/* implicit */signed char) ((unsigned long long int) (unsigned short)65535));
                        }
                    } 
                } 
            } 
            var_58 *= ((/* implicit */short) arr_73 [i_33] [i_40] [i_40] [i_40] [i_40]);
        }
    }
    var_59 = ((/* implicit */unsigned short) ((((0ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
}
