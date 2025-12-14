/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158383
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_13 ^= 98;
        var_14 = arr_1 [i_0];
        var_15 = (arr_1 [i_0]);
    }

    for (int i_1 = 2; i_1 < 10;i_1 += 1)
    {
        var_16 = (min((min(((var_6 / (arr_2 [i_1]))), 0)), var_2));
        arr_5 [i_1] = (var_1 * (((0 / var_12) ? (((min(1, var_4)))) : (arr_1 [i_1]))));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_17 = (((!(arr_2 [i_2]))));
        var_18 = (min(var_18, (((+((+(((arr_0 [i_2]) - 2047)))))))));
    }
    var_19 = var_5;
    var_20 = (min(var_20, var_10));
    #pragma endscop
}
