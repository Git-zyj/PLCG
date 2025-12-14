/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142232
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (var_2 + 64);
    var_17 ^= var_5;

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((-(var_13 / var_8))));
        var_18 -= 5;
        var_19 *= (((((6404329432910408989 & 15297709460336566755) ^ (var_11 && var_1))) >= (~var_7)));
    }
    #pragma endscop
}
