/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147776
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(249, 255));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_14 = (max(((max(234, 234))), (((((max(var_2, (arr_0 [i_0] [i_0])))) ? (arr_0 [i_0] [i_0]) : (((arr_1 [i_0]) * -61)))))));
        arr_2 [i_0] [i_0] = max((arr_0 [0] [i_0]), ((((arr_0 [i_0] [i_0]) ? (arr_1 [1]) : var_7))));
        var_15 = (arr_1 [i_0]);
    }
    #pragma endscop
}
