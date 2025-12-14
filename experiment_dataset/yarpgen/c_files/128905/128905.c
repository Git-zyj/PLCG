/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128905
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_3;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_15 = ((((((arr_0 [i_0]) ? (arr_0 [i_0]) : var_7))) ? (((((var_13 >= (arr_2 [6])))))) : ((((((-127 - 1) ? 1 : 16))) ? (arr_1 [i_0]) : (((arr_0 [i_0]) ? 0 : var_12))))));
        var_16 = (((((((((arr_0 [i_0]) ? var_4 : var_5))) ? (arr_2 [i_0]) : (arr_2 [i_0])))) - ((var_2 ? var_10 : (((min(1, 33))))))));
        var_17 &= (((arr_1 [i_0]) ? (max(255, ((-1086799786926305005 ? var_3 : (arr_1 [i_0]))))) : (((((((arr_0 [i_0]) % var_7)) < ((((!(arr_2 [i_0])))))))))));
        var_18 = 0;
    }
    for (int i_1 = 2; i_1 < 15;i_1 += 1)
    {
        var_19 |= (((((-(arr_1 [i_1 + 1])))) <= (max((arr_2 [i_1]), (arr_0 [i_1])))));
        var_20 = (((((7 ? (((var_13 < (arr_0 [9])))) : ((((arr_3 [i_1]) < (arr_3 [i_1]))))))) ? ((((((arr_4 [i_1] [9]) ? var_1 : -7180))) ? (arr_1 [i_1]) : ((0 ? var_6 : (arr_2 [i_1]))))) : (((~(min(44, (arr_1 [i_1]))))))));
        var_21 = (((min((arr_0 [i_1 - 2]), (arr_2 [i_1 - 1]))) << (min(var_10, (arr_2 [2])))));
    }
    #pragma endscop
}
