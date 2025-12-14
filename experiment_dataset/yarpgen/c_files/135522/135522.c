/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135522
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = min(var_11, var_1);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            var_15 = ((var_4 ? -2147483647 : var_7));

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {

                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    var_16 = ((var_6 ? (arr_1 [i_1] [i_3]) : 27));
                    var_17 = (((arr_0 [i_1 - 2] [i_3]) || (4670952601728094230 <= -26)));
                    var_18 *= ((((-1476394005 ? var_5 : var_13)) <= (((-32757 + 2147483647) >> (4294967275 - 4294967264)))));
                }
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    var_19 = (max(var_19, ((((arr_4 [i_1 - 1]) ^ (((arr_10 [i_1 - 3]) & (arr_4 [i_0]))))))));

                    for (int i_5 = 1; i_5 < 14;i_5 += 1)
                    {
                        var_20 = (arr_9 [i_0] [i_0] [i_0] [i_0]);
                        arr_15 [i_0] [i_1] [i_1] [i_4] [i_5] [i_5] [i_0] = (arr_3 [i_0] [i_1 - 2] [i_5 - 1]);
                        arr_16 [i_5] [i_5] [i_5] [i_2] [i_5] [i_0] [i_0] = arr_11 [i_5] [i_4] [i_2] [i_1];
                    }
                    arr_17 [i_2] = ((arr_12 [i_1] [i_1 - 2] [i_1 - 2] [i_4] [i_1 + 1]) && (arr_1 [i_1 + 1] [i_1 + 1]));
                    var_21 = (min(var_21, 1476394017));
                }
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    var_22 |= ((1476394024 ? var_8 : var_5));
                    arr_22 [i_0] = (37 * 15944);
                    arr_23 [i_6] [i_2] [i_1] [i_1] [i_0] [i_0] = (arr_19 [i_1] [i_0]);
                    var_23 = (((((-28 != (arr_8 [i_0] [i_1] [i_2] [i_6] [i_2])))) != (~-2014789718)));
                    var_24 = -603825254;
                }
                var_25 &= 64;
                var_26 = (min(var_26, var_3));
            }
        }
        arr_24 [i_0] [i_0] = (((arr_9 [i_0] [i_0] [i_0] [i_0]) | (arr_6 [i_0] [i_0] [i_0] [i_0])));
        var_27 = (max(var_27, (arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
    }
    for (int i_7 = 1; i_7 < 10;i_7 += 1)
    {

        for (int i_8 = 0; i_8 < 11;i_8 += 1)
        {

            for (int i_9 = 2; i_9 < 9;i_9 += 1)
            {
                arr_33 [i_9] [i_8] [i_7] = ((2290479145038690311 ? (-560640362 != 2932753956335310396) : 8712068467271462419));
                var_28 = var_1;
            }
            /* vectorizable */
            for (int i_10 = 2; i_10 < 10;i_10 += 1)
            {
                arr_36 [i_7] [i_7 + 1] = (~var_2);
                var_29 = (var_2 != var_8);
                var_30 = (0 ^ 123);
                var_31 = (~-4544819333252596821);
            }
            var_32 = (min(var_32, -15942));
        }
        arr_37 [i_7 + 1] [i_7] = (min((arr_13 [i_7] [i_7] [i_7] [i_7 - 1] [i_7] [i_7 - 1]), var_11));
        arr_38 [i_7] = (min((arr_0 [i_7] [i_7]), (((arr_26 [i_7 + 1]) ? -4670952601728094223 : (arr_26 [i_7 + 1])))));
    }
    #pragma endscop
}
