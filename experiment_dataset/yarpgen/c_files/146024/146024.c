/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146024
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 *= ((((((var_4 ? var_5 : 1)))) ? var_0 : (min((3072 - 2841858735), var_12))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = (!((max(((max((arr_3 [i_0]), var_12))), (0 * -31548)))));
                var_17 *= (arr_5 [i_1]);
            }
        }
    }
    var_18 *= ((((min(var_8, ((min(var_5, var_15)))))) ? (min(-2154358985, var_11)) : (((((var_4 < 1453108561) || (((var_1 ? var_9 : var_3)))))))));
    #pragma endscop
}
