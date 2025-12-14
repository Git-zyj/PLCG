/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12450
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= ((((max(var_0, (var_3 % var_8)))) ? var_1 : var_9));
    var_11 = min((155 <= -35), var_6);
    var_12 = -var_3;

    for (int i_0 = 2; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_13 = ((((max(905404466, -905404467) >> ((((var_7 ? 325574509 : (arr_2 [i_0]))) - 325574492))))));
        var_14 = ((var_6 ^ (min((arr_3 [i_0]), ((((arr_1 [i_0]) ? var_2 : (arr_1 [i_0]))))))));
        arr_4 [i_0] = (((arr_2 [i_0 + 1]) ? ((((arr_3 [i_0]) == (arr_3 [i_0 + 1])))) : ((-(arr_1 [i_0])))));
        arr_5 [i_0] = (arr_0 [i_0] [i_0]);
    }
    for (int i_1 = 2; i_1 < 21;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 3; i_2 < 22;i_2 += 1)
        {
            arr_12 [i_2] [i_2] [i_2] = (min(((~(max(-325574509, (arr_0 [i_1] [i_1]))))), (!4465050403020013132)));

            for (int i_3 = 1; i_3 < 22;i_3 += 1)
            {
                arr_15 [i_2] = (+((max((arr_7 [i_1]), (arr_7 [i_1])))));
                arr_16 [i_2] = (arr_3 [i_3]);
            }
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                var_15 = 9;
                var_16 = (max(var_16, (((((min(-325574506, -3516036665696885846))) ? ((var_8 ? 113 : ((((arr_11 [12] [i_2]) ? var_4 : (arr_1 [20])))))) : (arr_17 [i_1] [i_1] [i_1]))))));
            }
            var_17 = (min(((185 ? (arr_13 [i_1] [i_1] [i_1] [i_2]) : (arr_2 [i_1]))), (arr_10 [i_1] [i_1])));
            arr_21 [i_2] [i_2] [i_2] = ((5 ? 11429544337043037010 : -905404456));
        }
        arr_22 [i_1] = max((((var_1 + 2147483647) >> ((((arr_1 [16]) > 79))))), ((min((max(var_2, (arr_9 [i_1]))), ((max((arr_19 [i_1] [i_1] [i_1] [i_1]), var_8)))))));
        arr_23 [i_1] [i_1] = ((((((((max(-325574506, (arr_10 [i_1] [i_1]))) + 2147483647)) >> ((((3516036665696885846 ? -118 : 1)) + 146))))) ? var_3 : 4092849239581298897));
        arr_24 [i_1] [i_1] = ((+(((arr_18 [i_1] [i_1] [i_1] [i_1 - 2]) ? (~var_1) : (((arr_20 [i_1] [i_1] [i_1] [i_1]) ? -35 : (arr_11 [18] [18])))))));
    }
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        var_18 = (max(var_18, (((!(arr_25 [i_5] [i_5]))))));
        var_19 ^= var_6;
        var_20 = ((!((((~(arr_18 [i_5] [i_5] [i_5] [i_5])))))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 23;i_6 += 1)
    {
        var_21 = (max(var_21, (((((arr_19 [i_6] [i_6] [i_6] [i_6]) ? var_1 : (arr_2 [i_6])))))));
        arr_30 [i_6] = (arr_29 [i_6] [i_6]);
        var_22 = (max(var_22, (((((((arr_7 [i_6]) ? (arr_10 [i_6] [i_6]) : (arr_20 [i_6] [i_6] [i_6] [i_6])))) ? ((((arr_29 [i_6] [i_6]) ? -75889256 : 97))) : (((arr_13 [i_6] [i_6] [i_6] [i_6]) ? -8360254248366261142 : (arr_13 [i_6] [i_6] [i_6] [i_6]))))))));
        var_23 ^= (arr_8 [i_6]);
    }
    var_24 = ((((!((min(var_8, var_7))))) || var_9));
    #pragma endscop
}
