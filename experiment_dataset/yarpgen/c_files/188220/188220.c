/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188220
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (var_8 * var_9);

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_14 = (((var_3 - var_11) ? ((-14223 ? -200741584 : -1567978787)) : (32526 < 99)));
        arr_3 [i_0] = (arr_2 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_15 = (max(var_15, ((((1 / 93) * (arr_6 [i_1] [i_1]))))));
        arr_7 [i_1] = (((((arr_4 [3]) ? var_9 : var_1)) & (arr_4 [i_1])));
        var_16 = (var_4 < var_4);
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        var_17 = ((((~var_10) ? var_11 : -var_1)) % var_3);
        var_18 = (!15080884397261603427);
        var_19 = ((67 - (((arr_5 [3] [4]) + var_1))));
    }
    var_20 = (max(var_20, (!var_6)));
    var_21 = var_11;
    #pragma endscop
}
