/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128662
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_16;

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] &= (var_17 - ((var_17 * (arr_0 [i_0 - 3]))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            arr_5 [0] [i_1] [i_1] = (arr_1 [i_1] [i_0 - 1]);
            var_21 = (arr_3 [i_0 + 3] [i_0 + 2] [i_0 - 1]);
            var_22 = ((var_12 ^ (arr_3 [i_0] [i_0 + 2] [i_0 + 2])));
        }
    }
    for (int i_2 = 3; i_2 < 13;i_2 += 1)
    {
        arr_8 [i_2] = ((!(arr_1 [i_2] [i_2])));
        var_23 = ((-4474 == (((var_6 || (((-5777456078180880167 ? 33464 : -1))))))));
        arr_9 [i_2] = (((var_16 * (max(var_17, 5777456078180880171)))));
    }
    for (int i_3 = 1; i_3 < 17;i_3 += 1)
    {
        var_24 = var_11;
        arr_13 [i_3] = (!1598);
    }
    #pragma endscop
}
