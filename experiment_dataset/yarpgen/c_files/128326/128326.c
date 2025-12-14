/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128326
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = ((48906 <= (arr_0 [i_0])));
        var_17 -= ((979620411 ? 2673107353193264746 : var_16));
    }
    var_18 = ((~(((-1021741274 % 1) | (10585578910459105596 == var_13)))));
    var_19 = (((min((1 & 178), ((1462537073 ? 1 : 47644)))) <= (-7116 ^ 12)));
    var_20 = ((((((-4128 + 2147483647) >> (var_2 - 44)))) ? var_15 : (max(((var_12 ? 4070829876 : 1025985226)), ((min(var_11, 47644)))))));
    #pragma endscop
}
