/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141733
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((!(var_10 / var_10)));
    var_15 = (((((62805 - var_7) < (~var_1)))) == var_7);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_16 = (((arr_1 [i_0]) || ((((arr_1 [i_0]) ? 33 : 5740272382586311889)))));
        arr_2 [i_0] [i_0] = 0;
    }
    #pragma endscop
}
