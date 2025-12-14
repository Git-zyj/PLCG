/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103747
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= var_7;
    var_14 = var_5;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                {
                    arr_9 [i_1] = 8441413183975289094;
                    var_15 = -98;
                    var_16 = 14720;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_17 = 17;
                                var_18 = 65497;
                            }
                        }
                    }
                }
            }
        }
        var_19 = -175607418145882077;
    }
    for (int i_5 = 2; i_5 < 21;i_5 += 1)
    {
        arr_17 [i_5] = 9249;
        arr_18 [i_5 - 2] = -26;
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 22;i_8 += 1)
                {
                    {
                        arr_26 [i_7] [i_7] [i_6] [i_7] = 874088151;
                        var_20 = 1;
                        var_21 = 1;
                    }
                }
            }
        }

        for (int i_9 = 0; i_9 < 22;i_9 += 1)
        {
            var_22 = 65519;
            arr_30 [i_5] [i_9] = 14713;
            /* LoopNest 3 */
            for (int i_10 = 0; i_10 < 22;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 22;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        {
                            var_23 = 1;
                            arr_39 [i_12] = 1;
                            var_24 = 6066112270753004772;
                        }
                    }
                }
            }
            arr_40 [13] [1] = 1;
        }
    }
    #pragma endscop
}
