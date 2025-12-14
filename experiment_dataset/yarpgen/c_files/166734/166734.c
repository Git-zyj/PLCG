/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166734
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= (((((~((min(var_0, var_9)))))) ? ((max(111, 0))) : (((((var_0 ? 255 : var_10))) ? var_9 : var_10))));
    var_13 = 7;
    var_14 = var_0;

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_15 = (!254);
        var_16 = (!((((arr_2 [i_0]) ? 249 : ((var_5 ? 7 : (arr_2 [i_0])))))));
        var_17 = ((~(min((((~(arr_2 [i_0])))), (arr_2 [i_0])))));
        var_18 = (((min((arr_0 [3]), (((arr_1 [i_0]) & 0)))) ^ ((((min((arr_2 [i_0]), (arr_2 [10])))) ^ ((var_3 ? var_2 : (arr_1 [i_0 - 1])))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_6 [i_1] = (((arr_4 [14]) << ((((~(arr_3 [i_1]))) + 11595))));
        var_19 = (max(var_19, (((1 << (129 - 114))))));
    }
    var_20 = var_6;
    #pragma endscop
}
