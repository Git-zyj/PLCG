/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161773
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                arr_10 [i_2] [i_1] [i_1] [i_2] = (!(0 >= 0));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        {
                            var_13 = var_2;
                            var_14 &= 15707200665145824540;
                            arr_18 [i_0] [i_0] [i_2] [i_0] [i_0] = var_8;
                        }
                    }
                }
                var_15 = ((((max(((var_4 ? var_2 : var_4)), (arr_9 [i_0] [9])))) <= ((0 ? (arr_8 [i_2] [i_2] [i_2]) : (arr_3 [i_0] [i_2])))));
                var_16 = ((549755813887 ? -128 : 0));
                var_17 = arr_14 [i_0] [i_0] [1] [i_0] [i_0];
            }
            /* vectorizable */
            for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
            {
                var_18 &= (arr_9 [4] [i_1]);
                var_19 = (arr_9 [2] [i_0]);
            }
            for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
            {
                var_20 = (max(((-(arr_13 [i_6] [2] [i_6] [i_6] [i_6]))), (((-2616702898472020013 ? ((max(-31719, -31728))) : (arr_20 [i_6]))))));

                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    var_21 = var_1;
                    var_22 = (max((~54618), (((arr_22 [i_0] [i_0] [i_6] [i_7]) ? (arr_22 [i_0] [i_1] [i_6] [i_0]) : (arr_22 [i_0] [i_1] [i_1] [i_7])))));
                }
                for (int i_8 = 0; i_8 < 10;i_8 += 1) /* same iter space */
                {

                    for (int i_9 = 0; i_9 < 10;i_9 += 1)
                    {
                        var_23 = ((((((0 ? 0 : 54618)) & (arr_13 [i_9] [i_1] [i_6] [i_8] [i_9]))) ^ ((((arr_13 [i_9] [8] [i_1] [i_1] [i_1]) ? var_1 : ((var_6 | (arr_15 [i_1] [i_6] [i_8] [i_1]))))))));
                        var_24 = (((((+((var_8 ? (arr_27 [i_1]) : var_11))))) ? (((!(arr_6 [i_0] [i_0] [i_0])))) : ((var_5 * (~var_12)))));
                    }

                    for (int i_10 = 0; i_10 < 10;i_10 += 1)
                    {
                        var_25 = (min(var_7, (((((var_5 ? (arr_5 [i_8] [i_10]) : var_12))) + (arr_11 [i_1])))));
                        var_26 += (arr_33 [4] [i_1] [4] [i_1] [i_1] [i_1] [i_1]);
                        var_27 = (max(var_27, ((max((((arr_15 [i_0] [i_1] [i_6] [i_10]) ? (arr_13 [i_10] [i_8] [i_6] [i_1] [i_10]) : (((arr_5 [i_0] [i_1]) ? var_3 : 4)))), ((((arr_28 [i_0] [i_10] [i_6]) ? (arr_28 [i_0] [i_8] [i_10]) : (arr_28 [i_0] [i_6] [i_8])))))))));
                    }
                    var_28 = (min(var_28, ((min(107, 2010630507739898643)))));
                }
                for (int i_11 = 0; i_11 < 10;i_11 += 1) /* same iter space */
                {
                    var_29 = (~0);
                    var_30 = (max(var_30, 31719));
                }
                for (int i_12 = 2; i_12 < 6;i_12 += 1)
                {
                    var_31 = (((((arr_1 [i_12 + 4]) ? (((!(arr_22 [6] [i_1] [i_1] [i_1])))) : (arr_30 [i_0] [i_1] [i_0] [i_12 - 2]))) <= (((!((((arr_42 [i_0]) ? -13274 : (arr_24 [i_0] [i_0])))))))));

                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        var_32 = (min(var_32, (((-16 ? ((31718 ? 4611686018427387903 : 31728)) : (max(var_6, (arr_33 [i_12 - 1] [i_1] [i_6] [i_0] [i_13] [i_6] [6]))))))));
                        var_33 = ((-(max(0, (((18446744073709551615 ? (arr_13 [i_13] [i_1] [i_6] [i_12 - 1] [i_13]) : (arr_0 [i_0] [i_0]))))))));
                    }
                    /* vectorizable */
                    for (int i_14 = 1; i_14 < 7;i_14 += 1)
                    {
                        var_34 = (min(var_34, ((((((55 ? 1 : var_5))) ? var_0 : ((~(arr_34 [i_0] [i_0] [i_0]))))))));
                        var_35 = ((!(arr_43 [i_0] [i_6] [i_14 - 1] [i_12 + 4] [i_6] [i_12])));
                    }
                    for (int i_15 = 0; i_15 < 10;i_15 += 1)
                    {
                        arr_52 [i_12] [i_15] [i_6] = (((((((((arr_46 [i_0] [i_1] [i_0] [i_12 + 2] [i_15]) ^ 0))) ? var_1 : (((var_10 || (arr_16 [i_1] [i_1]))))))) ? ((~(((arr_22 [2] [i_0] [i_0] [i_0]) ^ var_10)))) : (((!((min(var_10, var_0))))))));
                        var_36 = ((-((-(!var_10)))));
                    }
                    /* vectorizable */
                    for (int i_16 = 0; i_16 < 0;i_16 += 1)
                    {
                        var_37 = (max(var_37, var_5));
                        var_38 = arr_48 [i_12 - 2] [i_16 + 1] [i_16 + 1] [i_16 + 1] [i_16];
                    }
                }
            }
            arr_57 [i_1] = ((((max((arr_43 [3] [0] [i_0] [i_0] [3] [i_0]), var_11))) ? ((~(arr_43 [i_1] [i_1] [1] [3] [i_1] [9]))) : ((var_8 ? (arr_43 [4] [i_1] [i_1] [0] [i_1] [6]) : var_11))));
        }
        arr_58 [i_0] = (((arr_39 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) > (!255)));
    }
    var_39 = (max(var_39, (((var_0 ? var_11 : var_12)))));
    var_40 |= (var_10 ? var_3 : ((((((var_6 ? 0 : var_9))) ? (~var_4) : 49277))));
    #pragma endscop
}
