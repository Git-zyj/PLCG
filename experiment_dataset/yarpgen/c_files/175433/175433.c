/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175433
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (28 != 28);

    /* vectorizable */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_21 = (max(var_21, (arr_1 [i_0] [i_0 + 1])));
        arr_2 [8] &= ((28 ? -28 : 28));
    }
    for (int i_1 = 2; i_1 < 18;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            var_22 = (max(var_22, -28));
            var_23 = (var_10 ? var_15 : (max(((var_2 ? var_16 : (arr_3 [12]))), -var_13)));
        }
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                arr_16 [i_4] [i_1] [i_4] = arr_14 [11] [i_3] [i_4] [i_4];
                var_24 -= (((-(arr_6 [i_1] [16]))) / 3202777606);

                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    var_25 = (max(var_25, (73 != 204258719)));
                    var_26 = (max(var_26, (((((((max((arr_14 [5] [i_3] [i_4] [i_5]), var_13)) <= -29)))) | (max(42, (arr_3 [i_1 - 2])))))));
                }
            }
            for (int i_6 = 0; i_6 < 19;i_6 += 1)
            {
                var_27 = (max((((-29 * -49) | ((var_15 ? var_16 : (arr_5 [15] [i_3]))))), (((arr_9 [i_1] [i_1]) ? (arr_20 [i_1] [i_1] [i_1 - 2] [i_1]) : var_15))));
                arr_23 [i_3] [i_3] [i_1] = (((((max(3602766340, -30)))) && ((min(var_17, (((arr_14 [i_1] [i_3] [14] [i_1]) | var_11)))))));
                arr_24 [0] [0] [i_1] = (((((arr_3 [i_1 - 2]) * var_17))) ? (arr_3 [i_1 - 2]) : ((-43 ? -57 : (arr_3 [i_1 - 2]))));
                var_28 = (!7);
                arr_25 [16] [18] [i_6] [18] &= (764435673 - -60);
            }
            /* vectorizable */
            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {

                for (int i_8 = 2; i_8 < 17;i_8 += 1)
                {
                    var_29 = var_9;
                    var_30 = (min(var_30, ((((arr_3 [i_1]) ? var_17 : (arr_32 [i_1 + 1] [i_3] [i_1 - 1] [i_8] [i_8 - 1]))))));
                }
                for (int i_9 = 2; i_9 < 18;i_9 += 1) /* same iter space */
                {

                    for (int i_10 = 0; i_10 < 19;i_10 += 1)
                    {
                        var_31 = ((((((arr_36 [i_1 - 1] [15]) ? 44 : -14))) ? var_10 : 27));
                        arr_37 [i_1] [i_1] [14] [14] [i_10] = (33 <= 4278190080);
                        var_32 = (((((-57 ? 60 : 44))) ? (((arr_18 [i_1] [i_7]) ? (arr_27 [i_3]) : var_16)) : (arr_7 [i_1])));
                        var_33 &= var_17;
                        var_34 = -14;
                    }
                    for (int i_11 = 0; i_11 < 19;i_11 += 1)
                    {
                        var_35 = (min(var_35, (((51 ? ((((arr_27 [18]) ? 106 : -105))) : (arr_15 [i_9 + 1] [i_11] [i_9 + 1] [i_1 - 2]))))));
                        var_36 *= (((var_17 ? var_17 : (arr_32 [i_1] [i_1] [i_7] [i_7] [i_7]))));
                        arr_40 [18] [18] [7] [i_1] [i_7] [7] [7] = 51;
                        var_37 = (max(var_37, (!4140935157)));
                    }
                    for (int i_12 = 0; i_12 < 19;i_12 += 1)
                    {
                        var_38 = (min(var_38, ((-107 ? 4278190080 : 3103930569))));
                        arr_44 [16] [i_3] [i_1] [i_3] [i_3] = ((((-60 ? 4294967295 : 46))) ? ((100 ? 698031260 : 2667689759)) : 0);
                        var_39 *= (((arr_21 [i_9 - 2] [i_1 + 1]) ? ((var_3 ? var_4 : (arr_39 [8] [6] [4] [4] [i_12]))) : 125));
                    }
                    for (int i_13 = 0; i_13 < 19;i_13 += 1)
                    {
                        var_40 -= (((arr_28 [i_1 - 1] [i_1 - 2] [i_9 - 1]) ? ((-34 ? var_15 : 195732379)) : 104));
                        arr_49 [i_13] [i_9] [i_1] [i_1] [i_3] [i_1] = (((arr_42 [i_1] [i_7] [i_7] [i_7] [i_7]) ? (arr_14 [i_1] [17] [i_7] [i_9 - 2]) : var_3));
                        var_41 = (arr_18 [i_1] [i_1]);
                        var_42 = 34;
                    }
                    var_43 = (arr_5 [i_1 - 2] [i_9 + 1]);
                    var_44 = (max(var_44, 104));
                }
                for (int i_14 = 2; i_14 < 18;i_14 += 1) /* same iter space */
                {
                    var_45 = (arr_9 [i_7] [i_1]);
                    var_46 = (((arr_30 [8] [i_1] [i_7] [i_14 - 2]) <= 93));
                }
                arr_52 [i_1] [i_1] = (var_12 ? var_15 : var_0);
                var_47 = ((arr_29 [i_1 + 1] [i_1]) ? (arr_29 [i_1 - 2] [i_1]) : (arr_29 [i_1 - 2] [i_1]));
            }
            var_48 = var_14;
            var_49 -= (((var_3 | 104) - (max(var_7, (arr_3 [i_3])))));
            var_50 = (max(var_50, ((((max((arr_48 [i_1] [0] [0] [0] [10] [12]), (max(-37, -3))))) ? var_12 : 0))));
        }
        /* vectorizable */
        for (int i_15 = 0; i_15 < 19;i_15 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_16 = 2; i_16 < 17;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 19;i_17 += 1)
                {
                    {
                        var_51 = (max(var_51, ((((arr_36 [i_1] [i_1]) ? -37 : (arr_51 [i_1 - 2] [2] [2] [i_1 + 1] [i_16 + 2]))))));
                        var_52 *= -51;
                    }
                }
            }
            var_53 = (arr_48 [i_1] [i_1] [i_1] [i_1 + 1] [i_1 - 1] [i_1]);
        }
        for (int i_18 = 0; i_18 < 19;i_18 += 1) /* same iter space */
        {
            var_54 = ((!((((((arr_50 [i_1 - 2] [i_18] [i_1] [11]) || 93)) ? (arr_51 [i_1] [i_1] [i_1] [i_18] [1]) : 1687739008)))));
            var_55 = ((max((((arr_4 [i_1]) ? var_12 : (arr_10 [18] [i_18]))), -105)));
            var_56 = ((77 && (((arr_17 [i_1] [i_1] [5] [i_1 - 1] [i_1 - 2]) || (((-77 ? 4294967295 : 2042422092)))))));
            var_57 &= max(-94, var_10);
        }
        var_58 -= (((max((arr_5 [14] [14]), var_18)) + ((3 ? 2252545203 : 698031248))));
    }
    #pragma endscop
}
