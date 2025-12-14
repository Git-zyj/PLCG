/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124837
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_16 &= (min(((-(!var_10))), ((~(!var_9)))));
        arr_3 [8] &= max(((min(var_10, var_0))), (~var_7));
    }
    var_17 = var_0;

    /* vectorizable */
    for (int i_1 = 1; i_1 < 18;i_1 += 1)
    {
        var_18 = var_3;

        for (int i_2 = 2; i_2 < 19;i_2 += 1)
        {
            var_19 = (max(var_19, (var_14 || -var_1)));
            var_20 = var_14;
        }
        for (int i_3 = 1; i_3 < 19;i_3 += 1)
        {
            var_21 = var_15;
            var_22 = (max(var_22, var_8));
            arr_11 [i_1] = (((var_15 || var_7) && var_11));
            var_23 = var_14;
        }
        for (int i_4 = 2; i_4 < 19;i_4 += 1)
        {
            arr_14 [i_1] [i_1] [i_1] = (((~var_2) <= var_15));
            var_24 = ((var_13 & (~var_8)));
            arr_15 [i_1] [i_1] [i_1] = -var_10;
            var_25 = ((-(var_0 != var_3)));
        }
        arr_16 [i_1] [i_1] = ((!(~2147483644)));
    }
    #pragma endscop
}
