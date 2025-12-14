/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153493
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min((min((max(0, var_14)), var_1)), ((max((min(4294967295, 32768)), 16)))));
    var_21 ^= ((!(((((min(var_11, 16))) ? ((var_14 ? var_14 : 4294967280)) : (((35184372088832 ? var_8 : 4294967280))))))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_22 = (min(var_22, (((((max((arr_1 [i_0]), ((min(32, -13)))))) ? ((~(arr_1 [i_0]))) : (min(-20, 16)))))));
        var_23 = (max(4935, ((((((arr_0 [i_0]) != (arr_1 [i_0])))) + (arr_0 [i_0])))));
        var_24 = (max(((min((arr_0 [i_0]), (arr_0 [i_0])))), (arr_0 [i_0])));
    }
    #pragma endscop
}
