/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15401
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_0;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_13 = (!var_2);
                                var_14 = (((arr_11 [i_0] [i_0] [i_0 + 3] [i_0 - 1] [i_3] [i_3] [i_0 - 1]) ? 33554431 : (arr_11 [i_2] [i_1] [i_0 + 3] [i_3] [i_4] [i_2] [i_2])));
                                var_15 &= ((1 << (((arr_3 [i_0 + 2]) - 15618260823568176305))));
                            }
                        }
                    }
                    var_16 = ((1040384 ? (arr_8 [i_0 + 3] [i_0 + 2] [i_0 + 1] [i_0 + 1]) : (arr_8 [i_0 + 3] [i_0 - 1] [i_0 + 2] [i_0 + 3])));
                }
            }
        }
        var_17 = (arr_7 [i_0] [0] [i_0] [i_0] [i_0] [i_0]);
        var_18 = (32767 % var_3);
        var_19 = -32767;
    }
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        var_20 = var_6;
        /* LoopNest 2 */
        for (int i_6 = 3; i_6 < 10;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 9;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 11;i_9 += 1)
                        {
                            {
                                arr_24 [i_5] [i_5] [i_8] [i_5] = (arr_6 [i_7] [i_9] [i_7 - 3] [4]);
                                var_21 = ((-(127 + -32767)));
                            }
                        }
                    }
                    var_22 = (((((max(32756, 18)))) ? var_9 : (arr_5 [i_7 - 3] [i_5] [i_5])));
                    var_23 = (!((((arr_8 [i_6 - 3] [i_6] [i_6] [i_7]) ? 15872 : var_11))));
                    arr_25 [i_5] = (~2015);
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 11;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            {
                                arr_30 [i_11] = (max(1040384, var_2));
                                var_24 ^= (+(((arr_26 [i_7] [i_7 - 1] [1] [i_7] [i_7] [i_7]) % var_4)));
                            }
                        }
                    }
                }
            }
        }
        var_25 = (max(((max((!1), (!-1040357)))), 81));
        arr_31 [i_5] = (!var_3);
    }
    #pragma endscop
}
