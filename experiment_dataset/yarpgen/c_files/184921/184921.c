/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184921
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= var_2;

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0 - 3] [i_0 + 3] = (!0);
        var_21 *= ((((arr_1 [i_0 + 2]) ? var_4 : var_6)));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 11;i_1 += 1)
    {
        var_22 = 3403002311;
        arr_5 [i_1] = ((((((!(arr_4 [i_1] [i_1]))))) / ((var_16 ? (arr_3 [i_1]) : (arr_0 [i_1])))));

        for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
        {
            var_23 *= (arr_7 [i_1] [i_1 - 1]);
            var_24 = ((~(-21549 / var_8)));
            var_25 = ((2164962508 ? (arr_4 [i_1] [i_1 + 4]) : (arr_4 [i_1 - 1] [i_1 + 1])));
        }
        for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
        {

            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                arr_15 [i_4] [i_3] [i_4] [i_3] = ((-(arr_7 [i_1 - 1] [i_1 + 2])));
                var_26 = ((21549 ? (arr_13 [i_1 + 3] [i_3]) : 69));
                arr_16 [i_3] [i_4] = (((arr_3 [i_1 + 3]) ? (-23694 % 1) : ((((arr_3 [i_1]) || (arr_8 [9] [i_3] [i_4]))))));
            }
            var_27 = (max(var_27, ((((0 | 12457924500053439273) ? (~-111) : (arr_11 [i_1 - 2] [i_1 + 1]))))));
        }
        for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
        {
            var_28 *= ((((((arr_4 [i_1] [2]) + 2147483647)) >> 1)));
            arr_20 [i_5] [i_5] = 0;

            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                arr_23 [i_1] [i_5] [i_5] [i_6] = (((1 ? var_17 : 28490)));
                var_29 = (max(var_29, (((((2103058730 ? 4248 : 1))) ? ((-1 ? -30674 : 1)) : 1))));
                var_30 = (((21548 * var_5) ? -30656 : var_8));
            }
            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                arr_26 [i_1] [i_5] [i_5] [i_1] = -var_9;
                var_31 = (arr_6 [i_1 - 2] [i_5] [i_7]);
                arr_27 [i_1] [i_1 - 2] [i_1] [i_5] = ((arr_21 [i_1] [i_1] [i_7] [i_5]) >> (arr_6 [i_1] [i_5] [i_7]));
            }
            for (int i_8 = 0; i_8 < 15;i_8 += 1)
            {

                for (int i_9 = 0; i_9 < 15;i_9 += 1) /* same iter space */
                {
                    var_32 *= (~-1);
                    var_33 = ((arr_28 [i_1 + 1] [4] [i_1 + 2]) ? var_17 : var_0);
                    arr_35 [i_1] [i_5] = 1;
                }
                for (int i_10 = 0; i_10 < 15;i_10 += 1) /* same iter space */
                {
                    arr_38 [i_1 + 3] [i_1] [i_5] [i_1] = (1869125011 && 21561);
                    arr_39 [i_1] [i_1] [i_1] [i_1 + 2] [i_5] [i_1 + 1] = ((arr_7 [i_1] [i_1]) ? var_19 : ((-29772 ? -1928433748 : 1)));
                    arr_40 [i_5] = ((((arr_4 [i_5] [i_10]) ? var_15 : -18910)));
                    var_34 = 8463;
                    arr_41 [13] [13] [13] [i_8] [i_10] [i_5] = (-(arr_28 [i_1 - 2] [i_1 + 3] [i_1 - 2]));
                }

                for (int i_11 = 0; i_11 < 15;i_11 += 1)
                {
                    arr_44 [i_1 + 1] [i_5] = (((((var_16 ? var_4 : 21548))) ? (-32767 - 1) : var_14));
                    var_35 = (((8378274992204947420 ? 84 : 23)));
                }
                var_36 *= 1;
            }
            /* LoopNest 2 */
            for (int i_12 = 2; i_12 < 14;i_12 += 1)
            {
                for (int i_13 = 1; i_13 < 12;i_13 += 1)
                {
                    {
                        arr_52 [i_5] [i_12] [i_5] [i_5] [i_1 - 2] [i_1] = 1363375504;
                        var_37 *= -27918;
                        var_38 = (max(var_38, (((arr_0 [i_1 - 1]) ? (arr_6 [i_13 + 3] [i_1 + 1] [i_12]) : (arr_32 [i_13 - 1] [i_13] [14] [14] [i_13 + 1] [i_13])))));

                        for (int i_14 = 0; i_14 < 15;i_14 += 1) /* same iter space */
                        {
                            arr_56 [i_1] [i_5] [i_1] [i_1] [i_1] [i_1] = (arr_53 [i_1] [i_1 + 3] [i_1] [i_1] [i_1 - 2] [i_12 + 1]);
                            var_39 *= 21561;
                        }
                        for (int i_15 = 0; i_15 < 15;i_15 += 1) /* same iter space */
                        {
                            arr_59 [i_5] [i_5] [i_12] = 4;
                            var_40 = (min(var_40, ((-(((arr_14 [1] [i_5] [1] [i_5]) ? 8378274992204947420 : 1))))));
                        }
                        arr_60 [i_13] [i_12 - 2] [i_5] [i_5] [i_1] [1] = (var_4 < 87);
                    }
                }
            }
        }
        for (int i_16 = 0; i_16 < 15;i_16 += 1) /* same iter space */
        {
            var_41 = (max(var_41, ((((((arr_31 [i_1 + 2]) + 2147483647)) >> (((arr_31 [i_1 - 2]) + 24700)))))));
            var_42 *= 1;

            for (int i_17 = 0; i_17 < 15;i_17 += 1)
            {
                var_43 = (min(var_43, 0));
                var_44 *= (((arr_55 [i_1 + 1] [i_1] [i_1] [i_16] [i_16] [i_16] [i_17]) ? 1 : 1));
            }
            arr_66 [i_1] [i_1] [i_1] = (((~-61) ? (arr_65 [i_1] [i_1] [i_1] [2]) : 1));
        }
        var_45 = ((-639 ? 2681750669 : 0));
    }
    #pragma endscop
}
