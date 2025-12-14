/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174689
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 4294967295;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 ^= (min(var_13, (min((!3710915900), (min((arr_2 [0]), 13556002855283195497))))));
        var_16 = 13556002855283195481;
        var_17 = (min(var_17, (((!(((13556002855283195479 ? (arr_0 [i_0] [i_0]) : 4048772614))))))));
        var_18 = ((!(min((((arr_1 [3]) > 13556002855283195497)), 1))));
    }
    for (int i_1 = 2; i_1 < 13;i_1 += 1)
    {
        arr_5 [i_1 + 1] = min(13556002855283195471, ((var_11 ? (((arr_3 [i_1]) ? 4890741218426356093 : (arr_3 [i_1]))) : (((var_6 ? var_11 : 0))))));
        var_19 = ((-4 ? ((max(405765700, (((255 ? (arr_3 [0]) : (arr_3 [i_1]))))))) : (min((max(-1576224810, var_10)), (((var_5 ? var_4 : var_7)))))));
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 15;i_2 += 1)
    {
        var_20 += ((15307623004424025920 <= (((-(arr_6 [i_2 + 2]))))));
        var_21 = (max(var_21, ((((((-(arr_8 [i_2])))) < 405765687)))));
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        var_22 = (max(var_22, (!4890741218426356090)));
        var_23 = (max(var_23, ((min((4890741218426356126 >= var_8), (arr_9 [i_3] [i_3]))))));
    }
    var_24 = (min(var_24, var_11));
    #pragma endscop
}
