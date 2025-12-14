/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108233
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
    var_11 = ((/* implicit */signed char) min((((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) >= (var_4)))) | (((((/* implicit */int) var_5)) ^ (((/* implicit */int) (_Bool)1)))))), (min((((((/* implicit */_Bool) 1486203997)) ? (((/* implicit */int) (_Bool)1)) : (var_2))), (var_7)))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_1 = 3; i_1 < 15; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_7 [i_2] [i_2] [i_1] [i_0] = ((/* implicit */signed char) var_4);
                    arr_8 [8U] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_2])) ? (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0] [i_0])) : (arr_1 [i_0])))) ? (((((/* implicit */_Bool) ((short) var_10))) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))) : (((long long int) var_2)))) : (((/* implicit */long long int) ((/* implicit */int) (short)-24654)))));
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        arr_13 [i_3] [i_2] [i_1] [(short)16] [i_0] = var_2;
                        arr_14 [i_0] [i_0] [i_3] [i_3] = ((/* implicit */unsigned int) ((unsigned long long int) var_2));
                        arr_15 [i_3] [i_1] [i_1] [5ULL] [i_0] = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_6 [i_2] [i_0]))))) ? (((/* implicit */int) arr_6 [i_1 - 1] [i_2])) : (((((/* implicit */int) arr_5 [i_0] [i_1] [i_3])) | (((/* implicit */int) (short)-24652)))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_4 = 0; i_4 < 17; i_4 += 2) 
                    {
                        arr_18 [i_4] [i_2] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */int) var_0);
                        /* LoopSeq 1 */
                        for (short i_5 = 0; i_5 < 17; i_5 += 4) 
                        {
                            arr_22 [i_0] [i_1] [i_2] [(unsigned char)14] [11ULL] = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_1] [i_2])) ? (arr_4 [i_4] [i_4]) : (var_7)))) | (var_4)));
                            arr_23 [i_0] [i_1] [i_1] [i_0] [i_2] = ((/* implicit */long long int) ((arr_16 [i_1 - 1] [i_1 - 2] [i_1 - 2] [i_1]) < (((/* implicit */unsigned long long int) var_7))));
                            arr_24 [i_0] [i_0] [(signed char)3] [i_2] [(signed char)3] [i_0] = ((/* implicit */int) arr_0 [i_0] [i_1]);
                        }
                    }
                    arr_25 [i_2] [i_2] [i_1] [i_0] = ((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned int) arr_3 [10U])))))), (((short) arr_17 [i_1] [i_2] [i_2] [i_1 - 3] [i_2] [i_1 - 2]))));
                }
            } 
        } 
        var_12 = ((/* implicit */signed char) max((var_12), (arr_6 [i_0] [i_0])));
        var_13 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) arr_10 [i_0] [i_0] [i_0] [i_0]))) && (((/* implicit */_Bool) ((unsigned char) arr_10 [i_0] [i_0] [i_0] [i_0])))));
        var_14 = ((int) ((((/* implicit */_Bool) arr_21 [(_Bool)1] [11ULL] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_12 [i_0] [0ULL] [i_0] [i_0])) : (((((/* implicit */_Bool) var_1)) ? (arr_11 [i_0] [i_0]) : (arr_11 [i_0] [i_0])))));
    }
    for (long long int i_6 = 0; i_6 < 17; i_6 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_7 = 4; i_7 < 16; i_7 += 2) /* same iter space */
        {
            var_15 = ((/* implicit */int) ((short) ((((/* implicit */_Bool) (short)-24654)) ? (((/* implicit */unsigned long long int) var_4)) : (arr_21 [i_6] [i_6] [i_6] [i_7 - 4] [i_7] [i_7 - 1]))));
            var_16 = ((/* implicit */signed char) ((-1486203998) < (((/* implicit */int) (short)24630))));
            arr_34 [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_12 [i_6] [i_6] [i_6] [i_6]))) ? (((/* implicit */int) ((((/* implicit */int) (short)1783)) < (((/* implicit */int) (unsigned char)229))))) : (((/* implicit */int) (!(((/* implicit */_Bool) -1486203998)))))));
        }
        /* vectorizable */
        for (long long int i_8 = 4; i_8 < 16; i_8 += 2) /* same iter space */
        {
            var_17 = (+(((11075038283465722051ULL) + (((/* implicit */unsigned long long int) arr_9 [i_6])))));
            var_18 = ((/* implicit */long long int) min((var_18), (((((/* implicit */_Bool) var_2)) ? (arr_9 [6ULL]) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_6] [3LL] [i_8 - 4] [i_8 - 4])))))));
            var_19 = ((/* implicit */long long int) ((((-1908494623) < (-1058713548))) ? (arr_12 [i_8] [i_8] [1] [i_6]) : (((/* implicit */int) ((unsigned char) 1225764406014385899LL)))));
            /* LoopSeq 2 */
            for (unsigned long long int i_9 = 0; i_9 < 17; i_9 += 2) 
            {
                var_20 -= ((/* implicit */signed char) arr_31 [14] [14] [i_9]);
                var_21 = ((/* implicit */signed char) arr_38 [i_6] [i_6] [i_6]);
                /* LoopSeq 1 */
                for (int i_10 = 3; i_10 < 16; i_10 += 3) 
                {
                    arr_42 [i_6] [i_8 - 2] [i_6] [i_6] [i_6] [i_8 - 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_30 [(signed char)15])) : (((/* implicit */int) var_9))));
                    arr_43 [i_8 - 3] = ((/* implicit */_Bool) arr_31 [i_6] [i_6] [i_6]);
                }
                /* LoopSeq 3 */
                for (int i_11 = 0; i_11 < 17; i_11 += 4) 
                {
                    var_22 -= ((/* implicit */signed char) ((unsigned long long int) -815077936));
                    var_23 ^= ((/* implicit */unsigned long long int) arr_27 [i_11]);
                    arr_47 [i_6] [i_6] [i_9] [i_11] = ((/* implicit */unsigned char) ((signed char) arr_21 [i_8 - 2] [i_8 - 2] [i_9] [i_11] [i_6] [i_11]));
                }
                for (int i_12 = 0; i_12 < 17; i_12 += 2) 
                {
                    var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (arr_9 [i_8 - 1]) : (arr_9 [i_8 - 2])));
                    var_25 &= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_32 [i_8] [i_8 - 1] [i_8 + 1])) | (((/* implicit */int) arr_32 [i_8 - 4] [i_8 - 4] [i_8 + 1]))));
                }
                for (long long int i_13 = 0; i_13 < 17; i_13 += 3) 
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_14 = 0; i_14 < 17; i_14 += 4) 
                    {
                        arr_55 [i_6] [i_8] [i_13] [i_13] [i_8] = arr_31 [i_6] [i_6] [i_6];
                        arr_56 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */int) ((((((/* implicit */_Bool) var_4)) ? (arr_26 [i_6] [i_13]) : (((/* implicit */int) (signed char)43)))) < (((((/* implicit */_Bool) arr_10 [i_13] [i_9] [i_6] [i_6])) ? (-1749800936) : (((/* implicit */int) (short)-7719))))));
                        var_26 = ((((/* implicit */unsigned long long int) 496407688959851389LL)) ^ (arr_45 [i_8] [i_8 - 4] [i_8 - 3] [i_8 - 3]));
                        arr_57 [i_6] = ((((/* implicit */int) arr_52 [i_14] [i_8 - 3] [i_8 - 3] [i_8 - 3] [i_6])) / (((/* implicit */int) arr_52 [i_6] [i_8 - 3] [i_6] [i_13] [i_14])));
                        var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)32435)) | (((/* implicit */int) ((((/* implicit */unsigned long long int) 496407688959851402LL)) >= (arr_21 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])))))))));
                    }
                    for (long long int i_15 = 0; i_15 < 17; i_15 += 1) 
                    {
                        var_28 = ((int) arr_35 [i_8 - 3] [i_8 - 3]);
                        var_29 = ((/* implicit */int) min((var_29), ((+(((((/* implicit */int) arr_0 [i_8] [i_13])) | (((/* implicit */int) var_0))))))));
                        arr_61 [i_6] [i_8] [i_9] [i_13] [i_15] = ((/* implicit */unsigned long long int) ((arr_4 [(unsigned char)5] [i_8 - 4]) < (((/* implicit */int) arr_0 [i_8 + 1] [i_8 - 1]))));
                        arr_62 [i_15] [i_6] [i_8] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_19 [i_15] [i_13] [i_9] [i_8 - 4] [i_6])) ? (arr_2 [i_6] [1LL] [i_9]) : (arr_2 [i_6] [i_8 - 2] [i_15])));
                    }
                    for (unsigned int i_16 = 2; i_16 < 14; i_16 += 2) 
                    {
                        var_30 = ((/* implicit */unsigned int) arr_37 [i_6] [i_8 - 3] [i_8 - 3] [i_13]);
                        var_31 = ((/* implicit */unsigned long long int) max((var_31), (var_8)));
                        arr_65 [i_16 - 1] [i_8] [i_6] [i_9] [i_8] [i_6] [i_6] = ((/* implicit */long long int) var_7);
                        var_32 = ((/* implicit */long long int) max((var_32), (arr_44 [i_16 + 3] [i_8 - 1] [i_9] [(signed char)11])));
                        arr_66 [i_6] [i_6] [i_6] [i_9] [i_13] [i_16] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_31 [i_16 + 2] [i_8 + 1] [i_8 + 1]))));
                    }
                    var_33 = ((/* implicit */long long int) ((int) arr_29 [i_8 - 2]));
                    /* LoopSeq 1 */
                    for (long long int i_17 = 4; i_17 < 16; i_17 += 1) 
                    {
                        var_34 = ((/* implicit */signed char) ((unsigned long long int) arr_58 [i_6]));
                        arr_71 [(_Bool)1] [i_13] &= ((/* implicit */short) (~(arr_69 [i_17 - 3] [i_17] [i_17 - 4] [i_17 - 3] [i_17] [i_17 + 1])));
                    }
                    var_35 = ((/* implicit */signed char) -1486203994);
                    /* LoopSeq 2 */
                    for (unsigned int i_18 = 0; i_18 < 17; i_18 += 1) 
                    {
                        var_36 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_1)) | (((unsigned long long int) 4668046216614841355LL))));
                        arr_74 [i_6] [i_6] [6LL] [14LL] [i_6] [i_6] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) -4668046216614841355LL))) < (((/* implicit */int) arr_41 [i_13] [i_8 - 1] [i_8 - 1] [i_8 - 3]))));
                    }
                    for (unsigned int i_19 = 4; i_19 < 16; i_19 += 3) 
                    {
                        arr_77 [1LL] [i_19] [i_19] [i_19] [i_19] [i_19] [1LL] = ((/* implicit */unsigned char) ((((/* implicit */long long int) var_7)) ^ (arr_35 [i_19 - 2] [i_6])));
                        arr_78 [i_19] [i_6] [i_19 - 4] [i_13] [i_19] [i_8] [i_13] = ((((/* implicit */_Bool) 259331547016412263ULL)) ? (((/* implicit */int) (unsigned char)203)) : (((/* implicit */int) (short)-5554)));
                        arr_79 [i_6] [i_6] [i_19] [i_6] [i_6] = ((/* implicit */int) ((long long int) var_6));
                    }
                }
            }
            for (short i_20 = 0; i_20 < 17; i_20 += 2) 
            {
                arr_83 [i_6] [(unsigned char)7] [i_20] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((long long int) var_0))) ^ (((((/* implicit */_Bool) arr_9 [i_8 + 1])) ? (arr_48 [11] [11]) : (((/* implicit */unsigned long long int) arr_4 [i_8] [i_8]))))));
                /* LoopSeq 4 */
                for (int i_21 = 0; i_21 < 17; i_21 += 4) 
                {
                    /* LoopSeq 1 */
                    for (int i_22 = 1; i_22 < 15; i_22 += 1) 
                    {
                        var_37 = ((/* implicit */short) ((unsigned long long int) ((arr_11 [i_6] [i_8 - 2]) | (((/* implicit */unsigned long long int) arr_81 [1ULL] [i_8] [i_20] [i_22])))));
                        var_38 = ((/* implicit */signed char) arr_29 [i_6]);
                    }
                    arr_89 [i_20] [i_8] = ((/* implicit */int) arr_32 [i_6] [i_8 - 4] [i_8]);
                    var_39 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_81 [i_8 - 2] [i_8 - 2] [i_8 - 3] [i_8 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_81 [i_8 - 2] [i_8 - 2] [i_8 + 1] [i_8])));
                    var_40 = ((/* implicit */signed char) min((var_40), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_86 [i_21])) >= (3941679582302619102ULL))))));
                }
                for (_Bool i_23 = 1; i_23 < 1; i_23 += 1) 
                {
                    var_41 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) arr_0 [i_6] [(signed char)5]))) ? ((-(((/* implicit */int) arr_5 [i_23] [i_23] [i_20])))) : ((-(-1390100830)))));
                    /* LoopSeq 1 */
                    for (long long int i_24 = 2; i_24 < 16; i_24 += 2) 
                    {
                        arr_95 [i_8] [i_23] [i_8] [i_8 + 1] = ((/* implicit */long long int) ((int) arr_60 [i_24 - 2] [i_24 - 1] [i_24 - 1] [i_24 + 1] [i_24 - 1]));
                        arr_96 [i_6] [13] [i_23] = ((/* implicit */signed char) ((((((/* implicit */_Bool) -7428202799339658305LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-62))) : (var_4))) >= (((/* implicit */unsigned int) arr_54 [3] [i_23 - 1] [i_23 - 1] [i_8 - 3] [i_24 - 2]))));
                        arr_97 [i_6] [i_8] [(signed char)12] [i_23] [i_24 - 1] = ((/* implicit */unsigned long long int) ((short) ((signed char) -924179197)));
                    }
                    arr_98 [i_6] [6] [i_23] [i_23 - 1] = ((/* implicit */long long int) var_6);
                }
                for (unsigned long long int i_25 = 2; i_25 < 14; i_25 += 2) 
                {
                    var_42 = ((/* implicit */long long int) max((var_42), (((/* implicit */long long int) ((int) ((9716965U) < (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))));
                    arr_102 [i_25 - 1] [i_6] &= ((/* implicit */unsigned int) var_7);
                }
                for (short i_26 = 4; i_26 < 16; i_26 += 2) 
                {
                    arr_105 [i_26 - 1] [i_6] [(signed char)3] [i_6] = ((/* implicit */signed char) (!(((/* implicit */_Bool) -1908494623))));
                    arr_106 [i_26] [i_20] [i_8 - 3] [i_6] = ((/* implicit */unsigned long long int) arr_72 [8ULL] [8ULL] [i_20] [i_20] [i_20] [i_20] [i_20]);
                }
                var_43 = ((/* implicit */signed char) (!(((/* implicit */_Bool) -1544305307))));
                var_44 = ((/* implicit */unsigned long long int) ((unsigned int) (~(16685377819444929824ULL))));
                arr_107 [i_6] [i_6] [i_8] [i_6] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_41 [(short)11] [i_6] [i_20] [i_20])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_8))) >= (((/* implicit */unsigned long long int) ((int) var_7)))));
            }
        }
        var_45 = ((/* implicit */short) min((var_45), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((arr_46 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]) < (((/* implicit */int) ((short) arr_101 [i_6]))))))) < (-4668046216614841355LL))))));
    }
    var_46 = ((/* implicit */int) var_0);
    var_47 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (-485351851) : (((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) -1908494623)) ? (((/* implicit */unsigned long long int) 1222635768)) : (var_10))) : (min((var_10), (((/* implicit */unsigned long long int) var_5))))))));
}
