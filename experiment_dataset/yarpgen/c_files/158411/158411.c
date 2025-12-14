/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158411
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 ^= ((3364291409 ? ((((arr_0 [i_0]) && ((((arr_1 [3]) ^ 3364291409)))))) : (((var_12 ? 1 : (arr_1 [i_0]))))));
        arr_2 [i_0] = ((-((((((arr_0 [6]) ? (arr_0 [i_0]) : -1827349135))) ? (max((arr_1 [i_0]), var_12)) : -var_15))));
        arr_3 [i_0] [i_0] = 139;
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = (max(117, (!-20504)));
        arr_7 [i_1] = 26977;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] = ((~(arr_5 [i_2])));

        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            var_19 = (((-18812 + 2147483647) >> (var_15 + 122)));
            var_20 = (max(var_20, ((((arr_4 [i_3]) ? (var_0 * var_15) : var_11)))));
            arr_13 [i_2] = ((+((930675862 ? (arr_5 [i_2]) : (arr_11 [17] [1])))));
            var_21 = ((var_9 ? 930675906 : (arr_12 [i_2] [4] [i_2])));
        }
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            var_22 = (!(((var_0 ? 1275000355 : var_4))));
            var_23 = ((-(((arr_15 [i_2] [i_4]) ? (arr_5 [i_4]) : var_12))));
        }
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            var_24 = (((var_5 | var_1) ? 5812 : var_1));
            var_25 = (~(arr_8 [i_5]));
            var_26 += ((-8808039563369661213 ? (arr_20 [17] [i_2] [i_5]) : 202));
        }
        var_27 = ((var_12 ? (20504 | 25168) : 27005));
    }
    var_28 = ((((((43833 % var_0) ? ((74076283 ? 26987 : var_5)) : (!var_7)))) ? var_2 : (~-var_15)));
    /* LoopNest 3 */
    for (int i_6 = 4; i_6 < 8;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 12;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                {
                    var_29 = ((((((((var_5 ? (arr_30 [i_6] [i_6] [8] [i_8]) : (arr_18 [i_8])))) ? (arr_26 [i_6 + 4]) : ((var_2 ? (arr_20 [12] [12] [i_8]) : 1275000385))))) * ((((9508654527209633818 ? 43833 : 34359738367)) >> (((min(var_16, (arr_12 [i_8] [i_6 - 1] [i_8]))) + 351309361))))));
                    arr_31 [i_8] = (((!var_7) < (max(((930675888 ? 1228917690406789812 : 1)), ((((arr_5 [i_7]) ? 1 : (arr_29 [i_6 + 2] [i_8]))))))));
                    arr_32 [i_8] [i_6] [i_7] [i_8] = (min(((min((((arr_30 [4] [i_8] [i_7] [i_6]) * (arr_15 [i_8] [2]))), (((arr_24 [9] [0] [i_6]) ? 488128273 : 1))))), ((var_3 ? (min(var_9, 1228917690406789812)) : -var_14))));
                    arr_33 [i_8] [i_6] [i_6] [2] |= (31 * -20);
                }
            }
        }
    }
    var_30 ^= 57455;
    #pragma endscop
}
