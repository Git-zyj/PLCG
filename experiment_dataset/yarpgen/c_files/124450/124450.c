/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124450
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= var_14;

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] &= (max(((max(10, (arr_0 [1] [i_0])))), ((var_12 ? 18446744073709551615 : (min(1, 961225956))))));
        arr_3 [i_0] = (max((max(((((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_1 [1])))), ((18446744073709551615 ? 18446744073709551614 : (arr_0 [8] [i_0]))))), (max(-18446744073709551601, (((7861274695914190614 ? 2369160168 : var_5)))))));
        arr_4 [i_0] = max((((arr_0 [i_0] [i_0]) ? var_4 : (-32767 - 1))), ((((!(arr_1 [12]))) ? (arr_1 [i_0]) : ((min(1, (arr_0 [i_0] [i_0])))))));
        arr_5 [0] [0] = (((arr_0 [i_0] [i_0]) & (((arr_0 [i_0] [i_0]) + 18446744073709551615))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_17 = (max(var_17, (arr_6 [i_1])));
        var_18 = (min(var_18, (((((arr_6 [i_1]) ? 32767 : 18446744073709551599))))));
        var_19 = (((arr_6 [i_1]) / 18446744073709551615));
        var_20 = ((((!(arr_7 [i_1] [i_1]))) ? 16 : (((7861274695914190614 ? (arr_8 [i_1] [i_1]) : (arr_7 [i_1] [i_1]))))));
    }
    var_21 &= ((((max(960, ((var_0 ? var_11 : -25760))))) || ((var_4 || (!var_11)))));
    #pragma endscop
}
