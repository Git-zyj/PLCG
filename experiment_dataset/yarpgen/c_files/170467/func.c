/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170467
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) 730562768)) || (((/* implicit */_Bool) 10676242510902600250ULL))))))))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                for (int i_3 = 0; i_3 < 25; i_3 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            arr_13 [i_2] [0U] [0U] [0U] [0U] &= ((int) arr_8 [i_0] [i_0] [(short)16] [i_4]);
                            arr_14 [i_0] = arr_6 [i_0] [(short)9];
                        }
                        var_20 = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [i_3] [i_0])))) ? ((-(1467638213U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 7958604070769950559ULL)) ? (1567559949) : (480760723))))));
                        arr_15 [12] [i_1] [12] [12] [i_0] = ((/* implicit */int) ((_Bool) (short)-15467));
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_5 = 1; i_5 < 18; i_5 += 1) 
    {
        arr_18 [i_5 - 1] = ((/* implicit */int) ((((/* implicit */_Bool) 11818680793049111481ULL)) && (((/* implicit */_Bool) (short)6922))));
        arr_19 [i_5] = ((/* implicit */unsigned long long int) ((short) (+(((/* implicit */int) (short)32753)))));
        /* LoopSeq 3 */
        for (int i_6 = 0; i_6 < 20; i_6 += 2) 
        {
            arr_22 [i_5 - 1] [i_6] [i_6] = -824771096;
            arr_23 [(_Bool)1] = ((/* implicit */int) arr_21 [i_5 + 2] [i_5 + 1]);
            var_21 = ((((/* implicit */_Bool) ((var_14) / (arr_1 [i_5])))) ? (((/* implicit */int) arr_5 [i_5] [i_6] [i_6])) : (((/* implicit */int) ((_Bool) arr_2 [i_5]))));
        }
        for (int i_7 = 0; i_7 < 20; i_7 += 3) 
        {
            var_22 = ((/* implicit */int) ((unsigned long long int) arr_9 [i_5 - 1] [2ULL] [2ULL] [i_5]));
            /* LoopSeq 4 */
            for (unsigned int i_8 = 0; i_8 < 20; i_8 += 1) 
            {
                arr_28 [(short)9] [i_8] = (i_8 % 2 == 0) ? (((((/* implicit */int) (_Bool)1)) << (((arr_9 [i_5 + 1] [i_8] [i_8] [i_5 + 2]) - (5991820297738756348ULL))))) : (((((/* implicit */int) (_Bool)1)) << (((((arr_9 [i_5 + 1] [i_8] [i_8] [i_5 + 2]) - (5991820297738756348ULL))) - (18023638463669874587ULL)))));
                var_23 = ((/* implicit */short) (+(arr_4 [i_5 + 1] [i_5] [i_5 - 1])));
                var_24 = arr_10 [i_8] [i_8] [(short)17] [(short)17] [i_8];
            }
            for (int i_9 = 0; i_9 < 20; i_9 += 1) 
            {
                /* LoopSeq 3 */
                for (short i_10 = 0; i_10 < 20; i_10 += 2) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_11 = 0; i_11 < 20; i_11 += 4) 
                    {
                        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) arr_34 [i_5] [i_9])) ? (arr_27 [i_5 + 2] [i_7]) : (((((/* implicit */int) arr_25 [i_5])) | (((/* implicit */int) arr_10 [i_9] [i_7] [13] [i_10] [i_9]))))));
                        var_26 = ((/* implicit */int) (short)-16894);
                        var_27 = arr_33 [i_9];
                        arr_38 [i_5 - 1] [i_7] [i_9] [i_9] [i_9] [i_10] [i_11] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_8 [i_5] [6U] [i_9] [i_5 + 1]))));
                    }
                    arr_39 [i_5] [i_5] [i_9] [(_Bool)1] [i_9] [i_9] = ((/* implicit */unsigned int) 7958604070769950559ULL);
                    var_28 = ((/* implicit */short) 1979646105);
                    arr_40 [i_9] [17ULL] = ((/* implicit */int) ((unsigned int) var_11));
                }
                for (short i_12 = 0; i_12 < 20; i_12 += 2) /* same iter space */
                {
                    var_29 = ((/* implicit */int) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) arr_30 [i_5] [8U])) ? (2728209988U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_9] [4ULL]))))) : (((/* implicit */unsigned int) ((arr_31 [i_5] [(_Bool)1] [i_9] [i_9]) | (((/* implicit */int) arr_25 [i_5])))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_13 = 2; i_13 < 19; i_13 += 1) 
                    {
                        arr_46 [i_5] [i_5] [i_9] [i_5] [i_5] [i_5] = ((int) (-(((/* implicit */int) (short)-4983))));
                        arr_47 [i_5] [i_7] [i_9] [i_9] [i_5] [i_13 + 1] = ((/* implicit */_Bool) (+(arr_37 [12] [15U] [12] [i_12] [i_13])));
                    }
                    arr_48 [i_9] [i_7] [i_9] [i_12] = ((/* implicit */short) arr_4 [i_5] [i_7] [i_5 - 1]);
                }
                for (short i_14 = 0; i_14 < 20; i_14 += 2) /* same iter space */
                {
                    arr_52 [i_9] = ((/* implicit */unsigned int) arr_31 [i_5] [0U] [i_5] [i_9]);
                    var_30 = ((/* implicit */unsigned long long int) (~(arr_24 [i_5 - 1] [i_5 + 2] [i_5 - 1])));
                    var_31 = ((/* implicit */unsigned long long int) ((int) arr_21 [i_5 - 1] [i_5]));
                    var_32 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_41 [i_5] [i_5] [i_9] [i_5] [i_7] [i_5]))) : (var_1)))) ? (var_3) : (var_3)));
                }
                /* LoopSeq 1 */
                for (short i_15 = 2; i_15 < 19; i_15 += 2) 
                {
                    arr_56 [i_9] [i_7] [i_15] = ((/* implicit */unsigned int) ((int) var_9));
                    arr_57 [i_9] [i_7] [6] = ((/* implicit */short) (!(((/* implicit */_Bool) ((short) arr_55 [i_5] [i_5] [i_9] [i_15] [i_7] [i_15])))));
                }
            }
            for (unsigned int i_16 = 1; i_16 < 19; i_16 += 1) 
            {
                /* LoopNest 2 */
                for (short i_17 = 0; i_17 < 20; i_17 += 1) 
                {
                    for (unsigned int i_18 = 0; i_18 < 20; i_18 += 2) 
                    {
                        {
                            arr_65 [i_5] [i_7] [i_7] [i_7] [i_16] [i_17] [i_18] = ((/* implicit */_Bool) ((unsigned int) var_1));
                            arr_66 [i_17] [i_7] [i_5 + 1] = (!(((/* implicit */_Bool) arr_24 [i_5] [i_17] [i_5])));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_19 = 0; i_19 < 20; i_19 += 4) 
                {
                    for (short i_20 = 3; i_20 < 18; i_20 += 4) 
                    {
                        {
                            arr_71 [i_5] [i_5] [i_20] [i_16] [i_20] [i_20] = ((/* implicit */int) arr_59 [i_5] [i_16 + 1] [i_5 - 1] [i_20 - 1]);
                            arr_72 [i_5 + 1] [i_20] [i_5 + 1] [i_5 - 1] [i_20] = ((/* implicit */_Bool) ((arr_37 [i_7] [(short)14] [i_16 - 1] [i_16] [i_7]) | (((/* implicit */unsigned int) arr_12 [i_20 + 1] [i_5 + 2] [i_20]))));
                            arr_73 [i_20 + 1] [i_20] [i_16 - 1] [i_20] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) arr_20 [i_16 + 1] [i_5 + 2])) ? (arr_26 [i_20]) : (arr_26 [i_20])));
                        }
                    } 
                } 
            }
            for (unsigned long long int i_21 = 0; i_21 < 20; i_21 += 4) 
            {
                /* LoopNest 2 */
                for (int i_22 = 0; i_22 < 20; i_22 += 4) 
                {
                    for (short i_23 = 0; i_23 < 20; i_23 += 2) 
                    {
                        {
                            arr_81 [(short)2] [i_7] [i_7] [(short)3] [i_7] [i_7] [i_7] = ((/* implicit */_Bool) ((arr_69 [i_5] [i_5 - 1] [i_5] [i_5 + 2] [i_5] [i_5 + 1]) - (((/* implicit */int) arr_51 [i_23]))));
                            var_33 = ((/* implicit */int) arr_21 [18] [18]);
                        }
                    } 
                } 
                var_34 += ((/* implicit */unsigned long long int) -1567559970);
                var_35 = ((((/* implicit */int) arr_36 [i_21] [i_21] [i_21])) | (((/* implicit */int) arr_36 [i_21] [i_21] [i_21])));
            }
            arr_82 [i_5 - 1] [i_5 - 1] [6ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_51 [10])) == (((/* implicit */int) var_13))));
            var_36 = ((/* implicit */short) min((var_36), (((/* implicit */short) (-(arr_79 [i_5 - 1]))))));
        }
        for (unsigned int i_24 = 0; i_24 < 20; i_24 += 2) 
        {
            arr_85 [i_5] [i_24] = ((/* implicit */int) arr_36 [i_24] [i_24] [i_5 + 2]);
            var_37 -= (+(1792389053U));
        }
    }
}
