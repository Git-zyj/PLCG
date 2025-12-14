/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105667
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_12 = ((4077324998210769556 ? -4077324998210769556 : ((var_7 ? (arr_1 [i_0] [i_1 + 2]) : var_3))));
                var_13 = (min((((-(-25724 - 28672)))), (((arr_1 [i_0] [0]) ^ (!var_3)))));
                arr_6 [i_1] [i_1 + 2] = ((-((min(var_7, var_8)))));
            }
        }
    }
    var_14 = var_10;
    var_15 = var_7;
    #pragma endscop
}
