/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162221
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, var_7));
    var_19 -= var_10;
    var_20 |= var_8;
    var_21 &= ((!29161) <= ((((1 << (var_8 - 154))) >> ((max(-29156, 21))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_22 = (max(var_22, (((29155 ? (((!(arr_1 [i_0])))) : 29)))));
        var_23 &= ((((!(arr_3 [i_0])))) - (arr_2 [i_0]));
        arr_4 [7] = (((((605931204 > (arr_3 [i_0])))) % ((((arr_0 [i_0]) <= (arr_0 [i_0]))))));
        var_24 -= (((((-(arr_0 [i_0])))) ^ (arr_3 [i_0])));
    }
    #pragma endscop
}
