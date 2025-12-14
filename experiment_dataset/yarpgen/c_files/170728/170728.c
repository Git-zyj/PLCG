/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170728
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_10 = ((((~(!52))) / var_7));
        var_11 = (((arr_1 [i_0] [i_0]) > 2372476534));
        arr_2 [i_0] [i_0] = (min((!5610861110206230603), (((arr_1 [i_0] [i_0]) & 8964790068753212634))));
        arr_3 [i_0] [i_0] = (arr_1 [i_0] [8]);
    }
    /* LoopNest 2 */
    for (int i_1 = 3; i_1 < 13;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            {
                arr_9 [8] [i_2] = 8964790068753212618;
                /* LoopNest 2 */
                for (int i_3 = 1; i_3 < 14;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 13;i_4 += 1)
                    {
                        {
                            var_12 = 17253030706477064940;
                            arr_14 [i_2] [i_1 - 3] [i_1 + 1] [9] [i_1] [i_1 - 2] = ((((((var_1 + (arr_7 [i_1] [i_1] [i_2]))))) ? (arr_11 [i_1 - 3] [10] [10] [i_1 - 3]) : ((((15745493706134031713 + (arr_12 [i_2] [i_2] [i_2] [i_2]))) - (((arr_10 [i_4 + 1] [i_2] [i_2] [i_1]) ? (arr_8 [i_1] [i_2] [i_2]) : (arr_6 [i_2] [i_2] [i_4 + 2])))))));
                            arr_15 [i_2] [i_2] [i_3] [13] = 5610861110206230603;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 13;i_6 += 1)
                    {
                        {
                            var_13 = (arr_21 [i_2] [8] [i_6 - 1] [i_2]);

                            /* vectorizable */
                            for (int i_7 = 0; i_7 < 15;i_7 += 1)
                            {
                                var_14 = 138;
                                arr_25 [i_1] [i_2] [i_5] [i_5] [i_1] [i_2] = (arr_21 [i_1 - 2] [i_1 - 3] [i_6 - 1] [i_2]);
                            }
                            /* vectorizable */
                            for (int i_8 = 0; i_8 < 15;i_8 += 1)
                            {
                                arr_28 [i_2] [i_2] [i_2] [i_2] [i_2] = 128;
                                var_15 = var_8;
                            }
                            var_16 = (arr_16 [1] [i_2] [i_5]);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
