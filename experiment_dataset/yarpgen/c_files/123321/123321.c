/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123321
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        arr_9 [i_0] [i_3] [i_2] [i_3] [i_3] = -5897534627575723866;
                        var_18 = (min(var_18, ((((arr_2 [i_0] [1] [i_0]) ? (arr_6 [i_0] [i_1] [i_2] [i_3]) : (arr_6 [i_0] [7] [1] [0]))))));
                        var_19 += ((12847756552910670382 ? -64 : -var_11));
                    }
                }
            }
            var_20 = 12;
            var_21 = (max(var_21, (((0 ? (arr_2 [i_0] [i_1] [i_1]) : 12847756552910670370)))));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {

            for (int i_5 = 2; i_5 < 13;i_5 += 1)
            {
                var_22 = ((-(((129 < (arr_2 [i_4] [i_4] [i_4]))))));
                arr_15 [i_0] [6] [i_0] = ((var_5 ? var_8 : -9223372036854775799));
                arr_16 [i_4] [i_5] = (arr_3 [i_0]);
            }
            var_23 = (((((4 ? var_1 : (arr_8 [i_0] [i_0] [11] [4] [i_0])))) ? (var_17 <= var_11) : var_4));
            var_24 = (max(var_24, 23568));
        }
        arr_17 [i_0] [i_0] = ((19620 ? var_8 : (-32767 - 1)));
        var_25 = ((((min(((12539772627782558038 ? 1 : 0)), 50))) ? ((19620 + ((max(16997, 41))))) : 243));
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 25;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 22;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 25;i_8 += 1)
            {
                {

                    for (int i_9 = 0; i_9 < 25;i_9 += 1)
                    {
                        var_26 = (min(var_26, ((min((arr_21 [i_6] [i_6]), var_15)))));
                        arr_29 [i_6] [1] [1] [17] [i_8] = 9;
                        arr_30 [i_9] [i_8] [i_8] [i_6] = ((14917 ? -151768220 : (max(-205, 21))));
                    }
                    /* vectorizable */
                    for (int i_10 = 1; i_10 < 23;i_10 += 1)
                    {
                        var_27 = var_8;

                        for (int i_11 = 0; i_11 < 25;i_11 += 1)
                        {
                            arr_39 [i_8] [24] [i_8] [i_10] [i_11] = ((128 ? var_14 : (((((arr_35 [13] [i_7 - 1] [i_7] [i_7] [i_7]) + 2147483647)) >> (arr_36 [i_6] [i_7 + 1] [i_8] [i_7 + 1] [1] [i_8])))));
                            arr_40 [i_8] = (239 ? var_13 : 243);
                        }
                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            var_28 = -8343883960623618419;
                            var_29 = (min(var_29, 47));
                            var_30 = 37786;
                            var_31 = (min(var_31, ((((((var_13 ? (arr_31 [i_6] [1] [i_8] [i_8] [i_6]) : 7629490537108661501))) ? (!var_10) : (!var_3))))));
                        }
                        var_32 = var_6;
                    }
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        var_33 = 16997;
                        var_34 = (min((((!(78 < 63759)))), ((-var_0 ? (var_10 * 5598987520798881242) : (((120 - (arr_27 [i_6] [i_6] [i_8] [i_13]))))))));
                        var_35 = (max(var_35, ((var_5 * (!13825753584891439659)))));
                    }

                    for (int i_14 = 0; i_14 < 25;i_14 += 1)
                    {
                        var_36 = (min(var_36, 255));
                        var_37 = (max(var_37, (((((((var_1 ? var_2 : var_11))) ? 13 : var_2))))));
                    }
                    for (int i_15 = 0; i_15 < 25;i_15 += 1)
                    {
                        arr_54 [5] [i_7] [i_8] [i_8] [i_7] [i_8] = ((((!(32753 + var_4)))) ^ (-31587 <= var_12));
                        var_38 = -32757;
                        arr_55 [i_8] [13] [i_8] [i_15] [12] [i_6] = var_8;
                    }
                    for (int i_16 = 0; i_16 < 25;i_16 += 1)
                    {
                        arr_58 [i_6] [i_7] [i_8] [i_8] [1] [i_6] = ((~(((!(122 >= 221))))));
                        var_39 = (min(var_39, 28355));
                    }
                }
            }
        }
    }
    var_40 = ((-((var_9 ? var_15 : 92))));
    var_41 = (max(-6673208218002132158, -var_13));
    #pragma endscop
}
