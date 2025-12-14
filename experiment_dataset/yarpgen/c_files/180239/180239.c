/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180239
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_16 -= (((arr_0 [i_0] [i_0]) ? var_10 : (((7451587300750181220 && (~var_10))))));
        var_17 = (min(((-((var_7 ? var_10 : var_0)))), 1));
        arr_3 [i_0] = ((min(2936539654, 1)));
    }
    for (int i_1 = 3; i_1 < 14;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = (var_13 ^ ((((!(arr_0 [i_1] [i_1]))) ? (((var_5 > (arr_0 [i_1] [i_1 - 3])))) : (max(var_0, (arr_2 [i_1]))))));

        for (int i_2 = 3; i_2 < 13;i_2 += 1)
        {
            arr_11 [i_1] [2] = (min(var_1, (min((((var_14 ? var_5 : var_12))), ((var_15 / (arr_6 [i_1] [i_2])))))));
            arr_12 [i_1] = ((!(((((((arr_6 [i_1 + 1] [i_2]) ? (arr_9 [i_1] [6]) : var_6))) ? (((-32759 ? var_4 : var_9))) : ((var_7 ? 14094752314799723747 : var_13)))))));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 14;i_4 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
                        {
                            var_18 = (min(var_18, (((!(((var_4 ? var_13 : var_4))))))));
                            var_19 ^= ((!((((arr_1 [i_5] [i_5]) ? (arr_2 [i_5]) : var_7)))));
                        }
                        for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
                        {
                            arr_24 [i_3] [i_1] [12] [i_1] = (3 << 1);
                            var_20 = (928633332 / 3664277441);
                            var_21 = ((((max(((1 ? var_6 : var_1)), ((var_5 ? (arr_19 [i_1]) : var_4))))) ? (~var_11) : var_3));
                        }
                        for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
                        {
                            var_22 = ((var_14 ? (-3129500885016759133 && var_0) : ((max(var_2, var_4)))));
                            arr_27 [i_2 - 2] [i_1] [i_2 + 2] [i_2 - 2] [i_2] = 32758;
                        }
                        var_23 = (max(var_23, (arr_5 [4])));
                        var_24 = (min(var_24, var_11));
                        arr_28 [i_4] [i_3] [i_4 + 1] |= (max(1, 32755));
                    }
                }
            }
        }
        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            var_25 = -14;

            for (int i_9 = 4; i_9 < 13;i_9 += 1)
            {
                var_26 = (min(var_26, (-32736 - 1)));
                arr_34 [i_1] = -3608091511279300428;
            }
            for (int i_10 = 0; i_10 < 15;i_10 += 1)
            {
                var_27 = (max(-32758, 2936539649));
                var_28 |= 14094752314799723745;
                var_29 = -var_10;
            }
            /* vectorizable */
            for (int i_11 = 3; i_11 < 14;i_11 += 1)
            {
                var_30 = (var_9 ? ((-(arr_37 [i_1 + 1] [i_1 + 1] [i_11 - 2] [i_1 + 1]))) : ((1 ? 62 : 12945)));
                arr_40 [i_8] |= ((var_14 ? (((arr_15 [i_1] [i_8]) ? 0 : var_15)) : var_2));
            }
            for (int i_12 = 0; i_12 < 15;i_12 += 1)
            {
                var_31 = (((((~((var_0 ? var_15 : var_13))))) ? 32755 : (var_10 < 32717)));
                arr_43 [i_1] [i_1] = (((((var_2 ? (arr_21 [i_1] [i_1] [i_1] [i_1] [i_8] [i_12] [i_12]) : ((var_10 ? var_14 : var_14))))) ? var_14 : (((-3608091511279300431 <= ((min(var_3, 32755))))))));
            }
        }
        arr_44 [i_1] = (arr_8 [i_1] [i_1]);
        var_32 += ((min(((var_8 ? (arr_0 [i_1] [i_1 - 1]) : var_8)), -953344428)));
    }
    for (int i_13 = 0; i_13 < 1;i_13 += 1)
    {

        for (int i_14 = 2; i_14 < 21;i_14 += 1)
        {
            arr_50 [i_13] = (((((((max(var_3, var_3))) || (!var_8)))) < (max(((-(arr_47 [i_13] [i_13] [i_13]))), var_10))));
            /* LoopNest 2 */
            for (int i_15 = 1; i_15 < 24;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 1;i_16 += 1)
                {
                    {
                        var_33 += var_11;
                        var_34 += (min((((((32736 ? 630689852 : 630689854))) ? var_7 : var_8)), ((((((4294967295 ? 4292102562637787903 : var_3))) ? (((var_12 ? (arr_51 [i_13]) : (arr_52 [4] [i_15] [11] [i_13])))) : (arr_55 [i_13] [22] [0] [i_13] [i_13] [i_13]))))));
                    }
                }
            }
            arr_56 [18] [i_13] = (((arr_51 [i_14]) >= ((((max((arr_45 [23]), var_10))) ? 1888919359 : ((var_0 ? var_1 : (arr_55 [i_13] [i_13] [i_13] [i_13] [3] [i_13])))))));
            var_35 = ((4351991758909827868 ? ((((min(var_4, var_11)) & var_1))) : (((((-32732 ? var_11 : -32763))) ? ((max(var_2, var_0))) : (~14154641511071763713)))));
            arr_57 [i_13] = (((27902 * var_13) ? var_10 : ((-var_15 - (var_9 / var_11)))));
        }
        arr_58 [i_13] [i_13] = (var_14 ? (arr_45 [0]) : var_14);
        arr_59 [i_13] = (arr_54 [i_13] [i_13] [i_13] [i_13] [9] [i_13]);
    }
    /* vectorizable */
    for (int i_17 = 0; i_17 < 21;i_17 += 1)
    {
        var_36 = (max(var_36, ((258874370 ? var_10 : var_14))));
        var_37 = (((-6962577159823143973 ? var_0 : (arr_61 [i_17]))));
        var_38 += var_10;
        arr_64 [13] = var_5;
    }
    var_39 |= ((((1 ? (var_15 * var_7) : ((var_14 ? var_9 : var_12)))) < var_6));
    var_40 = (min(var_40, ((((((var_7 ? var_13 : ((var_7 ? var_1 : var_6))))) ? ((min(-var_1, var_10))) : ((var_9 ? (1 / var_11) : var_12)))))));
    var_41 = var_7;
    #pragma endscop
}
