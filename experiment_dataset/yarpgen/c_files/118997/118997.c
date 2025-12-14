/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118997
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] = (((((arr_1 [i_0] [i_0]) || (var_5 & var_9))) ? (!var_3) : var_3));
        arr_3 [i_0] = (max(((min(var_0, var_8))), (max(255, 55131))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_10 += ((((((~((max(4362, 4362))))) + 2147483647)) << (var_8 + 122)));
        var_11 = (+(max((61173 >= 1099511627775), ((-1099511627751 ? 1 : 152)))));
    }
    var_12 = var_7;
    #pragma endscop
}
