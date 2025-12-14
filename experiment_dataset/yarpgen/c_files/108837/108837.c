/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108837
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_3;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_14 = (((min((arr_1 [i_0]), (arr_1 [i_0])))) ? (min((arr_1 [i_0]), 1373673621)) : (arr_1 [i_0]));
        var_15 = ((arr_0 [i_0]) ? 1697357941 : -2046589561);
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 22;i_1 += 1)
    {

        for (int i_2 = 3; i_2 < 23;i_2 += 1)
        {
            var_16 = (19 ? -3143149334 : ((var_3 ? (arr_5 [i_1] [i_2]) : 2301710805)));
            var_17 = arr_5 [i_1] [10];
            var_18 = var_1;
        }
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            var_19 = (-(arr_5 [i_1 - 1] [i_1 + 2]));

            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                var_20 = 4294967282;
                arr_11 [8] [8] [i_4] = 4;

                for (int i_5 = 1; i_5 < 22;i_5 += 1)
                {
                    var_21 = 535822336;
                    var_22 = (min(var_22, (arr_8 [i_5] [i_4] [i_3])));
                    var_23 = (318828905 | ((1049143481 ? var_6 : 4294967270)));
                    var_24 = (((((arr_7 [i_1]) ? 3143149338 : (arr_9 [i_5] [i_4] [i_3] [i_1])))) ? (arr_12 [i_3]) : 975568441);
                }
            }
            var_25 = var_4;
            var_26 = (arr_2 [i_1 + 2] [i_3]);
        }
        for (int i_6 = 1; i_6 < 22;i_6 += 1)
        {

            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                var_27 = ((((var_7 ? (arr_19 [i_1] [i_1] [i_1] [i_1]) : var_8))) ? (((arr_13 [i_1] [i_1] [i_7] [i_7]) ? var_7 : var_2)) : (arr_19 [i_1] [i_6] [i_1] [i_1]));
                var_28 += arr_16 [i_1] [i_6 + 2] [i_7];
                var_29 = arr_3 [i_1 - 1] [i_6 + 2];
                arr_20 [i_1] [i_1] &= ((arr_17 [i_1]) | ((3306341039 ? 2254124365 : 1702506727)));
            }
            var_30 = ((arr_15 [i_6 - 1] [i_6] [i_6]) ? var_6 : 8191);
            arr_21 [i_1 - 2] [i_6 + 1] = (arr_8 [i_1] [i_6] [i_6]);
        }
        var_31 += arr_12 [i_1 - 2];
    }
    /* vectorizable */
    for (int i_8 = 1; i_8 < 23;i_8 += 1)
    {
        var_32 = var_5;
        var_33 = (988626246 ? (((arr_8 [i_8] [i_8] [i_8]) ? 2301710818 : (arr_22 [i_8] [i_8]))) : ((var_3 ? 1327289794 : (arr_10 [i_8] [14]))));

        for (int i_9 = 0; i_9 < 24;i_9 += 1)
        {
            arr_27 [i_8] [i_9] [i_8] = ((!((((arr_13 [i_8] [10] [10] [16]) ? var_9 : 4294967295)))));
            var_34 = ((arr_5 [i_8 + 1] [i_8 - 1]) ? var_2 : (arr_25 [i_8] [i_8 + 1] [i_8 - 1]));
            var_35 = var_7;
            var_36 = ((((0 ? 1993256490 : var_11)) <= ((var_3 ? var_12 : 0))));
        }
    }
    var_37 = var_3;
    #pragma endscop
}
