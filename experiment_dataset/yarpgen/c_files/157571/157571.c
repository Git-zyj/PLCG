/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157571
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_10 -= 1830501108;
                    arr_8 [i_0 - 1] [i_1] [i_0] [i_2] = -1830501111;
                }
            }
        }
    }

    /* vectorizable */
    for (int i_3 = 1; i_3 < 6;i_3 += 1)
    {
        var_11 = (min(var_11, 1830501111));
        var_12 = (arr_3 [i_3] [i_3 + 3]);
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        arr_16 [i_4] = var_7;
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    {
                        var_13 &= (~1830501105);
                        var_14 = (min(var_14, 1830501094));
                        arr_26 [i_4] [i_4] [i_5] [i_6] [10] &= (((var_2 | (arr_12 [3]))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
