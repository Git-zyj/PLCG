/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165491
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((!((((var_5 != 18446744073709551615) ? var_7 : var_11)))));
    var_20 = (((max(var_9, ((8192 ? 12597588676315737903 : -1739890887)))) - var_16));

    for (int i_0 = 3; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_21 |= 1493;
        var_22 = 16777215;
        var_23 = ((+(((arr_2 [i_0 - 1]) ? 63 : (arr_2 [i_0 - 1])))));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_24 |= ((~(arr_2 [i_1 - 3])));
        arr_5 [4] |= ((!((1 > (arr_0 [i_1])))));
        var_25 = (max(var_25, (((var_12 ? (arr_1 [2]) : (7413851993818350335 / 62))))));
        var_26 = (((var_6 ? (arr_3 [i_1] [i_1]) : var_1)));
    }
    #pragma endscop
}
