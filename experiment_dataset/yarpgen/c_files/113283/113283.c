/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113283
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((1 ? var_0 : (max((var_2 + 0), (var_5 - 0)))));
    var_12 = (var_10 < ((min(var_10, (max(1, 1))))));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_13 = max(1, 1);
        arr_3 [i_0] = (min((((arr_0 [i_0 - 1]) ? (arr_0 [i_0 - 1]) : 1)), (1 / 1)));
    }
    var_14 = var_7;
    #pragma endscop
}
