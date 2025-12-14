/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134346
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_8 ? ((((min(var_0, var_8))) ? var_5 : 3813779053)) : var_11));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_13 = (((arr_0 [i_0]) ? 15143 : -15155));
        var_14 = ((min((arr_0 [i_0]), (arr_0 [i_0]))));
        var_15 = (((((arr_0 [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0]))) & var_3));
        var_16 = (min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            arr_9 [i_1] [i_1] [i_2] = ((((min(4957, var_11))) ? (((!(!var_5)))) : ((1 | ((~(arr_6 [i_1] [i_1])))))));
            var_17 = (arr_5 [i_1] [i_1] [i_2]);
            var_18 = 15143;
            arr_10 [i_1] [i_2] = (max(((min(2203773429465380059, ((max(var_10, 1)))))), (arr_0 [i_2])));
        }
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            var_19 = (min(((var_6 ? (arr_5 [i_1] [i_3] [i_3]) : (arr_2 [i_1]))), (15132 != var_0)));
            var_20 = (((min((arr_11 [i_1]), 15119)) & ((min(var_9, (min((arr_5 [i_3] [i_1] [i_1]), var_11)))))));
            var_21 = (min(17, (min((((52289 ? (arr_8 [i_1] [1] [12]) : (arr_2 [i_3])))), (arr_4 [i_1])))));
            var_22 = (min(((52070 ? 144115188075855871 : (arr_8 [i_1] [i_1] [i_3]))), ((min((arr_8 [i_1] [i_3] [i_3]), (arr_8 [i_1] [i_3] [i_3]))))));
            var_23 = (min(((-(arr_2 [i_3]))), (arr_2 [i_3])));
        }
        for (int i_4 = 2; i_4 < 12;i_4 += 1)
        {
            var_24 = var_6;
            arr_18 [i_1] [i_1] [i_1] = (((arr_14 [i_1] [i_4] [i_4 + 1]) ? (arr_15 [i_1] [i_4] [i_4 - 2]) : ((min((arr_11 [i_1]), ((((arr_4 [i_1]) <= -15163))))))));
        }
        arr_19 [i_1] = (min(var_2, (((min((arr_4 [i_1]), (arr_0 [i_1])))))));
    }
    for (int i_5 = 1; i_5 < 19;i_5 += 1)
    {
        var_25 = (arr_20 [i_5]);
        arr_24 [i_5] = (((1 + 17467) / (min((min(13465, var_9)), (arr_20 [i_5])))));
    }
    #pragma endscop
}
