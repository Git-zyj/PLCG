/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139933
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_13 += ((~(max((arr_0 [1]), (~0)))));
        var_14 |= (((((max(-1, (arr_1 [i_0 - 2] [i_0 + 1]))))) ^ (~var_12)));
        var_15 += (((((+(((arr_1 [i_0] [i_0]) + 10))))) ? (-8 + -14) : (arr_2 [12] [4])));
        var_16 += (max(((min((arr_1 [i_0 - 2] [i_0 - 1]), 24))), 14609576811902675812));
    }
    for (int i_1 = 2; i_1 < 12;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] [12] = ((127 ? 7078781826099089310 : 17952136909762717814));
        arr_6 [i_1] = 238;
    }
    var_17 += var_1;
    #pragma endscop
}
