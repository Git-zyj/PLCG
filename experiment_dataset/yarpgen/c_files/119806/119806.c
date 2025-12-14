/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119806
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, var_1));
    var_14 = 1452842331;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = var_10;
        var_15 = (min(var_15, 18446744073709551605));
    }
    for (int i_1 = 2; i_1 < 14;i_1 += 1)
    {
        var_16 &= 6;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 16;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            {
                                var_17 -= var_0;
                                var_18 = (min(var_18, 21));
                                arr_16 [i_1 + 2] [i_1 + 2] [i_3] [i_2] [i_2] [i_5] [i_4] = -17897;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            {
                                arr_23 [i_1] [i_1] [i_1] [i_7] &= -1207623487;
                                var_19 *= 17917;
                                var_20 = -17897;
                                var_21 = 117;
                                arr_24 [i_6] [i_2] [i_1] = var_2;
                            }
                        }
                    }
                    var_22 *= var_4;
                }
            }
        }
        arr_25 [i_1] = var_2;
        var_23 -= 7460366330533814248;
        var_24 = (min(var_24, 77));
    }
    #pragma endscop
}
