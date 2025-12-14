/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159699
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (18446744073709551615 ? ((((3007460624 + 2147483647) << (614298019 <= 13)))) : (max((max((arr_3 [i_0]), (arr_0 [i_0]))), ((max((arr_2 [i_0]), (arr_1 [i_0] [i_0 - 1])))))));
        var_11 = (((((arr_2 [i_0]) != (max((arr_0 [i_0]), (arr_0 [i_0 - 1])))))) | (max(((((arr_1 [i_0] [i_0 - 1]) > (arr_0 [i_0])))), ((108 ? (arr_2 [i_0]) : 255)))));
        arr_5 [i_0] = (((arr_0 [i_0]) ? ((((((arr_1 [i_0] [i_0 - 1]) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0])))) ? (arr_0 [i_0]) : (((-32756 ? 238 : (arr_3 [i_0 - 1])))))) : (((45489 * (((arr_2 [i_0]) & (arr_1 [i_0] [i_0 - 1]))))))));
        var_12 = ((((max(((-2024507 ? 10397 : 4758)), 139))) ? 77868035 : ((((-7 + 2147483647) << (((-32763 + 32794) - 31)))))));
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {
        var_13 = ((((((((arr_7 [i_1]) > (arr_7 [i_1]))) ? (((arr_8 [i_1] [i_1]) ? -32756 : 0)) : ((((arr_6 [i_1 + 2]) <= var_5)))))) ? 18446744073709551615 : (((var_3 & 0) * (((((arr_2 [i_1]) == (arr_0 [i_1])))))))));
        var_14 = 8632486125197393031;
        var_15 = (arr_1 [i_1 + 2] [i_1]);
        arr_9 [i_1] = (((((~(arr_3 [i_1 + 1])))) ? (arr_3 [i_1 + 2]) : (((((arr_3 [i_1 + 1]) || (arr_3 [i_1 + 2])))))));
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        var_16 = (max(var_8, (((arr_1 [i_2] [i_2]) ? (((((arr_1 [i_2] [i_2]) > -4)))) : (arr_0 [i_2])))));
        arr_14 [i_2] [i_2] = (arr_12 [i_2]);
        arr_15 [i_2] = 37330;
        var_17 = var_5;
        arr_16 [i_2] = (arr_12 [i_2]);
    }
    var_18 = var_6;
    #pragma endscop
}
