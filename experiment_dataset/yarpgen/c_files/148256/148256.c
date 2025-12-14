/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148256
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((((((var_1 ? var_15 : -39))) ? (max(var_5, var_4)) : var_8))) ? var_7 : (max((var_14 > var_8), ((var_17 ? -27 : var_15))))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] &= ((-39 ? (max((max((arr_1 [18] [9]), (arr_0 [i_0]))), ((var_2 ? var_9 : (arr_0 [19]))))) : (((min(38, -39))))));
        arr_4 [i_0] [i_0] = (((arr_1 [i_0] [i_0]) == ((9 ? (!-39) : (max(var_14, (arr_0 [i_0])))))));
        var_19 = (min((((!(((-2090820454 ? -10532 : 21)))))), 770621333));
    }
    for (int i_1 = 1; i_1 < 18;i_1 += 1)
    {
        arr_7 [i_1] = (~18446744073709551615);
        var_20 -= 11;
        arr_8 [i_1] = (((((!((max(4, var_14)))))) == (!-1358)));
        var_21 = (-21 | (arr_6 [i_1] [i_1 - 1]));
        arr_9 [i_1] [i_1] = (((((-534 ? var_13 : 383147049) + (arr_6 [i_1 - 1] [i_1 + 1])))));
    }
    #pragma endscop
}
