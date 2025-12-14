/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138148
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, 47));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_17 = ((((19685 <= (arr_0 [i_0] [i_0]))) ? -var_1 : 1));
        var_18 = ((((min((arr_2 [i_0]), (arr_2 [i_0])))) ? (((max((arr_3 [i_0]), var_10)))) : (var_0 / 1)));
        arr_4 [i_0] [i_0] = (((((((-(arr_2 [i_0]))) + (~64649)))) <= var_1));
    }
    #pragma endscop
}
