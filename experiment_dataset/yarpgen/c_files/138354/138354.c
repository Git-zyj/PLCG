/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138354
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = ((((((28108 && (arr_1 [i_0])) || (var_1 && 7))))));
        var_10 = (max(((~(arr_0 [i_0]))), ((28 & (arr_0 [3])))));
        arr_3 [i_0] |= (max((((arr_0 [i_0]) + var_0)), -30));
    }
    var_11 = (max(var_11, ((((max((min(2280326696498181611, 727224533)), (((var_1 ? var_6 : var_0))))) != (min(var_9, -2280326696498181628)))))));
    #pragma endscop
}
