/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158341
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_10 -= (((var_2 + (arr_0 [i_2]))));
                    arr_8 [i_0] = arr_1 [i_0] [3];
                    var_11 += ((((max((arr_3 [i_1 + 2] [i_0 - 1] [3]), (arr_3 [i_1 - 2] [i_0 + 1] [i_0])))) + (arr_2 [i_1 - 1] [4])));
                    var_12 &= (min((arr_7 [2] [i_1] [i_2]), (((var_7 | (144115188075855871 - 1372967332))))));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {

        /* vectorizable */
        for (int i_4 = 1; i_4 < 8;i_4 += 1) /* same iter space */
        {
            var_13 = (((arr_4 [i_4 + 1] [i_4 - 1]) ? (-110 / 9223372036854775807) : 1372967332));
            arr_14 [i_4] [0] [i_4] = (~12);
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    {
                        var_14 = ((~(arr_2 [2] [i_4 + 2])));
                        var_15 = (arr_18 [i_3] [1] [8]);
                    }
                }
            }
        }
        for (int i_7 = 1; i_7 < 8;i_7 += 1) /* same iter space */
        {

            for (int i_8 = 0; i_8 < 10;i_8 += 1) /* same iter space */
            {
                var_16 = ((1372967323 ? (min((arr_21 [i_3] [5]), (arr_2 [i_3] [i_3]))) : (arr_11 [1] [i_7])));
                arr_26 [i_7] = ((((((arr_20 [7] [i_7] [7] [i_7 + 1]) ? (arr_20 [i_7] [8] [i_7] [i_7 - 1]) : (arr_20 [i_7] [i_7] [7] [i_7 - 1])))) | (max(2921999963, 0))));
            }
            for (int i_9 = 0; i_9 < 10;i_9 += 1) /* same iter space */
            {
                var_17 = var_7;
                arr_30 [i_9] [i_7] [7] = (((arr_0 [13]) > (min(48, 0))));
            }
            arr_31 [1] [i_7] = (((min((arr_0 [i_7 - 1]), 602051257)) ^ (arr_0 [i_7 + 1])));
        }
        for (int i_10 = 1; i_10 < 8;i_10 += 1) /* same iter space */
        {
            arr_35 [i_3] [i_10] &= var_1;
            var_18 = ((min((arr_21 [i_10 + 1] [i_10 + 1]), -1012513559)));
        }
        var_19 = (max(var_19, ((((((arr_20 [i_3] [2] [9] [i_3]) - (arr_20 [i_3] [8] [i_3] [i_3]))) + (arr_20 [i_3] [1] [i_3] [2]))))));
        var_20 = ((~(min((((arr_34 [i_3]) ? (arr_15 [1] [i_3] [i_3]) : (arr_17 [i_3] [4] [i_3]))), ((var_8 ? (arr_9 [7] [i_3]) : 2211812600599379420))))));
    }
    for (int i_11 = 1; i_11 < 13;i_11 += 1)
    {
        arr_39 [i_11] [i_11] = ((var_9 ? (arr_36 [i_11] [i_11]) : ((2921999964 / (arr_36 [5] [i_11])))));
        arr_40 [i_11] = ((-((var_3 ? (arr_38 [i_11 + 1]) : (arr_38 [i_11])))));
        var_21 = var_1;
    }
    var_22 = (~255);
    var_23 = (min(var_1, (max(1012513578, ((var_9 ? var_1 : var_8))))));
    #pragma endscop
}
