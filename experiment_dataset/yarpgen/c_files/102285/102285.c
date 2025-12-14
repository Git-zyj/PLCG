/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102285
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 = 14801066851907277579;
        arr_3 [14] &= ((-(((!(((3645677221802274024 ? (arr_0 [0]) : (arr_0 [6])))))))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_16 = (min((arr_2 [i_1]), ((((arr_1 [i_1] [i_1]) && (arr_1 [i_1] [i_1]))))));
        var_17 &= (!var_0);
    }
    var_18 = (min(var_18, (((((((((var_13 ? var_2 : 11044))) ? var_11 : (min(var_4, var_10))))) ? (((3645677221802274032 ? var_3 : ((var_2 ? var_13 : var_13))))) : ((((min(var_13, 14801066851907277588))) ? (min(var_8, var_14)) : var_6)))))));
    var_19 = (max(var_19, (((((((var_2 != var_14) ? (((var_3 ? var_1 : var_12))) : (min(var_5, var_11))))) ? var_3 : var_4)))));
    #pragma endscop
}
