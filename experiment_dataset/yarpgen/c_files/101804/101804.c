/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101804
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((-((var_8 ? var_10 : var_9))));
    var_15 += var_1;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = 12826;

        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            arr_5 [i_0] [i_1 + 1] = (arr_4 [i_0] [i_1 + 1]);
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        arr_13 [i_1 + 1] [i_2] = (-2147483647 - 1);
                        var_16 -= var_13;
                        var_17 += (arr_4 [i_0] [i_0]);
                    }
                }
            }
        }
    }
    var_18 = var_12;
    #pragma endscop
}
