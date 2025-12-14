/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126695
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_2;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = 18446744073709551607;
        var_18 = (arr_0 [i_0]);
        var_19 = (arr_1 [1] [i_0]);
        var_20 = (min(var_20, (4248938793 % 1580494660513326770)));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_21 = 15013504891694693062;
        var_22 = (((arr_3 [i_1] [i_1]) / (arr_3 [i_1] [i_1])));
        var_23 = min(-5476375480120308692, (-6973 >= 511));
    }
    for (int i_2 = 4; i_2 < 16;i_2 += 1)
    {
        var_24 = (min(var_24, ((((arr_0 [i_2]) || 10118842574103819545)))));
        var_25 ^= (arr_9 [i_2 - 4]);
    }
    var_26 = 0;
    var_27 = (var_12 >= var_5);
    #pragma endscop
}
