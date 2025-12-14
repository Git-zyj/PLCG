/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158625
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= ((var_5 ? var_1 : var_4));

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_14 = (((arr_2 [i_0]) / 15555806299804370229));
        arr_3 [i_0] [i_0] = (arr_2 [i_0]);
    }
    #pragma endscop
}
