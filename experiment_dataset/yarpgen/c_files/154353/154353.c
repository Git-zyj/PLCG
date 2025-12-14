/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154353
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((min(((min(122, var_7))), var_12))) ? var_14 : var_8));
    var_16 = 9335166353656647747;
    var_17 = (var_6 * 3963403307012128666);

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_18 = ((!(((~6176973691088869717) >= (arr_0 [i_0])))));
        var_19 -= (9111577720052903862 && 81);

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            arr_4 [i_0] = var_14;
            var_20 = (min(var_20, (arr_2 [i_0] [i_1])));
        }
    }
    /* vectorizable */
    for (int i_2 = 3; i_2 < 14;i_2 += 1)
    {
        var_21 = (53 ? 18014398442373120 : 18446744073709551599);

        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            var_22 = (arr_3 [i_2] [i_3] [i_3]);
            arr_9 [i_3] [i_2] [i_2] = 34;
        }
        arr_10 [i_2 + 1] = (~var_8);
    }
    for (int i_4 = 3; i_4 < 21;i_4 += 1)
    {
        arr_13 [i_4] [i_4] = (arr_11 [i_4 - 3]);
        arr_14 [i_4] [i_4 + 1] = ((1 ? 248 : 9111577720052903854));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                {

                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        var_23 = (max(var_23, ((min((max((arr_16 [i_6]), var_14)), ((var_12 ? 122 : (var_0 > -67))))))));
                        arr_24 [i_4 - 3] [i_5] [i_6] [i_4] = ((~(arr_20 [i_4 - 2] [i_4 - 2] [i_4] [i_4 - 2])));
                        var_24 = (min((max((arr_23 [i_4] [i_6] [i_4]), (arr_23 [i_4 - 2] [i_7] [i_4]))), (((arr_20 [i_4] [i_4 + 1] [i_4] [i_4 - 3]) && (arr_12 [i_4])))));

                        /* vectorizable */
                        for (int i_8 = 1; i_8 < 20;i_8 += 1)
                        {
                            arr_28 [i_4 - 3] [i_5] [i_4] [i_6] [i_7] [i_8 + 2] = (((arr_25 [i_8 + 2] [i_8] [i_8 + 1] [i_8] [i_4 + 1]) >= var_6));
                            arr_29 [i_4 + 1] [i_5] [i_4] [i_7] = (-111 ^ var_8);
                        }
                        for (int i_9 = 3; i_9 < 20;i_9 += 1)
                        {
                            var_25 = (arr_16 [i_4 - 3]);
                            var_26 = (max(((~(arr_17 [i_4] [i_5] [i_6]))), ((((~var_13) < (-21618 - var_3))))));
                            arr_32 [i_4] [i_5] [i_6] [i_7] [i_9 + 2] [i_4] = (max((((((18446744073709551615 ? 1134566633 : 110))) ? ((max(22, 8))) : ((-81 ? -81 : -70)))), (arr_22 [i_4] [i_7] [i_9] [i_9 + 2] [i_9])));
                            arr_33 [i_4 - 2] [i_4] [i_6] [i_7] [i_9] [i_4] [i_6] = ((!((((arr_16 [i_4]) ? ((247 ? 18446744073709551613 : 8)) : (!112))))));
                        }
                    }
                    for (int i_10 = 2; i_10 < 20;i_10 += 1)
                    {
                        arr_37 [i_4] [i_4] = var_6;

                        for (int i_11 = 0; i_11 < 22;i_11 += 1)
                        {
                            arr_41 [i_10] [i_4] [i_4] [i_4 + 1] = (133 < var_7);
                            var_27 = (((arr_38 [i_5] [i_4 - 2] [i_6] [i_10] [i_11] [i_10 - 2]) ? (arr_15 [i_4]) : -64));
                        }
                    }

                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 1;i_12 += 1) /* same iter space */
                    {
                        arr_44 [i_4 + 1] [i_4 + 1] [i_5] [i_4] [i_12] = ((((arr_30 [i_4 - 3] [i_5] [i_12]) && (arr_43 [i_4 - 2] [i_6] [i_4]))) ? (arr_31 [i_4] [i_6] [i_4]) : (arr_16 [i_12]));
                        var_28 = (min(var_28, 1));
                    }
                    for (int i_13 = 0; i_13 < 1;i_13 += 1) /* same iter space */
                    {
                        arr_47 [i_4 - 1] [i_4] [i_4] [i_4] = -6;
                        arr_48 [i_5] [i_5] [i_6] [i_4] = (max(((max((max((arr_17 [i_13] [i_5] [i_6]), (arr_46 [i_5] [i_4 - 1] [i_4]))), 240))), (max((max(-57, -1)), 98))));
                        var_29 = (min(var_29, (((((var_0 * ((((arr_17 [i_13] [i_5] [i_4 + 1]) == var_12))))) <= ((~(arr_43 [i_4 - 1] [i_4] [i_6]))))))));
                    }
                    for (int i_14 = 0; i_14 < 1;i_14 += 1) /* same iter space */
                    {

                        for (int i_15 = 0; i_15 < 22;i_15 += 1)
                        {
                            arr_55 [i_4] [i_14] [i_14] [i_14] [i_6] [i_5] [i_4] = var_14;
                            var_30 = ((min(125, -99)));
                            arr_56 [i_4] [i_4] = (~var_5);
                            var_31 = (min(var_31, ((max(1, -31)))));
                        }
                        arr_57 [i_4 - 2] [i_4] [i_4 - 3] [i_4] [i_4] [i_4 - 3] = 3;
                    }
                    arr_58 [i_4] [i_4] = (~52);
                    arr_59 [i_4] [i_4] [i_6] = var_10;
                }
            }
        }
    }
    var_32 = var_8;
    #pragma endscop
}
