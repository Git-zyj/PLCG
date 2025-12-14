/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175782
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = var_3;
        arr_5 [i_0] = 42;
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        arr_9 [2] = (arr_8 [6]);
        arr_10 [0] [0] = (!7);
        arr_11 [i_1] = ((min((arr_0 [i_1] [i_1]), (arr_6 [i_1] [i_1]))));
        arr_12 [i_1] = (max((((((min((arr_3 [i_1]), 248))) ? (((((arr_3 [i_1]) < -2567779755386167826)))) : (((arr_8 [i_1]) ? (arr_8 [i_1]) : (arr_7 [i_1])))))), ((((6 ? 5320411553578065982 : 13126332520131485626)) ^ (106 > var_2)))));
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        arr_16 [i_2] [i_2] = (!8188374989625616038);
        arr_17 [i_2] [i_2] = var_1;
    }
    var_13 = (var_8 > var_12);
    var_14 = var_12;
    var_15 = var_4;
    #pragma endscop
}
