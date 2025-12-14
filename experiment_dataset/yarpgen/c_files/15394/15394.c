/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15394
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = max((min((arr_1 [i_0] [i_0]), 34326183936)), (((14 > (((-140737488355328 % (-2147483647 - 1))))))));
        var_20 = (((((-18446744039383367685 ? (arr_0 [i_0]) : (arr_0 [i_0])))) ? ((((var_10 < var_10) ? ((-(arr_1 [i_0] [4]))) : (arr_1 [i_0 - 3] [i_0])))) : (((arr_0 [i_0]) / (((-2147483625 / (arr_1 [i_0] [i_0 - 3]))))))));
        arr_3 [i_0] = (arr_0 [i_0 - 2]);
        var_21 = (max((((893380925618676894 >= (((4194300 ? -1 : (-32767 - 1))))))), (((((-11 ? var_11 : (arr_0 [6])))) ? 27 : var_14))));
    }
    var_22 = ((-((-(var_3 & var_10)))));
    var_23 = ((((((49152 >= 2866038041490706808) ? var_8 : var_1))) ? (((0 + 18446744039383367679) - var_10)) : ((((min(18446744073709551614, var_19))) ? var_14 : (34326183939 % 11)))));
    var_24 = 23;
    #pragma endscop
}
