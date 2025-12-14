/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169965
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = ((((arr_0 [i_0]) | var_2)));
        arr_3 [i_0] = ((((max((max(-2496929861035146166, 220)), ((min(69, (arr_1 [i_0] [i_0]))))))) ? ((((arr_1 [i_0] [i_0]) && (((1024 ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0]))))))) : ((max((arr_0 [i_0]), -16980)))));
        arr_4 [i_0] = (~var_0);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_10 = (max(var_10, ((min((arr_5 [0]), (((min(85, 64508)))))))));
        arr_8 [i_1] = ((min((arr_6 [i_1] [i_1]), (arr_6 [i_1] [i_1]))) > ((((!(arr_6 [i_1] [i_1]))))));
        var_11 ^= (((1 ? (arr_6 [i_1] [i_1]) : (arr_6 [i_1] [i_1]))) > (((arr_6 [i_1] [i_1]) ^ (arr_6 [i_1] [i_1]))));
        arr_9 [1] [i_1] = (arr_7 [i_1]);
        arr_10 [i_1] = (min(((((arr_6 [i_1] [i_1]) && (arr_6 [i_1] [i_1])))), (((arr_6 [i_1] [i_1]) | (arr_6 [i_1] [i_1])))));
    }

    for (int i_2 = 3; i_2 < 18;i_2 += 1)
    {
        var_12 = (arr_1 [i_2] [i_2]);
        arr_13 [i_2] = ((!((((arr_5 [i_2]) + ((min(-1468410640, (arr_1 [i_2] [i_2])))))))));
    }
    var_13 = 1055;
    var_14 = (((((var_1 ? var_2 : -var_4))) ? (((var_8 & 64512) ? (17158647442221760273 + 1) : ((var_0 ? var_6 : var_9)))) : var_8));
    var_15 = var_8;
    #pragma endscop
}
