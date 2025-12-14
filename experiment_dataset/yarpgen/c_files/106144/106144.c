/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106144
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 64851;

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_16 = var_5;
        arr_2 [i_0] = var_5;
        var_17 = ((((-914773824 ? var_0 : ((914773823 ? (arr_1 [i_0] [i_0]) : var_11)))) >= (((((-(arr_0 [i_0] [i_0])))) ? ((max(29785, 191))) : (!914773827)))));
    }
    for (int i_1 = 1; i_1 < 8;i_1 += 1)
    {
        arr_7 [i_1] = (((min((((arr_1 [i_1 + 1] [i_1 + 1]) ? var_7 : (arr_5 [i_1 + 2] [i_1]))), (var_4 % var_0)))) ? (arr_6 [i_1 - 1]) : ((((arr_5 [i_1 - 1] [i_1 - 1]) >= (arr_1 [i_1] [i_1])))));
        var_18 = (((0 && 29801) <= (max((35751 == var_4), ((var_12 ? 11366 : (arr_4 [i_1] [i_1])))))));
    }
    var_19 = var_3;
    var_20 = (((((((var_11 ? 48867 : var_0)) >= var_5))) <= var_6));
    #pragma endscop
}
