/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172763
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_10;
    var_13 = var_7;

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        var_14 = var_11;
        var_15 = (min(var_15, ((((arr_2 [i_0]) != (arr_0 [i_0]))))));
    }
    var_16 = (max((min(((min(var_0, var_10))), var_9)), var_8));
    #pragma endscop
}
