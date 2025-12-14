/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183617
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max((min(var_7, var_12)), var_1));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = (arr_0 [i_0]);
        var_14 += (arr_1 [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [i_1] = (arr_0 [i_1]);
        var_15 = (arr_6 [i_1] [i_1]);
        var_16 = (arr_0 [i_1]);
        arr_8 [i_1] [10] = (arr_6 [i_1] [15]);
        arr_9 [i_1] &= (arr_4 [i_1] [i_1]);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
    {
        var_17 = (arr_12 [i_2]);
        var_18 = (min(var_18, (arr_4 [i_2] [4])));
        var_19 = (arr_4 [i_2] [i_2]);

        for (int i_3 = 4; i_3 < 21;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 0;i_5 += 1)
                {
                    {
                        var_20 = (min(var_20, (arr_15 [i_2] [i_2] [i_3] [i_5 + 1])));
                        var_21 &= (arr_13 [i_2] [i_3 - 2] [i_4]);
                        arr_20 [i_4] = arr_16 [i_2] [i_3] [3];
                    }
                }
            }
            var_22 = arr_6 [i_2] [i_3];
            var_23 = (arr_19 [i_2] [i_2] [i_3 + 1] [8]);
            arr_21 [i_3 - 2] [i_3 + 1] [i_3 + 1] = (arr_10 [15]);
        }
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            var_24 = (min(var_24, (arr_10 [i_2])));

            for (int i_7 = 1; i_7 < 18;i_7 += 1)
            {

                for (int i_8 = 0; i_8 < 22;i_8 += 1) /* same iter space */
                {
                    var_25 = (arr_12 [i_2]);
                    arr_31 [i_7] [i_7 + 4] [i_6] [i_7] = (arr_22 [1] [1]);
                    var_26 *= (arr_28 [6] [i_2] [i_2] [i_8]);
                    var_27 = (arr_17 [i_2] [i_7 - 1] [i_8] [i_7] [2] [2]);
                }
                for (int i_9 = 0; i_9 < 22;i_9 += 1) /* same iter space */
                {
                    var_28 = (arr_4 [i_9] [i_2]);
                    arr_34 [i_7] [i_7 + 2] [i_7] [i_7] = arr_10 [i_6];
                }
                for (int i_10 = 0; i_10 < 22;i_10 += 1) /* same iter space */
                {
                    var_29 = (arr_32 [i_2] [i_7] [i_7 + 4] [i_10] [i_2]);
                    var_30 = (min(var_30, (arr_36 [i_2] [i_6] [i_7] [i_7] [i_10])));
                    var_31 = (min(var_31, (arr_22 [i_2] [i_7 + 3])));
                }
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 22;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 22;i_12 += 1)
                    {
                        {
                            var_32 &= (arr_25 [i_11] [i_11] [i_11] [i_11]);
                            arr_43 [i_2] [i_2] [i_6] [i_7] [i_11] [5] [i_12] = (arr_38 [4] [i_6] [4] [i_6]);
                            arr_44 [i_2] [i_7] [i_7] [i_11] [i_12] = (arr_37 [i_2] [i_7] [i_11] [i_12]);
                            var_33 *= (arr_37 [i_12] [i_2] [i_12] [i_12]);
                        }
                    }
                }
            }
            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                arr_47 [i_2] [i_6] [i_13] = (arr_30 [i_2] [i_2] [i_6] [i_2]);
                arr_48 [21] [21] = (arr_19 [i_13] [i_6] [13] [i_2]);
                var_34 = (arr_41 [i_6] [i_6] [14] [i_6] [i_6]);
                var_35 &= (arr_12 [i_6]);
            }
        }
    }
    var_36 = min((min(((max(var_11, var_0))), (min(var_5, var_3)))), ((min((min(var_10, var_1)), (max(var_6, var_9))))));
    #pragma endscop
}
