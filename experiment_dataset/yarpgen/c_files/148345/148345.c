/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148345
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_8 ? var_9 : var_9));
    var_11 = var_7;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [14] = (max(var_7, (max(var_0, var_0))));
        arr_4 [i_0] [i_0] = min((arr_1 [i_0]), var_5);
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                {
                    var_12 = (min(var_12, var_2));
                    arr_12 [i_0] [i_1] [i_1] [i_1] = min(251, (max(45046, -21254)));
                }
            }
        }
        arr_13 [i_0] [i_0] = (max((max(7687, 3641198971750775127)), (((18446744073709551615 ? 0 : 2029879905)))));
    }
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        var_13 = var_0;
        var_14 = (max(var_14, ((min((arr_15 [i_3]), var_0)))));
    }
    #pragma endscop
}
