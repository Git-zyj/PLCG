/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135687
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_15, (min(((-12258 ? var_5 : var_15)), var_9))));
    var_20 *= (((min((!255), (5 && var_18))) || var_8));

    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        var_21 = (min(var_21, ((min((((((var_18 / (arr_0 [i_0 + 2] [i_0])))) ? (arr_1 [i_0]) : ((14 ? 255 : var_2)))), (arr_0 [i_0 - 3] [i_0 - 1]))))));
        arr_2 [i_0] = -9;
        var_22 = (max(var_22, ((((max(6107933663435343904, var_3)))))));
    }
    #pragma endscop
}
