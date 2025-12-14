/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132916
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = min(-3230, (min((!1), (min(var_0, var_9)))));
    var_15 = var_2;
    var_16 = (((-29702 + 2147483647) << (((var_5 + 1013454504) - 8))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = ((9 ? var_4 : (25868 % var_3)));
        arr_3 [i_0] = var_0;
        arr_4 [i_0] [i_0] = (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    var_17 ^= ((min(-13, ((3 ? var_12 : var_7)))));
                    arr_13 [i_1] [i_2] [i_3] = -4266292690238088466;
                    var_18 = ((-(((arr_6 [i_2]) ? (-4019367665435254545 - var_10) : (arr_10 [i_1] [i_2] [i_2] [i_3])))));
                    var_19 = (min(var_19, (~157)));
                }
            }
        }
        arr_14 [i_1] = (min(((min((arr_7 [i_1]), (arr_7 [i_1])))), (5588242862292599542 * 25665)));
    }
    #pragma endscop
}
