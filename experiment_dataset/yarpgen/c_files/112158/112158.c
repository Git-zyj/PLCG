/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112158
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        var_17 = (max(var_17, (arr_1 [i_0])));
        arr_2 [i_0] [i_0] = ((~(max(((var_7 ? var_7 : (arr_0 [i_0]))), (arr_0 [i_0 + 4])))));
    }
    var_18 ^= -var_6;
    #pragma endscop
}
