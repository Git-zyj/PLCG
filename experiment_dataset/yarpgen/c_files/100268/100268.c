/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100268
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_19 = (min(var_19, var_9));
        var_20 = var_2;
        var_21 = ((1879872024 ? 65535 : (arr_2 [i_0 - 1] [i_0])));
    }
    for (int i_1 = 1; i_1 < 11;i_1 += 1)
    {
        var_22 = -var_14;

        /* vectorizable */
        for (int i_2 = 1; i_2 < 11;i_2 += 1)
        {
            var_23 = var_0;
            arr_8 [i_1] = 65523;

            for (int i_3 = 2; i_3 < 10;i_3 += 1) /* same iter space */
            {

                for (int i_4 = 3; i_4 < 8;i_4 += 1)
                {
                    var_24 = (-1860090055 % 3369590524351461756);
                    var_25 = var_14;

                    for (int i_5 = 1; i_5 < 8;i_5 += 1)
                    {
                        var_26 = (((arr_3 [i_1 + 1] [i_2]) < (arr_15 [i_1 - 1] [i_2] [i_3 - 2] [i_4] [i_5 + 3])));
                        arr_16 [i_1] = var_13;
                        arr_17 [i_1] [i_1] [i_3] = var_8;
                        var_27 = (((arr_7 [i_1 + 1] [i_4 + 1] [i_5 - 1]) ? (arr_7 [i_1 + 1] [i_4 + 1] [i_5 - 1]) : (arr_7 [i_1 + 1] [i_4 + 1] [i_5 - 1])));
                    }
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        arr_20 [i_1 + 1] [i_2] [i_3] [i_1] [i_4] [i_6] = (arr_7 [i_1 - 1] [i_1 - 1] [i_1]);
                        var_28 = (max(var_28, (((((((arr_13 [i_3] [i_1] [i_1] [0]) ? 127 : (arr_19 [i_6] [i_6] [i_6])))) ? -4284028062114916368 : (arr_14 [i_1] [i_2 - 1] [i_3] [i_4] [i_6] [i_3 + 2] [i_3]))))));
                        arr_21 [i_1] [i_2] [i_3] [i_4 + 2] [1] = (((((1860090043 ? var_11 : 0))) ? (arr_9 [i_6] [i_3] [i_1 - 1]) : 247));
                        arr_22 [i_1] [i_2] [5] [i_4] = (2147483647 ? ((2730789200 ? 255 : 8388607)) : var_15);
                    }
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        var_29 = var_18;
                        var_30 = var_2;
                    }
                }
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {

                    for (int i_9 = 1; i_9 < 10;i_9 += 1) /* same iter space */
                    {
                        arr_29 [6] [i_1] [6] = (arr_25 [i_1]);
                        var_31 *= 24320;
                        arr_30 [i_1 + 1] [i_1] [i_1] [i_1] [i_1] = ((16051 ? (arr_26 [i_1 - 1] [i_1] [i_3] [i_8] [i_9]) : var_16));
                        var_32 = (var_3 < var_2);
                        arr_31 [i_1 + 1] [i_2] [i_1] [9] [i_8] [i_9] [i_9 + 1] = ((3369590524351461744 ? 204 : 4389760898698412220));
                    }
                    for (int i_10 = 1; i_10 < 10;i_10 += 1) /* same iter space */
                    {
                        var_33 = ((-1 ? (~var_1) : var_10));
                        var_34 = arr_5 [i_2 - 1];
                    }
                    for (int i_11 = 1; i_11 < 10;i_11 += 1) /* same iter space */
                    {
                        var_35 = (max(var_35, ((((var_4 > var_3) ? 7258103043250983086 : (arr_2 [i_3 + 1] [i_11 - 1]))))));
                        arr_39 [i_1] [i_1] [i_3 - 1] [i_3] [i_3] = 1;
                        arr_40 [i_1] [0] [i_3 - 1] [i_3] [8] = (!var_16);
                        var_36 = (max(var_36, var_12));
                    }
                    for (int i_12 = 1; i_12 < 11;i_12 += 1)
                    {
                        var_37 = (var_0 || var_2);
                        arr_44 [i_1] [i_2] [i_1] [i_8] [i_8] = 949851375;
                        var_38 = var_17;
                    }
                    var_39 *= ((arr_37 [i_1 - 1] [i_2 - 1] [i_2] [i_3 + 2] [i_3 - 2]) ? (arr_9 [i_1 + 1] [i_3 - 2] [i_2 - 1]) : (!var_14));
                }
                for (int i_13 = 1; i_13 < 10;i_13 += 1)
                {

                    for (int i_14 = 0; i_14 < 12;i_14 += 1)
                    {
                        var_40 = var_4;
                        arr_51 [i_1] = var_10;
                        var_41 *= (var_5 ? (((arr_24 [i_3] [i_3] [i_13 + 1] [i_13] [i_3] [i_13 + 1] [i_13]) ? 0 : 1)) : (~-4389760898698412220));
                        arr_52 [i_1] = (((arr_5 [i_1 + 1]) ? (arr_36 [i_1 - 1] [i_1] [i_1 - 1]) : (arr_5 [i_1 + 1])));
                    }
                    var_42 = (!var_1);
                    var_43 *= var_10;
                }
                var_44 = (((!var_14) ? ((8388607 ? -966400803562017296 : 1)) : (arr_36 [i_2 + 1] [i_1] [i_1 + 1])));
                arr_53 [8] [i_1] = 0;
            }
            for (int i_15 = 2; i_15 < 10;i_15 += 1) /* same iter space */
            {
                arr_57 [i_1] = ((~(var_14 | var_7)));
                arr_58 [i_1] [i_2] [i_2] = (arr_1 [i_1 - 1]);
            }
            arr_59 [i_1] [i_1] = (arr_4 [i_2] [i_1]);
        }
    }
    for (int i_16 = 4; i_16 < 18;i_16 += 1)
    {
        arr_62 [i_16] = 0;
        arr_63 [i_16] [i_16] = ((((max(var_2, var_3))) ? var_7 : ((((arr_61 [i_16]) > var_13)))));
    }
    /* LoopNest 2 */
    for (int i_17 = 1; i_17 < 10;i_17 += 1)
    {
        for (int i_18 = 0; i_18 < 11;i_18 += 1)
        {
            {
                var_45 = var_3;
                arr_70 [i_17 + 1] |= var_17;
                var_46 ^= (min((arr_50 [i_17] [i_18] [i_18] [i_18] [i_18]), var_13));
            }
        }
    }
    #pragma endscop
}
