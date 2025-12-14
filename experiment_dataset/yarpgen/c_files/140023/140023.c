/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140023
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((784815260 ? (!var_2) : var_1))) && ((!(!var_1)))));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        var_19 = ((~(arr_1 [i_0])));
        var_20 = var_9;
    }
    var_21 |= (min(((-(var_12 * var_12))), var_14));
    var_22 += ((-((((min(var_17, var_11))) ? (~var_17) : var_14))));
    #pragma endscop
}
