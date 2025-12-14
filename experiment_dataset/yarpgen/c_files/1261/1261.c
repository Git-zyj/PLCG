/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1261
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_8;

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        var_17 = var_11;
        var_18 |= var_2;
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        var_19 = (((arr_3 [i_1] [i_0 + 2] [i_1]) ? (~var_13) : (arr_8 [i_0] [i_1] [i_2] [i_1])));
                        var_20 = (var_12 - var_8);
                        arr_9 [i_0] [i_1] = ((((((((arr_1 [21] [8]) ? (arr_6 [4] [i_1]) : (arr_6 [i_0] [i_1])))) ? (min(4294967295, (arr_7 [i_1] [20] [i_2] [i_2] [i_1] [i_1]))) : (arr_7 [i_1] [i_1] [i_2] [i_3] [i_1 + 2] [i_2])))) ? (((-(arr_2 [i_1 + 4] [i_2 + 1] [i_0 + 2])))) : 724586819);
                    }
                }
            }
        }

        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            var_21 ^= ((((((((arr_4 [i_0] [i_0] [1] [i_0]) & var_3))) ? (arr_11 [i_0]) : 4294967295))) ? (((4294967294 & 3870588024) & (max((arr_10 [i_4]), 0)))) : ((((min((arr_0 [i_4]), (arr_1 [i_0] [i_4])))))));
            arr_12 [i_4] [10] [10] = (min((min(((4294967275 & (arr_0 [4]))), -4294967287)), (arr_3 [i_0] [1] [i_4])));
            var_22 = (min(var_22, 0));
        }
    }
    for (int i_5 = 1; i_5 < 12;i_5 += 1)
    {

        for (int i_6 = 3; i_6 < 15;i_6 += 1) /* same iter space */
        {

            for (int i_7 = 1; i_7 < 12;i_7 += 1)
            {
                var_23 = (max(var_23, (min(((((min(9, (arr_5 [i_5] [i_6 + 1] [13] [i_5]))) == (4294967295 || 4294967283)))), ((((((arr_10 [19]) ? 4294967287 : var_0))) ? 133458188 : (arr_15 [i_5])))))));

                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    arr_24 [i_5] [i_8] [i_6] [i_6] [10] [i_5] = ((!(var_7 >= var_0)));
                    var_24 = (max(var_24, (((((((!7) << (4294967286 - 4294967268)))) <= ((var_6 / ((2 ? 35 : var_15)))))))));
                }
                for (int i_9 = 0; i_9 < 16;i_9 += 1)
                {
                    arr_27 [i_6] [6] [i_7] [i_9] = arr_11 [10];
                    var_25 = (2448133751 ? 35 : (4294967295 / var_6));
                    var_26 = (min(var_26, (arr_26 [i_9] [2] [i_6] [i_6] [15])));
                    arr_28 [i_5 + 1] [i_5] [i_6] [i_5] [i_5] [i_5] = min((arr_20 [i_7] [i_7] [i_7]), 3072);
                }
                for (int i_10 = 1; i_10 < 12;i_10 += 1)
                {
                    arr_31 [i_6] = var_9;
                    arr_32 [8] &= (max(((-(arr_21 [4] [i_5 + 1] [i_6 + 1] [i_10]))), 3770288171));
                    var_27 = (max(var_27, var_7));
                }
                arr_33 [i_6] [i_6] [i_7] = (max(((0 ? (arr_15 [i_5 + 2]) : 15)), (((max(8, (arr_19 [i_6] [i_6] [i_6] [2])))))));
                arr_34 [i_5] [i_5] [i_6] [11] = ((+((max((arr_26 [i_6] [i_6 - 3] [0] [i_6] [i_6 - 3]), (arr_26 [i_5 + 2] [8] [6] [4] [i_6 - 3]))))));
            }
            arr_35 [i_6] [i_6] = (max((!var_10), var_2));
            arr_36 [i_5] [i_5] [i_6] = (((((max((arr_21 [i_6] [i_5] [i_6] [i_6]), 4294967283))) ? (arr_30 [i_5 + 2] [i_6] [i_6] [i_6]) : 14)) | 3582519211);
        }
        for (int i_11 = 3; i_11 < 15;i_11 += 1) /* same iter space */
        {

            for (int i_12 = 0; i_12 < 16;i_12 += 1)
            {
                var_28 = -3874016697;
                var_29 = ((min((arr_13 [4] [i_11]), (arr_21 [6] [i_12] [6] [i_12]))) - ((min(var_1, 3072))));
            }
            arr_42 [i_5] [i_5] [12] = (((var_2 * 13) ? (max(0, 7)) : 536870912));
            var_30 = arr_8 [i_11 - 2] [i_11] [i_5] [i_5 + 3];
            var_31 *= ((43525 << (15731 - 15722)));
            var_32 ^= ((((var_12 ? 4193 : (arr_2 [i_11] [i_5 + 1] [9]))) >> ((((max((arr_13 [i_5 + 1] [i_5]), (arr_13 [i_5 + 1] [i_5])))) - 10862))));
        }
        for (int i_13 = 3; i_13 < 15;i_13 += 1) /* same iter space */
        {
            var_33 ^= 2;
            var_34 = 49786;
        }
        for (int i_14 = 1; i_14 < 14;i_14 += 1)
        {
            var_35 -= var_2;

            /* vectorizable */
            for (int i_15 = 2; i_15 < 15;i_15 += 1)
            {
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 16;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 16;i_17 += 1)
                    {
                        {
                            var_36 = (!var_0);
                            var_37 = (max(var_37, (((12288 != (((arr_0 [i_5]) / (arr_52 [i_17] [i_16] [i_15] [15] [i_5] [i_5]))))))));
                            var_38 = (arr_25 [i_5 - 1] [i_17]);
                        }
                    }
                }
                var_39 = arr_1 [i_14 - 1] [i_14];
                var_40 |= (~((26 ? 4294967292 : var_6)));
                var_41 = var_1;
                var_42 -= ((var_4 | (arr_55 [i_14 + 1] [5] [0] [i_5] [i_15] [i_15 - 2] [i_5 + 2])));
            }
        }
        arr_56 [i_5] = min((max((~var_10), ((var_2 * (arr_20 [i_5] [i_5] [i_5]))))), var_1);
        var_43 *= arr_25 [2] [2];
    }
    var_44 = var_6;
    var_45 = -var_7;
    #pragma endscop
}
