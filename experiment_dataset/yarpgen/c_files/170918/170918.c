/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170918
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (17592186044415 + 0);
        var_19 &= (!var_14);
    }
    var_20 = (((~(33554424 % var_2))));
    #pragma endscop
}
