/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166670
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 18;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = max(((((((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : 262143))) ? (min(var_1, 2147483641)) : (arr_1 [i_0 - 1] [i_0 - 2]))), var_4);
        arr_3 [i_0] = (min(54053, -1416195145));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        arr_10 [i_1] [i_1] [i_3] = (((((-32253 ? (arr_7 [i_0] [i_0] [i_0]) : var_0)) * (-5789 / 1073741824))));
                        arr_11 [i_0] [i_0] [i_0] [4] [i_0] [i_0] = (min((((arr_9 [i_0] [i_0] [i_0] [i_0 + 2] [i_0] [i_0 + 2]) ? 1816254858 : (arr_9 [i_0 + 2] [i_0 + 1] [i_0] [i_0 - 2] [i_2] [i_2]))), (((arr_9 [i_0] [i_0] [11] [i_0 + 2] [i_0] [i_1]) + 10620))));
                    }
                }
            }
        }
    }
    for (int i_4 = 2; i_4 < 18;i_4 += 1) /* same iter space */
    {
        var_14 += var_2;
        var_15 = ((~((((arr_7 [i_4 - 2] [i_4 - 2] [i_4 - 2]) > 1)))));
    }
    var_16 |= var_3;
    var_17 |= var_12;
    #pragma endscop
}
