/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175863
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        var_19 = ((var_14 || (~var_1)));
        var_20 = var_13;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_21 = (((62145 - 3850463174787404871) != 6496814805008616693));
        var_22 = (min(var_22, var_5));
        arr_5 [i_1] = ((2556695747 ? (8075 > var_8) : (var_1 >= 8758387898664251326)));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    {
                        var_23 |= (((((40333 ? -9223372036854775792 : 1))) ? var_17 : var_3));
                        var_24 = (((var_17 / 1) ? ((-38 ? 121 : 8758387898664251308)) : var_9));
                    }
                }
            }
        }
    }
    var_25 = (var_3 ? 1632177110 : (var_0 / var_7));
    var_26 |= ((~((2460002150397471311 & (~var_5)))));
    #pragma endscop
}
