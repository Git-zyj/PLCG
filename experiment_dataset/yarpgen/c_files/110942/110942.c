/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110942
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = -var_3;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_21 = (((((-(arr_1 [i_0])))) ? var_15 : ((~(arr_0 [i_0])))));
        arr_2 [i_0] = (min((((((max(-1, (arr_1 [i_0])))) != ((-1 ? (arr_1 [i_0]) : 40))))), 972007896));
        var_22 = (((-39 ^ var_5) && ((((max(var_15, 55))) == ((var_6 ? (arr_1 [i_0]) : var_8))))));
    }
    var_23 = -5675181975228040076;
    var_24 = 40;
    #pragma endscop
}
