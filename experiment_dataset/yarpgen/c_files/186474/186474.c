/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186474
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, (((((max(((140737488355327 ? 18446744073709551611 : var_9)), 112))) ? (min((max(var_6, -62)), ((min(var_13, -1507576626))))) : var_12)))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_15 = (min(var_15, 1507576629));
        var_16 = (min((max((arr_0 [i_0]), (((arr_1 [i_0]) - (arr_1 [i_0]))))), (arr_1 [i_0])));
    }
    var_17 = (max(var_17, (((((min(((var_3 ? var_3 : var_12)), var_12))) ? var_12 : 1)))));
    #pragma endscop
}
