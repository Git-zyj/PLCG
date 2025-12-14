/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15155
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_3 ? (((((var_7 ? var_16 : -1350867883))) - ((var_5 ? var_0 : 8617440935493400717)))) : 26388));
    var_21 -= var_7;
    var_22 += var_5;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_23 ^= var_2;
        arr_2 [i_0] |= var_17;

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_24 -= var_1;
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 0;i_3 += 1)
                {
                    {
                        var_25 = (((arr_4 [i_0] [i_3 + 1]) != -3812602709));
                        var_26 = (max(var_26, var_10));
                    }
                }
            }
            var_27 = (var_13 - var_8);
        }
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            var_28 = (((~var_0) & (arr_10 [i_0] [i_4])));

            for (int i_5 = 1; i_5 < 19;i_5 += 1)
            {

                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {
                    arr_17 [i_5] [i_0] [i_5] = ((var_13 ? (arr_12 [i_4] [i_4] [i_5 - 1]) : var_9));
                    var_29 |= var_1;
                    var_30 = (((arr_14 [i_5 + 1] [i_5] [i_5 - 1]) < var_10));
                    var_31 = (min(var_31, (arr_12 [i_0] [i_5] [i_0])));
                }
                for (int i_7 = 3; i_7 < 19;i_7 += 1)
                {
                    arr_21 [19] [i_5] [i_0] [i_7 - 1] [i_0] [i_0] = 3401641900;
                    var_32 = var_6;
                }
                arr_22 [i_0] [i_4] [i_5] = 255;
                arr_23 [i_5] [i_4] [i_5 + 1] = (arr_6 [i_0] [i_5 - 1] [i_5 - 1]);
            }
        }
        for (int i_8 = 0; i_8 < 20;i_8 += 1)
        {
            var_33 = (((arr_24 [i_8]) ? 1913959274 : (arr_24 [i_8])));
            var_34 = var_7;
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 20;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 20;i_11 += 1)
                    {
                        {
                            var_35 = (arr_31 [i_0] [i_8] [i_0] [i_0]);
                            var_36 = (min(var_36, (((127 ? var_12 : var_16)))));
                        }
                    }
                }
            }
            var_37 = (-1762948722 ^ var_12);
        }
        var_38 = 917336102;

        for (int i_12 = 3; i_12 < 18;i_12 += 1)
        {
            arr_38 [i_0] [i_12] = ((~(-1541534384 / 124)));
            var_39 = (((arr_15 [i_0] [0] [i_12] [i_12 - 1]) ? var_17 : (arr_15 [i_0] [8] [8] [i_12 + 2])));
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 20;i_13 += 1)
            {
                for (int i_14 = 3; i_14 < 19;i_14 += 1)
                {
                    {
                        var_40 ^= ((!var_16) == (-9223372036854775807 - 1));
                        var_41 = var_0;
                        var_42 = -22;
                    }
                }
            }
        }
    }
    for (int i_15 = 0; i_15 < 20;i_15 += 1) /* same iter space */
    {
        arr_48 [i_15] [i_15] = max(684696639, (((var_6 != ((-(arr_27 [6])))))));
        var_43 = (!var_18);
    }
    for (int i_16 = 0; i_16 < 20;i_16 += 1) /* same iter space */
    {
        var_44 ^= max(var_15, var_2);
        var_45 = (((max(var_5, (2 * 4724))) * ((max((var_3 || var_17), (((arr_43 [i_16] [i_16] [i_16] [i_16] [i_16] [12]) && var_9)))))));
        var_46 = (min((min(var_9, (arr_47 [i_16]))), ((((var_17 ? (arr_33 [i_16] [i_16] [i_16]) : var_19)) * (var_13 / var_5)))));
        arr_52 [i_16] [i_16] = ((~((81 ? (((!(arr_10 [i_16] [i_16])))) : (arr_9 [i_16] [i_16] [5] [i_16])))));
        var_47 = ((~(((arr_51 [i_16]) ? 1 : (arr_51 [i_16])))));
    }
    for (int i_17 = 0; i_17 < 20;i_17 += 1) /* same iter space */
    {
        arr_55 [i_17] [i_17] = -1350867873;
        var_48 = (max((arr_36 [i_17] [i_17]), var_10));
        var_49 = (((-13097 ^ 4088433613) * ((var_3 ? ((max(3353206530, (arr_35 [i_17] [i_17])))) : var_11))));
    }
    #pragma endscop
}
