/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100339
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_18 ^= (((((0 / var_8) / var_14)) == var_0));
        var_19 = (max((max((3346 + 255), (min(0, 5105679033601800646)))), (arr_1 [19])));
    }
    for (int i_1 = 1; i_1 < 23;i_1 += 1)
    {
        arr_4 [i_1 + 1] = (max(18446744073709551601, (((8112 & (arr_3 [i_1]))))));
        arr_5 [i_1] = -8121;
    }
    var_20 = min(var_12, (((min(8121, var_16)) & 64318)));
    #pragma endscop
}
