/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105747
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_7;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_20 = ((var_13 ? (61645 - 31) : (((((!(arr_3 [i_1]))) ? var_1 : -var_12)))));
            arr_6 [i_0] [i_0] [i_0] = ((120 ? 1104008602 : 113));
        }
        arr_7 [i_0] = ((!(((-var_8 + (max(140737488351232, var_12)))))));
        arr_8 [i_0] [i_0] = (arr_5 [i_0] [i_0]);
        var_21 = (max((((-((-32763 ? 4171494364 : var_4))))), (16648548644315274143 + -25184)));
    }
    #pragma endscop
}
