/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189137
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= min(var_2, (((max(-19343, var_3)))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_16 = ((((((arr_0 [i_0] [i_0]) ? (((arr_0 [i_0] [i_0]) ? var_10 : var_2)) : (((13857590291245969485 ? (arr_0 [4] [4]) : (arr_1 [i_0]))))))) ? ((((arr_2 [i_0]) <= (arr_1 [i_0])))) : (((!(arr_1 [i_0]))))));
        var_17 = (max(((min(var_4, (((arr_2 [i_0]) ? var_4 : (arr_1 [i_0])))))), ((((min((arr_1 [i_0]), (arr_2 [i_0])))) ? ((min(180, (arr_2 [i_0])))) : (((arr_2 [i_0]) ? var_13 : 180))))));
        arr_3 [i_0] = (((((var_1 >> ((((-(arr_1 [i_0]))) + 17082))))) ? (((max(var_7, 80)))) : ((~(arr_1 [i_0])))));
        arr_4 [i_0] [i_0] = (((((var_11 ? (((76 - (arr_2 [i_0])))) : 4847326564410878038))) ? ((((((var_2 ? (arr_0 [i_0] [i_0]) : var_14))) ? (max(4174209589, 180)) : ((((arr_0 [i_0] [i_0]) * var_12)))))) : (min(((((arr_0 [i_0] [i_0]) || (arr_2 [i_0])))), (max(var_2, (arr_2 [0])))))));
    }
    #pragma endscop
}
