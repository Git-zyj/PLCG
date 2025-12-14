/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133999
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_18 = 63789;
        var_19 ^= ((max((arr_0 [2] [i_0 + 1]), (arr_1 [i_0 + 1]))) | (arr_1 [i_0 + 2]));
        arr_2 [4] = (((-(arr_0 [i_0] [i_0 + 3]))));
        arr_3 [i_0 + 1] = (min(((max((arr_0 [i_0 + 1] [i_0 + 3]), ((-(arr_1 [i_0])))))), (max((((var_10 ? (arr_1 [3]) : 255))), (max(var_9, (arr_0 [i_0] [i_0])))))));
        arr_4 [i_0] = ((((2 ? -15807 : 9223372036854775807)) - ((((arr_0 [i_0 + 1] [i_0 + 1]) ? var_10 : -508549774)))));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_20 = (min(-64, ((var_14 ? var_2 : (arr_6 [i_1])))));
        var_21 = ((!(((((max(-6437, var_12))) * 33554432)))));
        var_22 *= (min(9223372036854775797, ((max((arr_5 [i_1]), (min((arr_5 [12]), var_12)))))));
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        var_23 *= (((!-9223372036854775796) || ((((9223372036854775797 ? -9223372036854775797 : 142))))));
        var_24 |= (min(92, ((((arr_8 [10]) || (arr_10 [i_2]))))));
    }
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        var_25 -= (min((arr_11 [i_3]), ((-(arr_11 [i_3])))));
        var_26 = (((((65535 ? -55 : 127))) * -885008456));
    }
    var_27 = (max((!9223372036854775799), var_16));
    #pragma endscop
}
