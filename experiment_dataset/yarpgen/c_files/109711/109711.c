/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109711
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((var_15 ? (var_10 / 127) : (var_1 - var_7)))) ? ((((max(4294967279, 233))) ^ ((4294967269 ? var_16 : var_5)))) : (var_1 & var_7)));
    var_18 = (!var_15);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_19 = var_10;
                arr_5 [i_0] = min((~var_2), ((((max(4294967295, (arr_2 [i_0])))) ? 1041011411 : -1041011411)));
            }
        }
    }
    #pragma endscop
}
