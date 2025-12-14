/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183008
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_14 = (max(var_14, ((min((arr_1 [i_0 + 1]), (arr_1 [i_0 + 1]))))));
        var_15 = ((min(var_1, (min((arr_2 [i_0]), (arr_1 [11]))))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_16 = (max((((((arr_2 [14]) ? var_10 : (arr_3 [2]))) % 1378657102)), (((((max(1378657102, (arr_2 [i_1])))) ? 1 : -32767)))));
        var_17 = ((max(((arr_3 [i_1]), ((((arr_0 [2]) ? var_7 : var_11)))))));
    }
    for (int i_2 = 1; i_2 < 21;i_2 += 1)
    {
        var_18 = (var_3 ? ((~((((arr_5 [5]) && (arr_5 [i_2 - 1])))))) : ((((-1378657122 && (arr_5 [i_2]))))));
        var_19 = max((arr_5 [i_2 - 1]), (arr_5 [i_2 - 1]));
    }
    var_20 += (((((~(var_12 && var_3)))) ? var_10 : var_13));
    var_21 = ((25 ? (min((~var_9), (2307757005 && var_10))) : ((max(var_4, var_7)))));
    var_22 = var_5;
    #pragma endscop
}
