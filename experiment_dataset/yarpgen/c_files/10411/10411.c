/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10411
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= ((-var_0 > ((-(6970 < var_8)))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_4 [3] = ((+((((arr_0 [i_0]) || 108)))));
        var_12 &= var_9;
        arr_5 [i_0] [i_0] = ((~(((((114 ? 250 : 86)) != (~71))))));
        var_13 = 115;
        arr_6 [i_0] = var_0;
    }

    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        arr_9 [7] = (((arr_7 [i_1]) >= 13202));
        var_14 ^= -103;
        /* LoopNest 2 */
        for (int i_2 = 4; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            {
                                var_15 = 0;
                                arr_22 [i_1] [i_3] [i_3] [20] [i_5] = arr_11 [18];
                            }
                        }
                    }
                    var_16 = (min(var_16, 25129));
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 22;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            {
                                arr_29 [i_3] = (arr_19 [8] [11] [i_6 + 1] [i_2 - 4] [i_1] [i_3] [i_1]);
                                var_17 *= 12;
                                arr_30 [i_1] [i_2] [i_3] [i_6] [i_3] = var_3;
                                arr_31 [i_7] [4] [21] [14] [i_3] [i_6] = var_1;
                            }
                        }
                    }
                }
            }
        }
        var_18 = (max(var_18, -52));
    }
    #pragma endscop
}
