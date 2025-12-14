/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140911
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_7;
    var_20 = var_6;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            arr_5 [i_1] [i_1] [i_1] = (!var_18);
            var_21 ^= var_4;
            arr_6 [i_1] [i_1] [i_1] = (((arr_4 [i_1] [i_0]) >= var_1));
        }

        for (int i_2 = 1; i_2 < 15;i_2 += 1)
        {
            arr_10 [i_2] = arr_3 [i_0 - 1] [i_0] [i_0];
            arr_11 [i_2] [i_2] [i_0] = ((var_6 & (arr_4 [i_2] [i_2 + 1])));
            arr_12 [i_2] = (arr_9 [i_2]);
        }
        for (int i_3 = 1; i_3 < 13;i_3 += 1)
        {
            arr_17 [i_0] [i_3] = 39360;
            var_22 = arr_4 [10] [i_3 + 1];
            var_23 = (-(arr_2 [i_0 + 3]));
            var_24 = (var_8 ? ((14799 ? var_4 : var_18)) : 65535);
        }
        var_25 = (((arr_4 [10] [10]) & (arr_14 [i_0])));
    }
    for (int i_4 = 2; i_4 < 14;i_4 += 1)
    {
        arr_21 [i_4] = ((~((~(min(var_3, (arr_13 [4] [4])))))));
        arr_22 [i_4] = ((((((arr_1 [i_4]) | 5580098398814446343))) & (max((min(var_2, (arr_2 [i_4]))), (max(var_13, 5441212998265913787))))));
        arr_23 [i_4 - 2] = (min(var_17, var_3));
    }
    for (int i_5 = 1; i_5 < 20;i_5 += 1)
    {
        arr_27 [i_5] [2] = ((-(((arr_24 [i_5 + 2]) - (arr_24 [i_5 + 2])))));

        for (int i_6 = 1; i_6 < 21;i_6 += 1)
        {
            var_26 = (((min(var_5, ((max((arr_29 [i_6] [i_6]), var_7))))) * (min((arr_29 [i_6] [i_6]), (arr_25 [i_5])))));
            var_27 = ((((max((arr_25 [i_5 + 1]), (arr_26 [i_5 - 1])))) ? (arr_28 [i_5 - 1] [i_5 - 1] [i_5 - 1]) : ((~(arr_25 [i_6])))));
        }
        var_28 = ((arr_29 [14] [i_5 + 1]) ? (min((arr_29 [0] [i_5 - 1]), (arr_26 [i_5 - 1]))) : (((~(arr_29 [14] [i_5 + 1])))));

        for (int i_7 = 4; i_7 < 18;i_7 += 1)
        {
            var_29 = max(((var_7 ^ (arr_26 [i_5 + 2]))), (max(var_16, (5441212998265913787 & var_11))));
            var_30 -= ((((13005531075443637814 ? (arr_29 [10] [i_5 + 2]) : (arr_28 [i_5 + 2] [i_5] [i_5 - 1]))) ^ (((arr_25 [i_7]) ? (((arr_24 [i_7]) >> (5441212998265913781 - 5441212998265913761))) : (arr_28 [i_5] [i_5] [i_7])))));
        }
        for (int i_8 = 2; i_8 < 20;i_8 += 1)
        {
            var_31 = ((((((arr_31 [i_8 - 2] [i_8]) > (arr_33 [i_5 - 1] [i_5])))) & var_2));
            arr_34 [i_5 - 1] [i_5 - 1] [i_8] = (((arr_33 [i_5 + 1] [i_8 - 1]) ? (arr_33 [i_5] [i_5]) : (arr_33 [i_8 - 2] [i_8])));
            var_32 = ((arr_31 [i_5] [i_5 + 1]) ? ((((max(5441212998265913787, (arr_24 [i_5])))) ? (arr_33 [i_5 + 2] [i_5 + 1]) : (arr_26 [i_5]))) : (((~(arr_30 [i_8] [i_8 + 2])))));
        }
        for (int i_9 = 2; i_9 < 19;i_9 += 1)
        {
            arr_38 [i_5] [i_9] [0] = ((~(max((((511 << (var_8 - 31582)))), (arr_31 [i_9 - 1] [i_9 + 1])))));
            arr_39 [i_5] [i_5] = ((!((((arr_31 [i_9 - 2] [i_9 + 3]) ? var_5 : ((-(arr_31 [i_5 + 2] [i_5 + 2]))))))));
        }
        arr_40 [i_5] = ((((max(var_15, (arr_37 [i_5] [9] [9]))) & (max(5441212998265913781, (arr_33 [i_5] [i_5]))))));
    }
    #pragma endscop
}
