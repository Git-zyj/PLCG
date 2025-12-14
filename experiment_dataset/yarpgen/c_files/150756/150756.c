/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150756
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (var_5 - var_13);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 = (max(var_18, ((((var_2 + (arr_2 [i_0] [i_0])))))));
        arr_3 [i_0] = (arr_1 [i_0] [i_0]);
        arr_4 [i_0] = ((+((226770082805116672 ? (-2147483647 - 1) : var_0))));
        arr_5 [i_0] = var_16;

        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            arr_9 [i_0] |= (((((arr_6 [i_0]) + 2147483647)) >> (((arr_1 [i_0] [i_1]) - 51283))));
            var_19 = var_2;
        }
    }
    #pragma endscop
}
