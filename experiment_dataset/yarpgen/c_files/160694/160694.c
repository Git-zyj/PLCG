/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160694
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        var_12 = (((arr_7 [i_0 + 1] [i_1] [i_0]) ? 5946 : (arr_8 [i_2 - 1] [i_0 + 1] [i_2 - 2] [i_1])));
                        var_13 = (min(var_13, (((arr_8 [i_1] [i_2 - 2] [i_2 - 2] [i_3]) || (arr_8 [i_1] [i_2 - 2] [i_1] [i_1])))));
                        var_14 = (((arr_4 [i_0]) ? (((-3157117050556501986 ? (arr_9 [i_0] [9] [2] [i_0]) : -428942736612273424))) : (arr_5 [i_0 - 1] [i_0 - 1] [i_0 + 1])));
                    }
                }
            }
        }
        arr_11 [i_0] [i_0] = (var_10 < var_10);
    }
    var_15 = ((!((min(301797491, var_11)))));
    #pragma endscop
}
