/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142585
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 49395;

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_17 = (((~var_1) ? (arr_0 [i_0 + 1]) : -8589934592));
        var_18 = (max(var_18, ((min(((var_12 >> (49 - 27))), (!var_15))))));
        var_19 = (min(var_19, (((!(((var_13 ? (arr_1 [i_0 - 1]) : (arr_1 [7])))))))));
        arr_2 [i_0 - 1] = (((arr_0 [i_0 + 1]) ? ((~(arr_0 [i_0 + 1]))) : ((~(arr_0 [i_0 + 1])))));
        arr_3 [i_0] [i_0] = (!(((+(((arr_1 [i_0]) / -8105238970990792307))))));
    }
    #pragma endscop
}
