/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14113
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (!var_7);
    var_13 = ((var_6 / ((32759 ? var_2 : var_10))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_14 *= (((~4092598560487741286) % (((((arr_3 [i_0 - 2] [i_0 - 2] [i_0 - 4]) == (arr_3 [i_0 - 1] [i_0 + 1] [i_0 + 1])))))));
                arr_4 [19] = -32759;
            }
        }
    }
    #pragma endscop
}
