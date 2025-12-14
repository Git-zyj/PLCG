/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104408
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_14 = ((-(arr_2 [i_0 - 2])));
        arr_3 [i_0] = (max((arr_2 [i_0]), ((-(max(var_8, (arr_2 [i_0])))))));
    }
    var_15 &= (var_9 & var_6);
    var_16 = var_2;
    #pragma endscop
}
