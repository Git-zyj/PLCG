/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147523
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
    for (int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                arr_8 [i_1] [i_0] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_7 [(short)3] [i_1] [i_0] [i_1]))));
                /* LoopSeq 1 */
                for (short i_3 = 0; i_3 < 18; i_3 += 3) 
                {
                    arr_12 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32388)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)127))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) arr_0 [i_2])) : (arr_6 [i_2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-125)))));
                    var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) ((unsigned char) var_11)))));
                    arr_13 [i_0] [i_0] [i_0] [(unsigned char)14] [12U] [i_0] = ((/* implicit */int) arr_0 [i_3]);
                }
                var_13 = ((/* implicit */long long int) max((var_13), ((((!(((/* implicit */_Bool) 4383400093684317849ULL)))) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1])))))));
            }
            for (short i_4 = 4; i_4 < 17; i_4 += 1) 
            {
                arr_17 [i_0] [i_1] [i_0] = arr_3 [i_4 - 4] [i_4 - 4];
                arr_18 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_4])))))) | (17593368962790561880ULL)));
            }
            for (signed char i_5 = 0; i_5 < 18; i_5 += 2) 
            {
                var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((982837801) - (((/* implicit */int) (signed char)112)))))));
                /* LoopSeq 1 */
                for (long long int i_6 = 1; i_6 < 15; i_6 += 4) 
                {
                    /* LoopSeq 4 */
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        arr_28 [i_0] [i_0] [i_0] [i_0] [(signed char)17] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)78)) ? (14063343980025233757ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32371))))));
                        arr_29 [i_7 - 1] [i_0] [i_0] [(unsigned char)12] = ((((/* implicit */unsigned int) 982837802)) ^ (((((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_7] [i_6] [i_6] [i_5] [i_1] [i_0] [i_0]))) & (arr_14 [i_0] [i_0]))));
                        var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) -811205713))));
                        arr_30 [(short)12] [i_0] = ((/* implicit */short) (unsigned short)14216);
                        arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) 2622244270U);
                    }
                    for (unsigned short i_8 = 1; i_8 < 16; i_8 += 1) 
                    {
                        var_16 += ((/* implicit */short) 369276820);
                        var_17 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) (short)-5592)) ? (arr_27 [i_8 - 1] [i_6] [i_1] [i_5] [i_1] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1])))));
                        arr_35 [i_0] [12] [i_0] [i_0] [i_0] = ((/* implicit */short) arr_5 [i_1] [i_6 + 2] [i_0]);
                        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) arr_19 [i_0] [i_1] [i_0]))));
                    }
                    for (long long int i_9 = 3; i_9 < 14; i_9 += 1) 
                    {
                        var_19 += ((/* implicit */signed char) ((((/* implicit */int) arr_20 [i_1] [i_6 - 1] [i_9 + 3])) <= (((/* implicit */int) arr_11 [i_1] [i_9 + 4] [i_9 - 2] [i_9]))));
                        var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_0] [i_6] [(unsigned short)12] [i_1] [i_0]))));
                        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) arr_1 [i_5]))));
                    }
                    for (signed char i_10 = 0; i_10 < 18; i_10 += 3) 
                    {
                        var_22 += ((/* implicit */_Bool) ((((/* implicit */_Bool) 369276823)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (4379914421189714619ULL)));
                        var_23 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */_Bool) (signed char)-34)) || (((/* implicit */_Bool) var_5)))))));
                    }
                    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)98)) ? (((/* implicit */int) arr_2 [i_6 + 1] [i_6 + 3])) : (((/* implicit */int) arr_41 [i_6] [i_6 + 3] [i_6] [(short)2] [i_6] [i_6 + 1] [i_6 + 2]))));
                    /* LoopSeq 1 */
                    for (signed char i_11 = 0; i_11 < 18; i_11 += 1) 
                    {
                        arr_44 [i_0] [(short)5] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) arr_15 [i_0] [i_6 - 1]);
                        var_25 -= ((/* implicit */unsigned char) ((arr_34 [i_6 + 1] [i_6 + 3] [i_6 + 3]) / (-982837808)));
                    }
                }
            }
            arr_45 [i_1] [(unsigned short)14] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1172238521)) || (((((/* implicit */_Bool) arr_36 [i_0] [i_0] [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) arr_9 [(short)6] [i_1] [i_1] [i_1] [i_0] [i_0]))))));
            var_26 = ((/* implicit */signed char) var_7);
        }
        for (short i_12 = 1; i_12 < 15; i_12 += 4) 
        {
            /* LoopSeq 2 */
            for (short i_13 = 0; i_13 < 18; i_13 += 3) 
            {
                var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) var_2))));
                arr_51 [i_0] [(_Bool)1] [i_0] [(unsigned short)8] |= ((/* implicit */unsigned short) arr_32 [i_0] [i_13]);
                arr_52 [i_0] [i_0] [i_13] = var_11;
            }
            for (unsigned char i_14 = 2; i_14 < 14; i_14 += 1) 
            {
                arr_56 [i_12] [16] &= ((/* implicit */unsigned short) ((((/* implicit */int) arr_26 [i_14 + 2] [i_14 + 2] [(short)16] [i_12] [(short)16] [i_12] [i_0])) >> (((((/* implicit */int) arr_26 [i_14] [i_14 - 1] [(short)10] [i_12 + 2] [(short)10] [i_12] [i_12])) - (99)))));
                var_28 -= ((/* implicit */unsigned short) (-(arr_40 [i_12 + 1] [i_14] [i_14 - 1] [4])));
                arr_57 [i_14] [(unsigned char)12] [(unsigned char)12] [i_0] &= ((/* implicit */unsigned short) 2147483647);
                /* LoopNest 2 */
                for (long long int i_15 = 0; i_15 < 18; i_15 += 2) 
                {
                    for (unsigned char i_16 = 1; i_16 < 16; i_16 += 2) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned char) (!(arr_10 [i_14 - 2] [i_14 - 2])));
                            arr_65 [i_0] [(unsigned char)12] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) -6221025593221180491LL);
                        }
                    } 
                } 
            }
            /* LoopSeq 3 */
            for (unsigned char i_17 = 0; i_17 < 18; i_17 += 3) 
            {
                var_30 = ((/* implicit */unsigned char) ((((/* implicit */long long int) -1047280096)) == (1LL)));
                /* LoopNest 2 */
                for (long long int i_18 = 1; i_18 < 16; i_18 += 3) 
                {
                    for (signed char i_19 = 3; i_19 < 14; i_19 += 2) 
                    {
                        {
                            var_31 = ((/* implicit */short) var_5);
                            var_32 = ((/* implicit */short) var_7);
                        }
                    } 
                } 
                var_33 = ((/* implicit */unsigned long long int) min((var_33), (((/* implicit */unsigned long long int) arr_1 [i_0]))));
                var_34 = ((/* implicit */long long int) (((-(((/* implicit */int) (short)8684)))) + (var_3)));
            }
            for (short i_20 = 3; i_20 < 16; i_20 += 3) 
            {
                arr_77 [i_0] = ((/* implicit */signed char) arr_2 [i_12] [i_0]);
                var_35 += ((/* implicit */unsigned long long int) arr_49 [12U] [12U] [i_0] [12U]);
                arr_78 [i_20] [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned int) var_7));
            }
            for (unsigned short i_21 = 0; i_21 < 18; i_21 += 4) 
            {
                arr_82 [i_21] [(unsigned short)12] [(unsigned short)12] [i_21] |= (-(((/* implicit */int) var_2)));
                arr_83 [i_0] [i_12] [i_12 + 1] [(unsigned short)3] = arr_58 [i_0] [i_0] [i_0] [i_0] [(signed char)0] [i_0];
            }
            var_36 = ((/* implicit */short) max((var_36), (((/* implicit */short) (((-(((/* implicit */int) (signed char)-127)))) % (((/* implicit */int) (short)-8684)))))));
            /* LoopSeq 2 */
            for (unsigned short i_22 = 3; i_22 < 16; i_22 += 3) 
            {
                /* LoopSeq 3 */
                for (short i_23 = 1; i_23 < 16; i_23 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_24 = 1; i_24 < 16; i_24 += 1) 
                    {
                        arr_94 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((((/* implicit */int) var_5)) - (((/* implicit */int) var_4)))) : (((/* implicit */int) var_11))));
                        arr_95 [i_0] [i_0] [i_0] [i_22] [i_23] [i_24 + 1] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_61 [i_12 + 1] [i_22 + 2] [i_0] [i_22] [i_23 + 2] [i_23 + 2])) - (((((((/* implicit */int) (short)-8693)) + (2147483647))) >> (((((/* implicit */int) var_11)) - (115)))))));
                        arr_96 [i_0] [i_22] [i_22] [i_22] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_21 [i_24 + 1] [i_22 - 1] [i_12 + 2] [i_0])) <= (2147483642)));
                        var_37 |= ((/* implicit */int) arr_85 [(unsigned char)4] [(unsigned char)6] [(unsigned char)6] [(unsigned char)4]);
                    }
                    for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                    {
                        var_38 = ((/* implicit */unsigned short) min((var_38), (((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) arr_32 [i_12 - 1] [i_12 + 3])) : (1837237281))))));
                        arr_100 [i_12 + 1] [i_0] [i_12 + 1] = ((/* implicit */unsigned char) (((_Bool)1) && (((/* implicit */_Bool) (unsigned char)7))));
                        var_39 = ((/* implicit */unsigned char) max((var_39), (arr_42 [i_0] [(short)6])));
                        var_40 -= ((/* implicit */unsigned char) (unsigned short)20);
                    }
                    arr_101 [i_0] [i_22] [i_12] [i_0] = ((/* implicit */long long int) var_0);
                    var_41 -= ((/* implicit */signed char) ((unsigned long long int) arr_23 [(unsigned short)10] [(unsigned char)4] [i_12 + 2] [i_0] [(unsigned short)10]));
                    var_42 = ((/* implicit */short) arr_97 [i_23] [i_23 - 1] [i_0] [i_23 + 2] [i_23 + 2]);
                    arr_102 [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_80 [i_23 - 1] [i_12 + 1] [i_12 + 1]))));
                }
                for (long long int i_26 = 0; i_26 < 18; i_26 += 3) 
                {
                    arr_106 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */int) var_4)) != (((/* implicit */int) arr_54 [i_0] [i_0] [i_0] [i_0]))));
                    var_43 = ((/* implicit */unsigned int) min((var_43), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)64)) / (((/* implicit */int) (signed char)33)))))));
                    /* LoopSeq 1 */
                    for (_Bool i_27 = 1; i_27 < 1; i_27 += 1) 
                    {
                        arr_109 [i_0] [i_12] [i_12] [i_12] = ((/* implicit */unsigned short) ((((arr_23 [i_0] [i_12] [(short)12] [i_12] [i_12 + 3]) >> (((/* implicit */int) (_Bool)1)))) >> (((((/* implicit */int) var_8)) - (65)))));
                        arr_110 [i_0] [i_0] [i_12] [i_22 - 3] [i_26] [(unsigned char)3] = ((/* implicit */unsigned int) var_3);
                        var_44 += ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_58 [i_0] [8LL] [8LL] [i_0] [i_0] [i_0]) > (((/* implicit */unsigned long long int) 1336354922)))))) > (arr_87 [i_26])));
                        var_45 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) var_11))) ? (((/* implicit */int) arr_89 [i_27] [i_26] [i_22 - 3] [i_12 + 3] [i_0])) : (((((/* implicit */int) arr_50 [(unsigned char)0] [i_26] [(unsigned char)0])) ^ (((/* implicit */int) var_7))))));
                    }
                    var_46 -= ((/* implicit */short) ((((/* implicit */_Bool) 689514097)) ? (((/* implicit */int) var_2)) : (630457254)));
                }
                for (unsigned long long int i_28 = 1; i_28 < 16; i_28 += 3) 
                {
                    arr_115 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) var_8)) >= (((/* implicit */int) ((((/* implicit */int) (signed char)29)) != (((/* implicit */int) (signed char)-21)))))));
                    var_47 = ((((/* implicit */int) arr_5 [i_22] [i_22] [i_0])) / (((/* implicit */int) arr_5 [i_22 - 1] [i_22 - 1] [i_0])));
                    arr_116 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_0] [i_12 + 2] [i_0] [i_28 + 1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4))))) && (((/* implicit */_Bool) var_8))));
                }
                /* LoopNest 2 */
                for (int i_29 = 0; i_29 < 18; i_29 += 3) 
                {
                    for (unsigned short i_30 = 0; i_30 < 18; i_30 += 1) 
                    {
                        {
                            arr_121 [i_0] [i_0] [i_0] = ((((/* implicit */int) arr_75 [i_12 + 1] [i_12 + 2])) & (((/* implicit */int) arr_75 [i_12 + 1] [i_12 + 2])));
                            arr_122 [i_0] [i_12] [i_12] [i_22] [i_29] [i_29] [i_30] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (signed char)122)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_4 [i_0]))))) : ((-(((/* implicit */int) (short)32762))))));
                            var_48 *= ((/* implicit */int) ((((/* implicit */int) var_6)) < (((/* implicit */int) arr_67 [i_12 + 3] [i_22] [i_22 + 2] [i_30]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_31 = 1; i_31 < 16; i_31 += 3) 
                {
                    for (unsigned char i_32 = 3; i_32 < 16; i_32 += 3) 
                    {
                        {
                            arr_129 [i_0] [i_0] = ((/* implicit */short) ((((arr_6 [i_12]) >= (arr_68 [8ULL] [i_12 + 3] [8ULL] [i_12 + 1]))) ? (((/* implicit */int) arr_128 [i_31 + 1] [i_22 - 3] [i_12 - 1])) : ((-(((/* implicit */int) (signed char)49))))));
                            var_49 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_103 [i_12 + 1] [i_22 - 1] [(short)14] [i_31 + 1] [i_32 + 2])) ? (303205342135726013LL) : (4634085495613153283LL)));
                            var_50 = ((/* implicit */signed char) (short)-32763);
                        }
                    } 
                } 
                arr_130 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) var_4)) >> (((310078276) - (310078248)))));
            }
            for (short i_33 = 1; i_33 < 17; i_33 += 2) 
            {
                var_51 = ((/* implicit */unsigned short) max((var_51), (((/* implicit */unsigned short) var_1))));
                /* LoopSeq 1 */
                for (unsigned short i_34 = 2; i_34 < 15; i_34 += 1) 
                {
                    var_52 = ((/* implicit */unsigned short) max((var_52), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_61 [i_12 - 1] [i_12] [(unsigned short)16] [i_33 - 1] [i_33] [i_34])) || (((/* implicit */_Bool) var_7)))))));
                    arr_138 [i_0] [i_0] = ((/* implicit */unsigned long long int) (((_Bool)1) && (((/* implicit */_Bool) arr_2 [i_34 - 1] [i_34 + 1]))));
                }
                /* LoopSeq 1 */
                for (signed char i_35 = 0; i_35 < 18; i_35 += 2) 
                {
                    var_53 ^= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)187)) ? (((/* implicit */int) (signed char)-41)) : (((/* implicit */int) (signed char)-34))));
                    var_54 |= ((/* implicit */unsigned int) arr_108 [(_Bool)1] [i_35] [i_33 + 1] [i_33] [i_33] [i_35]);
                }
                arr_141 [0] &= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_134 [8] [i_12 + 1] [i_12] [i_12] [i_12])) == (((/* implicit */int) arr_134 [2] [i_12] [4ULL] [i_12] [i_12 + 2]))));
            }
            /* LoopSeq 1 */
            for (unsigned char i_36 = 0; i_36 < 18; i_36 += 1) 
            {
                var_55 = ((/* implicit */unsigned long long int) max((var_55), (((/* implicit */unsigned long long int) ((var_3) / (527509507))))));
                var_56 = ((/* implicit */unsigned char) min((var_56), (((/* implicit */unsigned char) ((arr_38 [i_36] [i_36] [16ULL] [16ULL] [(unsigned char)14] [i_0]) * (((/* implicit */int) ((((/* implicit */int) var_4)) < (var_3)))))))));
            }
        }
        for (short i_37 = 3; i_37 < 17; i_37 += 1) 
        {
            arr_147 [i_0] [i_0] = 4051355474307320112ULL;
            var_57 = ((/* implicit */short) min((var_57), (((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) arr_23 [(short)16] [i_37] [i_37] [i_0] [(short)16])) ? (((/* implicit */int) arr_91 [(unsigned char)10])) : (((/* implicit */int) (signed char)83)))) : (((/* implicit */int) ((((/* implicit */int) var_10)) <= (((/* implicit */int) (short)14227))))))))));
        }
        arr_148 [i_0] = ((/* implicit */signed char) (short)17859);
    }
    var_58 ^= ((/* implicit */unsigned char) (~(((((/* implicit */long long int) -964861301)) ^ (((4634085495613153294LL) << (((((/* implicit */int) (unsigned char)251)) - (251)))))))));
    var_59 = var_11;
}
