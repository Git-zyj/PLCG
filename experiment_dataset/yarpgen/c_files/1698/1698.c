/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1698
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((min(((var_3 ? 4294967295 : var_6)), (var_14 || -2147483624)))) ? var_8 : 60706));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = var_1;
        arr_4 [i_0] [i_0] = (arr_2 [i_0]);
        arr_5 [i_0] = (((var_16 || 0) ? 5 : (var_2 * var_10)));

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            arr_8 [i_1] [i_0] [i_0] = (((((var_3 ? var_18 : 4294967295))) ? (var_3 || 0) : (!var_12)));
            arr_9 [i_0] [i_0] [i_0] = ((~(arr_0 [i_0])));

            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                arr_12 [i_1] = (((arr_10 [i_0] [i_1] [i_2] [i_0]) ? (((var_10 != (arr_7 [i_0] [i_0])))) : var_7));
                /* LoopNest 2 */
                for (int i_3 = 3; i_3 < 18;i_3 += 1)
                {
                    for (int i_4 = 3; i_4 < 18;i_4 += 1)
                    {
                        {
                            arr_20 [i_0] [i_0] [i_0] [i_0] [i_4] [i_0] = (arr_18 [i_0] [i_3 - 1] [i_4 + 1] [i_3 - 1] [i_3 - 1]);
                            arr_21 [i_4] [i_3 - 2] [i_4 + 1] = (((var_7 == 37) > ((((arr_14 [i_0] [i_0] [i_3 - 3]) >= (arr_7 [i_1] [i_4 + 1]))))));
                            arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_4] = ((((0 ? var_6 : var_2))) ? var_2 : (var_9 - 0));
                            arr_23 [i_4] [i_4] [i_1] [i_4] [i_4 - 2] = ((var_0 + var_6) * (arr_11 [i_0] [i_1] [i_2] [i_4 - 3]));
                        }
                    }
                }
            }
            for (int i_5 = 4; i_5 < 18;i_5 += 1)
            {
                arr_26 [i_0] [i_0] [i_0] = (((((var_13 ? var_10 : (arr_15 [i_5 - 3] [i_1] [i_0] [i_1] [i_0] [i_0])))) ? (((arr_25 [i_0] [i_0] [i_0] [i_5 + 1]) << (((arr_16 [i_0] [i_0] [i_0]) - 1248443242)))) : (((var_14 ? var_1 : var_13)))));

                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    arr_30 [i_0] [i_1] [i_1] = var_18;
                    arr_31 [i_0] [i_0] [i_5 - 2] [i_6] = 14;
                    arr_32 [i_0] [i_1] [i_5 + 1] [i_0] = (arr_13 [i_5 - 1] [i_5 + 1]);
                    arr_33 [i_0] [i_1] [i_0] [i_6] [i_0] = (((((arr_10 [i_6] [i_5 - 2] [i_1] [i_0]) ? (arr_19 [12] [12]) : -15)) >= (var_14 && var_11)));
                }
                arr_34 [i_0] [i_0] [i_0] = arr_27 [i_0] [i_0] [i_0] [i_0] [i_5 - 4] [i_0];
                arr_35 [i_0] [i_0] [i_0] = (((((arr_11 [i_0] [i_1] [i_5 - 1] [i_1]) ? (arr_19 [4] [4]) : var_13))) ? ((((arr_7 [i_0] [i_0]) ? 20302 : (arr_2 [i_5 + 1])))) : var_0);
            }
            arr_36 [i_1] [i_1] = ((((var_12 ? 65532 : var_5))) ? var_16 : ((var_16 ? (arr_14 [i_0] [i_0] [i_1]) : (arr_7 [i_0] [i_0]))));
            arr_37 [i_0] [i_1] = (-((14 ? var_0 : (arr_6 [i_0] [i_0]))));
        }
        for (int i_7 = 0; i_7 < 19;i_7 += 1)
        {
            arr_41 [i_7] = (((((arr_10 [i_0] [i_0] [i_0] [i_0]) + -1)) + (((arr_27 [i_0] [i_7] [i_7] [i_7] [i_7] [i_0]) ? (arr_6 [i_0] [i_0]) : (arr_2 [i_0])))));
            arr_42 [i_0] [i_0] = ((((((arr_18 [i_0] [i_0] [i_7] [i_7] [i_0]) ? (arr_38 [i_0]) : var_8))) ? var_2 : (arr_38 [i_7])));
            arr_43 [i_0] [i_0] [i_7] = (((arr_38 [i_0]) ? ((((arr_16 [i_7] [i_7] [i_7]) && (arr_28 [i_0] [i_0] [i_0] [i_7])))) : ((((arr_18 [i_0] [i_7] [i_7] [i_0] [i_7]) || 1)))));
            arr_44 [i_0] [i_0] [i_0] = var_17;
        }
    }
    for (int i_8 = 0; i_8 < 25;i_8 += 1)
    {
        arr_48 [i_8] [i_8] = arr_47 [i_8];

        for (int i_9 = 1; i_9 < 24;i_9 += 1)
        {
            arr_53 [i_9] [i_9] = ((((((arr_46 [i_9 + 1] [i_9 - 1]) ? var_13 : var_7))) ? (((254 != (arr_50 [i_8])))) : (((((var_3 ? (arr_45 [i_8]) : (arr_52 [i_8]))) > 249)))));
            arr_54 [i_8] = 255;
        }
        arr_55 [i_8] [i_8] = var_17;
    }
    /* LoopNest 3 */
    for (int i_10 = 0; i_10 < 15;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 15;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 15;i_12 += 1)
            {
                {
                    arr_65 [i_10] [i_10] [i_12] = (((((4294967295 / var_5) + 2596269238)) / ((var_12 ? ((var_18 ? var_14 : var_0)) : (var_8 - var_7)))));
                    arr_66 [i_10] [i_11] [i_10] = (min((((var_15 <= (arr_6 [i_12] [i_11])))), ((var_14 ? (arr_6 [i_10] [i_11]) : (arr_6 [i_10] [i_11])))));
                }
            }
        }
    }
    var_20 = var_12;
    #pragma endscop
}
