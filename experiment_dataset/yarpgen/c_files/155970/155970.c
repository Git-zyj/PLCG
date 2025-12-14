/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155970
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_18 = ((((50150 << (arr_0 [i_0 + 1]))) != (arr_0 [i_0])));
        var_19 = 11111;
        var_20 ^= ((var_17 ? ((((max(-118, (arr_1 [1] [i_0])))) ? ((max(var_17, 30))) : ((min(-5211, -5211))))) : (arr_1 [i_0 + 1] [i_0 - 1])));
    }
    var_21 = var_17;
    var_22 |= 532676608;
    #pragma endscop
}
