/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131897
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 21;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0 - 2] [i_0 + 2] [i_0] = var_4;
                    arr_10 [i_0] [i_0] [i_0] [i_0 + 2] = (arr_0 [i_0]);
                    arr_11 [i_2] [i_0] = ((((var_8 ? var_1 : (max((-2147483647 - 1), -7528)))) > (((38 > ((max(-49, (arr_5 [i_2] [i_1 + 1])))))))));
                }
            }
        }
    }
    var_11 = (((-7548 ? (max(var_10, var_8)) : -1373238296)));
    /* LoopNest 3 */
    for (int i_3 = 3; i_3 < 10;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                {
                    var_12 = ((((-var_6 ? ((15635 ? var_9 : 21512)) : (max(-18222, (arr_16 [i_4] [i_4]))))) + 44548));
                    arr_21 [i_3] [i_4] [i_5] = ((!(((var_5 ? (arr_6 [i_3 - 1] [i_3 + 1]) : 21527)))));
                    var_13 = (min(var_13, (((~(min((((arr_17 [6]) ? -652653062 : var_2)), (21535 > var_4))))))));
                }
            }
        }
    }
    #pragma endscop
}
