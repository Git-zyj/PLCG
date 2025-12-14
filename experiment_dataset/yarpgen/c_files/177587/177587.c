/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177587
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((var_6 << var_3) ^ (!-1967104616)));
    var_16 = var_6;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_17 = 1967104616;
        var_18 = ((~(((1967104608 ^ var_8) ^ ((((var_6 != (arr_2 [i_0])))))))));

        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            arr_6 [i_0] [i_0] = (arr_4 [i_0]);
            arr_7 [i_0] [i_1] = (arr_5 [i_0] [i_1 - 3] [i_1]);
        }
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 17;i_2 += 1)
    {
        var_19 |= var_11;
        arr_10 [i_2] [i_2] = (((!-1967104628) ? (((arr_1 [i_2]) ? var_2 : 1967104626)) : var_4));
        var_20 = (max(var_20, (((-((1967104615 ? -106 : (arr_4 [11]))))))));
        arr_11 [i_2] [i_2] = (((arr_4 [i_2 - 2]) | var_3));
    }
    var_21 = ((((102 < (min(123, 1967104615)))) ? (-2396941643370651408 < 4) : var_3));
    #pragma endscop
}
