/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123509
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_0;

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = ((((min(24678, -28905)) ^ (!-28893))));
        arr_3 [i_0] = (max(var_6, 3733510294));
        var_13 = (((((arr_1 [i_0 - 2]) ? 1 : (arr_1 [i_0 - 2]))) - (arr_1 [i_0 + 1])));
    }
    #pragma endscop
}
