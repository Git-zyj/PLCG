/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187935
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (~2087134143971133193);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = ((((((((2305731012 ? -17262 : 17261))) ? (arr_3 [i_0]) : (((!(arr_1 [i_0] [i_0]))))))) ? ((2619 * ((var_4 ? 51398 : 10489)))) : ((((-17262 ? (arr_3 [i_0]) : var_13)) * 17261))));
        arr_5 [i_0] [i_0] = (max((max((min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))), (arr_3 [i_0]))), (((~(arr_0 [i_0]))))));
    }
    var_19 = ((((((((-17262 ? var_17 : var_3))) ? ((var_5 ? var_10 : 9507714406592017997)) : (((var_1 ? 6107 : var_5)))))) ? 1424917360 : ((min((!var_13), 0)))));
    #pragma endscop
}
