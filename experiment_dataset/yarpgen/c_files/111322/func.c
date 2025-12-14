/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111322
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
    var_11 = ((/* implicit */int) max((((/* implicit */unsigned int) max((((/* implicit */int) (unsigned short)54184)), (((((/* implicit */_Bool) 1772389251)) ? (((/* implicit */int) (_Bool)1)) : (854403145)))))), (max(((-(2328338708U))), (((/* implicit */unsigned int) (short)-10608))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_12 = ((int) var_7);
        var_13 = ((/* implicit */unsigned char) arr_0 [i_0] [i_0]);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_4 [i_1] = ((/* implicit */int) min((max((arr_3 [i_1] [i_1]), (arr_3 [i_1] [i_1]))), (((/* implicit */unsigned short) ((unsigned char) (+(var_7)))))));
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 18; i_2 += 2) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 2) 
            {
                {
                    arr_12 [11ULL] [11ULL] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1]))) + (2328338708U))) - (((/* implicit */unsigned int) ((var_3) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1)))))));
                    arr_13 [i_1] [i_2] [i_3] = ((int) max((arr_3 [i_1] [i_2]), (arr_3 [i_1] [i_3])));
                    var_14 = ((/* implicit */short) ((_Bool) -1));
                }
            } 
        } 
    }
    var_15 = ((/* implicit */int) var_3);
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 23; i_4 += 2) 
    {
        for (unsigned char i_5 = 2; i_5 < 22; i_5 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (short i_6 = 0; i_6 < 23; i_6 += 2) 
                {
                    var_16 = ((/* implicit */short) (+(((/* implicit */int) max((var_4), (((/* implicit */unsigned char) arr_17 [i_6] [i_4])))))));
                    arr_21 [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) (short)-10619);
                    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_6) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_4] [i_5 - 2])))))) ? (max((var_7), (((((/* implicit */_Bool) (unsigned short)65525)) ? (((/* implicit */int) arr_15 [i_4])) : (425321133))))) : (((854403145) & (((/* implicit */int) (_Bool)1))))));
                }
                /* vectorizable */
                for (unsigned int i_7 = 0; i_7 < 23; i_7 += 2) 
                {
                    arr_24 [i_4] [i_4] [i_5 + 1] [17] |= ((((/* implicit */_Bool) (unsigned short)10)) ? (((/* implicit */int) arr_0 [i_5 - 2] [i_5 + 1])) : (((/* implicit */int) (_Bool)1)));
                    /* LoopSeq 1 */
                    for (unsigned char i_8 = 0; i_8 < 23; i_8 += 2) 
                    {
                        var_18 = ((((/* implicit */int) arr_25 [(short)15] [i_7] [i_5 - 2] [i_8] [(short)15])) * (((((/* implicit */int) (_Bool)1)) + (2008589574))));
                        arr_27 [i_8] [i_7] [i_5 - 2] [i_4] = ((/* implicit */int) ((var_2) * (((/* implicit */unsigned int) ((int) arr_25 [i_4] [i_4] [i_7] [(unsigned char)5] [i_8])))));
                        var_19 = ((/* implicit */unsigned short) var_1);
                    }
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)4158)) ? (((/* implicit */int) arr_17 [i_5] [i_5 + 1])) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_18 [i_4] [i_5 + 1] [i_4])) : (2042333352)))));
                    arr_28 [i_4] [i_4] [i_5 - 2] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_16 [i_5] [i_5 - 2] [i_5])) << (((/* implicit */int) arr_25 [i_5 + 1] [i_5] [i_5 - 1] [i_5 - 2] [i_5 - 1]))));
                    /* LoopSeq 2 */
                    for (int i_9 = 0; i_9 < 23; i_9 += 4) 
                    {
                        arr_31 [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1832553838)) ? (var_5) : (((/* implicit */int) var_1))));
                        /* LoopSeq 2 */
                        for (unsigned int i_10 = 0; i_10 < 23; i_10 += 1) 
                        {
                            arr_34 [i_10] [i_9] [i_7] [i_5 - 1] [i_4] &= ((/* implicit */_Bool) (short)4157);
                            arr_35 [i_9] [i_5 + 1] [i_7] [6ULL] [(short)15] [i_9] [8ULL] = ((/* implicit */short) arr_16 [i_5 - 1] [i_5 - 1] [i_5 + 1]);
                        }
                        for (signed char i_11 = 0; i_11 < 23; i_11 += 4) 
                        {
                            arr_40 [i_4] [i_5] [i_7] [i_9] [i_11] = ((/* implicit */unsigned int) arr_17 [i_9] [i_11]);
                            var_21 = arr_19 [i_7];
                            arr_41 [i_4] [i_5 + 1] [i_7] [i_5 + 1] [i_11] [i_5 + 1] [i_7] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_18 [i_7] [(unsigned short)6] [i_7])) ? (-1832553838) : (((/* implicit */int) var_4))))));
                            arr_42 [5U] = ((/* implicit */unsigned char) ((((/* implicit */int) var_3)) < (var_8)));
                            var_22 = ((/* implicit */short) -2042333329);
                        }
                        arr_43 [i_4] [i_4] [i_5] [i_7] [i_7] [i_9] = ((/* implicit */signed char) 1966628587U);
                        arr_44 [i_7] [i_7] [i_7] [i_7] [(_Bool)1] [i_7] = ((/* implicit */int) ((-303325164) > (var_8)));
                    }
                    for (unsigned int i_12 = 1; i_12 < 22; i_12 += 4) 
                    {
                        var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((2328338719U) + (((/* implicit */unsigned int) 1832553868)))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_13 = 4; i_13 < 22; i_13 += 2) 
                        {
                            var_24 = ((((/* implicit */_Bool) 1966628587U)) ? (((/* implicit */int) (unsigned char)196)) : (1757780058));
                            arr_51 [i_7] = ((/* implicit */unsigned char) var_2);
                            arr_52 [i_4] [i_5 + 1] [i_5 + 1] [i_12 - 1] [i_12] [i_4] = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) (signed char)0)))) / (((/* implicit */int) (unsigned char)192))));
                        }
                        /* LoopSeq 2 */
                        for (signed char i_14 = 0; i_14 < 23; i_14 += 3) 
                        {
                            arr_57 [i_14] [i_14] [i_7] [i_12 - 1] [i_14] = arr_30 [i_4] [i_5] [i_4] [i_7] [i_12] [9];
                            arr_58 [10U] [10U] [i_14] [i_14] [i_12] = ((int) arr_22 [i_12 + 1] [i_12 - 1] [i_14] [i_14]);
                        }
                        for (signed char i_15 = 0; i_15 < 23; i_15 += 4) 
                        {
                            arr_61 [i_4] [i_4] [i_4] |= ((/* implicit */short) (+(((/* implicit */int) ((_Bool) -1)))));
                            arr_62 [i_4] [i_4] = ((/* implicit */_Bool) arr_49 [i_4] [i_4] [i_7] [i_12]);
                            var_25 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_47 [i_5 + 1] [i_12 - 1] [i_5 + 1] [i_12]))));
                        }
                        arr_63 [i_4] [i_4] = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) < (var_2))))));
                        arr_64 [i_7] [i_5 - 2] [i_7] [i_12 - 1] = ((/* implicit */signed char) var_0);
                    }
                }
                var_26 &= ((/* implicit */int) arr_38 [i_5] [(unsigned char)12] [i_5 - 2] [i_5] [(_Bool)1]);
                var_27 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)24486)) ? (((arr_17 [i_4] [i_4]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_5 - 2]))) : (((unsigned long long int) var_2)))) : (min((((/* implicit */unsigned long long int) arr_45 [i_4] [i_5 + 1] [i_5 + 1] [i_4])), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)11728))) : (var_6)))))));
                var_28 = ((/* implicit */unsigned short) var_1);
                arr_65 [i_4] [i_4] [i_4] = ((/* implicit */unsigned int) var_8);
            }
        } 
    } 
}
