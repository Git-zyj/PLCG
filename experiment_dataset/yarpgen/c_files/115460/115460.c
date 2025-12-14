/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115460
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_6;

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        var_13 &= ((~((var_7 ^ (arr_0 [i_0] [i_0 + 1])))));
        var_14 = var_2;
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_15 = ((~(max((((arr_0 [i_1] [i_1]) ? (arr_5 [i_1]) : (arr_5 [i_1]))), (arr_0 [i_1] [i_1])))));
        var_16 = (min(var_16, ((((min((arr_2 [i_1]), var_7))) ? (max((((var_3 >> (((arr_2 [i_1]) - 14789800413460846772))))), (max(-1013259674, 17)))) : (((min(1, 68))))))));
        var_17 = (min(var_17, (((((max((!var_10), ((0 ? (arr_1 [i_1]) : 25))))) && ((min((arr_5 [i_1]), (((var_3 ? var_9 : var_3)))))))))));
        var_18 = (min(((((((var_1 ? var_7 : (arr_3 [i_1] [i_1])))) ? ((90 ? (arr_4 [11] [i_1]) : 12)) : (arr_0 [i_1] [i_1])))), ((1646555656 ? (var_9 + 4294967287) : ((((!(arr_1 [i_1])))))))));
    }
    #pragma endscop
}
