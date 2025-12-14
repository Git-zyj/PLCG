/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118668
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(((8475554689898997337 >= ((var_17 ? var_9 : var_10)))), var_8));
    var_19 = ((min((var_6 && 85), (max(var_14, var_16)))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_20 = (((arr_0 [i_0 - 2]) ? 14968871921814398165 : (arr_0 [i_0 - 2])));

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 23;i_3 += 1)
                {
                    {
                        var_21 = ((!(arr_1 [i_0] [i_0])));
                        arr_10 [17] [i_2] [21] [i_0] = ((1 ? var_6 : var_3));
                        arr_11 [i_0] [i_1] [i_1] = (((arr_3 [i_2 - 2] [i_0 - 2] [i_3 - 1]) ? (arr_9 [i_2 - 2] [i_0 - 2]) : (arr_9 [i_2 - 2] [i_0 - 2])));
                        var_22 = (((arr_8 [i_3 - 1] [i_2 - 1] [1] [i_0 + 3] [i_0]) + 20));
                        arr_12 [i_1] = (((arr_1 [i_2] [i_0]) ? ((-(arr_3 [i_1] [i_2 + 2] [i_3]))) : (arr_8 [0] [0] [i_2] [i_2] [i_2])));
                    }
                }
            }
            arr_13 [i_0] = 14641234650987004243;
        }
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            arr_16 [i_0 + 1] [i_4] [i_4] = (((arr_4 [i_0] [i_0 + 3] [i_4]) ? 0 : var_10));
            arr_17 [i_0] = (!var_10);

            for (int i_5 = 4; i_5 < 20;i_5 += 1)
            {
                arr_20 [i_0] [20] [i_5] = var_1;

                for (int i_6 = 1; i_6 < 20;i_6 += 1) /* same iter space */
                {
                    var_23 = (((((arr_8 [i_5 - 1] [i_5] [i_0] [1] [i_0]) ? (arr_0 [i_0]) : 1)) >> ((((arr_6 [i_0 + 3]) && var_16)))));
                    var_24 = 1;
                }
                for (int i_7 = 1; i_7 < 20;i_7 += 1) /* same iter space */
                {
                    arr_27 [4] [i_5] [i_5] [i_0] = (((arr_26 [i_7 + 2] [6] [i_7 + 2] [i_0 - 2] [8]) | var_17));
                    arr_28 [i_0] [i_0] [16] [i_5] [i_0] = (20 && var_14);
                }
                for (int i_8 = 1; i_8 < 20;i_8 += 1) /* same iter space */
                {
                    arr_32 [i_5] [i_5] [i_4] [i_4] [i_4] [i_4] = (arr_21 [i_8] [i_8] [14] [i_8 + 4] [i_8] [17]);
                    arr_33 [5] [23] [i_5] [i_0] [i_0 - 2] = ((((((arr_23 [20] [i_5] [i_0]) ? -1 : var_15))) ? 0 : (arr_23 [10] [i_5] [i_5 + 1])));
                    arr_34 [i_5] = ((-1 || (arr_25 [i_0] [i_5] [i_5] [i_8])));
                }
                var_25 = 1;
                arr_35 [i_5] = 0;
            }
            arr_36 [18] = 0;
        }
    }
    #pragma endscop
}
