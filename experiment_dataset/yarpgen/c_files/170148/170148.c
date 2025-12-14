/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170148
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_5;
    var_14 = (var_7 ? (((((var_3 ? var_4 : var_1))) ? var_6 : 50)) : var_5);
    var_15 = (max(3897571163657098027, var_8));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = (min((max(var_1, 846921250)), (~55)));
        var_16 = (((~212) ? 4150219329 : 0));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_17 = (max((!0), 55));
        var_18 = (((arr_5 [i_1] [8]) ? ((((arr_5 [i_1] [i_1]) && var_2))) : (!127)));
    }
    #pragma endscop
}
