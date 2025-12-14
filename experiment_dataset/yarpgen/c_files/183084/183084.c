/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183084
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((1 ? -1888597219 : 2));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (0 & 1);
        arr_3 [i_0] [i_0] &= (arr_0 [i_0] [i_0]);
    }
    #pragma endscop
}
