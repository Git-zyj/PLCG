/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10565
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_13 -= (((((var_6 ? var_7 : (arr_1 [i_0])))) / (arr_3 [i_0 - 1] [i_0 - 2])));
        var_14 -= (((arr_2 [i_0]) * ((15 ? 0 : -2147483637))));
        var_15 += (arr_3 [i_0 - 1] [i_0 - 1]);
        var_16 += (9223372036854775807 / 4339);
    }
    var_17 = var_11;
    var_18 = (max(var_18, (((var_6 >> (0 / 61197))))));
    #pragma endscop
}
