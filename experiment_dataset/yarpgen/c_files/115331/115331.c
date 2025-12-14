/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115331
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_4 * ((~(~var_6)))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = var_5;
        arr_3 [i_0] = ((((((min(var_13, 472032675))) ? (max(var_15, var_6)) : (arr_1 [i_0] [i_0]))) > ((((var_11 / var_11) * var_7)))));
        var_19 = (arr_1 [i_0] [i_0]);
    }
    for (int i_1 = 4; i_1 < 22;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = var_12;
        arr_8 [i_1 - 3] [i_1] = (((-((18407993674771805591 ? -9 : 472032699)))));
    }
    for (int i_2 = 4; i_2 < 22;i_2 += 1) /* same iter space */
    {
        var_20 = 38750398937746025;
        arr_11 [i_2] = ((((((var_7 && var_14) ? (arr_9 [i_2]) : (18407993674771805591 % 38750398937746048)))) ? (min((((arr_9 [12]) ? (arr_5 [i_2] [i_2]) : (arr_6 [i_2]))), (arr_4 [i_2 - 4]))) : (arr_4 [1])));
        var_21 = ((((((-472032675 && -472032675) ? var_0 : (11106764193534959965 && var_3)))) ? -var_5 : (~-7365605881991261626)));
        var_22 = ((-(((arr_4 [i_2 - 4]) + (arr_4 [i_2 + 2])))));
    }
    for (int i_3 = 4; i_3 < 22;i_3 += 1) /* same iter space */
    {
        arr_14 [i_3] = var_0;
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            {
                                arr_27 [i_3 + 2] [i_3 - 1] [23] [i_3 - 3] [i_3] = (((arr_16 [i_3 + 1]) ? (((arr_16 [i_3 + 2]) ? (arr_10 [i_3 + 2] [i_4]) : (arr_16 [i_3 - 3]))) : ((var_10 ? (arr_16 [i_3 + 2]) : (arr_18 [i_3 + 2])))));
                                arr_28 [i_3] [i_4] = ((~(((arr_4 [i_3]) / (arr_19 [i_3])))));
                                arr_29 [i_3] [i_4] [i_4] [i_3] [12] = ((min((arr_16 [i_3 + 1]), (((arr_21 [i_7] [i_5] [i_4] [i_3]) ? 472032696 : -472032662)))));
                                var_23 = (arr_5 [i_3] [i_3]);
                                arr_30 [i_3] [1] [i_4] [i_4] [i_4] [i_3] [i_7] = (!(((-(arr_23 [i_3 - 4] [i_3] [22] [22] [i_3] [i_3 - 3])))));
                            }
                        }
                    }
                    var_24 = (2107864249 % 1);
                    var_25 = ((((1 ? 214807109451919077 : 18407993674771805586))) ? ((-(arr_25 [i_3] [i_3]))) : var_8);
                }
            }
        }
        var_26 = (arr_23 [12] [i_3] [i_3 - 1] [i_3] [2] [i_3 - 2]);

        /* vectorizable */
        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            var_27 = -8728965370825270714;
            var_28 = (arr_13 [i_8] [i_3 - 1]);
        }
        for (int i_9 = 1; i_9 < 23;i_9 += 1) /* same iter space */
        {
            arr_37 [i_3] [i_3] = (arr_23 [i_3] [i_3] [i_3 - 2] [i_3] [i_3 - 4] [i_9 + 1]);
            var_29 = (max(var_9, 472032698));
        }
        for (int i_10 = 1; i_10 < 23;i_10 += 1) /* same iter space */
        {
            var_30 += (min((arr_12 [i_3 - 4] [i_10 + 1]), (min(18407993674771805591, 472032697))));
            var_31 = ((((max(-4278128386, (!472032699)))) ? (((!(((var_17 / (arr_40 [i_3] [i_10] [i_3]))))))) : ((-((min((arr_9 [7]), (arr_35 [9] [i_10] [1]))))))));
        }
        for (int i_11 = 1; i_11 < 23;i_11 += 1)
        {
            var_32 = ((var_17 ? (var_0 * var_7) : (arr_10 [i_3 - 3] [i_3 - 3])));
            var_33 = (min((((arr_15 [i_3 + 2] [0] [0]) ? (arr_15 [i_3 - 3] [i_11] [i_11 + 1]) : (arr_25 [i_3] [i_3 - 2]))), -1));

            for (int i_12 = 1; i_12 < 21;i_12 += 1)
            {
                var_34 = (arr_6 [2]);
                arr_45 [i_3] [i_11] [i_11] [i_3] = -472032694;
                var_35 = ((var_13 ? -var_1 : var_9));
            }
            for (int i_13 = 0; i_13 < 24;i_13 += 1)
            {
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 24;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 1;i_15 += 1)
                    {
                        {
                            arr_54 [i_3] [i_11] [i_3] [4] [i_15] = var_3;
                            var_36 = var_14;
                            arr_55 [i_15] [i_3] [i_3] [i_3] [i_11 - 1] [11] = (!var_7);
                        }
                    }
                }
                arr_56 [i_3] [i_3] [19] [i_13] = var_7;
            }
        }
    }
    var_37 = ((var_15 ? var_1 : var_13));
    #pragma endscop
}
