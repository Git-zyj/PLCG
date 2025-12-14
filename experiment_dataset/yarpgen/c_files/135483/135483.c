/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135483
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (max((min(((8192 ? 1 : (arr_2 [i_0] [i_0]))), (max(var_10, (arr_2 [i_0] [i_0]))))), (max(((5138 ? 5139 : (arr_0 [i_0]))), (arr_0 [i_0])))));
        arr_4 [i_0] = (min(((-5138 ? var_8 : var_10)), (((var_1 ? (arr_1 [i_0]) : var_5)))));
        arr_5 [i_0] [i_0] = (max(((((((var_8 & (arr_2 [3] [i_0])))) ? var_2 : var_6))), (((-31 ? var_7 : 274877906943)))));
        var_11 = (((((0 ? (arr_1 [i_0]) : var_5))) / (min((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_0])))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {
        var_12 = ((-(((-31 ? 1 : (arr_7 [i_1]))))));
        var_13 = (max(var_13, (arr_7 [i_1])));
    }
    var_14 |= (((!var_3) ? (((2603145353 ? var_4 : var_5))) : var_6));
    var_15 = (min(var_15, 274877906953));
    var_16 = (4294967295 - 26);
    #pragma endscop
}
