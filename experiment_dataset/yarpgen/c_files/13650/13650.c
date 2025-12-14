/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13650
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] &= ((var_6 ? ((0 ? ((~(arr_2 [8]))) : var_9)) : ((~((min(var_9, (arr_1 [0] [i_0]))))))));
        var_15 = ((((var_10 + ((min(-21838, var_11))))) + (((~((var_1 / (arr_2 [i_0]))))))));
        var_16 = (min(var_16, (((((((((var_2 << (var_14 - 10010969158200698249)))) ? (arr_2 [9]) : (arr_1 [1] [1])))) ? (((min(var_7, (var_3 != var_10))))) : (max((min(var_9, 18)), ((min(var_1, (arr_1 [0] [9])))))))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_7 [0] [19] = -21830;
        arr_8 [i_1] = (~7657072942013107787);
    }
    var_17 = (2097151 - var_11);
    var_18 = var_0;
    var_19 = ((((((34898 * var_10) ? var_12 : ((max(30636, var_4)))))) ? 1 : var_12));
    var_20 = 1;
    #pragma endscop
}
