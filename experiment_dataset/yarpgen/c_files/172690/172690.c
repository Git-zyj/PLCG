/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172690
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            arr_5 [i_0] [i_1] [i_1] = (((0 ? (arr_0 [i_0] [i_1]) : ((var_16 - (arr_1 [i_0]))))));
            var_19 += (min(6857, (((var_13 && var_4) ? (max((arr_3 [i_0] [i_0] [i_0]), var_9)) : (arr_4 [10] [i_1] [i_1])))));
            var_20 = (min((max((min(var_18, var_13)), (((!(arr_4 [i_1] [i_1] [i_1])))))), (arr_1 [i_0])));
            var_21 = (arr_3 [i_0] [i_0] [i_0]);
            var_22 = ((((((arr_4 [i_1] [i_1] [i_1]) * (arr_4 [i_1] [i_1] [i_1]))))) <= 245);
        }
        for (int i_2 = 2; i_2 < 15;i_2 += 1)
        {
            arr_9 [i_0] [i_0] [i_0] = (-var_5 && ((!((min(var_4, 227))))));
            var_23 += (!12942137065914813013);
        }
        var_24 = ((+((+(max((arr_1 [i_0]), var_10))))));
    }
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        arr_12 [i_3] [i_3] = arr_1 [i_3];
        var_25 *= (-1 ^ (arr_2 [i_3]));
    }
    for (int i_4 = 1; i_4 < 22;i_4 += 1)
    {
        arr_15 [i_4] = 3128529398;
        var_26 *= (arr_14 [i_4] [i_4]);
    }
    for (int i_5 = 3; i_5 < 18;i_5 += 1)
    {
        var_27 = (max(var_27, 35));
        var_28 -= (arr_17 [i_5]);
        var_29 += (((227 ^ 211) ? (((((arr_17 [i_5]) < ((((arr_14 [i_5] [i_5]) <= (arr_17 [i_5])))))))) : ((((var_7 & (arr_14 [i_5] [i_5]))) & 1))));
        var_30 = ((~(((-22705 > 0) & ((min((arr_13 [i_5]), var_18)))))));
    }
    var_31 = (~var_1);
    #pragma endscop
}
