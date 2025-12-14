/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188369
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] [i_0] &= (~524287);
        arr_5 [i_0] = (+-18446744073709027329);
        arr_6 [2] = max(-2681434513847041132, (min(-9000799523962540926, 26288)));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        arr_9 [i_1] = (~26288);
        var_18 *= (!-1051134096);
        arr_10 [i_1] &= ((max(var_15, 524287)));
    }
    var_19 = (max(-2485143259832957823, 32767));
    #pragma endscop
}
