/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15415
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(-var_3, (!var_14)));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
            {
                var_18 -= (((arr_7 [i_1 - 2] [i_1] [i_2] [13]) - var_9));
                arr_10 [i_0] [15] [i_2] [i_0] = (~234881024);
            }
            for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
            {
                var_19 = (((arr_12 [i_1 - 1] [i_1]) / 9223372036854775807));
                var_20 = (((arr_12 [i_1 + 4] [i_0]) - 40));
            }
            for (int i_4 = 2; i_4 < 17;i_4 += 1)
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 15;i_6 += 1)
                    {
                        {
                            arr_21 [i_0] [17] [i_5] [7] [i_6] [17] = (arr_8 [i_4 + 1] [i_6 + 2] [i_1 - 3] [i_1 - 3]);
                            var_21 = (min(var_21, (arr_14 [i_1 - 2] [i_1 - 1] [i_1] [i_1 - 2])));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        {
                            arr_26 [i_0] [i_1] [i_4] [i_4] [i_7] = (arr_22 [i_0] [i_1] [i_4] [0] [i_8]);
                            arr_27 [i_7] [i_8] = 42;
                            var_22 = ((((57826 ? 30656 : var_7)) & (arr_12 [i_4 - 2] [i_1 + 3])));
                            arr_28 [i_0] [5] [i_7] [i_0] [13] = (!-1);
                            arr_29 [i_7] [2] [2] [i_0] |= (~var_13);
                        }
                    }
                }
            }
            var_23 = 1;
            arr_30 [0] [i_1 + 4] [i_1 + 4] = ((-29 * (arr_24 [4] [i_1 - 3] [i_1] [i_1 + 1] [i_1 + 2] [4])));
            arr_31 [i_0] &= 6118894844399287196;
        }
        var_24 = (((min((arr_13 [i_0] [i_0]), (((arr_12 [i_0] [i_0]) ? (arr_23 [2]) : var_0)))) * ((((((((arr_22 [i_0] [i_0] [i_0] [i_0] [i_0]) >= var_12))) < (((arr_2 [i_0]) ? 57830 : (arr_15 [i_0] [9])))))))));
    }
    for (int i_9 = 0; i_9 < 12;i_9 += 1)
    {
        arr_35 [i_9] = (max((((arr_23 [i_9]) | (arr_8 [9] [i_9] [i_9] [i_9]))), ((((arr_8 [i_9] [16] [i_9] [i_9]) ? (arr_23 [i_9]) : (arr_23 [i_9]))))));
        var_25 = (((max(((-(arr_20 [i_9] [i_9] [i_9] [i_9] [i_9]))), (((arr_19 [8] [i_9] [i_9] [1] [i_9]) + 129)))) - ((min((arr_11 [7]), ((max(31, var_12))))))));
        var_26 = (min(var_26, var_1));
        arr_36 [i_9] = ((22251 ? var_15 : (arr_33 [i_9])));
    }
    var_27 = var_5;
    var_28 = var_2;
    #pragma endscop
}
