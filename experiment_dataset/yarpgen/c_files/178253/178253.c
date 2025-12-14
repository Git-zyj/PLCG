/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178253
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_14 = (max(var_14, (((-((-(arr_1 [i_0] [i_0]))))))));
        arr_2 [i_0] |= ((((((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])))) == ((var_12 ? (arr_1 [i_0] [i_0]) : 9095148960328237850))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_15 *= ((((((arr_3 [i_1]) ? (arr_5 [20]) : (arr_5 [i_1])))) ? (!var_11) : (arr_5 [i_1])));
        arr_6 [0] &= ((((((max((arr_5 [i_1]), var_8))) ? (arr_3 [i_1]) : ((0 ? (arr_5 [8]) : 4095))))) ? (((arr_4 [i_1] [i_1]) ? (arr_4 [i_1] [i_1]) : (arr_4 [i_1] [i_1]))) : (((((1 ? (arr_3 [i_1]) : (arr_3 [i_1])))) ? (arr_4 [i_1] [18]) : ((min(var_11, (arr_4 [i_1] [i_1])))))));
        var_16 = ((var_9 << ((+(((arr_5 [i_1]) ? 28 : var_13))))));
    }
    var_17 -= (min(var_3, -4095));
    var_18 = ((((((min(var_13, var_1))) ? (min(-1751111491, (-32767 - 1))) : ((var_5 ? var_12 : var_3)))) <= -var_13));
    var_19 = var_11;
    #pragma endscop
}
