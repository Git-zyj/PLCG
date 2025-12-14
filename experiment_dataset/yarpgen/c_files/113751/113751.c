/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113751
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_13;
    var_15 = (min((var_2 != var_4), (max(var_9, (!var_13)))));
    var_16 = (var_8 && var_2);

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0 - 1] [13] = var_5;
        var_17 = ((-((var_8 ? (arr_0 [i_0 - 2] [i_0]) : 1152921487426977792))));
        arr_3 [i_0] [i_0] = (arr_0 [i_0 - 1] [i_0]);
    }
    #pragma endscop
}
