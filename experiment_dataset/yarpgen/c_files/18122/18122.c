/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18122
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = ((~((var_10 ? -85 : (arr_0 [i_0] [i_0])))));
        var_14 = (((((arr_0 [i_0] [i_0]) || (arr_1 [i_0] [i_0]))) || -764));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 14;i_1 += 1)
    {
        var_15 &= var_1;
        var_16 = var_10;
    }
    var_17 -= ((1 - -var_2) && var_10);
    var_18 = ((((var_5 - (1 == -57))) != ((-var_0 * (var_1 / var_5)))));
    var_19 = 9223372036854775807;
    #pragma endscop
}
