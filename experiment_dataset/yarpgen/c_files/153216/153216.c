/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153216
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_10 = (((arr_2 [i_0 - 2]) ? (arr_2 [i_0 - 2]) : (arr_2 [i_0 - 2])));
        var_11 = var_3;
    }
    var_12 = (min(var_12, var_5));

    for (int i_1 = 2; i_1 < 17;i_1 += 1)
    {
        arr_6 [i_1 - 1] = (1 * -28515);
        var_13 |= (!((min(var_1, (arr_0 [i_1 - 1])))));
    }
    for (int i_2 = 4; i_2 < 12;i_2 += 1)
    {
        var_14 = (max((arr_0 [i_2 + 1]), (((var_4 && ((max((arr_3 [i_2] [i_2]), 0))))))));
        arr_9 [i_2] [i_2 + 1] = min((((!(((28514 / (arr_3 [i_2] [i_2]))))))), (max((arr_8 [i_2] [i_2]), var_2)));
    }
    var_15 = ((((((~var_2) ? var_7 : var_5))) <= (min(var_7, var_9))));
    #pragma endscop
}
