/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183637
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_9;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 = var_4;
        var_18 = (((-((16394 ? var_10 : var_0)))));
        var_19 = ((!((max(((var_9 ? var_0 : var_8)), (max(var_8, (arr_1 [i_0]))))))));
        var_20 = (min(var_20, (((~(((arr_1 [i_0]) / (arr_1 [i_0]))))))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_21 = (min(var_21, ((((58 || 16394) ? (arr_2 [i_1]) : ((-(arr_3 [i_1]))))))));
        arr_4 [i_1] [i_1] = (arr_3 [i_1]);
        arr_5 [i_1] = ((-((((max(var_3, var_2))) ? (((16270306967607707191 ? var_6 : (arr_2 [i_1])))) : var_5))));
    }
    var_22 = var_12;
    #pragma endscop
}
