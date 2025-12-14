/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145783
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [0] |= ((max((((arr_0 [i_0]) ? var_10 : 24)), ((var_12 ? var_14 : (arr_1 [i_0]))))) + (~-22906));
        arr_4 [i_0] = ((+((-(max((arr_0 [i_0]), (arr_1 [i_0])))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = 2048;
        var_15 = (((arr_6 [i_1]) - ((((arr_5 [i_1]) ? 32203 : 22908)))));
    }
    var_16 = ((33334 ? 1 : 15527));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            {
                arr_13 [i_3] = ((22905 ? ((534773760 ? 1 : 65535)) : 14));
                arr_14 [i_3] [i_2] [i_2] = 2026;
            }
        }
    }
    var_17 = (max((((var_2 || 1) ? (max(var_4, var_5)) : (!var_3))), ((-((var_10 ? var_8 : -22906))))));
    #pragma endscop
}
