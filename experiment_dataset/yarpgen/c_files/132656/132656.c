/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132656
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, (((2682175592 != (min(var_7, 18446744073709551615)))))));
    var_13 |= 32767;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_14 = (arr_0 [i_0]);
        var_15 = (min(var_15, (((((arr_0 [i_0]) || (((var_0 ? (arr_1 [i_0]) : (arr_0 [i_0]))))))))));
        var_16 = (min(1185737714, 1));
    }
    #pragma endscop
}
