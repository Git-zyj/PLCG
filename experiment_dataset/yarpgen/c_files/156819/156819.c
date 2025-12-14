/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156819
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, ((min(-var_10, var_9)))));

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_15 = ((~((~(arr_2 [i_0 - 2])))));
        arr_3 [i_0 + 1] = (((arr_2 [i_0]) ? var_8 : -5));
    }
    var_16 = var_9;
    var_17 = var_5;

    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {

        for (int i_2 = 2; i_2 < 22;i_2 += 1)
        {
            var_18 = ((-3039202166250131341 - ((min(var_2, (arr_4 [i_1]))))));
            arr_9 [i_1] [11] [i_2] = (3039202166250131337 <= -5);
            arr_10 [i_2] [4] [i_1] = ((1 ? (((-1281709189907738158 + var_3) ? (((arr_4 [i_1]) ? var_2 : var_11)) : 12439512256929328611)) : ((((arr_6 [i_1] [i_2 - 1]) - ((min((arr_6 [i_2] [i_1]), (arr_4 [i_2])))))))));
        }
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            arr_15 [i_3] = (((-1014756456037932911 ? 8 : 56623)));
            arr_16 [18] [i_1] = (((arr_8 [i_1] [i_1]) + (((arr_8 [i_3] [i_1]) - (arr_8 [i_1] [i_3])))));
        }
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            arr_21 [i_1] [i_4] &= (((arr_8 [i_4] [i_1]) * (((((1 ? var_8 : var_7))) - (((arr_20 [i_4] [i_1]) - (arr_11 [2] [i_1])))))));
            arr_22 [8] &= ((~((((min((arr_12 [4]), (arr_7 [i_4] [17]))) < ((((-3039202166250131318 >= (arr_18 [i_1] [i_1] [i_1]))))))))));
        }
        var_19 = (arr_5 [17]);
        var_20 = (-(((((arr_11 [i_1] [i_1]) != var_2)))));
        var_21 = (max(var_21, (((((((arr_12 [i_1]) ? (max((arr_8 [i_1] [i_1]), (arr_13 [19]))) : (arr_19 [i_1] [i_1])))) ? var_7 : (((((var_1 + (arr_11 [i_1] [i_1])))) ? ((-(arr_7 [i_1] [17]))) : (max(var_4, (arr_5 [i_1]))))))))));
    }
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        arr_25 [i_5] = arr_12 [i_5];
        var_22 += -var_8;
        var_23 &= (var_13 || ((min((((var_11 ? (arr_8 [i_5] [i_5]) : var_5))), (arr_20 [i_5] [18])))));
    }
    for (int i_6 = 0; i_6 < 21;i_6 += 1)
    {
        arr_30 [i_6] = (arr_8 [i_6] [i_6]);
        arr_31 [i_6] = (((min(3039202166250131344, -5)) + (arr_13 [i_6])));
        arr_32 [i_6] [i_6] = var_7;
    }
    for (int i_7 = 1; i_7 < 1;i_7 += 1)
    {
        arr_36 [i_7] = ((-(max((arr_34 [i_7 - 1] [i_7 - 1]), (arr_11 [i_7] [i_7 - 1])))));
        var_24 = (min(var_0, ((var_4 - ((-(arr_18 [16] [1] [i_7])))))));
        var_25 = ((((((4 ? 18115 : -3039202166250131341)))) ? ((-((103 ? var_9 : 6007231816780223005)))) : ((((arr_13 [i_7 - 1]) ? (max((arr_12 [i_7]), (arr_35 [i_7]))) : (var_10 + var_7))))));
        var_26 = (min(var_26, (((-((-(arr_28 [i_7 - 1] [i_7]))))))));
        var_27 = (max(6007231816780223005, -8131822394416764629));
    }
    #pragma endscop
}
