/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154576
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_9, ((((var_11 ? var_10 : 33554416)) * 59))));
    var_14 = ((59 ? var_7 : var_8));

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0 - 1] [21] = ((-(arr_1 [1])));
        arr_4 [10] = (((arr_0 [i_0 + 1]) ? (arr_0 [i_0 - 1]) : (((arr_0 [i_0 + 1]) | (arr_0 [i_0 - 1])))));
        var_15 = (min((((arr_2 [17] [i_0 - 1]) << (((arr_0 [1]) + 1249285632)))), (arr_1 [i_0 - 2])));
    }
    #pragma endscop
}
