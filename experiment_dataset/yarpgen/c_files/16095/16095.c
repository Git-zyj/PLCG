/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16095
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(91, (0 == var_8)));
    var_12 = (max(((((max(var_9, var_5))) ? var_8 : ((max(var_3, var_5))))), var_3));
    var_13 = (!var_0);
    var_14 = (min(var_4, ((var_9 >> (((var_3 - var_5) + 1713589027159735329))))));

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_15 = (min(var_15, (max(((1 ? ((var_5 / (arr_1 [i_0 - 2] [i_0]))) : var_1)), 91))));
        var_16 += (arr_0 [i_0]);
        var_17 = ((((arr_0 [i_0]) ? (((var_8 || (arr_0 [1])))) : (((!(arr_0 [5])))))));
    }
    #pragma endscop
}
