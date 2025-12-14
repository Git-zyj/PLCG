/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149385
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_9, (max(((2877229670 ? 2809999005 : var_12)), var_10))));
    var_17 |= var_9;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] [i_0] |= (((-((max((arr_1 [i_0] [i_0]), 32767))))));
        arr_4 [i_0] = (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {
        var_18 = (((((var_10 ? (arr_7 [i_1] [i_1]) : ((-32765 ? 4294967295 : (arr_5 [i_1])))))) ? (var_0 > 323621709) : (min((arr_6 [i_1]), (arr_6 [3])))));
        arr_8 [i_1] |= (((max(0, (((arr_5 [i_1]) - (arr_7 [i_1] [i_1]))))) >> (24043 - 23993)));
        var_19 = (min(var_19, (((((max((arr_5 [i_1]), (arr_5 [i_1])))) ? (((((-(arr_7 [i_1] [i_1])))) ? ((((arr_6 [i_1]) ? 206 : (arr_7 [i_1] [i_1])))) : (arr_6 [i_1]))) : 30268)))));
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1) /* same iter space */
    {
        var_20 |= (((arr_9 [i_2]) < (((arr_10 [i_2]) / (arr_10 [i_2])))));
        arr_12 [i_2] = (max(((((~32767) ? var_3 : -var_9))), (max((((arr_10 [i_2]) ? 711588598535722642 : (arr_9 [i_2]))), 114))));
    }
    var_21 = ((var_15 ? (((var_11 - -11000) ? (((min(-1, var_9)))) : ((var_14 ? 711588598535722642 : 4194303)))) : var_0));
    var_22 = (max(var_22, (var_8 - var_2)));
    #pragma endscop
}
