/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160346
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_18;
    var_20 += var_9;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_21 = (arr_1 [17]);
        var_22 = (max(var_22, (((1249188021 == (arr_1 [i_0]))))));
        var_23 *= (~var_5);
        var_24 = (min(var_24, (((((23585 ^ (arr_1 [i_0]))) < (((((arr_0 [i_0]) > var_0)))))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_25 = min(var_5, (~-32));
        var_26 = (min(((32 - (-32 ^ var_13))), (min(1, 202788772))));
    }
    #pragma endscop
}
