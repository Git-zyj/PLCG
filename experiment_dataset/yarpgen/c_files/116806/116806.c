/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116806
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= ((((max(var_5, (!var_7)))) ? var_4 : var_10));

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] = (((-(arr_0 [i_0] [i_0 - 1]))));
        var_12 = ((min(0, (max((arr_2 [i_0 - 1] [i_0]), (arr_0 [i_0 - 1] [12]))))) >= ((((max(var_8, 7695))) ? (min(var_1, var_8)) : (((max(0, 65535)))))));
        arr_4 [i_0] [i_0 - 1] = ((((((arr_0 [i_0] [i_0]) ? (arr_1 [i_0 + 1]) : (min(var_0, -1678660463550853825))))) ? ((max(((var_0 & (arr_0 [i_0 - 2] [i_0 - 2]))), (arr_0 [i_0] [i_0 - 2])))) : (((arr_2 [i_0] [i_0]) ? (max((arr_2 [i_0] [i_0 - 1]), var_5)) : (arr_2 [1] [i_0 + 1])))));
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        var_13 ^= ((-(max((arr_2 [i_1 - 1] [i_1 - 1]), (((arr_0 [i_1 - 1] [i_1]) ? 65535 : var_1))))));
        var_14 = (max(var_14, 2147483647));
        var_15 = (min(((((((arr_1 [i_1 - 1]) ? 6414898330261172195 : 1))) ? 12031845743448379421 : ((min((arr_0 [i_1] [i_1]), (arr_0 [i_1] [i_1])))))), (((((-23177 ? 1 : (arr_6 [i_1] [i_1])))) ? 768 : (((arr_5 [i_1]) ? (arr_5 [i_1 - 1]) : 4166836515864922034))))));
        arr_7 [i_1 - 1] [i_1 - 1] = (((min((!1), (((arr_6 [i_1 - 1] [i_1 - 1]) ? var_2 : -88)))) <= (((arr_0 [i_1] [i_1 - 1]) ? (!65527) : (81668718645404779 && var_7)))));
    }
    #pragma endscop
}
