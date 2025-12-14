/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164645
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min((min(((3 ? var_8 : 47)), var_0)), var_12));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_20 = var_13;
        var_21 = ((((((arr_2 [i_0] [i_0]) ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [i_0])))) ? ((50 ? var_9 : (arr_2 [i_0] [i_0]))) : ((max((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_0]))))));
        var_22 = (~0);
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_8 [i_1] = (~-124);
        var_23 = 262016;
    }
    for (int i_2 = 1; i_2 < 1;i_2 += 1) /* same iter space */
    {
        var_24 = var_13;
        var_25 &= 55450;
    }
    for (int i_3 = 1; i_3 < 1;i_3 += 1) /* same iter space */
    {
        arr_15 [i_3] [i_3] = (arr_7 [i_3]);
        var_26 = (arr_11 [i_3]);
        var_27 = ((((max(var_14, (arr_4 [i_3 - 1] [i_3 - 1])))) ? (max((var_16 | var_18), (min((arr_11 [i_3]), var_5)))) : (!419746042)));
        var_28 = (((arr_14 [i_3] [i_3]) ? (((((min(var_12, 253))) && (((var_17 ? (arr_10 [i_3] [i_3]) : var_9)))))) : ((max((((arr_5 [i_3]) > (arr_11 [i_3]))), (arr_11 [i_3 - 1]))))));
        var_29 = ((!(((248504012 || var_3) && (arr_14 [i_3] [i_3 - 1])))));
    }
    #pragma endscop
}
