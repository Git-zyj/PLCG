/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137526
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((var_2 & var_7) >> (var_7 + 825775970))) - ((((var_8 <= 3921809591449971635) <= (~14524934482259579970))))));
    var_13 ^= (((((3921809591449971638 | var_9) | var_2)) - ((((((1465502407 < (-9223372036854775807 - 1)))) ^ (var_11 & var_4))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_14 = (-58 / 1);
        arr_2 [i_0] = -1002;
        arr_3 [i_0] [i_0] = (0 / -17);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_15 = ((((((((arr_0 [i_1]) & (arr_1 [i_1]))) | ((((arr_1 [i_1]) != (arr_5 [i_1]))))))) || ((((arr_1 [i_1]) >> (1002 - 989))))));
        arr_6 [i_1] = (((((-7015449508495367138 + var_5) * (((var_9 / (arr_0 [i_1])))))) - (4294967295 * var_6)));
    }
    var_16 = ((var_8 != (((-var_4 < (var_5 != 2147483636))))));
    #pragma endscop
}
