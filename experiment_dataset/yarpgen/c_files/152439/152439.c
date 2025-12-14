/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152439
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_10 = (((((2121237360 << (((arr_1 [i_0 + 1]) - 1788719494))))) || 1));
        arr_2 [i_0 - 1] = 48641;
    }
    for (int i_1 = 2; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_11 &= ((((min(-2147483644, var_3))) * (arr_1 [i_1 - 1])));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            var_12 = ((1302925458 ^ (arr_5 [i_1 - 2] [i_1 - 2] [i_1 - 1])));
            var_13 = (max(var_13, ((((arr_4 [i_1] [i_2]) ? var_3 : var_2)))));
            var_14 -= -var_1;
        }
    }
    var_15 = (min(var_15, var_2));
    var_16 = (var_8 > var_6);
    /* LoopNest 3 */
    for (int i_3 = 1; i_3 < 20;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                {
                    var_17 ^= arr_9 [i_5];
                    var_18 = (min(var_18, (arr_0 [i_3 + 1] [i_3 + 1])));
                    var_19 ^= ((((((5276617921385541559 ? -2147483644 : var_9))) ? (74 / -5276617921385541562) : (max((arr_10 [i_5]), var_1)))));
                    var_20 = (arr_6 [i_5] [i_4] [2]);
                    var_21 = var_6;
                }
            }
        }
    }
    #pragma endscop
}
