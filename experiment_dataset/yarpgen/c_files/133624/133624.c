/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133624
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, ((((((((max(var_3, var_2))) >> (var_0 + 1330204688)))) ? (max(((max(var_14, var_17))), (max(var_14, var_12)))) : (!var_9))))));

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_20 = 1;
        var_21 = (((((((min(var_8, var_9))) ? ((min(var_18, (arr_0 [i_0])))) : ((((arr_1 [i_0] [i_0]) >= var_6)))))) ? 245760 : (((((var_6 / var_3) || var_18))))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_22 = var_7;
        arr_6 [i_1] = (min(((((((var_16 ? var_1 : (arr_4 [i_1])))) ? var_11 : ((min(var_17, var_17)))))), (((((1582409930381271698 ? 633720671 : 1))) ? (arr_4 [i_1]) : ((var_11 ? var_12 : var_17))))));
        var_23 = (arr_5 [i_1]);
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        arr_11 [i_2] [i_2] = ((var_4 >> (min((arr_9 [i_2]), 4095))));
        arr_12 [i_2] &= (((((-(arr_9 [i_2])))) ? (((((((arr_9 [i_2]) / var_13))) ? (var_2 / var_6) : (var_1 / var_15)))) : ((-(min(var_7, (arr_7 [i_2])))))));
        var_24 = ((-9001 ? 11757150472716442760 : 63754));
    }
    #pragma endscop
}
