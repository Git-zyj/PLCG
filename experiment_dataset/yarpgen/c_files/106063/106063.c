/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106063
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_11 &= 3694956760482905852;
        var_12 = (max(var_12, (+-38)));
        var_13 &= (((((~(arr_1 [i_0] [i_0])))) ? (arr_0 [i_0]) : (((arr_0 [i_0]) ? ((~(arr_0 [i_0]))) : (arr_0 [i_0])))));
    }
    var_14 = var_3;
    #pragma endscop
}
