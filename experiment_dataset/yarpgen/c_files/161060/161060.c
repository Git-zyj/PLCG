/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161060
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_19 *= (max((((arr_0 [i_0]) ? (((arr_0 [i_0]) ? 28280 : (arr_0 [i_0]))) : ((var_0 ? var_0 : var_4)))), (((min((arr_0 [i_0]), (arr_0 [i_0])))))));
        arr_2 [i_0] [i_0] = (((~1) ? 0 : 1));
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 8;i_2 += 1)
        {
            var_20 = (max(var_20, ((max(((1 ? 1 : 12)), (((arr_7 [i_1 - 1] [i_1 - 1]) + (arr_4 [i_1 - 1]))))))));
            var_21 = (max(var_21, ((((arr_5 [0]) ? (max((((arr_4 [i_2 - 1]) ? (arr_1 [i_2]) : var_15)), (((var_0 * (arr_5 [1])))))) : ((((max(-7508592353950023662, (arr_1 [i_1 - 1])))) ? ((((arr_0 [i_1]) ? (arr_3 [4]) : var_17))) : (((arr_8 [1] [1] [i_2 + 2]) % (arr_7 [i_1 - 1] [i_2 + 1]))))))))));
        }
        /* vectorizable */
        for (int i_3 = 1; i_3 < 10;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                var_22 = (min(var_22, (((((((arr_6 [i_4] [i_3] [i_4]) - 7508592353950023662))) ? (arr_7 [1] [i_4]) : (arr_5 [i_4]))))));

                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    var_23 = (!((((arr_11 [i_1]) ? (arr_4 [i_1]) : (arr_4 [i_1 - 1])))));
                    arr_16 [i_1] [i_3] [i_4] [i_4] = (arr_12 [i_3 + 1] [i_1]);

                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        var_24 = (arr_9 [i_6] [i_5]);
                        var_25 = ((var_12 + var_3) << (var_3 - 4067072222));
                        arr_20 [i_4] [i_3] [i_1] [i_5] = ((arr_5 [i_1]) >= (arr_5 [i_1]));
                        arr_21 [i_1] [i_3] [i_4] [8] [8] = (arr_18 [i_1 - 1] [i_3] [i_4] [i_4] [i_1] [i_6]);
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        var_26 = (((arr_8 [i_3 + 1] [i_3 - 1] [i_3 + 2]) || ((((arr_17 [i_4] [i_3 + 2] [i_4] [i_5] [i_7] [i_1] [i_3 - 1]) ? var_3 : (arr_1 [i_1]))))));
                        arr_25 [i_7] [i_1] [i_4] [i_1] [0] = (((arr_7 [i_1 - 1] [i_1 - 1]) ? (arr_7 [i_5] [i_3 + 2]) : (arr_7 [i_3 + 1] [4])));
                        arr_26 [i_7] [i_1] [i_1] [0] = (arr_6 [i_1] [i_3] [i_3 + 1]);
                    }
                }
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    var_27 = (max(var_27, ((((((arr_11 [i_1 - 1]) ? var_1 : (arr_9 [i_8] [i_4]))) + var_2)))));
                    arr_29 [i_1] [i_1] = (arr_9 [i_1 - 1] [i_1 - 1]);
                }
            }
            arr_30 [i_1] [i_3] [i_1 - 1] = (arr_9 [i_3 + 2] [i_1 - 1]);
            var_28 ^= ((32142 ? var_6 : var_6));
        }
        /* vectorizable */
        for (int i_9 = 1; i_9 < 11;i_9 += 1)
        {
            var_29 = var_1;
            var_30 *= (1836769633 - 6305);
        }
        var_31 = (min(var_31, ((min((~100), 26434)))));
    }
    for (int i_10 = 2; i_10 < 23;i_10 += 1)
    {
        arr_37 [i_10 - 1] [8] = (arr_35 [i_10] [i_10]);
        var_32 ^= (min(((max(39101, ((10594334349773060481 ? 286672425 : 25009))))), (min((((var_4 ? -5598174 : -21557))), 0))));
    }
    for (int i_11 = 2; i_11 < 24;i_11 += 1)
    {
        var_33 = ((~((~(arr_39 [i_11 + 1])))));
        arr_40 [1] = (min(var_1, (~var_5)));
        arr_41 [i_11] [i_11] = (min(var_3, (max((((26434 ? 26434 : (arr_38 [i_11 + 1] [i_11 - 1])))), var_15))));
        var_34 = (((((arr_39 [i_11]) || (var_10 | var_2))) ? (max(127, var_7)) : ((((var_9 < var_2) && 9223372036854775798)))));
    }
    var_35 = (min(var_35, ((((var_3 | (var_9 != var_14)))))));
    #pragma endscop
}
