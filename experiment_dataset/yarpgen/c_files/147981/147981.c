/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147981
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_4 [i_0] = (((((((max((arr_2 [i_0]), (arr_2 [i_0])))) - (arr_3 [i_0] [i_0])))) ? (((((-(arr_0 [i_0] [i_0])))) ? (255 + 130023424) : (arr_0 [i_0] [i_0]))) : (arr_1 [i_0])));
        var_13 = (arr_3 [i_0] [i_0]);
    }

    /* vectorizable */
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_14 = (arr_6 [i_1]);

        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            var_15 -= ((((((arr_5 [14]) ? (arr_9 [1]) : (arr_5 [4])))) ? 448 : ((((!(arr_7 [i_2])))))));
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 20;i_4 += 1)
                {
                    {
                        var_16 = (min(var_16, (arr_10 [14] [14])));
                        arr_14 [i_4] [i_3] [i_1] [i_1] [i_2 - 1] [i_1] = (((arr_13 [i_1] [i_1] [i_1] [i_1]) ? (arr_9 [i_1]) : (((arr_7 [i_1]) ? (arr_13 [i_4 - 3] [i_1] [i_1] [i_1]) : (arr_10 [i_1] [i_1])))));
                        var_17 = (~(arr_13 [i_3] [i_1] [i_1] [i_2]));
                        var_18 = ((arr_5 [i_1]) == (arr_11 [i_4] [i_3 + 1] [i_2 - 1]));
                        var_19 = (((249 ? 535822336 : -438)));
                    }
                }
            }
            var_20 *= (arr_9 [14]);
        }
        for (int i_5 = 1; i_5 < 17;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                var_21 *= 18446744073709551615;
                arr_23 [i_1] [i_1] = ((-(arr_21 [i_6] [17] [i_5] [i_1])));
                var_22 += ((-(((arr_5 [6]) ? (arr_21 [i_6] [i_5] [i_1] [i_1]) : (arr_12 [16])))));

                for (int i_7 = 0; i_7 < 21;i_7 += 1)
                {
                    var_23 *= (arr_7 [i_5 + 2]);
                    var_24 -= (arr_13 [i_5] [i_7] [i_7] [i_1]);
                    var_25 = (min(var_25, ((((arr_17 [i_5 - 1]) ? (((arr_25 [i_1] [i_5 + 2] [i_1]) ? (arr_22 [i_7] [i_7] [i_1]) : (arr_16 [i_7] [i_5] [i_7]))) : (arr_8 [i_6]))))));
                }
            }
            for (int i_8 = 0; i_8 < 21;i_8 += 1)
            {
                var_26 = 3;

                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    arr_33 [i_9] [i_1] [1] [i_1] [9] = 466;
                    var_27 = ((((((arr_31 [i_9] [i_8] [i_1] [i_1]) ? (arr_22 [16] [i_1] [i_1]) : (arr_16 [i_1] [i_5 + 3] [i_1])))) ? (arr_5 [i_1]) : (((arr_16 [i_1] [i_5] [i_1]) + (arr_7 [i_9])))));
                }
                for (int i_10 = 0; i_10 < 21;i_10 += 1)
                {
                    var_28 = (max(var_28, (((((!(arr_25 [2] [i_8] [3])))) << (((arr_16 [i_8] [i_5 + 2] [i_8]) - 45040))))));
                    arr_36 [i_1] [i_1] = ((((!(arr_34 [i_10] [i_1] [i_1] [i_1]))) ? (arr_12 [i_1]) : ((((arr_17 [i_1]) != (arr_8 [i_5]))))));
                }
                var_29 &= (arr_21 [i_8] [i_8] [i_5] [i_5 - 1]);
                var_30 -= ((arr_22 [i_8] [i_8] [i_1]) ? (3 && -1846052278) : (arr_13 [i_8] [i_8] [i_8] [i_1]));
            }
            var_31 = (((-(arr_34 [i_5] [i_1] [i_1] [i_1]))));
            var_32 = (((arr_17 [i_5 + 2]) ? (arr_29 [i_1] [i_1] [i_1]) : (arr_28 [i_1] [i_5] [i_1] [i_1])));

            for (int i_11 = 0; i_11 < 21;i_11 += 1) /* same iter space */
            {
                arr_39 [i_1] [1] [i_1] = (arr_28 [i_1] [1] [i_1] [i_1]);

                for (int i_12 = 0; i_12 < 21;i_12 += 1)
                {
                    arr_42 [i_1] [i_1] [i_1] [i_1] = (-(arr_9 [i_1]));
                    arr_43 [i_1] [i_1] = (arr_12 [i_1]);
                }
                for (int i_13 = 1; i_13 < 1;i_13 += 1)
                {

                    for (int i_14 = 1; i_14 < 20;i_14 += 1) /* same iter space */
                    {
                        var_33 = (arr_41 [i_14] [i_1] [i_11] [i_1] [i_1]);
                        var_34 = ((~(arr_31 [i_14] [i_5] [i_5] [i_1])));
                    }
                    for (int i_15 = 1; i_15 < 20;i_15 += 1) /* same iter space */
                    {
                        var_35 *= ((arr_24 [i_15 - 1] [i_13] [i_1] [i_1]) ? (((arr_47 [i_5] [i_13 - 1] [i_11] [i_5] [i_1] [i_1]) ? (arr_6 [i_13]) : (arr_21 [i_1] [i_13 - 1] [i_1] [i_1]))) : (arr_27 [i_15 + 1] [i_13]));
                        var_36 = (arr_34 [i_13] [i_1] [i_1] [i_1]);
                        var_37 = ((~(((!(arr_34 [i_1] [i_1] [i_1] [i_1]))))));
                    }
                    arr_51 [i_1] [i_5] [i_1] = ((-(arr_25 [i_13] [i_11] [i_1])));
                }
                for (int i_16 = 0; i_16 < 21;i_16 += 1)
                {
                    arr_54 [i_1] [i_11] [i_1] [i_1] = (arr_5 [i_1]);
                    var_38 = (arr_41 [i_5 + 4] [i_1] [i_5 + 1] [i_1] [i_1]);
                }
                for (int i_17 = 1; i_17 < 20;i_17 += 1)
                {
                    var_39 = (arr_44 [i_5 + 4] [i_5 + 3]);
                    var_40 = (arr_37 [i_1] [i_1] [i_5] [i_1]);
                    var_41 -= (((((~(arr_41 [i_1] [6] [i_11] [6] [i_1])))) || (arr_5 [20])));
                }
                arr_57 [i_1] [i_5] [i_1] = (arr_37 [i_1] [i_1] [i_5 + 1] [i_1]);
            }
            for (int i_18 = 0; i_18 < 21;i_18 += 1) /* same iter space */
            {

                for (int i_19 = 0; i_19 < 21;i_19 += 1)
                {
                    var_42 *= -444;
                    arr_64 [i_5] [11] [i_1] [i_1] [i_5] [i_1] = (arr_45 [i_19] [i_1] [i_18] [i_5] [i_1] [i_1]);
                }
                var_43 = (max(var_43, 437));
            }
        }
        arr_65 [i_1] [i_1] = arr_27 [1] [1];
    }
    var_44 = var_4;
    var_45 &= (14104 + var_1);
    #pragma endscop
}
