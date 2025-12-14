/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153813
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 = arr_0 [1] [i_0];
        arr_2 [i_0] = ((1 | (arr_0 [i_0] [i_0])));
    }
    var_14 = (min(var_4, var_7));
    var_15 -= var_6;
    #pragma endscop
}
