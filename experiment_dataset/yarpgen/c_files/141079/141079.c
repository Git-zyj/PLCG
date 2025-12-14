/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141079
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_9;

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 13;i_3 += 1)
                {
                    {
                        var_14 = ((~(((arr_9 [i_0] [i_0 - 1] [i_0]) | var_12))));
                        arr_12 [i_0] [i_0] [i_2] [i_3] = ((-(arr_3 [i_3 - 4] [i_0 + 1])));
                        arr_13 [i_0] [i_2] [i_2] [i_3] [i_3] [i_2] = (~58);
                        arr_14 [i_0 + 1] [i_0] [i_3] [i_0] = var_11;
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 14;i_5 += 1)
            {
                {
                    arr_19 [i_0] = (arr_5 [i_0] [i_0] [i_5]);
                    arr_20 [i_0] [i_0] = ((-(max(((0 ? 138387978 : 1)), (!var_7)))));
                    arr_21 [i_0 - 1] [i_0] = (arr_9 [i_0] [i_0] [i_0]);
                    var_15 = ((((~(arr_5 [i_0] [i_0] [i_5]))) / var_2));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        for (int i_7 = 4; i_7 < 12;i_7 += 1)
                        {
                            {
                                arr_26 [i_0] [i_6] [i_4] [i_5] [i_4] [i_4] [i_0] = ((~(((((0 ? 0 : -4518790215655306246))) ? 1 : (arr_25 [i_0 - 1] [i_0] [i_0] [i_0 + 1] [i_0] [i_0 + 1])))));
                                var_16 = ((!((!(((arr_1 [i_0]) || 9))))));
                                arr_27 [i_7] [i_4] [i_0] [i_6] [i_7] = (15 != (arr_7 [i_7 - 4]));
                                arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_3 [i_7] [i_7 - 3]);
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 15;i_8 += 1)
    {
        /* LoopNest 3 */
        for (int i_9 = 2; i_9 < 14;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                for (int i_11 = 2; i_11 < 14;i_11 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_12 = 0; i_12 < 1;i_12 += 1) /* same iter space */
                        {
                            var_17 = (arr_25 [i_8] [i_9] [i_9] [i_11] [i_11] [i_12]);
                            arr_40 [i_11] [i_9] [i_10] [i_11] [i_9] [i_8] [i_10] = (~220);
                        }
                        for (int i_13 = 0; i_13 < 1;i_13 += 1) /* same iter space */
                        {
                            arr_43 [i_8] [i_9] [i_10] [i_11 - 2] [i_9] = (min(var_2, (arr_34 [i_9 - 1] [i_11 - 1] [i_11 - 1])));
                            arr_44 [i_9] [i_13] [i_11] [i_10] [i_9 + 1] [i_9] [i_9] = (((((arr_10 [i_11 + 1]) ? (~31) : (var_6 * var_7))) * ((((!var_8) >> (((arr_29 [i_9 - 1]) - 1327016329)))))));
                            arr_45 [i_8] [i_8] [i_9] [i_8] [i_8] [i_8] = (arr_31 [i_9] [i_11] [i_13]);
                            arr_46 [i_8] [i_8] [i_9] [i_8] [i_8] = (+-1737282749);
                            var_18 -= ((-((min(28, (var_11 || var_5))))));
                        }
                        arr_47 [i_9] [i_9] = ((-((~(arr_4 [i_11 + 1])))));
                    }
                }
            }
        }
        arr_48 [i_8] = (arr_1 [i_8]);
    }
    for (int i_14 = 0; i_14 < 12;i_14 += 1)
    {
        arr_51 [i_14] = (arr_32 [i_14] [i_14]);
        arr_52 [i_14] = (max((arr_35 [i_14] [i_14]), (max(0, (((247 != (arr_9 [i_14] [i_14] [i_14]))))))));
        var_19 = (((((51 ? 108 : 0))) ? (max((arr_24 [i_14]), (arr_24 [i_14]))) : ((((arr_23 [i_14] [i_14] [i_14]) | (arr_23 [i_14] [i_14] [i_14]))))));
    }
    #pragma endscop
}
