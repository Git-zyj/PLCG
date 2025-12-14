/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185673
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= ((13 ? 1 : -1856132078));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_18 = (max((arr_1 [i_0]), (arr_0 [i_0])));
        var_19 = (arr_2 [5]);
        var_20 = ((((max(((1369709468 | (arr_0 [0]))), (arr_0 [i_0])))) ? (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0]))) : (((255 ? 21 : 1428158030)))));
    }
    var_21 = (min((0 == var_14), var_10));
    var_22 |= ((((min((250 != var_13), var_13))) ? var_16 : -1580631288));
    #pragma endscop
}
