/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109729
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_3;
    var_14 = -17053;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_15 = (min(var_15, (((2047 ? 2047 : 2047)))));
                arr_8 [i_1] = (min(-3538464864, var_9));
                var_16 = (min(var_16, ((min((min(3782401582139294573, 1095618025)), (arr_6 [i_1]))))));
                arr_9 [i_0] [i_1] = -14;
                var_17 = (min(var_17, ((min(var_2, (min(-7977, ((63518 ? (arr_2 [i_0]) : (arr_0 [i_0]))))))))));
            }
        }
    }
    #pragma endscop
}
