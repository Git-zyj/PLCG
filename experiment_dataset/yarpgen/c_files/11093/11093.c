/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11093
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, (((~(~var_8))))));
    var_15 ^= var_0;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [11] = ((min((arr_1 [4]), ((min((arr_0 [i_0] [i_0]), (arr_0 [0] [i_0])))))) & (((arr_1 [i_0]) ^ (((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0]))))));
        var_16 = (max(var_16, ((min((arr_0 [i_0] [i_0]), (((!(arr_2 [i_0])))))))));
        var_17 = (max(var_17, ((min((arr_2 [i_0]), (((min((arr_2 [i_0]), (arr_1 [1]))) * ((((arr_0 [i_0] [i_0]) / (arr_2 [i_0])))))))))));
    }
    for (int i_1 = 1; i_1 < 18;i_1 += 1)
    {
        var_18 |= (min((arr_4 [i_1] [i_1 + 1]), (min((max((arr_6 [i_1] [i_1]), (arr_4 [i_1] [i_1]))), (arr_5 [i_1] [i_1])))));
        arr_7 [i_1] = (min((((((((arr_4 [i_1] [18]) | (arr_4 [i_1] [i_1])))) ? (arr_5 [i_1] [13]) : ((min((arr_6 [i_1 + 1] [i_1]), (arr_5 [i_1 + 2] [i_1]))))))), ((((min((arr_4 [i_1] [i_1]), (arr_6 [i_1] [i_1])))) ? ((~(arr_4 [i_1] [i_1]))) : (arr_4 [i_1] [i_1])))));
        var_19 += (((((-((min(32768, 41)))))) ? (arr_5 [i_1] [i_1]) : (min(41, (((arr_6 [i_1] [i_1]) ? -43 : -42))))));
    }
    var_20 ^= ((var_5 - (max(((min(var_10, var_1))), (var_2 ^ var_6)))));
    var_21 *= (max(((-((var_10 ? var_8 : var_3)))), (((!(var_4 != var_10))))));
    #pragma endscop
}
