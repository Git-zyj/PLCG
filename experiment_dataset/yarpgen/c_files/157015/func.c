/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157015
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
    var_12 *= ((/* implicit */unsigned char) ((int) ((((((/* implicit */_Bool) (unsigned char)1)) || ((_Bool)1))) ? (((/* implicit */int) var_4)) : ((+(((/* implicit */int) var_4)))))));
    var_13 = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (short)-10355))) : (8973412055047172020LL)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 3; i_0 < 22; i_0 += 3) /* same iter space */
    {
        var_14 -= ((long long int) arr_0 [4]);
        var_15 = ((/* implicit */_Bool) (short)-6838);
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) var_0)) * (((/* implicit */int) var_10))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 3; i_1 < 22; i_1 += 3) /* same iter space */
    {
        var_16 = ((/* implicit */signed char) min((var_16), (arr_5 [14LL] [i_1 - 1])));
        /* LoopNest 2 */
        for (short i_2 = 1; i_2 < 20; i_2 += 3) 
        {
            for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    for (signed char i_4 = 2; i_4 < 23; i_4 += 3) /* same iter space */
                    {
                        var_17 |= ((/* implicit */unsigned char) (+(var_8)));
                        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_2 + 4] [i_2 + 3] [4LL] [2LL] [i_2] [i_2 + 4])) ? (arr_12 [i_2 + 1] [i_2 + 2] [i_2] [12U] [20LL] [i_2 + 1]) : (arr_12 [i_2 + 2] [i_2 + 1] [i_2] [(unsigned char)10] [i_2] [i_2 + 2]))))));
                    }
                    for (signed char i_5 = 2; i_5 < 23; i_5 += 3) /* same iter space */
                    {
                        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) var_7))));
                        var_20 = ((/* implicit */unsigned long long int) var_0);
                    }
                    for (int i_6 = 1; i_6 < 22; i_6 += 3) /* same iter space */
                    {
                        arr_18 [i_2] [i_3] [i_2] [i_2] = ((/* implicit */long long int) 3ULL);
                        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [10ULL] [20ULL] [i_3 + 1] [10ULL])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [(_Bool)1] [(unsigned short)12] [i_3 + 1] [(_Bool)1]))))))));
                    }
                    for (int i_7 = 1; i_7 < 22; i_7 += 3) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (int i_8 = 0; i_8 < 24; i_8 += 3) 
                        {
                            var_22 = ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1))));
                            var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_25 [4] [i_8] [0LL] [i_2] [0LL] [i_1] [i_1])) ? (4139153582U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))));
                        }
                        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_9))));
                            arr_29 [i_9] [i_2] [i_3] [i_2] [i_1] = ((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                            var_25 ^= ((/* implicit */long long int) (_Bool)1);
                            var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) arr_23 [i_9] [(unsigned char)12] [(signed char)8] [(signed char)20] [i_2] [i_1] [i_1]))));
                            var_27 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_11)))) : (-1238119512)));
                        }
                        var_28 = ((/* implicit */unsigned long long int) var_7);
                    }
                    /* LoopNest 2 */
                    for (short i_10 = 0; i_10 < 24; i_10 += 3) 
                    {
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            {
                                var_29 = ((/* implicit */_Bool) (-(((/* implicit */int) var_6))));
                                arr_36 [(signed char)5] [i_10] [i_10] [i_2] [1LL] [i_2] [i_1] = ((/* implicit */_Bool) var_1);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned long long int i_12 = 0; i_12 < 15; i_12 += 3) 
    {
        var_30 -= ((/* implicit */unsigned short) ((signed char) min((arr_6 [(short)16]), (((/* implicit */signed char) arr_26 [i_12] [(unsigned char)12] [i_12] [i_12] [(unsigned char)12] [i_12])))));
        arr_41 [i_12] = ((/* implicit */unsigned char) (_Bool)1);
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned char i_13 = 0; i_13 < 15; i_13 += 3) 
        {
            var_31 &= ((/* implicit */unsigned char) ((long long int) (!(((/* implicit */_Bool) (signed char)-102)))));
            var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) ((((_Bool) (_Bool)1)) ? (arr_2 [14ULL] [(signed char)20]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [18]))))))));
            arr_45 [i_12] = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) | (17837271070200390835ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_13])))));
            /* LoopNest 3 */
            for (unsigned char i_14 = 4; i_14 < 13; i_14 += 3) 
            {
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    for (unsigned int i_16 = 2; i_16 < 11; i_16 += 3) 
                    {
                        {
                            var_33 ^= ((/* implicit */unsigned short) var_6);
                            var_34 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_0))))));
                            var_35 |= ((/* implicit */unsigned char) arr_12 [16ULL] [i_16] [i_16] [0LL] [i_16 + 1] [i_16 + 4]);
                            var_36 = (((_Bool)1) || (((/* implicit */_Bool) 609473003509160780ULL)));
                        }
                    } 
                } 
            } 
            /* LoopSeq 2 */
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                var_37 = ((/* implicit */signed char) max((var_37), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)151)) ? (((/* implicit */int) arr_53 [(short)4])) : (((/* implicit */int) arr_53 [(unsigned short)10])))))));
                /* LoopSeq 4 */
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    /* LoopSeq 3 */
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        arr_61 [(_Bool)1] [14ULL] [i_12] [i_18] [6LL] [(_Bool)1] = ((/* implicit */unsigned int) (unsigned char)58);
                        var_38 = ((/* implicit */long long int) min((var_38), (((/* implicit */long long int) ((4523844827353414262LL) == (((/* implicit */long long int) ((/* implicit */int) (signed char)-34))))))));
                        var_39 = ((/* implicit */signed char) min((var_39), (((signed char) arr_8 [(unsigned char)14] [(unsigned char)14] [i_13]))));
                    }
                    for (unsigned char i_20 = 0; i_20 < 15; i_20 += 3) 
                    {
                        var_40 ^= ((/* implicit */_Bool) ((((/* implicit */int) var_6)) / (((/* implicit */int) arr_54 [i_20] [(_Bool)1] [(_Bool)1] [i_12]))));
                        arr_65 [i_20] [(signed char)2] [(signed char)12] [i_13] [(_Bool)1] |= ((/* implicit */unsigned int) ((unsigned long long int) 1445474448U));
                        arr_66 [i_12] [(signed char)13] [(_Bool)1] [i_12] [(signed char)0] [i_12] = ((/* implicit */unsigned long long int) ((unsigned short) arr_12 [22U] [i_13] [(unsigned char)0] [i_12] [i_13] [i_13]));
                        var_41 -= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_11)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [12ULL])))))));
                    }
                    for (unsigned long long int i_21 = 0; i_21 < 15; i_21 += 3) 
                    {
                        var_42 = ((/* implicit */_Bool) min((var_42), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_42 [i_18] [(signed char)0] [i_12])) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) var_7))))) : (((/* implicit */int) arr_14 [2U] [i_13] [i_13] [i_13])))))));
                        arr_69 [i_12] [i_13] [(unsigned short)4] = ((/* implicit */unsigned long long int) var_2);
                        var_43 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) -1238119512))));
                        var_44 = ((/* implicit */_Bool) (+((-(-4465619169020212586LL)))));
                        var_45 = ((/* implicit */unsigned short) ((signed char) var_1));
                    }
                    var_46 -= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_57 [8U] [i_13] [(unsigned char)10] [i_13])) ? (((/* implicit */int) arr_17 [(signed char)6])) : (((/* implicit */int) arr_17 [(signed char)20]))));
                }
                for (unsigned int i_22 = 0; i_22 < 15; i_22 += 3) 
                {
                    /* LoopSeq 4 */
                    for (signed char i_23 = 0; i_23 < 15; i_23 += 3) /* same iter space */
                    {
                        var_47 = ((/* implicit */signed char) ((((/* implicit */int) var_10)) > (((/* implicit */int) arr_74 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12] [9LL]))));
                        var_48 = ((/* implicit */long long int) min((var_48), (((/* implicit */long long int) var_9))));
                        var_49 ^= ((/* implicit */_Bool) ((unsigned int) arr_43 [i_12] [(short)2]));
                        var_50 = ((/* implicit */short) var_8);
                    }
                    for (signed char i_24 = 0; i_24 < 15; i_24 += 3) /* same iter space */
                    {
                        var_51 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_62 [12] [i_22] [12])) ? (((/* implicit */unsigned long long int) ((long long int) (_Bool)1))) : (((var_8) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))));
                        var_52 &= ((/* implicit */unsigned int) ((long long int) var_1));
                        var_53 = ((/* implicit */long long int) max((var_53), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_71 [i_13] [i_13] [i_13] [(signed char)1] [i_13])))))));
                    }
                    for (signed char i_25 = 0; i_25 < 15; i_25 += 3) /* same iter space */
                    {
                        var_54 = ((/* implicit */unsigned long long int) ((unsigned short) (_Bool)1));
                        var_55 += ((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) (unsigned short)60170))) & (((((/* implicit */int) (short)28532)) & (((/* implicit */int) (short)-28532))))));
                        var_56 -= ((unsigned char) 17837271070200390835ULL);
                        var_57 = ((/* implicit */_Bool) max((var_57), ((!(((/* implicit */_Bool) arr_52 [i_25] [i_22] [(signed char)10] [i_13] [(signed char)10] [(unsigned short)14] [i_12]))))));
                    }
                    for (signed char i_26 = 0; i_26 < 15; i_26 += 3) /* same iter space */
                    {
                        var_58 += ((/* implicit */unsigned int) ((signed char) arr_31 [i_13] [i_13] [i_13] [i_13] [i_13]));
                        arr_82 [i_12] [i_26] [i_26] [0LL] = ((/* implicit */unsigned long long int) (-(-466947679296341621LL)));
                        var_59 &= ((/* implicit */signed char) var_0);
                        arr_83 [i_12] [(signed char)10] [3U] [i_12] [i_12] [i_12] [i_12] = ((/* implicit */short) (-(((/* implicit */int) arr_57 [(unsigned short)2] [i_12] [i_12] [i_12]))));
                    }
                    var_60 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_80 [i_12] [i_12] [(unsigned char)9] [0LL] [i_12])) || (((/* implicit */_Bool) arr_7 [(signed char)6]))));
                }
                for (unsigned short i_27 = 0; i_27 < 15; i_27 += 3) 
                {
                    var_61 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) (unsigned short)5366))) ? ((~(9223372036854775807LL))) : (((/* implicit */long long int) arr_80 [(_Bool)1] [i_13] [i_13] [i_13] [i_13]))));
                    arr_87 [i_12] [i_12] [i_12] = ((/* implicit */unsigned long long int) (_Bool)1);
                }
                for (signed char i_28 = 0; i_28 < 15; i_28 += 3) 
                {
                    var_62 = ((/* implicit */unsigned long long int) var_9);
                    arr_90 [i_13] [i_13] [i_12] [i_13] [(short)5] [i_13] = ((/* implicit */short) var_11);
                }
            }
            for (unsigned short i_29 = 0; i_29 < 15; i_29 += 3) 
            {
                var_63 = ((/* implicit */unsigned int) min((var_63), (((/* implicit */unsigned int) ((int) (short)32704)))));
                var_64 = ((/* implicit */long long int) min((var_64), (((/* implicit */long long int) ((unsigned long long int) arr_44 [i_29] [i_29] [2LL])))));
            }
        }
        /* vectorizable */
        for (signed char i_30 = 1; i_30 < 14; i_30 += 3) /* same iter space */
        {
            arr_95 [(unsigned char)14] [(unsigned char)14] &= ((/* implicit */short) arr_49 [(unsigned short)8]);
            var_65 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-28530)) && (((/* implicit */_Bool) -2305843009213693952LL))));
            arr_96 [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_68 [i_30 + 1] [i_12] [i_30] [i_30 - 1] [i_30] [i_30])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-111))) : (arr_48 [i_12] [2LL] [(short)9] [i_30])));
        }
        /* vectorizable */
        for (signed char i_31 = 1; i_31 < 14; i_31 += 3) /* same iter space */
        {
            var_66 = ((/* implicit */signed char) arr_57 [i_31] [i_12] [i_12] [i_12]);
            arr_99 [(signed char)2] [i_12] [i_12] = ((/* implicit */signed char) ((unsigned char) var_5));
            var_67 = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_7))));
            var_68 += ((/* implicit */unsigned char) ((unsigned long long int) (signed char)-110));
        }
        for (signed char i_32 = 1; i_32 < 14; i_32 += 3) /* same iter space */
        {
            arr_104 [i_12] [i_12] = ((/* implicit */_Bool) arr_38 [i_12] [i_12]);
            var_69 = ((/* implicit */unsigned short) (~(1504477193603068965LL)));
        }
        var_70 = ((/* implicit */short) ((unsigned int) ((long long int) (short)-24971)));
    }
    var_71 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1238119512)) ? (var_2) : (((/* implicit */int) (_Bool)1))));
}
