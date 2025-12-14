/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181703
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_17 = (max(var_17, (((~((var_3 ? (4294967295 + 5906706663653205022) : (var_3 / 255))))))));
                var_18 = ((-(~50331648)));
            }
        }
    }

    for (int i_2 = 1; i_2 < 13;i_2 += 1)
    {
        arr_8 [i_2] [i_2] = ((3512751143 ? 16777215 : 33554431));

        /* vectorizable */
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            var_19 = (arr_5 [14] [i_3]);
            arr_13 [i_2] = ((~(arr_11 [i_2 + 2] [i_2 + 1] [i_2 + 2])));
        }
        for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_5 = 1; i_5 < 15;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 14;i_6 += 1)
                {
                    {
                        var_20 = (max(var_20, ((((-(arr_22 [i_6] [i_6 + 1] [i_6 + 1] [i_6])))))));
                        arr_23 [i_2] [i_2] [i_4] [i_4] [i_2] [i_2] = ((+((18010000462970880 ? (4244635647 * -22077) : (min(1, 32767))))));

                        for (int i_7 = 2; i_7 < 14;i_7 += 1)
                        {
                            var_21 = ((((!(arr_26 [i_2] [i_4] [i_5 - 1] [i_4] [i_7])))));
                            var_22 *= ((~(arr_21 [i_2] [i_4] [14] [14])));
                            arr_27 [i_7] [i_2] [i_2] [6] [i_2] [i_2] = (max((min((arr_2 [i_7 - 1] [i_6 + 2]), (arr_2 [i_7 + 2] [i_6 + 1]))), 22077));
                        }
                    }
                }
            }

            for (int i_8 = 2; i_8 < 12;i_8 += 1)
            {

                for (int i_9 = 0; i_9 < 16;i_9 += 1)
                {
                    var_23 = (arr_20 [1] [i_4] [i_8] [i_9] [i_8] [i_4]);
                    var_24 += (arr_14 [i_9]);
                }
                arr_34 [i_2] [i_4] [5] [i_2] = 2731362613;
                var_25 = ((var_0 ? (max(1563604682, 16777211)) : ((((arr_1 [i_8 + 1]) ? var_0 : (arr_2 [i_2] [i_8 - 2]))))));
            }
        }
        for (int i_10 = 0; i_10 < 16;i_10 += 1) /* same iter space */
        {
            arr_38 [i_2] [i_2] = (((max(2785988096, (max(6884697109059901104, var_2)))) == (((((min(-1, 16777215))) ? (arr_37 [i_2] [i_10]) : (arr_33 [i_10] [i_10] [i_2] [11] [i_10] [i_2]))))));
            var_26 = 1176398820;
            var_27 = (arr_9 [i_2 + 1] [11]);
        }
        for (int i_11 = 0; i_11 < 16;i_11 += 1) /* same iter space */
        {

            for (int i_12 = 0; i_12 < 16;i_12 += 1)
            {
                arr_47 [i_2] [i_2] [i_12] = var_8;

                /* vectorizable */
                for (int i_13 = 2; i_13 < 12;i_13 += 1)
                {

                    for (int i_14 = 1; i_14 < 14;i_14 += 1)
                    {
                        var_28 |= (arr_49 [5] [i_13] [i_13 - 2] [1] [1] [5]);
                        arr_54 [15] [i_11] [3] [i_2] [i_11] = ((1508979200 ? 1925243425 : 1563604661));
                        var_29 = (min(var_29, (((~(arr_32 [i_11] [i_11] [i_13 - 2] [i_14]))))));
                        var_30 -= ((-(arr_14 [i_2 + 1])));
                        var_31 ^= ((-(arr_22 [i_14 + 1] [i_13] [i_11] [i_2])));
                    }
                    var_32 = (arr_3 [i_13 - 1] [i_2 + 3] [i_2]);
                    arr_55 [i_2] [i_13 + 4] = arr_21 [i_13 + 1] [i_13 + 3] [i_13 + 4] [i_13 + 4];
                }
                var_33 += (16777215 % -22077);
            }
            /* vectorizable */
            for (int i_15 = 2; i_15 < 15;i_15 += 1)
            {
                var_34 = (arr_42 [i_2]);
                arr_58 [i_2] [i_2] = (arr_43 [i_15 + 1] [i_15 - 2] [i_15 + 1] [i_15 + 1]);

                for (int i_16 = 2; i_16 < 13;i_16 += 1)
                {
                    var_35 = ((var_12 & (arr_11 [i_11] [i_15] [i_16])));
                    arr_61 [i_2 + 2] [i_2] [4] [i_16] [14] = (!0);
                }
            }
            arr_62 [i_2] = 6884697109059901104;
            arr_63 [i_2] [i_11] [i_2] = var_16;
        }
    }
    var_36 = (max(var_9, (max((max(var_3, var_16)), var_13))));
    #pragma endscop
}
