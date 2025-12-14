/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154525
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((max(159, var_5)) & var_2)));

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_13 *= -67108863;
        var_14 = ((((var_3 < (arr_0 [i_0 + 1]))) ? var_1 : ((min((arr_0 [i_0 - 2]), var_4)))));
        var_15 = var_11;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_16 = ((((((arr_0 [i_1]) < (arr_3 [i_1] [i_1])))) << (((arr_2 [i_1]) ? 0 : 14844208411021273793))));
        var_17 += (3602535662688277822 * -67108875);
        var_18 = (((180 ? var_2 : var_4)));
    }
    #pragma endscop
}
