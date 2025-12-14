/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133180
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_18;
    var_20 *= var_16;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_21 = (arr_1 [i_0]);
        var_22 = (max(((max((arr_1 [i_0]), (arr_1 [i_0])))), (((arr_1 [i_0]) ? (arr_1 [i_0]) : 115))));

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {

            /* vectorizable */
            for (int i_2 = 4; i_2 < 15;i_2 += 1)
            {
                arr_6 [i_0] [i_2] [i_2] = (arr_2 [i_0] [0] [i_2]);

                for (int i_3 = 0; i_3 < 0;i_3 += 1)
                {
                    arr_10 [i_2] [i_1] [i_1] [i_1] [i_1] [i_1] = (arr_8 [i_2 - 2] [i_3 + 1] [i_2 - 2] [i_2 - 2]);
                    var_23 = ((var_0 ^ (arr_1 [i_0])));
                    var_24 = ((!(arr_1 [i_0])));
                }
                arr_11 [i_2] [i_1] [i_1] = ((!(~var_16)));
            }
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                var_25 = (arr_8 [i_0] [i_0] [i_0] [i_0]);
                var_26 = (min(var_26, ((max(var_2, (((arr_7 [i_0] [i_1] [i_0] [i_0] [i_4] [i_1]) & (arr_7 [i_0] [i_0] [i_0] [0] [i_1] [i_4]))))))));
            }
            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                arr_18 [i_0] [3] = ((-(max(var_4, 1919))));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 15;i_7 += 1)
                    {
                        {
                            var_27 = ((-(((arr_3 [i_0] [i_6]) ? var_7 : var_14))));
                            var_28 &= ((+((var_4 ? (arr_17 [i_0] [15]) : ((var_10 ? var_18 : var_13))))));
                            arr_23 [i_0] [i_0] &= (max(((((arr_21 [i_7 + 1] [i_5]) | (max((arr_2 [i_0] [i_1] [i_6]), var_15))))), (arr_0 [i_6])));
                            var_29 = (arr_1 [11]);
                        }
                    }
                }
                arr_24 [i_0] [i_1] [i_5] &= ((max((var_14 || 22), -var_15)));
                arr_25 [i_0] [i_1] [i_5] = ((var_9 ? (arr_17 [i_0] [i_0]) : (max(63864, (max(var_14, -5801683888040608388))))));
                var_30 = ((~(-3354336413 % 1)));
            }
            /* vectorizable */
            for (int i_8 = 0; i_8 < 17;i_8 += 1)
            {
                var_31 = 0;
                var_32 = (((arr_2 [i_0] [i_0] [i_0]) & 36));
                var_33 = var_1;
                arr_29 [i_0] [14] = (((arr_12 [i_0] [i_0] [i_0] [i_0]) / var_0));
            }
            arr_30 [i_0] [i_1] [i_1] &= max((((arr_9 [i_0] [i_0] [i_0] [i_1]) ? (arr_9 [i_0] [i_0] [14] [i_1]) : (arr_9 [i_0] [i_0] [i_0] [i_1]))), (((!(arr_9 [i_0] [i_0] [i_1] [i_1])))));
            var_34 = ((((-(arr_16 [i_1] [i_1] [i_0] [i_0]))) + (arr_28 [i_0] [i_0] [i_1] [i_0])));
        }
        for (int i_9 = 1; i_9 < 15;i_9 += 1) /* same iter space */
        {
            arr_33 [i_0] [i_0] [i_9] &= 12690;
            var_35 *= (((max((arr_17 [i_9 + 1] [i_9 + 2]), var_14)) <= ((((!(arr_17 [i_9 + 2] [i_9 + 1])))))));
            var_36 = (max(var_36, ((max(((((((var_17 ? var_0 : 0))) || ((max(var_6, var_13)))))), (((((arr_2 [i_0] [i_0] [i_9]) ? var_18 : var_10)) | -17)))))));
            var_37 = (((var_10 / 209) / (((arr_22 [i_9 + 1] [i_9 + 1] [i_9] [i_9 + 1]) ? var_3 : 3))));
        }
        for (int i_10 = 1; i_10 < 15;i_10 += 1) /* same iter space */
        {
            arr_37 [i_10] [i_10] [i_10] = (((~var_10) + var_16));
            arr_38 [i_10] = (arr_9 [i_0] [i_0] [i_0] [i_10]);
            var_38 = ((6634 ? ((((arr_20 [8] [8] [i_10 - 1]) ? ((max(-1, (arr_35 [i_10])))) : (arr_1 [5])))) : (arr_36 [i_10 + 1] [i_10 + 1])));
        }
        var_39 = (max(var_39, -10));
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 17;i_11 += 1)
        {
            for (int i_12 = 2; i_12 < 15;i_12 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 17;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 17;i_14 += 1)
                        {
                            {
                                var_40 = (((((((((arr_31 [i_13]) ? (arr_43 [2] [8] [i_12] [2]) : var_2))) ? var_2 : (arr_19 [i_0] [i_11] [i_12] [i_11])))) ? (max((arr_22 [i_12 + 1] [i_0] [i_11] [i_13]), -8874026952570155609)) : (arr_35 [i_11])));
                                arr_48 [i_0] [7] [i_12] [i_11] [1] = (max(((max(((max(23675, (arr_43 [i_0] [i_0] [i_0] [i_0])))), -var_1))), 18446744073709551615));
                                var_41 = (!(arr_36 [15] [4]));
                                var_42 = (arr_8 [i_13] [i_13] [10] [i_13]);
                            }
                        }
                    }
                    arr_49 [i_11] = max(((((arr_42 [i_12 - 1] [i_11] [i_12] [i_12]) ? var_10 : (arr_42 [i_12 - 1] [i_11] [i_12] [i_12])))), var_7);
                    var_43 *= (arr_21 [i_12 - 1] [i_0]);
                    var_44 &= ((((max((max(7390642553817965001, (arr_22 [i_0] [i_0] [i_0] [i_12]))), (!-1)))) ? (max(119, (arr_42 [i_11] [i_12] [i_11] [i_12]))) : ((((((arr_2 [i_0] [i_11] [i_12]) << (arr_31 [i_0]))) >= (!4))))));
                }
            }
        }
    }
    for (int i_15 = 2; i_15 < 19;i_15 += 1)
    {
        arr_54 [i_15] = 0;
        var_45 = (((var_7 * var_15) ? (((arr_51 [i_15 - 1]) ? var_6 : 23675)) : (!var_17)));
        arr_55 [16] = ((((((!((max((arr_50 [i_15 - 2] [i_15]), (arr_52 [i_15 - 1])))))))) * ((var_7 ? (!0) : var_2))));
    }
    for (int i_16 = 0; i_16 < 24;i_16 += 1)
    {
        var_46 = var_10;
        var_47 = ((((-(arr_57 [i_16] [i_16]))) - (((arr_57 [i_16] [i_16]) | (arr_57 [i_16] [i_16])))));
    }

    /* vectorizable */
    for (int i_17 = 0; i_17 < 19;i_17 += 1)
    {
        arr_61 [18] &= ((~(arr_59 [i_17])));
        var_48 = (arr_58 [16]);
        var_49 = var_12;
    }
    #pragma endscop
}
