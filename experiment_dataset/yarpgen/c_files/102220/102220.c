/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102220
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((~(((!(((17478817495527331644 << (var_2 - 16942838945819260660)))))))));
    var_21 = (((((((((127 ? 1081437240 : 1081437240))) && var_12)))) + var_8));

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        var_22 = 3213530038;
        var_23 = min(-3213530056, ((((1081437240 ? (arr_0 [i_0]) : 1024950550)) + (max(4294967295, -1)))));
        var_24 = 72057594037927935;
    }
    #pragma endscop
}
