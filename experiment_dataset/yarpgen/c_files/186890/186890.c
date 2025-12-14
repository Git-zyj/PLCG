/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186890
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_7;
    var_16 = var_14;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = var_3;
        arr_3 [i_0] = ((((arr_1 [i_0]) ? (arr_0 [i_0]) : 4)));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
        {
            arr_6 [i_0] [i_1] = var_1;
            var_17 = (min(var_17, (((-(arr_5 [i_1] [i_1]))))));
        }
        for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
        {

            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                var_18 = min(11, (!1112997691));
                arr_11 [i_0] [i_3] [i_0] = arr_8 [i_0];
                arr_12 [i_0] [i_2] [i_0] = (min(5, (((4294967284 ? var_9 : var_3)))));
                var_19 = ((((6236229555302966220 ? var_2 : 5)) ^ (arr_5 [i_0] [i_0])));
            }
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    {
                        arr_18 [9] [i_0] [i_4 - 1] [i_5] = 7474708531099486094;
                        arr_19 [i_5] [i_0] = 4294967270;
                        var_20 = 736395986;
                        arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] = var_11;
                    }
                }
            }
        }
        for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
        {
            var_21 = var_8;
            var_22 = (((((var_7 << (arr_15 [i_0] [i_6] [i_6])) | ((var_13 ? var_10 : -7))))));
        }
    }
    for (int i_7 = 0; i_7 < 23;i_7 += 1)
    {
        var_23 = ((((!(arr_24 [i_7])))));

        /* vectorizable */
        for (int i_8 = 1; i_8 < 20;i_8 += 1)
        {
            var_24 += var_11;
            var_25 -= var_9;

            for (int i_9 = 0; i_9 < 23;i_9 += 1)
            {
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 23;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 23;i_11 += 1)
                    {
                        {
                            arr_35 [i_11] [1] [i_9] [i_7] [1] [i_7] = (-((var_10 ? var_6 : var_0)));
                            arr_36 [3] [i_8] [i_9] [i_10] [i_11] = ((arr_24 [i_7]) ? (arr_34 [i_8 + 1] [i_8 + 2] [i_8]) : (arr_33 [i_8 + 3] [i_8 + 3] [i_8 - 1] [i_8 - 1] [i_8 + 3] [i_8 + 1] [i_8 + 1]));
                            arr_37 [i_7] [i_8] [i_9] [11] [i_11] = (arr_24 [i_8 - 1]);
                            var_26 &= var_14;
                            arr_38 [16] [i_7] [1] [i_9] [i_10] [i_11] = (arr_26 [i_7]);
                        }
                    }
                }
                var_27 |= 3586970770;
            }
            var_28 = 251;
        }
        for (int i_12 = 0; i_12 < 23;i_12 += 1)
        {
            var_29 = var_1;
            var_30 = (((((arr_33 [i_12] [i_12] [i_12] [i_7] [i_7] [i_12] [10]) / (arr_33 [i_7] [i_7] [i_7] [21] [i_7] [i_7] [11]))) * (((min(var_5, 4))))));
            var_31 = ((((-(arr_40 [i_12] [i_7]))) - (1 | 1)));
            var_32 -= 35184372056064;
        }
        /* LoopNest 2 */
        for (int i_13 = 4; i_13 < 22;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 23;i_14 += 1)
            {
                {

                    for (int i_15 = 0; i_15 < 23;i_15 += 1) /* same iter space */
                    {
                        arr_48 [i_7] [i_7] [i_15] [i_14] [i_15] = (arr_28 [14]);
                        arr_49 [i_7] [i_15] [i_7] [i_15] [i_15] [i_7] = var_6;
                        arr_50 [i_14] [i_15] [i_13 - 4] [i_15] [i_14] = ((-(min(var_9, (((arr_46 [i_15] [i_15] [i_15] [i_7]) ? var_1 : var_6))))));
                    }
                    for (int i_16 = 0; i_16 < 23;i_16 += 1) /* same iter space */
                    {
                        var_33 = (min(var_33, (arr_29 [i_7] [i_16])));
                        var_34 *= (arr_27 [i_14]);
                    }
                    var_35 = min((((!((min(var_8, var_8)))))), -var_12);

                    for (int i_17 = 2; i_17 < 19;i_17 += 1)
                    {

                        /* vectorizable */
                        for (int i_18 = 1; i_18 < 21;i_18 += 1)
                        {
                            arr_60 [i_18] [i_13] [i_13] = 4294967259;
                            arr_61 [i_7] [i_17] [i_18] [i_17] [i_18] = ((~(arr_45 [i_7] [i_17 + 4] [i_18 - 1])));
                        }
                        var_36 = (min(var_36, (((-((((!(arr_40 [i_13 - 2] [i_14]))) ? ((((arr_54 [i_17] [i_7] [i_7] [i_7]) * (arr_45 [i_17] [i_13 - 4] [i_14])))) : (min((arr_24 [i_17]), (arr_25 [i_7]))))))))));
                        var_37 = ((((((arr_52 [i_7] [i_13] [i_13] [i_7] [i_17 + 4] [i_13 - 1]) % (arr_59 [i_13] [i_13 - 4] [i_14] [i_17] [i_17 + 4] [i_14])))) && 12422184713535149818));
                        var_38 = var_13;
                    }
                    for (int i_19 = 0; i_19 < 23;i_19 += 1)
                    {
                        var_39 = var_13;
                        arr_65 [i_13] = -43782;
                        var_40 = ((~((((min(var_0, var_5))) ? var_13 : 165))));
                        var_41 = arr_47 [i_7];
                    }
                }
            }
        }
    }
    #pragma endscop
}
