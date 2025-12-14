/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180601
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, ((((var_1 ? var_3 : -var_0))))));
    var_16 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                var_17 = (((arr_0 [i_0] [5]) | ((var_5 ? 42 : var_2))));
                arr_6 [i_0] [i_1] = (min(var_11, var_10));
                arr_7 [i_0] [i_1 - 3] [i_0] = (((~var_8) || var_4));
            }
        }
    }
    #pragma endscop
}
