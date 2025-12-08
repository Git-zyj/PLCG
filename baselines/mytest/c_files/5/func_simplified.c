/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5
Invocation: ../scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5 -o /data/zyj/loop_generator/baselines/yarpgen/mytest/c_files/5
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (unsigned int i_0 = 3; i_0 < 24; i_0 += 1)
    {
        var_18 = (~var_16);
        var_19 = (+(2607637449U));
        arr_3 [i_0] = ((~(arr_0 [i_0])));
        arr_4 [i_0] = 52055;
    }
    for (int i_1 = 0; i_1 < 1; i_1 += 1)
    {
        var_20 = ((+(max((arr_6 [12]), (arr_6 [i_1])))));
        var_21 = ((+(max(((((arr_1 [i_1]) & var_7))), (((arr_6 [i_1]) + (arr_5 [i_1])))))));
        var_22 += (-(max(var_6, ((99 ? (1687329846U) : 48085)))));
    }

    for (int i_2 = 0; i_2 < 16; i_2 += 3)
    {
        var_23 *= (((arr_2 [i_2] [i_2]) / (2607637449U)));
        var_24 = ((-(max((((650742567U) ? (2900448609U) : -2048984710)), (1065353216U)))));
        var_25 = ((0 != (max((min((6282607856679375379ULL), -6)), 119))));
    }
    for (int i_3 = 0; i_3 < 24; i_3 += 4)
    {
        var_26 *= 210;
        var_27 += ((+(((((max(48101, 119)))) / ((~(-3906699016264426204LL)))))));
        arr_13 [i_3] |= ((((max((min((2900448609U), (6282607856679375394ULL))), (arr_12 [i_3])))) || ((max(-119, -789829928)))));
    }
    #pragma endscop
}
