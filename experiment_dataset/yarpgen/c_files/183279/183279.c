/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183279
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_18 *= (((var_12 <= var_14) == (var_6 / var_15)));
        var_19 = (((var_0 < var_5) * (var_16 || var_16)));
        var_20 = (((((var_3 / var_14) / (((((-9223372036854775807 - 1) && -29865)))))) + (((((var_3 | var_9) > (var_10 | var_11)))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_1] = ((29864 + 29864) + (((var_12 + var_9) + var_11)));
                    var_21 = ((var_13 / ((((-var_12 < (var_15 | var_5)))))));
                    var_22 = (max(var_22, ((((var_3 - var_3) * var_1)))));
                }
            }
        }
    }
    for (int i_3 = 3; i_3 < 7;i_3 += 1)
    {
        var_23 *= ((~((((var_9 * var_6) != (-29865 && 29865))))));
        arr_12 [i_3 - 3] [i_3] = (~var_7);
    }
    /* vectorizable */
    for (int i_4 = 4; i_4 < 22;i_4 += 1)
    {
        var_24 = var_1;
        var_25 = -var_1;
        var_26 = (var_0 > var_3);
    }
    var_27 = var_5;
    var_28 = (~var_2);
    #pragma endscop
}
