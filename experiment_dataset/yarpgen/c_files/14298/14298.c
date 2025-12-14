/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14298
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= var_12;
    var_19 -= var_0;
    var_20 += ((var_2 ? (((((((var_2 ? var_4 : var_2))) != var_8)))) : (((0 ? var_5 : var_8)))));

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0 + 1] |= (((((((arr_0 [i_0]) ? (arr_0 [i_0 - 2]) : (arr_2 [3]))))) ? (~var_16) : (min((max((arr_1 [i_0]), (arr_0 [i_0]))), (arr_0 [i_0])))));
        arr_4 [2] = ((27 >> (-5301140105362374634 + 5301140105362374646)));
        arr_5 [4] [1] = ((((((3663486405886716221 ? 15 : 250))) ? ((var_13 ? (arr_1 [i_0]) : (-2147483647 - 1))) : var_16)));
        arr_6 [i_0] = (((arr_1 [i_0]) ? 136884366 : (((((var_10 | (arr_0 [i_0])))) ? -18 : (((min((arr_2 [i_0]), 250))))))));
    }
    #pragma endscop
}
