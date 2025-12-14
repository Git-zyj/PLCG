/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155876
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = (((0 * 0) % (arr_0 [i_0] [i_0])));

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [i_2] [i_1] [i_0] = ((-(arr_4 [i_0])));
                        var_19 ^= (arr_7 [i_2] [i_0] [i_2]);
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    {
                        var_20 = ((-(~117)));
                        var_21 |= (arr_7 [i_1] [i_1] [i_1]);
                    }
                }
            }
        }
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    {
                        var_22 = (arr_14 [i_0]);
                        var_23 = (((6 ^ 5240611298844395015) ? ((-6 ? 2 : 46136)) : 33));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_9 = 2; i_9 < 6;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 10;i_10 += 1)
                {
                    {
                        var_24 = (((arr_34 [i_10] [i_10] [i_9 - 2] [i_9 - 1] [i_9 - 1] [3]) / var_15));

                        for (int i_11 = 0; i_11 < 10;i_11 += 1)
                        {
                            arr_37 [i_0] [i_0] [i_0] [i_0] [i_11] [i_9 - 2] = 1;
                            var_25 = ((9093728829183292958 ? 62345 : 3487465086));
                            var_26 = (min(var_26, (((504403158265495552 | (arr_36 [i_0] [i_0] [i_9] [i_10] [i_9] [i_11]))))));
                        }
                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            arr_40 [i_0] [i_0] [i_0] [i_0] = (((arr_28 [i_6] [i_9] [i_6] [i_0]) ? (var_2 / var_3) : (arr_19 [i_12] [i_10])));
                            var_27 += (~-6);
                            var_28 = 30;
                        }
                        var_29 = (arr_25 [i_0] [i_0] [i_9 + 1] [i_6]);
                        arr_41 [i_0] [i_0] [i_9 + 4] [3] = arr_0 [i_10] [i_0];
                    }
                }
            }
        }
    }
    var_30 = (min(var_30, ((((17942340915444056064 - -105) ? var_8 : (min(var_9, (var_18 - var_2))))))));
    var_31 = var_15;
    #pragma endscop
}
