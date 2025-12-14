/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124276
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, var_0));
    var_19 |= (var_16 % var_14);
    var_20 = (var_10 | var_0);

    /* vectorizable */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            arr_4 [10] [5] [i_1 - 1] = (((arr_3 [i_1 + 1] [i_0] [i_0 - 2]) / 4294967285));
            arr_5 [i_1] = ((arr_3 [6] [i_1 + 1] [i_1 + 1]) / var_13);
        }
        var_21 = (-12 || 12);
    }
    #pragma endscop
}
