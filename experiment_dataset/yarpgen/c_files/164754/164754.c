/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164754
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((max(var_0, 28440)) >= ((((2715068295 + 2147483647) << (((2715068287 || 1579899000) - 1)))))));
    var_11 += (-((var_0 ? ((var_8 ? var_6 : var_3)) : ((-37 ? 0 : 1)))));

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = (((696057909 & 1579899001) ? ((~(arr_0 [i_0 - 2] [i_0 + 1]))) : var_5));
        var_12 = var_8;
    }
    #pragma endscop
}
