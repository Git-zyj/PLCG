/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10136
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_10 = (max(((1795907238 | (min(2139792042, -1795907245)))), 1795907238));
        var_11 |= 1;
        var_12 = (min(var_12, (((((arr_1 [i_0] [i_0 + 2]) << (((1795907244 + var_4) - 946192836))))))));
        var_13 = 1795907249;
    }
    var_14 = (min(-1795907242, ((1491066947 ? 30129 : (max(1491066948, 1))))));
    var_15 = var_1;
    var_16 = var_5;
    var_17 = (max(var_0, var_3));
    #pragma endscop
}
