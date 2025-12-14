/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169873
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((var_1 ? (min(118, 0)) : var_9))) ? 59 : var_9));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_16 = ((1 ? 54233 : ((var_7 / ((1545372510 / (arr_1 [i_1])))))));
                arr_5 [i_0] [i_1] [i_1] = ((((((!(arr_1 [i_1]))))) ? var_10 : (min((((arr_3 [i_0] [i_1] [i_1]) ? 1 : var_14)), 11296))));
            }
        }
    }
    #pragma endscop
}
