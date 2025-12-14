/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162026
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_4;

    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] [11] = var_3;
        var_12 = var_7;
        var_13 = -1051817301788295799;
    }
    for (int i_1 = 3; i_1 < 7;i_1 += 1)
    {
        var_14 += (min((max((arr_0 [4] [i_1 - 3]), (arr_0 [2] [i_1 + 2]))), ((max(75, var_9)))));
        arr_5 [i_1] = (min(2260440997495647084, 1));
        var_15 = ((((!((max(var_1, (arr_4 [i_1])))))) ? -326537260 : ((((max(255, var_6)))))));
        var_16 = ((57131 || ((0 || (var_4 >= var_1)))));
    }
    for (int i_2 = 1; i_2 < 10;i_2 += 1)
    {
        var_17 = (min(var_17, ((min((((!(arr_1 [i_2 + 1])))), (((arr_0 [18] [i_2 + 1]) ? var_1 : (arr_0 [1] [i_2 + 1]))))))));
        arr_8 [i_2] = (((((var_9 || -8) >> (255 - 224))) >= (min((arr_1 [i_2]), 248))));
        arr_9 [i_2] [8] = (arr_6 [i_2]);
    }
    #pragma endscop
}
