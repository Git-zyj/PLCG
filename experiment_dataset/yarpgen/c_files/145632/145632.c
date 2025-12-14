/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145632
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((max(1, ((var_1 ? 2 : var_5)))));

    /* vectorizable */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 7;i_3 += 1)
                {
                    {
                        var_13 ^= ((!(arr_6 [i_3 + 3] [3] [i_3 - 1] [i_3 - 1])));
                        var_14 = (!921560183);
                    }
                }
            }
        }
        var_15 = (min(var_15, (((0 ? (arr_2 [i_0 - 1]) : (arr_4 [i_0 - 4] [i_0 - 3]))))));
    }
    var_16 = 1944312164;
    var_17 = (((max(var_7, (min(4294967295, 921560183))))) && var_5);
    #pragma endscop
}
