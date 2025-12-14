/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113649
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 1;

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 10;i_1 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 8;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_0] = (~51);

                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            var_20 = ((-(min((arr_13 [i_3 + 3] [i_1] [i_2] [1] [i_4] [i_2]), var_3))));
                            arr_14 [i_0 - 1] = (min(((((((255 ? var_17 : 1))) <= (min(var_5, 1))))), 51));
                            arr_15 [i_4] [i_3] [i_2] [i_1] [i_0 + 1] [i_0] = (max(66, var_0));
                        }
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            arr_19 [i_0] [i_1 - 1] [i_2] [i_3] [i_5] |= ((-151627885 ? (((arr_4 [i_0 + 1]) ? var_11 : 219)) : ((((arr_4 [i_0 + 1]) || (arr_12 [i_0 - 1] [i_0] [i_0 - 1] [i_0] [i_0 + 1] [i_0 - 1]))))));
                            var_21 = (min(var_21, (((var_16 ? (((max(var_3, (arr_9 [i_0 - 1] [i_1 + 1] [i_2] [i_3]))))) : (2009102618780176504 >= var_11))))));
                            var_22 = ((49 <= (((((arr_13 [7] [7] [1] [i_3] [i_3 + 3] [i_3 + 2]) ? (arr_0 [i_0]) : var_6))))));
                            var_23 = (min(var_23, ((max(56, (((-18712 <= (((3715673470 ? 22 : var_0)))))))))));
                            var_24 = (max(var_24, (((((((max(81, var_18))) & (min(var_16, var_10)))) <= (((-((max(var_11, (arr_13 [i_0] [i_0] [i_1] [i_2] [i_3] [i_1]))))))))))));
                        }
                    }
                }
            }

            for (int i_6 = 2; i_6 < 10;i_6 += 1)
            {
                var_25 = ((-(arr_16 [i_0] [i_0] [i_0] [i_1] [i_6 - 1])));

                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {

                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        var_26 = (!49);
                        var_27 = (((3509 <= 1) ? ((~(arr_22 [i_0] [i_1 + 1] [i_6 - 2] [i_0] [i_1 - 1]))) : ((((((((arr_21 [i_1] [i_1] [i_7]) ? var_14 : (arr_24 [i_8] [i_7] [i_6] [i_0 + 1] [i_0 + 1])))) <= (max(var_12, var_18))))))));
                        arr_29 [i_6] [i_6 - 2] [i_6] [i_6 - 1] [7] = var_2;
                        arr_30 [i_0] [i_1] [i_6] = ((16 ? 154 : -25070));
                    }
                    for (int i_9 = 2; i_9 < 9;i_9 += 1)
                    {
                        arr_33 [i_0] [i_1 - 1] [i_0] [6] [i_7] [i_1 - 1] [i_9] = (min(((-((max(6492, -56))))), (arr_17 [i_0] [i_1] [i_1] [i_7] [i_9])));
                        var_28 = (max(var_28, var_2));
                    }
                    arr_34 [i_0] [i_1 - 1] [i_0] = ((max(var_5, (arr_6 [i_0] [i_1] [i_1] [i_1]))));
                }
            }
            arr_35 [i_0] [i_1] = ((((((((var_5 ? var_1 : var_9))) ? var_10 : var_14))) ? var_6 : (!3)));
        }
        for (int i_10 = 1; i_10 < 10;i_10 += 1) /* same iter space */
        {
            arr_38 [i_0] [i_10] = ((8 ? (((max(var_0, var_13)))) : 1));
            var_29 = (((arr_26 [i_0]) & var_3));
        }
        for (int i_11 = 1; i_11 < 10;i_11 += 1)
        {
            arr_43 [i_0] [i_0] [i_11] = (max(((min(0, 25069))), ((var_0 ? (arr_10 [i_0] [i_0 - 1] [i_11 - 1] [i_11 + 1]) : (arr_28 [i_0 + 1] [i_0 + 1] [i_11 - 1] [i_11 + 1] [i_11 + 1])))));
            arr_44 [i_0] [1] [i_11 + 1] |= 124;
            var_30 -= ((((min(var_4, (((var_13 ? (arr_1 [i_0] [i_0]) : var_7)))))) ? ((var_0 ? var_2 : var_16)) : (((((var_1 ? var_7 : var_16)) >= (7 <= 5486356612785062154))))));
        }
        var_31 = (min(var_31, (arr_4 [i_0 - 1])));
        arr_45 [i_0] [i_0 - 1] = (~var_14);
    }
    for (int i_12 = 1; i_12 < 21;i_12 += 1)
    {
        arr_48 [i_12] = (((arr_46 [i_12 - 1]) & (arr_46 [i_12 + 2])));
        arr_49 [i_12] = (arr_46 [i_12]);
        var_32 = (((((min(var_6, var_18))) ? var_0 : (((arr_47 [i_12] [i_12]) ? var_17 : var_16)))));
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 18;i_13 += 1)
    {
        arr_52 [i_13] [i_13] = 25070;

        for (int i_14 = 0; i_14 < 1;i_14 += 1)
        {
            arr_56 [i_14] [i_14] = (arr_51 [i_13] [i_13]);

            for (int i_15 = 3; i_15 < 17;i_15 += 1)
            {
                arr_60 [i_13] [i_14] [i_14] = var_12;
                var_33 ^= (((arr_58 [i_15 - 1] [i_15 - 3] [i_15 - 1]) <= ((38 ? (arr_46 [i_13]) : 22))));
            }
            arr_61 [i_13] [i_14] = ((11 ? var_6 : 37157));
        }
        for (int i_16 = 0; i_16 < 18;i_16 += 1)
        {
            arr_64 [i_13] [i_13] [i_13] = 100;
            arr_65 [i_13] [i_13] [i_13] = (!var_10);
        }
        for (int i_17 = 0; i_17 < 1;i_17 += 1)
        {
            arr_70 [i_17] [i_17] = (((arr_63 [i_13] [i_17]) % (arr_51 [13] [i_17])));
            var_34 ^= (var_3 ? var_5 : (((var_3 ? (arr_55 [i_13] [i_13] [i_13]) : var_17))));
        }
        /* LoopNest 2 */
        for (int i_18 = 0; i_18 < 18;i_18 += 1)
        {
            for (int i_19 = 1; i_19 < 16;i_19 += 1)
            {
                {

                    for (int i_20 = 3; i_20 < 16;i_20 += 1)
                    {
                        arr_80 [i_20] [i_19] [i_19] [i_13] = -1;
                        var_35 = (((16 & 17565) ? ((-(arr_59 [i_19]))) : 1));
                        var_36 ^= 6461614853915371038;
                    }
                    arr_81 [1] [i_13] [i_19] [i_19] = arr_73 [i_13] [i_13] [i_13] [i_19];
                }
            }
        }
    }
    #pragma endscop
}
