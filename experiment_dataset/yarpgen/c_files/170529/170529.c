/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170529
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_14 = ((((~(arr_1 [i_0]))) ^ ((var_6 ^ (arr_1 [i_0])))));
        var_15 = -1291783909;
        var_16 &= (~var_7);
    }

    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_17 = (min(((((max(var_1, (arr_3 [i_1])))) % (min(-7837880101030298808, var_12)))), ((-((0 ? var_7 : var_11))))));
        var_18 = (((var_5 + 2147483647) >> (((max(((~(arr_5 [i_1]))), (((arr_2 [i_1]) | var_10)))) - 190828809))));
    }
    var_19 |= var_7;
    #pragma endscop
}
