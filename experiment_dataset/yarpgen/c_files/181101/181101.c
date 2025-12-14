/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181101
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, ((((((((2323361594799845048 ? -9679 : var_2)) - var_2))) ? ((-((var_8 ? var_1 : 38)))) : -var_1)))));
    var_16 = (max(var_16, var_10));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 = (max(var_17, ((((((arr_1 [4]) + var_7)) * (((-(((arr_1 [2]) * var_0))))))))));
        var_18 = (max(var_18, (arr_0 [i_0])));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_19 = (arr_3 [i_1] [i_1]);
        var_20 = (max(var_20, (arr_4 [i_1])));
    }
    for (int i_2 = 1; i_2 < 15;i_2 += 1)
    {
        var_21 = ((((~(arr_4 [i_2 + 3])))) ? (arr_4 [i_2 + 3]) : ((max(1, var_11))));
        var_22 = 1;
        var_23 = (((((arr_4 [i_2 - 1]) - 9678))) ? var_10 : (arr_4 [i_2 + 1]));
        var_24 = (-var_13 || ((max((arr_5 [i_2 - 1] [i_2 - 1]), (arr_5 [i_2 + 3] [i_2 - 1])))));
        var_25 = (max((((var_13 > (arr_6 [i_2] [i_2])))), (min((arr_6 [i_2 + 3] [i_2 + 3]), (arr_3 [i_2] [i_2 + 1])))));
    }
    for (int i_3 = 3; i_3 < 22;i_3 += 1)
    {
        var_26 = var_13;
        var_27 = (max(var_27, (((((max((arr_8 [i_3 - 1]), -9679))) || (arr_8 [i_3 - 2]))))));
        var_28 = ((-(arr_7 [i_3])));
    }
    var_29 = (~var_9);
    #pragma endscop
}
