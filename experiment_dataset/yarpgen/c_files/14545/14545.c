/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14545
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min((((var_4 << (-6 + 6)))), (var_3 && var_10)));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_1 [i_0]) == ((((-4 ? (arr_0 [i_0]) : var_4))))));
        var_16 = (max(var_16, var_5));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_17 = (((!(arr_5 [i_1] [i_1]))));
        var_18 = var_1;
        var_19 = (((((arr_5 [i_1] [i_1]) ? 8935141660703064064 : (arr_3 [i_1] [8]))) + (min((((var_3 ? 25919 : (arr_4 [i_1])))), var_9))));
        var_20 = (-8935141660703064057 >= -6);
    }
    #pragma endscop
}
