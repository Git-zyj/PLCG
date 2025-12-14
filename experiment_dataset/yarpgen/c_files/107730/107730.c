/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107730
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_13 -= ((!var_4) % (min((~410075612), -70)));
        arr_2 [i_0] = (i_0 % 2 == 0) ? (((((((((520192 << (((arr_0 [i_0]) - 9749))))) ? (3569840177863213943 || 234) : (arr_0 [i_0])))) / (((((-(arr_0 [i_0])))) ? (min(520192, var_10)) : (arr_0 [i_0])))))) : (((((((((520192 << (((((arr_0 [i_0]) - 9749)) - 19466))))) ? (3569840177863213943 || 234) : (arr_0 [i_0])))) / (((((-(arr_0 [i_0])))) ? (min(520192, var_10)) : (arr_0 [i_0]))))));
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 15;i_1 += 1)
    {
        arr_5 [i_1] = var_10;
        var_14 = -var_3;
    }
    for (int i_2 = 2; i_2 < 9;i_2 += 1)
    {
        var_15 |= ((~(~7955)));
        var_16 = ((~(min(18446744073709031423, (min(18446744073709031423, 248))))));
        arr_8 [i_2] = (~var_8);
    }
    var_17 ^= var_8;
    var_18 = var_1;
    #pragma endscop
}
