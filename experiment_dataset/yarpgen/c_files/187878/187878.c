/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187878
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(1, 1749007479));
    var_15 = var_4;
    var_16 = var_3;

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        var_17 = (min(var_6, ((max(var_9, var_3)))));

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            arr_4 [i_0] = (max((max(var_3, var_6)), var_0));
            var_18 = ((~((~((-819367449 ? var_10 : var_1))))));
            arr_5 [i_0] [i_0] = (min((min(var_0, ((min(1, 1))))), ((min(var_3, (~var_5))))));
        }
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            var_19 = ((~(max((arr_7 [i_0 - 1] [i_0 + 1]), var_7))));
            arr_10 [i_0] [i_2] [i_2] = (min((min(-239, 696832224)), -819367433));
            var_20 = (min((min(var_9, 819367449)), var_3));

            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                var_21 = (min(8861680599068069836, 1));
                var_22 |= (18033251067856455628 ? (min(-819367444, (~var_5))) : ((((max(var_13, var_3))) ? var_1 : var_4)));
            }
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                var_23 = (min(((min(10608, var_4))), (((arr_8 [i_2]) ? ((min(var_8, var_4))) : (max(var_11, var_13))))));

                for (int i_5 = 1; i_5 < 19;i_5 += 1)
                {
                    arr_19 [i_2] = (max(64, 18318));
                    var_24 = (max(var_24, (((var_8 ? (((min((arr_18 [i_5] [i_5 - 1] [i_4] [i_5 + 1] [i_5 + 1] [i_5]), var_5)))) : (max(var_7, var_12)))))));
                    var_25 &= (min(3598135072, 819367453));
                }
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    arr_23 [i_0] [i_0] [i_2] [i_0] [i_0 - 2] = var_3;
                    var_26 = (max(var_26, ((max(((var_9 ? (arr_13 [i_0] [i_4] [i_0]) : 10623)), ((-(arr_9 [i_4] [i_4]))))))));
                }
                /* vectorizable */
                for (int i_7 = 1; i_7 < 18;i_7 += 1)
                {

                    for (int i_8 = 0; i_8 < 21;i_8 += 1) /* same iter space */
                    {
                        var_27 = (arr_9 [i_2] [i_0 + 1]);
                        var_28 = -819367437;
                    }
                    for (int i_9 = 0; i_9 < 21;i_9 += 1) /* same iter space */
                    {
                        var_29 = var_0;
                        var_30 &= (~123);
                        var_31 = 5001;
                    }
                    for (int i_10 = 0; i_10 < 21;i_10 += 1) /* same iter space */
                    {
                        var_32 = -var_1;
                        var_33 = ((var_1 ? var_12 : var_5));
                        var_34 = (max(var_34, 819367449));
                        arr_33 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((var_3 ? (arr_24 [i_0 + 2] [i_2] [i_4] [i_0 - 3] [i_10] [i_2]) : (arr_25 [i_2])));
                        var_35 ^= ((var_1 ? ((var_5 ? var_0 : var_12)) : var_9));
                    }
                    for (int i_11 = 0; i_11 < 21;i_11 += 1) /* same iter space */
                    {
                        var_36 = (max(var_36, (arr_13 [i_0] [i_11] [i_0])));
                        arr_36 [i_0] [i_2] [i_0] [i_0] [i_0 - 2] = ((-(arr_0 [i_2] [i_7 + 3])));
                        var_37 = (((((var_3 ? var_13 : var_4))) ? var_1 : var_7));
                    }
                    arr_37 [i_2] [i_4] [i_7 + 1] = (~var_10);
                }
            }
            var_38 = ((5283026062527030557 ? 1 : -18));
        }
        /* vectorizable */
        for (int i_12 = 0; i_12 < 21;i_12 += 1)
        {
            var_39 = ((((-819367436 ? var_6 : (arr_35 [i_0] [i_12] [i_12] [i_0 - 2] [4] [i_12])))) ? (arr_3 [i_0] [i_12]) : var_10);
            var_40 = var_9;
            arr_41 [i_0] [i_0 - 1] [i_0 - 1] = (!242);
        }
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 21;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 21;i_14 += 1)
            {
                {
                    var_41 = (((((~((min(85, 10)))))) ? (max(var_6, ((max(var_1, (arr_18 [i_13] [i_13] [i_14] [i_13] [i_13] [i_13])))))) : var_7));
                    var_42 ^= ((((min(var_6, var_0))) ? (min(var_0, (arr_15 [i_0 - 3] [i_0 + 3]))) : var_9));
                    var_43 *= ((((min((arr_45 [i_13] [i_14]), var_5))) ? (max((arr_12 [i_0 - 2] [i_0 - 2]), ((-819367449 ? (arr_2 [20] [5]) : (arr_24 [i_0] [i_0 - 1] [i_0] [i_13] [i_13] [i_14]))))) : ((min(var_13, 4294967295)))));
                    var_44 = (min((((var_4 ? (max(1147820775, 1223308559)) : 1))), (min(var_6, (arr_24 [i_14] [12] [i_14] [i_14] [i_0 + 1] [i_14])))));
                }
            }
        }
        arr_47 [2] [2] = (((~var_1) ? (max(var_7, (arr_9 [4] [i_0]))) : (min(var_2, (~var_13)))));

        for (int i_15 = 0; i_15 < 21;i_15 += 1)
        {
            var_45 |= (min((max((min(-4122891867255108991, 8444249301319680)), (((~(arr_7 [i_0] [i_15])))))), var_7));
            arr_50 [i_0] = (((min(var_6, ((min(var_8, var_1)))))) ? (min(var_2, var_9)) : var_0);
        }
    }
    /* vectorizable */
    for (int i_16 = 0; i_16 < 12;i_16 += 1)
    {
        var_46 = (1204558185767080540 ? -1394918135 : -16531);
        arr_54 [i_16] [i_16] = (((arr_26 [i_16] [16] [i_16] [i_16]) ? (arr_26 [i_16] [4] [i_16] [i_16]) : var_8));
        var_47 = var_7;
    }
    for (int i_17 = 3; i_17 < 9;i_17 += 1)
    {
        var_48 = (((min(var_10, (arr_35 [i_17 + 2] [i_17 - 2] [i_17 + 1] [i_17] [i_17 - 2] [i_17])))) ? (max(var_12, (arr_55 [i_17 - 1]))) : (arr_55 [i_17 - 2]));
        var_49 = (max(var_49, (min(var_2, ((max((min(-117892909, var_10)), var_12)))))));
        arr_58 [i_17] = (min(var_8, (arr_44 [i_17 - 3])));
    }
    for (int i_18 = 0; i_18 < 1;i_18 += 1)
    {

        for (int i_19 = 2; i_19 < 10;i_19 += 1)
        {
            arr_66 [i_18] [i_19 + 1] &= (((arr_34 [i_19]) ? var_4 : ((((min(var_4, var_13))) ? (arr_22 [i_19 - 1] [i_19 + 2] [i_19 + 2]) : (~var_10)))));
            var_50 = (min((max((min(-9033268509568306495, -122)), (min((arr_26 [i_18] [i_19] [i_19 - 1] [i_19 + 2]), var_0)))), (((((max(104, var_13))) ? (arr_43 [i_19 + 1]) : var_3)))));
            var_51 = ((!(((var_0 ? var_12 : (arr_30 [i_19] [i_19 + 3] [i_19] [i_19] [i_19 + 2]))))));
            /* LoopNest 3 */
            for (int i_20 = 3; i_20 < 11;i_20 += 1)
            {
                for (int i_21 = 0; i_21 < 13;i_21 += 1)
                {
                    for (int i_22 = 0; i_22 < 13;i_22 += 1)
                    {
                        {
                            arr_75 [i_18] [i_18] [i_18] [i_18] [i_18] = max(255, 281474976710656);
                            var_52 = (~-1);
                            var_53 = (min((~5842591279404226098), (((var_4 ? var_4 : var_5)))));
                            arr_76 [i_18] [i_19 + 3] [i_21] [1] [i_22] = var_12;
                        }
                    }
                }
            }
        }
        var_54 = (min(((max(var_5, 16))), (min(((min(127, 1))), (max(var_1, var_8))))));
    }
    #pragma endscop
}
