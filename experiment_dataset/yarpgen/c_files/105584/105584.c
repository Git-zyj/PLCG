/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105584
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_18 ^= min(var_16, 130);
        var_19 = (arr_1 [i_0] [i_0]);
        var_20 = 8731171957968133403;
    }
    var_21 = ((var_2 ? (62058 > 90) : ((var_13 ? var_8 : (max(var_4, -1))))));
    var_22 ^= (var_2 <= var_15);
    #pragma endscop
}
