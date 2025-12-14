/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107847
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_7 ? ((var_13 ? -var_14 : 6159029798031145006)) : (((min((var_3 <= var_15), (!var_6)))))));
    var_18 = var_5;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_19 = (1 <= 1792);
        var_20 = arr_0 [i_0];
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_21 = (var_16 - var_5);
        var_22 = (arr_2 [i_1] [i_1]);
        var_23 = ((!(arr_4 [i_1])));
        var_24 = var_11;
    }
    for (int i_2 = 4; i_2 < 17;i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] = (min(((((((arr_7 [i_2 - 4] [i_2 - 4]) * var_7))) & (arr_5 [i_2] [i_2 + 2]))), (arr_7 [i_2] [i_2 - 3])));
        var_25 = var_12;
        arr_10 [i_2 + 3] = (arr_3 [i_2 - 2] [i_2 + 1]);
    }
    for (int i_3 = 4; i_3 < 17;i_3 += 1) /* same iter space */
    {
        arr_13 [i_3 + 2] = 1;
        arr_14 [i_3] = var_2;
        arr_15 [i_3 - 4] = (((var_7 >= var_11) ? (!1) : (arr_7 [i_3] [i_3 - 1])));
    }
    #pragma endscop
}
