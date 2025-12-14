/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120736
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        var_14 = var_0;
                        arr_9 [1] [i_1] [i_2] [i_3] [i_3] = (arr_8 [i_1] [i_0] [i_0 - 1] [i_1 - 1]);
                        var_15 = (((arr_5 [i_0 + 1] [i_1] [i_1 - 3] [i_3]) / (arr_5 [i_0 + 1] [i_1] [i_1 - 3] [i_3])));
                        var_16 = (((arr_8 [i_1] [i_1] [i_1 - 2] [i_1]) ? (arr_8 [i_1] [i_3] [i_1 + 2] [i_1]) : 1792));
                        var_17 = ((1782 ? 1796 : var_2));
                    }
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        var_18 = ((~(((((arr_0 [i_4]) ^ 128))))));
                        arr_13 [i_0] [i_1] [i_1] [i_2] [i_4] = var_7;
                        var_19 = 1789;
                    }
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        var_20 = (min(var_20, (((((min(-1791, 1792))) ? 1782 : (((!(((1792 ? -1793 : -1792)))))))))));
                        arr_16 [i_0] [i_1 - 3] [i_0] [i_1] [i_5] = var_2;
                    }
                    var_21 ^= ((!(arr_14 [i_0] [i_1 + 1] [i_2])));
                }
            }
        }
    }
    var_22 = ((((((min(1790, 1792)) ^ var_9))) ? var_6 : var_8));
    #pragma endscop
}
