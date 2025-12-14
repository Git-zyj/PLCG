/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144173
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= var_12;

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        arr_4 [i_0] [4] &= (var_14 ? -1796196449 : ((~(arr_3 [i_0 - 2]))));
        var_17 = ((((max((arr_1 [i_0 + 1] [i_0]), (arr_1 [i_0 + 1] [i_0])))) ? (((arr_1 [i_0 + 1] [i_0 + 1]) + (arr_1 [i_0 - 2] [i_0 - 2]))) : ((max((arr_1 [i_0 - 3] [i_0 - 1]), (arr_1 [i_0 - 2] [i_0 - 2]))))));
    }
    #pragma endscop
}
