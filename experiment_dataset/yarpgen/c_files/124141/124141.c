/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124141
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, var_8));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_15 = ((((-(arr_1 [i_0]))) == 19119));
        var_16 -= ((-77 + (arr_1 [i_0 + 1])));
    }
    var_17 = 72;
    var_18 = (max((((min(var_2, var_3)) ^ (((var_13 ? var_6 : var_8))))), (((~(~96))))));
    #pragma endscop
}
