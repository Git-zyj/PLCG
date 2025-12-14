/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145968
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 2155685418;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_12 = (max((64 / 1), (arr_6 [i_1])));
                arr_7 [i_1] = -114;
            }
        }
    }
    var_13 = (min(var_10, var_6));
    var_14 = (min(((7 | ((var_7 ? 7 : 0)))), var_0));
    var_15 = ((var_3 ? var_7 : var_4));
    #pragma endscop
}
