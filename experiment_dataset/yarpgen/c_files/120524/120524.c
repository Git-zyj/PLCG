/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120524
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (var_4 < var_9);
    var_13 += -1578793323;
    var_14 = (max(((((max(1, 1))) * var_0)), (max(var_7, ((var_4 ? 1962769424 : var_3))))));

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_15 = (max((arr_1 [i_0] [i_1]), ((max((arr_3 [i_0] [i_0 + 1] [i_0 + 1]), 20294)))));
            var_16 = min((arr_4 [i_1] [i_0]), (min(var_3, (arr_4 [i_0 + 2] [i_0 + 2]))));
            var_17 = (!-117);
            var_18 = 1;
        }
        var_19 = (min(var_19, (~-59)));
        var_20 |= (((~(min(var_11, (arr_1 [i_0] [i_0]))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        var_21 = 1;
        var_22 = ((-(arr_5 [i_2])));
        var_23 = (arr_6 [i_2]);

        for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
        {
            var_24 = (arr_0 [i_3] [i_2]);
            arr_10 [i_3] [i_3] [i_3] |= 1;
            arr_11 [i_2] [i_2] [i_2] = 1;
            var_25 = (arr_2 [i_2] [i_2] [i_3]);
        }
        for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
        {
            arr_14 [i_2] [i_2] = ((((!(arr_8 [i_4] [i_4])))) != (~var_7));

            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                var_26 *= var_3;
                var_27 = (arr_0 [i_2] [i_4]);
                var_28 = ((((!(arr_2 [i_2] [i_4] [i_5]))) ? (1 ^ 0) : 1));
                var_29 = (max(var_29, (arr_2 [i_2] [i_2] [i_2])));
            }
            var_30 = ((!(((var_11 ? 18 : (arr_8 [i_2] [i_4]))))));
        }
        for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
        {

            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {

                for (int i_8 = 1; i_8 < 9;i_8 += 1)
                {
                    var_31 = ((!(arr_22 [i_2] [i_6] [i_7] [i_6] [i_8 + 1])));
                    var_32 += (((arr_12 [i_7]) ? var_2 : 966330307));
                    var_33 = (arr_9 [i_7] [i_8 + 2]);
                    var_34 ^= (~var_4);
                    var_35 |= (((arr_24 [i_8 - 1] [i_8 + 1] [i_8 - 1] [i_8 + 2]) ? (((var_1 ^ (arr_8 [i_2] [i_7])))) : 12521230298871287830));
                }

                for (int i_9 = 2; i_9 < 10;i_9 += 1)
                {
                    arr_28 [i_2] [i_2] [i_7] [i_7] [i_9] = (arr_16 [i_9 - 2] [i_2] [i_9 - 2] [i_9 - 1]);
                    var_36 += (~var_4);
                    var_37 = (arr_7 [i_9 - 1]);
                }
                for (int i_10 = 0; i_10 < 11;i_10 += 1)
                {
                    arr_32 [i_6] [i_2] = (~(arr_5 [i_6]));
                    var_38 = (max(var_38, var_7));
                    var_39 = (min(var_39, (arr_4 [i_2] [i_7])));
                    var_40 = (var_3 - 1);
                    var_41 = (max(var_41, 1));
                }
                for (int i_11 = 2; i_11 < 10;i_11 += 1)
                {

                    for (int i_12 = 0; i_12 < 11;i_12 += 1)
                    {
                        var_42 = 168;
                        var_43 = (max(var_43, (arr_27 [i_2] [i_7])));
                    }

                    for (int i_13 = 1; i_13 < 10;i_13 += 1)
                    {
                        arr_41 [i_2] [i_13] = ((!(arr_24 [i_6] [i_6] [i_7] [i_13])));
                        arr_42 [i_2] [i_7] [i_11] = 2081200438;
                    }

                    for (int i_14 = 0; i_14 < 11;i_14 += 1)
                    {
                        var_44 = ((!(arr_36 [i_11 + 1] [i_11 + 1] [i_2] [i_2] [i_11 - 1] [i_11 - 2])));
                        var_45 = 18;
                    }
                }
                var_46 = -1;
            }
            arr_46 [i_2] = var_0;
        }
        for (int i_15 = 0; i_15 < 11;i_15 += 1) /* same iter space */
        {
            var_47 = ((((arr_21 [i_2]) ? 16577 : var_2)));
            arr_50 [i_2] = ((var_9 ? ((-307717431 ^ (arr_13 [i_15] [i_2]))) : 3));
        }
        var_48 = (~-3544);
    }

    for (int i_16 = 0; i_16 < 1;i_16 += 1) /* same iter space */
    {
        arr_53 [i_16] = min(7, 1);
        var_49 = (((((min(var_11, (arr_36 [i_16] [i_16] [i_16] [10] [i_16] [i_16])))) ? (arr_18 [i_16]) : (((120 ? (arr_19 [i_16]) : 4294967145))))));

        for (int i_17 = 0; i_17 < 10;i_17 += 1)
        {
            var_50 = (arr_19 [i_16]);
            var_51 = (arr_39 [i_17] [i_17] [i_17] [i_17] [i_17] [i_16]);
        }
    }
    for (int i_18 = 0; i_18 < 1;i_18 += 1) /* same iter space */
    {

        for (int i_19 = 0; i_19 < 10;i_19 += 1)
        {

            for (int i_20 = 0; i_20 < 1;i_20 += 1)
            {
                arr_64 [i_18] [i_18] [i_20] = ((((min((arr_15 [i_18] [i_19]), var_3))) && (((max((arr_62 [i_18] [i_18] [i_19] [i_20]), 1))))));
                var_52 = (max(var_52, ((((arr_52 [i_18]) ? (((~(arr_52 [i_18])))) : (~var_8))))));
                var_53 ^= -1;
                arr_65 [i_18] [i_18] [i_19] [i_20] = 65518;
            }
            /* vectorizable */
            for (int i_21 = 3; i_21 < 8;i_21 += 1)
            {
                arr_68 [i_18] [i_19] [i_21] [i_21] = (!(~-1971036698261843015));
                var_54 = 43746;
                arr_69 [i_18] [i_19] [i_21] [i_21] = ((-(arr_24 [i_18] [i_19] [i_21] [i_21 + 1])));
                var_55 = (max(var_55, 1));
            }
            var_56 ^= ((!((((~(arr_17 [i_19] [i_19]))) >= var_1))));
            arr_70 [i_19] = ((!((max((arr_44 [i_18] [i_19]), (arr_44 [i_18] [i_19]))))));
            arr_71 [i_18] [i_19] = (max(-155, ((((max(10851, var_7))) - 199))));
        }
        arr_72 [i_18] = ((((((~(arr_0 [i_18] [i_18]))))) ? (min(-28198, (arr_44 [8] [8]))) : 69));
        arr_73 [i_18] [i_18] = var_11;
    }
    #pragma endscop
}
