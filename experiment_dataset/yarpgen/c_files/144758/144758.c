/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144758
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_9;
    var_11 = -var_8;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] = var_6;
        arr_4 [i_0] = ((((~(arr_1 [i_0]))) ^ (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_2 [i_0])))));
    }
    for (int i_1 = 2; i_1 < 23;i_1 += 1)
    {
        arr_8 [i_1 - 1] = ((~(((((!(arr_6 [9])))) >> (((arr_6 [i_1 - 2]) ? 1 : (arr_7 [i_1])))))));
        arr_9 [i_1] = (max(((max((arr_5 [i_1 - 2] [i_1 - 1]), (arr_5 [i_1 + 1] [i_1 - 2])))), (((arr_5 [i_1] [i_1]) ? (arr_7 [i_1]) : var_2))));
        arr_10 [i_1] = (((max(((var_8 ? (arr_5 [i_1] [i_1]) : (arr_6 [i_1 - 1]))), ((((arr_6 [9]) != (arr_5 [i_1] [i_1])))))) + (arr_5 [1] [i_1])));
        arr_11 [i_1 + 1] = arr_7 [15];
    }
    var_12 = var_4;
    var_13 = var_6;
    #pragma endscop
}
