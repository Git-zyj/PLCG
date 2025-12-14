/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140351
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 839518280;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_17 -= ((((((var_5 && 18446744073709551615) ? (arr_1 [i_0]) : (arr_2 [0])))) ? ((17 ? 0 : (arr_1 [1]))) : ((((min(42890, var_10))) ? (arr_2 [1]) : ((163 >> (var_12 - 33)))))));
        var_18 &= -1560913514889362734;
        var_19 = (arr_2 [i_0]);
        var_20 = (arr_2 [i_0]);
        var_21 = 18446744073709551599;
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_5 [6] = ((+(((arr_4 [0] [i_1]) ? (arr_4 [i_1] [i_1]) : -17344))));
        var_22 = (min(((((-126 ? 24563 : 4649580140656810561)) ^ -4649580140656810561)), (-4649580140656810561 != 42888)));
        var_23 &= ((118 ? -107 : 0));
        var_24 *= (max((arr_3 [i_1]), 17705));
        var_25 = ((max((arr_3 [i_1]), -4649580140656810562)));
    }
    #pragma endscop
}
