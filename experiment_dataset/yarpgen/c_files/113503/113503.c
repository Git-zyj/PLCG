/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113503
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_0;

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        arr_3 [3] = var_1;
        var_14 = (min(var_7, ((min((!var_3), (arr_1 [i_0 - 2]))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_15 = (max(var_15, (arr_4 [i_1])));
        var_16 = var_1;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 7;i_4 += 1)
            {
                {
                    var_17 = var_8;
                    var_18 *= ((var_7 ? var_5 : (arr_13 [3] [i_3] [4] [i_4 + 2])));
                }
            }
        }
        arr_14 [i_2] = var_12;
    }

    /* vectorizable */
    for (int i_5 = 1; i_5 < 1;i_5 += 1)
    {

        for (int i_6 = 2; i_6 < 16;i_6 += 1)
        {
            /* LoopNest 3 */
            for (int i_7 = 3; i_7 < 16;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 15;i_8 += 1)
                {
                    for (int i_9 = 2; i_9 < 13;i_9 += 1)
                    {
                        {
                            var_19 = (arr_20 [i_5] [i_6]);
                            var_20 = var_7;
                        }
                    }
                }
            }
            var_21 = (min(var_21, (((~(arr_16 [i_5 - 1]))))));
        }
        var_22 = ((arr_25 [i_5 - 1] [i_5 - 1] [0] [i_5]) ? (arr_25 [i_5] [i_5] [10] [i_5]) : (arr_25 [i_5 - 1] [i_5] [10] [i_5]));
    }
    for (int i_10 = 0; i_10 < 22;i_10 += 1)
    {

        /* vectorizable */
        for (int i_11 = 0; i_11 < 22;i_11 += 1)
        {
            arr_36 [i_11] = (~var_12);
            var_23 = (arr_31 [i_10]);
        }
        /* LoopNest 3 */
        for (int i_12 = 4; i_12 < 20;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 22;i_13 += 1)
            {
                for (int i_14 = 4; i_14 < 19;i_14 += 1)
                {
                    {
                        var_24 |= ((var_9 ? ((((!(arr_0 [i_12 - 4]))))) : (max(-40350, ((25171 ? -3 : 25171))))));
                        arr_44 [i_14] [i_12] = (arr_0 [i_12]);
                        arr_45 [i_10] [i_12] [i_12 - 1] [1] [i_13] [6] = var_7;

                        /* vectorizable */
                        for (int i_15 = 0; i_15 < 22;i_15 += 1)
                        {
                            arr_48 [i_10] [i_12] [i_15] [i_14] [i_15] = (arr_35 [i_10] [i_10]);
                            var_25 = var_12;
                            arr_49 [i_10] [i_12] [i_15] [i_14] [i_15] = (arr_29 [i_14 - 1]);
                            var_26 = (arr_46 [i_14 - 4] [i_15] [i_14 - 4] [i_14] [i_15] [i_12 - 1]);
                            var_27 = (((arr_30 [i_12 + 1]) ? (arr_30 [i_12 - 3]) : (arr_40 [i_12 + 2])));
                        }
                    }
                }
            }
        }
    }
    var_28 |= (max(var_10, (!var_10)));
    /* LoopNest 2 */
    for (int i_16 = 0; i_16 < 15;i_16 += 1)
    {
        for (int i_17 = 2; i_17 < 12;i_17 += 1)
        {
            {
                var_29 = ((!(arr_20 [i_17 + 3] [0])));
                var_30 = (min(var_30, (~var_11)));
                arr_54 [i_17] = (min((max(var_9, (arr_52 [i_17 - 1] [i_17]))), ((-(arr_52 [i_17 - 1] [1])))));
            }
        }
    }
    #pragma endscop
}
