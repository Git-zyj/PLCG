/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144135
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        arr_3 [2] &= (((var_5 * 1892735721) ? var_13 : (((-(arr_2 [i_0]))))));
        arr_4 [1] [1] |= (var_7 - (arr_1 [4]));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 14;i_1 += 1)
    {
        arr_9 [5] [5] = ((arr_1 [0]) || (1 > -304558605));
        var_17 = (max(var_17, ((((((var_7 ? var_11 : var_12))) ? var_5 : 2937775685952416788)))));
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        arr_12 [22] [22] = (min((1 || 1), ((2889119181 ? (arr_11 [i_2]) : (~var_16)))));
        arr_13 [i_2] = (((arr_11 [i_2]) * (((var_12 - 1) << ((((-1002607387 ? var_3 : 1405848128)) - 201))))));
        var_18 = (min(var_18, 192));
    }
    var_19 = (min(var_19, ((max((min((!var_15), (var_11 - var_13))), (((((min(var_11, var_12))) ? var_0 : ((219 ? var_10 : var_14))))))))));
    var_20 = ((!(((~(var_10 - var_11))))));
    var_21 = ((var_2 - (((!(((3653761376460214767 ? var_0 : var_6))))))));
    #pragma endscop
}
