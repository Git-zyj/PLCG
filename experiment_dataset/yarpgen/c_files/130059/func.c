/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130059
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            arr_4 [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned short)32165)) : (((/* implicit */int) arr_3 [i_0] [i_0]))))) ? (4294967292U) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_1 [(unsigned short)1]) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65519)))))))));
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                for (int i_3 = 0; i_3 < 21; i_3 += 3) 
                {
                    {
                        var_14 = ((((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) 4U)) : (var_6))) % (((unsigned long long int) 17U)));
                        arr_11 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */signed char) ((unsigned int) (!(((/* implicit */_Bool) 4294967292U)))));
                        arr_12 [i_1] [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_9 [i_1] [i_1] [i_1] [i_1] [i_1])) < (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned short i_4 = 3; i_4 < 20; i_4 += 3) 
            {
                for (int i_5 = 0; i_5 < 21; i_5 += 3) 
                {
                    {
                        arr_19 [i_4] [i_4 + 1] [i_1] [(signed char)19] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_13 [i_4] [i_4 - 3] [i_4])) - (((/* implicit */int) (short)32743))));
                        var_15 -= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_5] [i_4 - 2] [i_4] [i_0] [i_0])) ? (((/* implicit */int) arr_9 [i_0] [(signed char)13] [(signed char)13] [i_4 - 3] [(signed char)13])) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_4 - 3] [i_5] [i_0]))));
                    }
                } 
            } 
        }
        for (unsigned char i_6 = 1; i_6 < 19; i_6 += 4) 
        {
            arr_22 [i_0] [i_6] [i_6] = ((/* implicit */unsigned long long int) 8U);
            var_16 = ((/* implicit */unsigned char) 206438686U);
        }
        /* LoopNest 2 */
        for (unsigned char i_7 = 2; i_7 < 18; i_7 += 3) 
        {
            for (unsigned char i_8 = 0; i_8 < 21; i_8 += 3) 
            {
                {
                    var_17 ^= ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_23 [i_7])) ? (var_2) : (((/* implicit */long long int) 20U)))) + (((/* implicit */long long int) (-(((/* implicit */int) (signed char)13)))))));
                    var_18 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_8)) ? (4U) : (36U)))));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            /* LoopSeq 1 */
            for (signed char i_10 = 0; i_10 < 21; i_10 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned int i_11 = 0; i_11 < 21; i_11 += 3) 
                {
                    var_19 -= ((4197713856U) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-13))));
                    /* LoopSeq 1 */
                    for (unsigned int i_12 = 3; i_12 < 17; i_12 += 3) 
                    {
                        var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_34 [i_11] [(short)4] [i_10] [i_10]))));
                        var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) 16U))));
                    }
                    var_22 -= ((/* implicit */unsigned int) ((((((/* implicit */int) var_10)) - (((/* implicit */int) (_Bool)1)))) + ((~(((/* implicit */int) var_11))))));
                    var_23 = ((((/* implicit */_Bool) 12872013118373980384ULL)) && (((/* implicit */_Bool) ((5574730955335571243ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1)))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_13 = 0; i_13 < 21; i_13 += 4) 
                    {
                        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_12)) : ((((_Bool)1) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) (_Bool)1))))));
                        arr_42 [(short)20] [(short)20] [i_9] [i_9] [(signed char)11] [i_9] [(signed char)11] = ((/* implicit */long long int) (short)3353);
                        arr_43 [i_9] [i_9] = ((/* implicit */signed char) var_13);
                    }
                    for (unsigned int i_14 = 1; i_14 < 17; i_14 += 3) 
                    {
                        arr_46 [i_9] [i_11] [10ULL] [10ULL] [i_10] [i_0] [i_9] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_45 [i_9] [i_9] [i_10] [i_9] [i_14] [i_10]))));
                        var_25 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_38 [i_14 + 1] [i_14 + 4] [i_14] [i_14 + 1] [i_14 + 1]))));
                    }
                }
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    arr_49 [i_9] [i_9] [i_9] [i_0] = ((/* implicit */unsigned short) (+(var_6)));
                    /* LoopSeq 3 */
                    for (short i_16 = 0; i_16 < 21; i_16 += 3) 
                    {
                        var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) arr_7 [i_0] [i_16] [i_10] [i_0]))));
                        arr_53 [i_0] [i_9] = ((/* implicit */unsigned char) (+((~(((/* implicit */int) (short)31422))))));
                        var_27 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15])) ? (arr_10 [i_16] [i_0] [i_0] [i_9] [i_0] [i_0]) : (((/* implicit */long long int) 5U))));
                        arr_54 [i_0] [i_9] [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0]))));
                    }
                    for (unsigned int i_17 = 2; i_17 < 18; i_17 += 3) 
                    {
                        var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_4)))))));
                        arr_57 [i_0] [i_0] [i_9] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 12872013118373980384ULL)) ? (arr_33 [i_17 + 3] [i_9] [i_9]) : (((/* implicit */long long int) (+(((/* implicit */int) arr_28 [i_0] [i_10] [i_17 + 3])))))));
                    }
                    for (unsigned long long int i_18 = 0; i_18 < 21; i_18 += 4) 
                    {
                        var_29 -= ((/* implicit */unsigned int) (((~(9223372036854775807LL))) < (-4495931441547025733LL)));
                        arr_62 [i_0] [i_9] [i_0] [(unsigned short)20] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) 4U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_9]))) : (4U)));
                        arr_63 [i_0] [i_9] [i_0] [i_9] [i_18] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_41 [i_0] [i_9] [i_9])) ? (arr_21 [i_0] [i_9] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1)))))));
                    }
                    var_30 = ((/* implicit */unsigned long long int) var_8);
                    var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) ((((/* implicit */int) var_11)) == (((/* implicit */int) var_11))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 3293037959964208521LL))))))))));
                }
                /* LoopSeq 4 */
                for (unsigned int i_19 = 2; i_19 < 17; i_19 += 3) 
                {
                    arr_66 [i_0] [i_9] [i_10] [i_19 - 1] [i_10] = ((/* implicit */unsigned short) arr_21 [i_19 - 1] [i_9] [i_19 + 4]);
                    arr_67 [i_9] = ((arr_16 [i_0] [i_19 - 1] [i_9] [i_19 - 1]) ? (((long long int) var_2)) : (var_4));
                }
                for (short i_20 = 0; i_20 < 21; i_20 += 3) 
                {
                    var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) var_6))));
                    var_33 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_28 [i_0] [i_9] [i_10]))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_21 = 0; i_21 < 21; i_21 += 3) /* same iter space */
                    {
                        var_34 = (!(((/* implicit */_Bool) (short)31557)));
                        arr_75 [i_0] [i_9] [i_9] [12] [i_9] = ((/* implicit */short) ((_Bool) (_Bool)1));
                    }
                    for (unsigned long long int i_22 = 0; i_22 < 21; i_22 += 3) /* same iter space */
                    {
                        var_35 = ((/* implicit */_Bool) arr_72 [i_9]);
                        arr_79 [i_9] [i_9] [i_10] [i_20] [i_0] [i_20] = 4294967278U;
                    }
                    for (unsigned int i_23 = 3; i_23 < 19; i_23 += 3) 
                    {
                        var_36 = ((/* implicit */long long int) var_11);
                        var_37 = ((/* implicit */unsigned int) max((var_37), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_23 + 2] [i_23 - 2] [i_23 - 1] [6] [i_23 + 2] [i_9])) || (((/* implicit */_Bool) arr_10 [i_23 + 2] [i_23 - 3] [i_23 - 1] [i_23] [i_23 - 3] [i_9])))))));
                        var_38 -= ((/* implicit */unsigned long long int) arr_69 [i_20] [i_0]);
                        var_39 ^= (!(((/* implicit */_Bool) arr_15 [i_23] [i_23 + 1] [i_23 + 1])));
                    }
                    var_40 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_52 [i_9] [i_10] [i_9] [i_0] [i_9])) + (var_7)));
                }
                for (unsigned long long int i_24 = 2; i_24 < 17; i_24 += 3) 
                {
                    arr_86 [i_0] [(unsigned short)20] [i_9] [i_10] [(unsigned short)20] [(unsigned short)20] = (_Bool)1;
                    arr_87 [i_0] [i_9] = var_4;
                }
                for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                {
                    var_41 = ((/* implicit */signed char) min((var_41), (((/* implicit */signed char) var_5))));
                    arr_90 [i_0] [i_9] [i_9] [i_10] [i_25] = (!(((/* implicit */_Bool) 0U)));
                    arr_91 [i_0] [i_0] [i_0] [i_9] = (!(((/* implicit */_Bool) -1976273170)));
                    /* LoopSeq 3 */
                    for (short i_26 = 0; i_26 < 21; i_26 += 3) 
                    {
                        var_42 = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_68 [3U] [i_10] [i_25] [i_26]))) != (1355730528780957223ULL))))));
                        var_43 ^= ((/* implicit */_Bool) 9223372036854775807LL);
                    }
                    for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
                    {
                        var_44 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_94 [i_9]))) == (arr_5 [i_0]))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((arr_38 [i_0] [i_0] [i_10] [i_10] [i_27]) % (3082493967U)))));
                        var_45 = ((/* implicit */short) min((var_45), (((/* implicit */short) arr_56 [i_0] [i_0] [(signed char)10] [i_0] [i_0] [i_0]))));
                        arr_97 [i_0] [i_0] [i_9] [13ULL] [i_0] = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) (short)-27313))))) : (1054183454)));
                        arr_98 [(_Bool)1] [i_9] [i_27] = (((_Bool)1) && (((/* implicit */_Bool) var_1)));
                    }
                    for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
                    {
                        arr_101 [6LL] [i_9] [i_25] [(short)18] = ((/* implicit */unsigned int) (+(((/* implicit */int) (short)-31558))));
                        arr_102 [i_9] [i_9] [i_9] [i_28] = ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_7)))) == (var_4));
                        var_46 = ((/* implicit */_Bool) arr_80 [i_9] [i_9] [i_9] [i_9] [i_9]);
                        arr_103 [i_0] [i_9] [i_0] = ((/* implicit */unsigned int) ((unsigned short) ((arr_65 [i_0] [(signed char)19] [18LL] [i_0] [i_0]) >= (((/* implicit */int) (_Bool)1)))));
                    }
                    var_47 = ((/* implicit */_Bool) var_1);
                }
            }
            var_48 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_88 [i_0] [i_0] [i_9] [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_11)))) : (arr_23 [i_0])));
        }
        for (unsigned char i_29 = 0; i_29 < 21; i_29 += 3) 
        {
            /* LoopNest 2 */
            for (short i_30 = 0; i_30 < 21; i_30 += 3) 
            {
                for (signed char i_31 = 0; i_31 < 21; i_31 += 3) 
                {
                    {
                        var_49 = ((/* implicit */int) (_Bool)1);
                        arr_111 [i_0] [i_29] [i_30] [i_29] = ((/* implicit */short) var_3);
                        arr_112 [i_0] [17ULL] [i_29] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_85 [i_0] [i_29] [i_0] [i_29] [(unsigned short)4] [i_31])) && (((/* implicit */_Bool) arr_85 [i_0] [i_29] [i_29] [i_29] [i_30] [i_29]))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (long long int i_32 = 0; i_32 < 21; i_32 += 3) 
            {
                for (unsigned int i_33 = 3; i_33 < 20; i_33 += 4) 
                {
                    {
                        arr_120 [i_0] [i_29] [i_32] [i_33 - 3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [(unsigned char)20] [(unsigned char)20] [i_33]))) : (9223372036854775805LL)));
                        var_50 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_105 [i_32] [i_29] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
                        var_51 = ((/* implicit */unsigned int) min((var_51), (((/* implicit */unsigned int) ((arr_40 [i_0] [i_0] [i_29] [i_32] [i_33]) ? (((/* implicit */unsigned long long int) ((var_5) + (((/* implicit */long long int) ((/* implicit */int) var_8)))))) : (((((/* implicit */_Bool) -1371253588)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_64 [i_29]))))))))));
                    }
                } 
            } 
        }
        for (long long int i_34 = 0; i_34 < 21; i_34 += 3) 
        {
            /* LoopNest 2 */
            for (_Bool i_35 = 0; i_35 < 1; i_35 += 1) 
            {
                for (_Bool i_36 = 0; i_36 < 1; i_36 += 1) 
                {
                    {
                        arr_127 [i_35] [i_35] [i_34] [i_35] = ((/* implicit */long long int) ((18014381329612800LL) != (((/* implicit */long long int) ((/* implicit */int) (short)31709)))));
                        arr_128 [i_35] = ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) var_0)));
                        arr_129 [i_0] [i_34] [i_35] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_36] [i_34])) ? (var_13) : (((/* implicit */int) arr_61 [i_0] [(unsigned short)19] [i_35] [i_35] [9]))));
                        var_52 ^= ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_35])))))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (short i_37 = 0; i_37 < 21; i_37 += 3) 
            {
                arr_133 [i_0] [i_34] [i_37] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)65238)))))));
                arr_134 [i_37] = ((((/* implicit */_Bool) arr_119 [i_0] [i_34] [(short)2] [i_37])) && (((/* implicit */_Bool) arr_30 [i_0] [i_34] [i_37])));
                arr_135 [i_0] [i_34] [i_34] = ((/* implicit */int) (+(arr_7 [15] [i_34] [(unsigned char)20] [i_34])));
                arr_136 [i_0] [i_0] [i_37] = ((/* implicit */short) ((((((/* implicit */int) arr_2 [i_37] [i_0])) + (((/* implicit */int) arr_45 [i_0] [i_0] [i_0] [10] [10] [4LL])))) % (((/* implicit */int) ((arr_114 [i_0] [i_0] [14LL] [i_0]) != (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
            }
        }
        var_53 = ((/* implicit */short) ((((/* implicit */_Bool) 1947584934U)) ? (arr_85 [i_0] [i_0] [i_0] [8LL] [i_0] [i_0]) : (arr_85 [i_0] [i_0] [(short)6] [(short)6] [i_0] [(short)10])));
    }
    var_54 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_10), (((/* implicit */short) (_Bool)1)))))) : (4U))) & (4294967279U)));
    var_55 ^= ((/* implicit */signed char) (_Bool)1);
    /* LoopNest 2 */
    for (unsigned short i_38 = 0; i_38 < 24; i_38 += 3) 
    {
        for (_Bool i_39 = 0; i_39 < 1; i_39 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_40 = 0; i_40 < 24; i_40 += 4) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_41 = 0; i_41 < 1; i_41 += 1) 
                    {
                        arr_147 [i_38] [(unsigned short)4] [i_38] [i_38] = ((/* implicit */long long int) ((((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) arr_137 [i_41])))) >> (((arr_143 [i_38] [i_39]) + (222471214)))));
                        var_56 ^= ((/* implicit */unsigned long long int) ((arr_141 [i_40]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                        var_57 = (unsigned short)37090;
                    }
                    /* LoopSeq 1 */
                    for (_Bool i_42 = 0; i_42 < 1; i_42 += 1) 
                    {
                        var_58 -= ((/* implicit */short) (+((+(var_13)))));
                        var_59 ^= ((/* implicit */unsigned short) (~(1754504346)));
                    }
                }
                arr_150 [i_38] = ((/* implicit */int) ((short) (_Bool)1));
            }
        } 
    } 
}
