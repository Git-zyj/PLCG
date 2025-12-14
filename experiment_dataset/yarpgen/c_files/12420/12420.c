/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12420
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        arr_4 [20] = -5686629740283972235;
        var_18 = (min(var_18, ((!((((((arr_1 [i_0]) + 2147483647)) >> (((arr_1 [i_0]) + 18254)))))))));
    }
    var_19 = (max(var_5, ((((60 > 0) < (max(var_17, var_14)))))));
    var_20 = 0;
    var_21 = var_11;
    #pragma endscop
}
