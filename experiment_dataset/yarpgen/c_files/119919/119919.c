/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119919
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((min(var_4, (var_6 > var_3)))) ? var_6 : ((min((var_3 / var_9), var_7)))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_14 = 16;
        var_15 = (min(var_15, ((((arr_0 [i_0]) ? ((((arr_1 [i_0] [i_0]) && (arr_1 [i_0] [i_0])))) : ((((arr_1 [i_0] [i_0]) > (arr_0 [i_0])))))))));
        var_16 = (min(var_16, (((((!(var_11 && 0))) || ((!((((arr_1 [i_0] [i_0]) ? (arr_0 [i_0]) : 25))))))))));
    }
    for (int i_1 = 3; i_1 < 15;i_1 += 1)
    {
        var_17 = (arr_2 [i_1] [i_1]);
        var_18 = ((((((1 ? var_7 : var_6)) / (arr_0 [i_1 - 2]))) > ((((4398045986816 ? -12 : 11))))));
        var_19 = ((+(((arr_2 [i_1] [i_1 + 1]) ? (((arr_2 [i_1 + 1] [i_1 + 1]) << (var_1 - 2181005677))) : (arr_2 [i_1 - 1] [i_1])))));
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        var_20 = var_1;
        var_21 ^= ((((((((arr_5 [i_2]) ? var_1 : (arr_4 [i_2] [i_2]))) != (arr_4 [i_2] [i_2])))) | ((min((arr_5 [i_2]), (arr_5 [i_2]))))));
        var_22 = ((((((max((arr_4 [i_2] [i_2]), 329214085))) ? ((min(var_12, (arr_4 [i_2] [i_2])))) : var_5)) <= ((((arr_5 [i_2]) >> (arr_5 [i_2]))))));
    }
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        var_23 = ((329214085 ? var_10 : ((min(((!(arr_6 [i_3]))), (!var_8))))));
        var_24 = (arr_8 [i_3]);
        var_25 = ((((min((min(var_9, (arr_8 [i_3]))), ((((arr_8 [i_3]) ? var_5 : var_2)))))) ? ((-(min(var_0, 329214085)))) : (min(-329214085, (arr_7 [i_3])))));
    }
    var_26 = var_5;
    var_27 = (min(((max(-10, ((var_5 ? -1250996151 : 0))))), ((min(2853641890, 250467209)))));
    #pragma endscop
}
