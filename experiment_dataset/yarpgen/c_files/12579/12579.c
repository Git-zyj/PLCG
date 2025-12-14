/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12579
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_11 = ((var_6 ? (((arr_0 [i_0] [i_0]) & (arr_1 [i_0] [i_0]))) : (2 >= 211)));
        var_12 = (max((min((arr_1 [i_0] [i_0]), (arr_0 [i_0] [i_0]))), (!4953298913449420896)));
        var_13 = (((arr_0 [i_0] [i_0]) ? ((((max(4953298913449420911, -118))) ? (arr_0 [i_0] [i_0]) : var_7)) : (max((((arr_1 [i_0] [i_0]) * 8406)), (((arr_0 [14] [i_0]) ? var_2 : (arr_0 [i_0] [i_0])))))));
        var_14 = (min(var_14, ((((!var_7) && var_8)))));
    }
    var_15 = var_9;
    var_16 = var_6;
    var_17 = (max(var_17, ((((((4953298913449420915 ? ((140 ? 13493445160260130716 : 13493445160260130735)) : 65534))) ? 29 : 1)))));
    #pragma endscop
}
