/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128822
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_17 ? (((((max(var_3, var_12)) <= var_7)))) : (((1113915489 <= var_15) ? var_1 : (43849 <= 0)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_20 = (arr_0 [i_1]);
                var_21 = (max(((1920 ? ((-21607 ? 1 : 1748988909)) : (((((arr_0 [7]) <= var_0)))))), -2359994627));
                var_22 -= (max((8265075078786738919 <= 45960), (min(((var_3 ? 9028718992138245825 : (arr_3 [i_1] [1]))), ((24 ? var_1 : -26764))))));
            }
        }
    }
    #pragma endscop
}
