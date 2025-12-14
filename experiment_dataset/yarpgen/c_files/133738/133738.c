/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133738
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 15;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] |= var_4;
        var_11 = (arr_0 [6]);
    }
    for (int i_1 = 3; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_12 = 215;
        arr_5 [16] [i_1] = (min(234, (((!(arr_4 [i_1 + 1]))))));

        /* vectorizable */
        for (int i_2 = 2; i_2 < 17;i_2 += 1)
        {
            arr_9 [i_1] = ((2050736857 + ((var_1 ? var_1 : var_0))));

            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                var_13 = (((!234) / (arr_4 [i_1 - 1])));
                var_14 = (arr_6 [i_1 + 1]);
                arr_13 [i_1] [i_2] = 12;
                var_15 = (arr_12 [i_1 - 3] [i_1 - 3] [i_2 - 1] [i_1 - 3]);
            }
            var_16 |= (arr_4 [i_2]);
        }
    }
    for (int i_4 = 3; i_4 < 15;i_4 += 1) /* same iter space */
    {
        arr_18 [i_4] = ((((min((arr_16 [i_4]), 11114))) ? (min((arr_17 [i_4] [i_4]), var_1)) : ((((~var_6) ? 1283321363 : 115)))));
        var_17 = (((arr_10 [i_4]) ? (((!(((var_4 ? 18446744073709551610 : var_10)))))) : 22));

        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            arr_22 [i_4] [17] = (max((min((arr_17 [i_4] [i_4]), 25)), ((((arr_8 [i_5] [i_5] [i_4]) % var_0)))));
            var_18 = (max(var_18, ((max((arr_1 [11]), (((arr_12 [i_4 + 3] [i_4] [i_4] [i_5]) ? (((var_8 ? var_6 : var_1))) : 4017497418042069502)))))));
            var_19 = (arr_0 [i_4]);
        }
        for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 17;i_8 += 1)
                {
                    {

                        for (int i_9 = 0; i_9 < 18;i_9 += 1)
                        {
                            arr_33 [i_4] [i_6] [i_6] [0] [i_7] [i_8] [i_9] |= ((-((-(arr_27 [i_9])))));
                            var_20 = 10943757528215498495;
                        }
                        var_21 = ((+((((((arr_11 [i_7] [i_6]) ? (arr_1 [i_4 - 2]) : (arr_16 [i_4])))) ? (arr_23 [i_4] [i_4]) : 7190568834487536999))));
                    }
                }
            }
            var_22 = (arr_12 [i_4] [i_4] [i_6] [i_6]);

            /* vectorizable */
            for (int i_10 = 0; i_10 < 18;i_10 += 1) /* same iter space */
            {

                for (int i_11 = 0; i_11 < 18;i_11 += 1)
                {
                    var_23 = (((arr_21 [i_4]) ? (arr_1 [i_10]) : ((var_0 ? var_10 : 17148))));
                    var_24 = 1283321363;
                }
                var_25 = arr_8 [i_4] [i_6] [i_4];
                arr_39 [i_4] = (arr_26 [i_4] [11] [i_10]);
            }
            for (int i_12 = 0; i_12 < 18;i_12 += 1) /* same iter space */
            {
                var_26 = (max(40, ((-489902511707259625 + ((min((arr_38 [i_12] [i_12] [i_12] [i_12]), var_0)))))));

                for (int i_13 = 0; i_13 < 18;i_13 += 1)
                {

                    for (int i_14 = 0; i_14 < 18;i_14 += 1) /* same iter space */
                    {
                        arr_48 [i_4] [14] [i_12] [i_6] [i_4] = (max(var_10, (((arr_45 [i_4 + 1] [i_4] [i_4 + 1] [i_4 - 2] [i_4 + 3]) + var_9))));
                        var_27 = 21358;
                    }
                    for (int i_15 = 0; i_15 < 18;i_15 += 1) /* same iter space */
                    {
                        var_28 = (max(var_28, (16239861408490980039 > 117)));
                        var_29 = 127;
                        arr_52 [i_4] [i_4] [i_4] [i_13] [i_4] = (max(((20805 ? (arr_23 [i_4] [i_4]) : 61360)), (((var_3 ? (((min((arr_45 [i_13] [i_13] [i_12] [i_6] [6]), 0)))) : ((3657875309 ? var_3 : 58)))))));
                    }
                    arr_53 [i_4] [i_12] [i_6] [i_4] = (-8649952927971174456 - -80);
                    var_30 = (max((arr_12 [10] [16] [16] [16]), (((min(var_2, var_2)) | (arr_10 [i_4])))));
                    arr_54 [i_4] [i_4] [i_12] [12] [i_13] = (arr_7 [i_12] [i_6] [i_4]);
                    var_31 *= ((((max(185203975, -3268370059653418474))) ^ (((arr_34 [6] [i_12]) ? 562949953421248 : 11100))));
                }
            }
        }
        for (int i_16 = 0; i_16 < 18;i_16 += 1) /* same iter space */
        {

            /* vectorizable */
            for (int i_17 = 1; i_17 < 14;i_17 += 1)
            {
                arr_60 [i_4] [i_4] = (arr_11 [i_16] [i_16]);
                var_32 ^= (arr_42 [i_4] [i_4] [i_16] [10] [i_17 + 2]);
                arr_61 [i_4] = (arr_46 [i_4] [i_4] [i_16] [i_4] [i_17]);
            }
            for (int i_18 = 0; i_18 < 18;i_18 += 1)
            {
                arr_64 [i_4] = (arr_4 [5]);
                var_33 = (((arr_58 [i_4 - 3] [i_4 - 3] [i_18] [i_4]) ? (((((var_3 ? (arr_1 [9]) : (arr_50 [i_4] [i_4] [i_4] [i_16] [i_16] [i_16] [16])))) ? var_9 : 1601311554)) : 48));
                var_34 = -127;
                var_35 = (min(var_35, (((((min((!0), (max(var_3, (arr_10 [i_18])))))) ? (arr_38 [i_16] [3] [i_4] [3]) : (min(-48384, ((7206049694738795733 ? var_8 : (arr_36 [i_4] [i_16] [i_18] [i_4]))))))))));
                var_36 ^= var_10;
            }
            var_37 = (min(var_37, (((((min(2395383032, -91))) ? (max(127, 2395383054)) : ((((!(arr_23 [i_16] [i_16]))))))))));
            arr_65 [i_4] = var_2;
        }
    }
    var_38 = (max(var_7, 80));
    #pragma endscop
}
