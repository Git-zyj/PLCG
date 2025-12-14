/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131611
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= (((((!((max(7769, 33554400)))))) % (((var_0 >= ((var_15 ? var_8 : var_2)))))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_4 [21] [6] = arr_0 [10];
        var_18 |= (((arr_0 [i_0]) ? -1 : (var_14 / 33554400)));
        arr_5 [i_0] [i_0] = (max((arr_2 [i_0]), (arr_2 [i_0])));
        arr_6 [i_0] [20] = (arr_3 [i_0] [i_0]);
        var_19 |= ((~(arr_2 [i_0])));
    }
    var_20 = ((!(((var_9 / (max(var_1, -818976746)))))));
    #pragma endscop
}
