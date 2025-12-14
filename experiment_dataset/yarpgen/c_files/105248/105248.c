/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105248
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = -var_8;
    var_11 = (((~5214567415193556335) >= var_8));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {

            for (int i_2 = 3; i_2 < 17;i_2 += 1) /* same iter space */
            {
                var_12 = var_8;
                var_13 -= (arr_3 [i_2]);
                arr_7 [9] [i_2] [i_2] = (((arr_6 [i_2 - 1] [i_2 - 3] [i_2 - 2]) | (arr_6 [i_2 - 3] [i_2 - 2] [i_2 - 3])));
            }
            for (int i_3 = 3; i_3 < 17;i_3 += 1) /* same iter space */
            {
                arr_11 [i_3] [i_1] [i_3] [i_3] = ((((((arr_10 [i_0]) << (var_7 - 12352131429261631942)))) & (((arr_4 [i_0] [16] [i_0]) ? var_9 : -5214567415193556350))));
                arr_12 [i_0] [i_3] [i_3] = var_8;
                arr_13 [i_0] [i_0] [i_3] = (arr_1 [i_1]);
            }
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {

                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    var_14 = ((var_0 ? (((arr_1 [i_1]) * var_0)) : (((var_5 << (((arr_6 [i_0] [i_0] [i_0]) - 17495)))))));

                    for (int i_6 = 2; i_6 < 19;i_6 += 1)
                    {
                        var_15 = (min(var_15, ((((arr_17 [i_6 - 2] [i_6 - 1] [i_6 + 1] [i_6 + 1] [i_6 - 1]) | var_8)))));
                        arr_23 [i_6] [i_6] [i_6] [i_5] [i_6] [5] [i_0] = ((var_6 % (arr_5 [i_1] [i_4] [i_5] [i_6])));
                        var_16 = (((arr_17 [i_0] [i_6 - 1] [i_6 - 1] [i_5] [i_6]) & (arr_17 [i_0] [i_6 - 1] [i_6 - 1] [i_5] [i_6])));
                    }

                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        var_17 = (min(var_17, (((var_5 << (((arr_20 [i_0] [i_1] [i_4] [i_5] [i_5]) - 1542499448)))))));
                        var_18 = (((((arr_4 [i_0] [i_1] [i_0]) >= -6680535949115880739))) / (((arr_10 [i_0]) - var_6)));
                    }

                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        var_19 = ((var_2 | (~var_7)));
                        var_20 = var_8;
                    }
                    for (int i_9 = 4; i_9 < 19;i_9 += 1) /* same iter space */
                    {
                        arr_32 [i_0] [i_1] [i_4] [i_5] [i_9 + 1] = (((arr_28 [i_0] [i_1] [i_1] [i_1]) / (arr_29 [i_0] [i_1] [i_4])));
                        var_21 = (((~(arr_6 [i_0] [i_0] [i_5]))));
                    }
                    for (int i_10 = 4; i_10 < 19;i_10 += 1) /* same iter space */
                    {
                        var_22 = ((var_5 ? 24576 : (var_6 < var_3)));
                        var_23 ^= (var_1 > (arr_28 [i_0] [i_4] [i_4] [i_10 + 1]));
                        arr_35 [i_10] [i_1] [i_1] [i_10] [i_10] [19] [i_10 - 3] = (((arr_34 [1] [i_10 - 4] [i_10] [i_10] [i_10 - 2] [i_10 - 3]) ? (arr_30 [i_10 - 1] [i_10 - 3] [i_10 - 3] [i_10 - 3] [i_10 - 4]) : var_6));
                    }
                }
                arr_36 [i_0] [i_4] = arr_19 [i_4] [i_4] [i_0] [i_1] [i_0];
                arr_37 [i_0] [i_0] [i_1] [i_4] = ((var_0 > (((var_2 ? var_6 : (arr_0 [i_1]))))));
                var_24 = (((((arr_33 [i_4] [i_4] [i_4] [i_0]) ^ var_2)) | (var_2 | var_5)));
            }
            arr_38 [i_0] [i_1] [i_1] = ((((32767 ? (arr_17 [i_0] [i_1] [i_0] [i_0] [i_1]) : var_0))) ? (arr_20 [i_1] [i_0] [i_0] [i_0] [i_0]) : ((var_2 ? (arr_0 [9]) : var_4)));

            for (int i_11 = 0; i_11 < 20;i_11 += 1)
            {
                var_25 = (max(var_25, (((arr_6 [i_0] [i_1] [i_11]) ? (arr_25 [i_0] [i_0] [1] [i_1] [i_1] [i_11] [i_11]) : var_2))));

                for (int i_12 = 0; i_12 < 20;i_12 += 1)
                {
                    var_26 = var_1;
                    var_27 = (((arr_1 [i_0]) ? ((((arr_27 [i_12] [i_12] [i_11] [i_1] [i_0]) ? var_9 : var_5))) : -var_7));
                    arr_47 [i_12] [i_11] [i_1] [i_0] = ((var_8 ? var_4 : (arr_25 [i_12] [i_0] [i_11] [i_11] [i_1] [i_0] [i_0])));
                    var_28 = ((((var_3 << (((arr_39 [i_0] [i_0] [1] [i_0]) - 8901)))) <= var_6));
                }
                for (int i_13 = 0; i_13 < 20;i_13 += 1)
                {
                    var_29 = (arr_34 [i_0] [i_1] [i_11] [i_11] [i_13] [i_13]);
                    arr_52 [i_13] [i_1] [i_11] [i_13] = (((arr_45 [i_0] [i_1] [i_1] [i_13]) << ((((var_2 ? (arr_48 [i_0] [i_0] [i_0] [i_0] [i_0]) : var_9)) - 2693757339658510375))));
                }
                var_30 = ((var_3 ? (((var_2 ? (arr_17 [7] [i_1] [i_11] [i_11] [i_1]) : (arr_30 [i_0] [i_0] [i_0] [i_0] [i_0])))) : var_9));
                var_31 = (arr_34 [i_0] [i_0] [i_0] [i_1] [i_11] [i_11]);
            }
            var_32 = (arr_3 [i_1]);
        }
        var_33 -= ((((var_1 != (arr_18 [i_0] [i_0] [i_0] [i_0] [i_0]))) ? 5214567415193556335 : (arr_24 [i_0] [i_0] [i_0] [i_0])));
    }
    var_34 = (max(11238, 7639109325901526215));
    #pragma endscop
}
