/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122630
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(((var_4 ? var_15 : var_8)), var_4));
    var_18 = var_16;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 *= (((((arr_2 [i_0]) <= var_0)) ? (min(var_12, (arr_1 [i_0]))) : var_4));
        var_20 = var_9;
        var_21 = (arr_0 [i_0]);
        arr_3 [i_0] [i_0] = (((29806 >= var_6) ? var_14 : var_2));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_22 = (56 % var_7);
        var_23 = (max(var_23, (((((((((-60 ? var_3 : -60))) ? var_9 : ((81 ? var_15 : 3006862168))))) ? ((((~(arr_4 [8]))) | ((((arr_5 [i_1] [1]) ? var_9 : var_7))))) : 56)))));
        var_24 = (max(var_24, (arr_5 [i_1] [i_1])));
        var_25 = (((((max(var_12, var_12))) ? var_3 : (arr_5 [i_1] [i_1]))));
        var_26 -= ((((!(arr_4 [4])))));
    }
    #pragma endscop
}
