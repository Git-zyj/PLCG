/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108721
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += var_1;
    var_14 -= var_6;
    var_15 = (max((min(var_5, -1)), var_0));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_16 = (((arr_1 [i_0]) / (arr_1 [i_0])));

        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            arr_5 [17] [i_0] = (((arr_0 [i_1 - 3]) && var_11));
            arr_6 [i_1] [i_0] = (~var_10);
            arr_7 [i_0] = 5735056873236169539;
        }
        var_17 -= -7;
    }
    #pragma endscop
}
