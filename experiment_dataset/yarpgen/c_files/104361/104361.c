/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104361
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_17 -= (((arr_4 [i_0 + 1]) + (min((((arr_0 [i_1]) ? (arr_4 [i_0]) : (arr_0 [i_0]))), (arr_6 [i_0] [i_0])))));
                var_18 = (min(var_18, (arr_1 [i_1])));
                arr_7 [i_1] = ((255 ? 255 : 13166371714646651989));
            }
        }
    }
    var_19 = ((var_0 ? (((255 ? 4284249632 : 7481))) : (((~var_5) ? (min(var_15, var_15)) : (((var_14 ? var_9 : var_3)))))));
    #pragma endscop
}
