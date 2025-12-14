/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153386
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((var_1 / var_16) / var_11)) * var_13));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_20 |= 0;
        var_21 += (min((min((arr_1 [i_0]), (arr_1 [i_0]))), (((arr_1 [i_0]) ? (arr_0 [i_0]) : (arr_2 [i_0])))));
    }
    for (int i_1 = 1; i_1 < 15;i_1 += 1)
    {
        var_22 = ((((((((!(arr_0 [i_1])))) >= (arr_2 [i_1])))) == (arr_1 [7])));
        var_23 = (min(var_23, ((((var_1 ^ -17182) % (((((arr_3 [i_1]) ? 0 : (arr_0 [i_1]))) | (arr_0 [i_1 + 1]))))))));
    }
    for (int i_2 = 1; i_2 < 9;i_2 += 1)
    {
        var_24 += 5952;
        var_25 = ((((min((arr_2 [i_2 + 3]), (arr_2 [i_2 + 2])))) + ((5958 ^ (arr_2 [i_2 + 3])))));
        arr_7 [i_2] = (min((arr_0 [i_2]), (~5965)));
        arr_8 [i_2 + 2] = (((((((-9223372036854775807 - 1) ? (arr_4 [6]) : (arr_0 [i_2]))) >> (((((arr_4 [14]) | var_9)) - 26418252)))) ^ ((~(arr_6 [i_2 + 1])))));
    }
    var_26 = (var_8 < ((var_11 & (var_8 | var_7))));
    var_27 -= (!var_3);
    #pragma endscop
}
