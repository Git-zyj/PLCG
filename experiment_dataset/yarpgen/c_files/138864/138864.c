/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138864
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_17, (((var_16 << var_6) ? var_6 : var_18))));
    var_20 = (max(-6235212409375841203, var_7));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            arr_5 [i_0] [i_1] [i_1] = ((((((var_4 != (arr_4 [i_0] [i_0]))))) * (arr_3 [i_0])));
            var_21 -= 9378278909898911501;

            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 2; i_3 < 19;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 20;i_4 += 1)
                    {
                        {
                            arr_14 [i_0] [i_1] [i_1] [i_4] [i_0] [i_0] = 689901835;
                            var_22 -= ((var_15 <= (arr_10 [i_3 - 2] [12] [12])));
                            arr_15 [i_0] [i_1] [i_2] [i_0] [i_4] = ((-(arr_13 [i_0] [i_0 - 1] [i_0 + 1] [i_1 - 1] [i_4 - 1])));
                        }
                    }
                }
                var_23 ^= var_14;
                var_24 = var_18;
            }
        }
        var_25 |= ((-(arr_1 [i_0 - 1])));
        arr_16 [i_0] = (var_14 & 850039425462630926);
    }
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {

        for (int i_6 = 2; i_6 < 10;i_6 += 1)
        {
            var_26 *= (arr_7 [i_5]);

            /* vectorizable */
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                arr_24 [i_7] [i_6] [i_7] [i_7] = (((arr_0 [i_5]) == var_3));

                for (int i_8 = 0; i_8 < 14;i_8 += 1)
                {
                    var_27 = (min(var_27, ((((arr_2 [i_7] [i_6 - 2]) == (arr_2 [5] [i_6 - 2]))))));
                    arr_27 [i_7] [i_7] = ((((var_18 == (arr_6 [i_7] [i_6] [i_7]))) ? var_8 : ((((arr_18 [i_8] [i_6]) || 17596704648246920690)))));
                    var_28 = (max(var_28, 4092384634824379349));
                }
                for (int i_9 = 1; i_9 < 13;i_9 += 1)
                {

                    for (int i_10 = 0; i_10 < 14;i_10 += 1)
                    {
                        var_29 ^= -5858780149741356744;
                        arr_34 [i_5] [i_6] [i_5] [i_9 + 1] [i_7] [i_7] = (var_10 * var_16);
                        arr_35 [i_10] [i_6] [i_7] [i_7] [i_7] [i_6] [i_5] = (((arr_7 [i_7]) > var_7));
                    }
                    for (int i_11 = 2; i_11 < 12;i_11 += 1)
                    {
                        arr_39 [i_6] [i_5] [i_9] [i_5] |= 1747547628;
                        var_30 = (min(var_30, (((3 ? (arr_4 [i_6 + 1] [i_9 + 1]) : (arr_4 [i_6 + 3] [i_9 - 1]))))));
                        var_31 = (min(var_31, ((((2134295580 ? var_5 : (arr_32 [i_7] [i_9] [i_7] [i_7] [i_6] [i_5])))))));
                        var_32 ^= (((arr_12 [i_5] [i_6 - 1] [i_7] [i_5] [i_11]) ? 137 : (arr_30 [i_5] [i_6] [i_7] [i_9] [i_11])));
                        arr_40 [i_5] [i_5] [i_7] [i_7] [i_11] = (arr_38 [i_5] [i_6] [i_6 - 1] [i_7] [i_9] [i_11] [i_11]);
                    }

                    for (int i_12 = 0; i_12 < 14;i_12 += 1) /* same iter space */
                    {
                        arr_43 [i_5] [i_7] [i_6] [i_6] [i_7] [i_9] [i_7] = ((var_8 ? var_5 : (arr_22 [i_7] [i_9 + 1] [i_7])));
                        var_33 = 5334;
                    }
                    for (int i_13 = 0; i_13 < 14;i_13 += 1) /* same iter space */
                    {
                        var_34 |= (!(arr_7 [i_5]));
                        var_35 |= 4294967295;
                        var_36 = ((var_2 ? var_6 : var_5));
                        arr_46 [i_7] [10] [i_7] = var_7;
                    }

                    for (int i_14 = 2; i_14 < 11;i_14 += 1)
                    {
                        arr_49 [i_14] [i_14] |= (7964487234415529479 * -9686);
                        var_37 = ((((var_3 ? (arr_37 [i_5] [i_5] [11] [i_9] [i_9] [i_14]) : var_5)) <= ((((arr_21 [i_5]) ? var_4 : var_16)))));
                        arr_50 [i_5] [i_5] [i_5] [i_5] [i_7] = ((var_4 ? (!var_1) : (arr_42 [i_14] [i_14 + 2] [0] [i_14 + 2] [i_14 - 2])));
                        var_38 *= (((arr_20 [i_6 + 4]) ? (arr_20 [i_6 + 2]) : var_5));
                    }
                    arr_51 [i_7] [i_6] [i_6] = (3192839922 <= 1152921504606846976);
                }
                for (int i_15 = 0; i_15 < 14;i_15 += 1)
                {

                    for (int i_16 = 2; i_16 < 13;i_16 += 1)
                    {
                        var_39 &= var_9;
                        var_40 = (min(var_40, 29729));
                        var_41 = (max(var_41, ((((arr_55 [i_16 - 2] [i_16] [i_16] [i_16] [i_16 + 1] [i_16]) / 12226507137670418736)))));
                    }
                    var_42 = (arr_21 [1]);
                }
            }
            var_43 += ((((arr_30 [i_5] [i_6] [i_6] [i_6] [i_5]) ? (arr_30 [i_5] [i_6] [i_6] [i_6 + 4] [i_6]) : (arr_3 [i_5]))));

            /* vectorizable */
            for (int i_17 = 0; i_17 < 14;i_17 += 1)
            {
                var_44 = (((3192839928 * var_0) >> ((((var_15 ? (arr_1 [i_5]) : -8531815982639714521)) + 25942))));
                arr_60 [i_5] = var_15;
                var_45 = ((var_16 == ((var_13 + (arr_41 [i_5] [i_5] [i_5])))));
                arr_61 [4] [4] [4] = 1152921504606847001;
            }
        }
        /* vectorizable */
        for (int i_18 = 0; i_18 < 14;i_18 += 1)
        {
            arr_64 [i_5] [i_5] [i_5] = (((arr_18 [i_5] [i_18]) != var_5));
            var_46 ^= (var_4 << (var_5 - 6041138277473105741));
            arr_65 [11] [11] = 10;
        }
        var_47 *= var_2;
    }
    for (int i_19 = 2; i_19 < 10;i_19 += 1)
    {
        arr_68 [i_19] [i_19] = ((((~(max(var_3, var_17)))) <= -55));
        var_48 = (6 * 0);
        var_49 = ((((arr_36 [i_19 - 2]) <= var_3)));
    }
    #pragma endscop
}
