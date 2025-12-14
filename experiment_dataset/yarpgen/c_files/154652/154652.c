/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154652
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_9;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_13 = (min(var_13, (((((-6163533955044215495 ? var_1 : (arr_2 [2]))) - (((arr_2 [16]) - 81)))))));
        var_14 ^= var_5;
        arr_3 [i_0] [18] = 6786357184977541087;
        arr_4 [i_0] [i_0] = ((((((arr_1 [i_0] [17]) ? -6163533955044215495 : var_1))) && (!6163533955044215476)));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            arr_10 [i_1] [i_2] &= (!-17727);
            var_15 = (((arr_0 [i_1]) || (((arr_2 [i_1]) && 6163533955044215503))));
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_16 = (max(var_16, (arr_0 [6])));
            arr_13 [i_1] [1] = (arr_1 [i_3] [i_3]);
            var_17 *= 120;
            arr_14 [i_1] [i_3] = 268431360;
        }
        var_18 = var_3;
    }
    var_19 = (6706058454857607072 && var_1);
    var_20 = (min(var_20, (var_10 / var_10)));
    #pragma endscop
}
