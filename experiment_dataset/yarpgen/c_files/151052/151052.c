/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151052
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 7157;

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_18 &= var_14;
        arr_2 [i_0] = ((max(58379, (-2147483647 - 1))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_19 = (((arr_0 [i_1]) ^ (7137 & var_1)));
        arr_5 [16] = (((arr_1 [5]) ? 4354620209116420879 : 58366));
    }
    #pragma endscop
}
