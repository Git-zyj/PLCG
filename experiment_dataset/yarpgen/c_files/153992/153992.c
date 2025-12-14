/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153992
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((-((var_9 ? var_10 : 255))))) ? (max((max(var_6, 0)), (max(var_2, 7002175768449864583)))) : var_0));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        var_12 -= var_3;
        arr_2 [i_0] [i_0] = (((arr_1 [i_0 + 4] [i_0 + 4]) ? (arr_0 [i_0 - 3] [i_0 + 4]) : (arr_0 [i_0 - 3] [i_0 + 4])));
        var_13 = ((((((arr_1 [i_0] [i_0]) ? var_7 : var_5))) ? (((var_7 - (arr_0 [i_0] [i_0])))) : ((212 ? var_2 : var_6))));
        arr_3 [i_0] &= (0 % 7002175768449864583);
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        arr_6 [i_1] = (arr_5 [i_1]);
        arr_7 [i_1] = ((((((arr_4 [i_1]) ? var_6 : (arr_4 [i_1])))) ? (min(((((arr_4 [i_1]) > 17))), ((1 & (arr_5 [i_1]))))) : (arr_5 [i_1])));
        var_14 = ((-(((!(((7 ? var_5 : 231))))))));
    }
    var_15 = var_10;
    var_16 = (((((3354477321803421686 ? var_3 : var_0)))) / ((~((var_2 << (var_3 - 15758279801670761888))))));
    var_17 &= var_8;
    #pragma endscop
}
