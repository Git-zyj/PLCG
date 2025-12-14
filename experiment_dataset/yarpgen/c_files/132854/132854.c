/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132854
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 1;
    var_15 = (((var_6 ? var_4 : var_8)));

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        arr_2 [18] = ((((((-5472150512953447410 / (arr_0 [i_0]))) - 32763)) < (((((arr_0 [i_0 - 1]) != ((-4170505103569721397 / (arr_1 [i_0] [i_0 + 1])))))))));
        var_16 = (min(var_16, var_9));
        var_17 = (min(var_17, ((min(3405280048, 1)))));
    }

    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_18 = (min((max(-422285384, (arr_4 [i_1]))), 1));
        arr_5 [i_1] = (arr_4 [i_1]);
        var_19 = (max(var_19, ((+(((arr_0 [i_1]) ? (((1 << (((arr_3 [i_1]) - 3245477126))))) : (arr_3 [i_1])))))));
        arr_6 [i_1] [1] = 1;
    }
    #pragma endscop
}
