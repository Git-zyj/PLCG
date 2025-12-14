/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140112
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((!((((min(var_12, 7349315487656911527)) / (-19869 / var_2))))));
    var_16 = (min(var_16, ((((var_0 - var_3) + var_3)))));

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_17 -= (max((arr_3 [i_0 - 1] [i_0 - 1]), (max((arr_2 [i_0 + 1]), (arr_0 [i_0 - 1])))));
        var_18 = ((+((~(max((arr_3 [i_0] [i_0]), 35))))));
        var_19 &= (((((-(((arr_3 [19] [i_0]) ? -2147483645 : 2147483644))))) ? ((((((arr_1 [1]) ? 0 : (arr_1 [11]))) * -0))) : ((min(1339536248485585844, 258048)))));
        var_20 = (max(var_20, ((min(((max((min((arr_1 [i_0 - 1]), 0)), ((((arr_2 [i_0 + 1]) && 29)))))), (((((var_8 ? var_11 : var_0))) ? (arr_1 [i_0 - 1]) : ((-(arr_0 [i_0]))))))))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 8;i_1 += 1)
    {
        var_21 = (((arr_4 [i_1 + 3]) ? 4294709248 : (((12903 ? (arr_3 [i_1 + 3] [1]) : var_14)))));
        var_22 = (min(var_22, (((((((arr_2 [i_1 - 2]) ? 121 : var_0))) ? var_1 : (!var_9))))));

        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            var_23 = (min(var_23, -1));
            arr_9 [i_2] = ((-(((arr_7 [8] [i_2] [i_1]) - 1))));
            arr_10 [i_2] = (((arr_0 [i_1 - 2]) ? (arr_0 [i_1 - 1]) : var_13));
        }
        for (int i_3 = 4; i_3 < 9;i_3 += 1) /* same iter space */
        {
            var_24 = (((-122 ? var_14 : -12903)));
            var_25 = (min(var_25, (((((~(arr_8 [i_1 + 1] [7]))) % (arr_2 [i_1]))))));
            arr_15 [i_3] = (((arr_6 [i_3] [i_3 - 4] [i_3 - 4]) ? ((var_3 ? (arr_14 [10]) : var_12)) : (arr_11 [i_1])));
        }
        for (int i_4 = 4; i_4 < 9;i_4 += 1) /* same iter space */
        {

            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                arr_20 [5] [4] [i_5] [5] = var_3;
                arr_21 [9] [i_4] = (arr_1 [i_1 + 2]);
            }
            for (int i_6 = 0; i_6 < 0;i_6 += 1)
            {
                arr_25 [8] [8] [i_6] [8] = ((-(((arr_16 [i_1 + 3] [i_4 + 2]) % var_12))));
                var_26 = ((!((((arr_19 [i_1 - 2]) ? var_3 : 1)))));
            }
            for (int i_7 = 1; i_7 < 9;i_7 += 1)
            {
                var_27 = (~182);

                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {
                    var_28 = 22234;
                    var_29 *= ((((((arr_29 [i_7] [1] [i_7 - 1] [i_7]) >> (((((-2147483647 - 1) - -2147483621)) + 47))))) && 8953310383968658151));
                }
                var_30 &= (((arr_29 [i_1] [i_4 + 1] [4] [10]) ? (arr_19 [i_1 + 2]) : -var_9));
            }
            arr_30 [i_1] [4] = ((arr_3 [i_1 - 1] [i_4 - 1]) / (arr_14 [i_1 - 1]));

            for (int i_9 = 2; i_9 < 8;i_9 += 1)
            {
                var_31 = (((arr_19 [i_1]) % (arr_16 [i_4 + 1] [i_9 + 3])));
                arr_35 [i_9 + 1] [i_4 + 1] [i_4 + 1] [i_1] = ((!1063410980) ? (((arr_8 [i_4] [i_9 + 3]) ? 127 : -2813377559334878393)) : ((0 ? (arr_0 [1]) : (arr_18 [4] [4]))));
                var_32 = ((-4 ? (~var_8) : var_1));
            }
        }
        var_33 = (min(var_33, (((2813377559334878408 ? 258043 : 0)))));
        arr_36 [6] [6] = ((0 ? (arr_2 [i_1]) : (arr_28 [i_1 - 2] [i_1 - 1] [i_1 + 1] [i_1 - 2] [i_1 - 2])));
    }
    var_34 = 1736;
    #pragma endscop
}
