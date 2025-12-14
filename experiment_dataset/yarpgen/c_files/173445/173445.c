/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173445
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0 - 2] = (((~6180808197546703825) ? 25280 : ((min((arr_1 [i_0 - 1]), (arr_1 [i_0 - 1]))))));
        var_12 = max(-2356397770758962478, 594681347);
    }
    var_13 *= ((var_5 ? -45 : ((((max(var_0, var_6))) + (var_9 / var_8)))));
    #pragma endscop
}
