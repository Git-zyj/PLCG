/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130163
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (var_3 - (-2147483647 - 1));
    var_14 = var_0;
    var_15 = (min(var_15, (((max(var_8, 0))))));

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        arr_3 [9] [9] = ((((min(((-21162 ? (arr_2 [i_0]) : var_7)), 70))) / ((((min((arr_1 [9] [i_0]), (arr_2 [i_0])))) ? (arr_0 [i_0 - 2]) : (arr_2 [i_0 + 1])))));
        var_16 = (var_6 ? (((arr_2 [i_0 - 2]) ? (arr_0 [i_0 - 2]) : (arr_0 [i_0 - 1]))) : (((arr_0 [i_0 - 1]) ? (arr_0 [i_0 + 2]) : (arr_2 [i_0 + 1]))));
    }
    #pragma endscop
}
