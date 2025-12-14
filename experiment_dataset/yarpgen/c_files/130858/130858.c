/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130858
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, var_11));
    var_16 = (~184);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            {
                var_17 = (max(((((arr_3 [i_1 - 1]) ? (arr_3 [i_0 + 2]) : var_9))), (min(-1, 7760379643941327597))));
                var_18 = ((-((max((min(var_8, (arr_5 [i_0] [i_1] [i_1]))), (arr_3 [i_0 - 1]))))));
            }
        }
    }
    var_19 = ((-((63000 ? ((max(var_0, 91))) : 99))));
    #pragma endscop
}
