/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160505
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_1 - 1] = ((((min(((6195103143955417264 ? var_3 : var_2)), 6074038128899378376))) && ((min((((var_10 ? var_9 : var_8))), (min(-8506583437518325905, 6074038128899378376)))))));
                var_16 = 6074038128899378376;
            }
        }
    }
    var_17 = (min(var_7, (((var_9 == (!var_10))))));
    var_18 = (min(var_3, ((((var_10 / var_10) && (((var_4 ? 801816300827114068 : var_6))))))));
    var_19 = (max(var_19, (((var_6 >> (var_1 - 6610419945712202575))))));
    #pragma endscop
}
