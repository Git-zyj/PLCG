/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187501
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = -0;
        var_11 = (min(var_11, -1274686005));
        var_12 = (max(var_12, ((max(((((arr_1 [2] [2]) <= (arr_0 [6])))), (max(var_2, (arr_0 [10]))))))));
        arr_3 [i_0] = ((((((~114688) ^ -15964))) ? (((min(-120, var_0)))) : (max(((var_7 ? (arr_0 [i_0]) : (arr_0 [i_0]))), (arr_0 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_13 = (((!var_7) <= ((max(var_8, (max(var_7, 0)))))));
        arr_7 [i_1] = (1 ? (arr_0 [i_1]) : ((((arr_1 [i_1] [i_1]) && ((((arr_4 [i_1]) - (arr_4 [i_1]))))))));
        arr_8 [i_1] = (((((min(1, var_5)))) ? (arr_4 [i_1]) : (var_4 != 5429212785222638376)));
    }
    var_14 = var_4;
    #pragma endscop
}
