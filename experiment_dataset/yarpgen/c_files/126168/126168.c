/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126168
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_19 = (max(var_19, ((((((max((arr_0 [i_0] [12]), -82)))) ? (max((((var_0 ? (arr_0 [i_0] [0]) : var_18))), (arr_1 [10]))) : ((((arr_1 [i_0]) ? (((!(arr_1 [i_0 + 1])))) : (~63810)))))))));

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_20 = ((((~var_0) ? (arr_1 [8]) : (((arr_1 [i_0]) | 63835)))));
            arr_5 [i_0] = -721171363;
            var_21 = (max(var_21, ((((((~(!6)))) == (((((63810 ? (arr_4 [3]) : (arr_3 [i_1])))) ? (arr_0 [i_1] [i_1]) : (((arr_3 [i_1]) ? var_16 : (arr_3 [i_1]))))))))));
        }
        for (int i_2 = 2; i_2 < 14;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 13;i_4 += 1)
                {
                    {
                        var_22 = ((1725 >= (arr_8 [5] [i_0] [i_0] [i_0])));
                        var_23 = (max((arr_8 [i_0] [i_0] [i_0] [0]), (((-(((arr_3 [i_0]) ? 54825 : (arr_1 [i_0]))))))));
                        arr_13 [i_0] [i_0] [i_0] [i_3] [i_3] = (((255 ? 12603524133861455530 : 21)));

                        for (int i_5 = 1; i_5 < 14;i_5 += 1)
                        {
                            var_24 = 255;
                            var_25 += 1;
                        }
                    }
                }
            }
            arr_18 [i_0] [i_0] = ((var_15 * ((((arr_6 [i_0] [i_0]) ? ((max(114, var_11))) : (!var_10))))));
        }
        for (int i_6 = 1; i_6 < 14;i_6 += 1)
        {
            var_26 = (min((((((var_16 ? 6 : var_7))) ? (((arr_20 [i_0]) ? var_7 : (arr_16 [i_6] [i_6] [i_0] [i_0] [9] [i_0]))) : (var_2 == 898382241))), ((max((arr_17 [i_0] [i_0] [i_6] [i_0] [i_0] [13]), (arr_7 [i_0 - 1] [i_0] [i_0 - 1]))))));
            var_27 += arr_0 [i_0] [10];
        }

        for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
        {
            arr_23 [i_0] [i_0] = -79;
            arr_24 [i_7] [i_0] [i_0] = (min(((810315751 ? 14974 : 2533)), 1725));
            var_28 += 1120373546;
            var_29 &= (max(4095, (((((var_10 ? (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0]) : var_5))) ? (max((arr_14 [i_0] [1]), var_12)) : (arr_7 [i_0] [10] [i_0])))));
        }
        for (int i_8 = 0; i_8 < 15;i_8 += 1) /* same iter space */
        {
            var_30 = (~var_18);
            var_31 ^= ((((arr_15 [i_0] [i_0] [i_0] [1] [i_0]) < var_3)));

            /* vectorizable */
            for (int i_9 = 3; i_9 < 12;i_9 += 1)
            {
                arr_32 [i_0] [13] [i_0] = ((-(arr_2 [i_0])));
                var_32 = -62;
                var_33 += 0;
            }
            /* vectorizable */
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                arr_36 [i_8] [i_0] [i_0] [i_0] = var_17;
                var_34 += var_7;
                arr_37 [1] [i_0] [i_0] = -248;
                var_35 = ((-(((arr_19 [i_0] [14]) ? (arr_29 [i_0] [i_0] [i_0] [i_8]) : -1))));
            }
            var_36 &= -47253153136850535;
        }
        /* vectorizable */
        for (int i_11 = 0; i_11 < 15;i_11 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_12 = 4; i_12 < 14;i_12 += 1)
            {
                for (int i_13 = 4; i_13 < 12;i_13 += 1)
                {
                    {
                        arr_47 [14] [i_0] [7] = (arr_45 [i_13] [i_0] [i_0] [i_0 - 1]);
                        var_37 = (((((-1 ? -1 : 59)) + 2147483647)) << (84 - 84));
                        arr_48 [i_0] [i_0] [i_0] [i_0] = (arr_9 [i_0]);
                        var_38 = 996205338;
                    }
                }
            }
            arr_49 [i_0] [i_11] = (-8952834907450333582 ? 696938169706551708 : 142705457);
            arr_50 [i_0] [i_11] [i_11] = arr_14 [i_0] [i_0];
        }
        /* vectorizable */
        for (int i_14 = 2; i_14 < 11;i_14 += 1)
        {
            /* LoopNest 3 */
            for (int i_15 = 0; i_15 < 15;i_15 += 1)
            {
                for (int i_16 = 1; i_16 < 14;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 1;i_17 += 1)
                    {
                        {
                            var_39 |= var_12;
                            var_40 ^= ((~(((arr_38 [i_15]) ? (arr_21 [i_14] [i_15]) : (arr_19 [i_0] [i_0])))));
                        }
                    }
                }
            }
            var_41 = (min(var_41, (((!(((arr_2 [10]) > (arr_53 [i_0] [i_0] [i_0] [i_0]))))))));
            var_42 = (max(var_42, (arr_53 [i_14] [2] [i_14] [i_0])));
        }
    }
    var_43 = (max(((var_12 ? (var_13 / var_9) : (var_0 != 17636))), (~var_16)));
    #pragma endscop
}
