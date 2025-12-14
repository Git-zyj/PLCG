/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144420
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_10 += max(255, 0);
        var_11 = arr_2 [15];
        var_12 ^= (((((!(arr_3 [i_0])))) * ((-((-(arr_3 [i_0])))))));
        var_13 *= ((+((((((arr_2 [i_0]) * (arr_1 [i_0]))) > ((~(arr_0 [i_0] [i_0]))))))));
    }
    for (int i_1 = 2; i_1 < 20;i_1 += 1)
    {
        var_14 = (((((arr_6 [i_1 - 2]) ? (((arr_4 [i_1 + 2]) ? (arr_4 [i_1 + 2]) : (arr_6 [i_1]))) : (((arr_4 [i_1]) / (arr_5 [2]))))) * (((arr_4 [i_1 + 1]) ? (arr_5 [1]) : (arr_4 [i_1 + 1])))));
        var_15 = (max(var_15, ((max((((-(arr_5 [12])))), ((18446744073709551615 ? 9458590698134217671 : ((2 ? (arr_6 [i_1]) : 8988153375575333935)))))))));
    }
    var_16 |= var_1;
    var_17 &= ((((((((var_1 ? var_0 : var_7))) ? ((var_0 ? var_4 : var_1)) : var_2))) ? (max((14162 - 17), var_5)) : (((((var_5 ? var_3 : var_8)) * var_7)))));
    #pragma endscop
}
