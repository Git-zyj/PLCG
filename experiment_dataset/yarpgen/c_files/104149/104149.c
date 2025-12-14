/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104149
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_20 = (arr_0 [i_0]);
        var_21 = (arr_2 [i_0]);
        var_22 |= (((arr_2 [i_0]) && (arr_2 [i_0])));
        arr_3 [i_0] = (-(arr_2 [i_0]));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_23 = (min(var_23, (((((12393 >= (arr_4 [i_1] [i_1]))) ? 47 : (min((((arr_5 [19] [i_1]) ? -1558405463 : var_6)), (arr_4 [i_1] [i_1]))))))));
        var_24 = (18446744073709551615 % -2146008235);
        arr_8 [i_1] [i_1] = (max((arr_6 [i_1] [i_1]), ((18446744073709551615 ? (arr_6 [i_1] [i_1]) : (arr_6 [i_1] [i_1])))));
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        arr_12 [i_2] [i_2] = ((((arr_2 [13]) + (arr_2 [i_2]))));
        var_25 *= (min((min((max(-122, (arr_1 [i_2] [4]))), (arr_0 [i_2]))), (arr_6 [5] [i_2])));
    }
    var_26 = (min(((var_6 ? (min(805306368, 15684366858077607486)) : 55)), (((((var_10 ? -23557481509235297 : var_7))) ? var_4 : var_14))));
    #pragma endscop
}
