/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100542
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= var_6;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 = (!var_0);
        var_17 = (((arr_0 [i_0]) || (arr_0 [i_0])));
        var_18 = (((arr_1 [i_0] [i_0]) || (arr_1 [i_0] [i_0])));
        var_19 = (((arr_1 [i_0] [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        arr_4 [i_1] [i_1] = var_9;
        var_20 -= (max(((max(9880, 43099))), ((-((((arr_3 [i_1]) <= (arr_0 [i_1]))))))));
    }
    var_21 -= (((var_12 + 9223372036854775807) << ((((-((var_14 ? var_10 : var_5)))) - 8215))));
    var_22 &= var_8;
    #pragma endscop
}
