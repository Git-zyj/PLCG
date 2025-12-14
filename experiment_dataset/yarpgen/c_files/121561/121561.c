/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121561
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += ((((((var_11 <= -2105329272) ? var_9 : var_17))) - ((var_16 ? (min(var_5, -2232485328827608851)) : var_7))));
    var_20 = (((((var_11 / ((588591111 ? var_17 : var_9))))) ? ((var_7 + (min(var_16, var_13)))) : (((((max(var_11, 5735481161887629221))) ? ((var_13 ? -2232485328827608856 : var_2)) : ((min(var_14, var_6))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_0] = ((((((((arr_1 [i_0]) >= (arr_0 [i_1]))) ? 2232485328827608835 : (((arr_4 [i_1]) / (arr_1 [i_0])))))) ? (((arr_1 [i_0]) ? (arr_0 [i_0]) : (arr_1 [i_0]))) : 127));
                var_21 = var_16;
            }
        }
    }
    #pragma endscop
}
