/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167369
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        var_18 = ((4294967295 ? (arr_0 [i_0 - 2]) : (arr_0 [i_0 - 3])));

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_19 = (~14904);

            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {

                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    var_20 -= (2305842734335787008 ? var_4 : ((1090295955 & (-9223372036854775807 - 1))));
                    var_21 &= (~41997411);
                    var_22 -= (arr_3 [i_3]);
                }
                var_23 = (min(var_23, 1090295969));
                var_24 = (~(arr_2 [i_0 - 2] [i_1]));
            }
        }
        for (int i_4 = 1; i_4 < 21;i_4 += 1)
        {
            arr_12 [14] [i_4] [14] &= ((-(((((arr_3 [14]) + 9223372036854775807)) >> (18446744073709551615 - 18446744073709551571)))));
            arr_13 [i_0] = (arr_1 [i_0 + 1] [i_0]);
        }
        for (int i_5 = 2; i_5 < 20;i_5 += 1)
        {
            var_25 = (!-41997401);
            var_26 = (arr_10 [i_0 + 2] [i_5 - 1] [i_5 + 1]);
        }
        for (int i_6 = 0; i_6 < 0;i_6 += 1)
        {
            var_27 = (arr_0 [i_0 - 1]);
            var_28 = (-(arr_5 [i_0] [i_0] [i_0] [i_0 - 1]));
            arr_18 [i_0] = 12548;
        }
        var_29 = (arr_0 [i_0 - 2]);
        var_30 = -2210149648;
    }
    for (int i_7 = 0; i_7 < 25;i_7 += 1)
    {
        var_31 = (min(var_31, ((((((var_12 ? (!var_2) : (arr_20 [i_7])))) ? ((var_6 ? (arr_19 [i_7] [i_7]) : var_9)) : (max((var_4 && var_10), (var_9 + var_0))))))));
        var_32 = ((-((((41997400 && (arr_20 [10])))))));
    }
    var_33 = var_14;
    var_34 = ((((((102 ? var_15 : var_4)))) >> (var_12 - 9401)));
    var_35 = ((7341611604976267091 ? (((((41997421 ? 41997401 : var_2))) ? 5454665966920507087 : 1)) : 1));

    for (int i_8 = 4; i_8 < 17;i_8 += 1) /* same iter space */
    {
        arr_23 [i_8 - 4] [i_8] = (((!((min(1, var_6))))));
        arr_24 [i_8] |= (((((arr_14 [i_8 - 3] [i_8 - 3] [i_8 - 1]) ? var_14 : 41997401)) + var_13));
        arr_25 [i_8] = ((((((arr_7 [i_8 - 1] [i_8 - 2] [i_8 - 2] [15]) % var_14))) ? (((1090295983 ? ((var_5 ? (arr_17 [i_8] [i_8 - 2]) : 41997395)) : var_2))) : (((max(var_1, (arr_15 [i_8]))) << (var_11 + 29016)))));
        var_36 = (max(var_36, (((((((max((arr_14 [i_8] [i_8 - 1] [i_8]), 2147483642))) ? ((var_14 ? var_4 : 4294967295)) : 91)) | var_7)))));
    }
    for (int i_9 = 4; i_9 < 17;i_9 += 1) /* same iter space */
    {
        var_37 = ((0 ? -71 : 3));
        arr_28 [13] [i_9] = (((arr_0 [7]) << (((min(-1338348672616455495, 3204671314)) + 1338348672616455505))));
        var_38 = 654740551;
        arr_29 [i_9] |= (((((arr_20 [i_9 - 1]) / ((-1338348672616455520 ? var_8 : -7)))) * (((max(var_9, var_9))))));
    }
    #pragma endscop
}
