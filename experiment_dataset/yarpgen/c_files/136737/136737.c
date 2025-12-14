/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136737
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((!(((5542087322086920242 ? var_6 : 158))))) ? 29455 : ((var_0 ? var_9 : 28672))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_11 = (max(var_11, ((((arr_0 [i_0]) ? 1 : (((((var_1 ? var_2 : 90))) ? (((!(arr_1 [6] [i_0])))) : var_9)))))));
        var_12 = ((var_8 ? (((33 ? (arr_2 [i_0]) : (arr_2 [i_0])))) : var_1));
        var_13 = (min(var_13, (arr_0 [i_0])));
        var_14 = (arr_2 [1]);
    }
    var_15 = var_9;
    var_16 = (min(var_16, 65427));
    #pragma endscop
}
