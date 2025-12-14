/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157385
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((23 ? ((var_12 ? var_9 : var_3)) : var_3));
    var_20 = ((((((((var_13 ? 0 : var_10))) ? var_11 : -1483039557))) ? (max((((var_14 ? -1483039544 : var_10))), ((var_15 ? var_0 : var_14)))) : var_14));

    for (int i_0 = 3; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_21 = 3;
        arr_4 [i_0] = ((((((arr_0 [i_0]) ? (arr_3 [0] [i_0]) : var_15))) ? (max((((arr_0 [i_0]) ? 65535 : -2147483630)), (arr_0 [i_0]))) : (((24287 || -16351) / ((var_13 ? var_10 : (arr_1 [i_0])))))));
    }
    for (int i_1 = 3; i_1 < 10;i_1 += 1) /* same iter space */
    {
        var_22 = arr_0 [2];
        var_23 = ((-5 ? ((211 ? 1 : -2)) : (((arr_1 [4]) * 0))));
    }
    var_24 = var_0;
    #pragma endscop
}
