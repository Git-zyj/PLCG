/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174519
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] [i_0] = (65535 / var_7);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_2] = -var_2;
                    arr_10 [i_0] [i_1] [i_1] [3] = (arr_5 [i_2] [0]);
                }
            }
        }
        arr_11 [i_0] [i_0] |= (112 & -15799);
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                {
                    arr_20 [2] [i_5] [i_5] [i_3] = ((var_16 / ((var_13 << (var_8 + 7080)))));
                    arr_21 [i_5] [i_4] [i_5] = (min(26, var_14));
                }
            }
        }
        var_17 -= 13817164703146889437;
        arr_22 [i_3] [i_3] = var_3;
    }
    var_18 = (min(var_18, 1));
    #pragma endscop
}
