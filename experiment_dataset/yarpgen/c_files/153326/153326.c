/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153326
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_14;

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_16 = (min(var_16, (((+(((arr_0 [i_0 - 1]) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 - 1]))))))));
        var_17 = (((!-var_12) >> (18687 - 18665)));
        var_18 += ((-var_14 ? ((max(var_10, var_10))) : -23264));
        var_19 -= (((arr_3 [i_0 - 1] [i_0 - 1]) >> var_14));
    }
    var_20 = var_9;
    #pragma endscop
}
