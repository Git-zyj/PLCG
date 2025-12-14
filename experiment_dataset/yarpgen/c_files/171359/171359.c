/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171359
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += -var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_18 &= var_4;
                arr_6 [i_0] [i_0] [i_0] &= ((+((+((var_7 ? (arr_4 [i_0] [9] [i_1 - 1]) : (arr_1 [i_0])))))));
                var_19 = (min(var_19, (((((!((max(var_8, (arr_0 [i_1])))))) || ((((arr_2 [i_0]) ? (arr_4 [i_0] [19] [19]) : (arr_5 [5] [i_1])))))))));
            }
        }
    }
    var_20 -= min(var_1, (min((~var_15), ((var_14 ? var_16 : var_0)))));
    #pragma endscop
}
