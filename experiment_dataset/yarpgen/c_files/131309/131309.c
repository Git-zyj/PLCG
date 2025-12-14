/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131309
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_13 = (max(var_13, (((((((!(arr_0 [0]))))) <= (arr_1 [i_0] [4]))))));
        arr_2 [i_0] &= ((((var_1 ? var_8 : var_12))) ? var_4 : -27);
        arr_3 [11] = ((var_6 ? (((arr_1 [i_0] [1]) ? 9223372036854775807 : (arr_0 [i_0]))) : (arr_0 [i_0])));
        var_14 *= 16082123252971289439;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        var_15 = (max(var_15, (arr_1 [i_1] [5])));
        arr_6 [i_1] = var_7;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        arr_10 [i_2] = (arr_7 [i_2]);
        var_16 = (min(var_16, (arr_9 [i_2])));
        var_17 = ((arr_9 [i_2]) && ((2251558053698004544 && (arr_8 [i_2] [i_2]))));
        arr_11 [i_2] = ((arr_9 [i_2]) ? 16195186020011547069 : var_1);
    }
    var_18 = 40554;
    var_19 = (min((min(-1, var_1)), (((((84 ? var_10 : var_12)) * var_12)))));
    #pragma endscop
}
