/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174485
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_12 ^= (((255 == 3) ? ((((arr_2 [i_0 - 2] [i_0 + 2]) && 1))) : var_5));
        arr_3 [5] [1] = ((-5 ? (((arr_1 [i_0 + 2] [i_0]) / var_4)) : (((-(arr_0 [i_0 + 1] [4]))))));
        var_13 = var_3;
    }
    var_14 = (min(24001, ((-1755639470049712192 ? 2807822705 : var_11))));
    #pragma endscop
}
