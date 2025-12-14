/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155024
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 9;i_0 += 1) /* same iter space */
    {
        var_14 = 7;
        var_15 ^= var_3;
        arr_2 [i_0 + 3] [i_0 - 2] = var_11;
    }
    for (int i_1 = 2; i_1 < 9;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 11;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        for (int i_5 = 3; i_5 < 8;i_5 += 1)
                        {
                            {
                                var_16 += 3;
                                var_17 *= -5946;
                                arr_17 [i_1] [i_2 - 1] [i_3 - 1] [i_2] [i_3 - 1] = var_6;
                            }
                        }
                    }
                    var_18 = -127;
                    arr_18 [i_2] [i_2 + 1] = var_3;
                }
            }
        }
        arr_19 [i_1] [2] &= -68;
        arr_20 [i_1] = -1859183299;
    }

    for (int i_6 = 0; i_6 < 21;i_6 += 1)
    {
        var_19 = (max(var_19, var_3));
        var_20 = var_8;
        arr_23 [i_6] = -1260;
    }
    #pragma endscop
}
