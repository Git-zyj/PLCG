/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127265
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_5, var_8));
    var_14 = var_1;
    var_15 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_16 += (max(1, -14));
                var_17 = ((((min((((var_2 && (arr_3 [i_1])))), 1))) ? (((arr_3 [i_0]) ? (min(var_8, (arr_2 [i_1]))) : (min(var_2, 1)))) : var_8));
                var_18 = (min(var_2, (arr_3 [i_0])));
            }
        }
    }
    #pragma endscop
}
