/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12313
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((((var_15 ? (((max((arr_1 [15] [i_0]), (arr_1 [i_0] [i_0 - 3]))))) : -var_1))) ? (((!(arr_2 [i_0 - 2] [i_0])))) : ((((max(var_14, var_16))) * ((~(arr_1 [i_0] [i_0])))))));
        arr_4 [i_0] [i_0] = ((-(arr_0 [i_0 + 1])));
        var_18 = (max(var_18, 44984));
        arr_5 [20] [19] = (((!var_10) * ((((((var_4 ? 28099 : var_11))) && (var_0 <= var_16))))));
    }

    for (int i_1 = 1; i_1 < 16;i_1 += 1)
    {
        arr_9 [i_1] [i_1] = (((arr_0 [1]) || (arr_1 [i_1] [i_1])));
        var_19 = var_15;
    }

    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 21;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    {

                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            arr_23 [i_4] = (arr_22 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]);
                            var_20 += 47;
                        }
                        arr_24 [1] [1] = ((((((((arr_11 [i_4]) ? (arr_11 [8]) : (arr_21 [i_2] [i_3] [i_2] [i_2] [i_2]))) >> ((((var_7 ? (arr_14 [i_2] [i_3]) : (arr_10 [i_2] [15]))) - 5669))))) ? (((arr_12 [i_4 + 3] [i_3 - 1]) ? (arr_12 [i_4 + 2] [i_3 + 1]) : (arr_12 [i_4 + 2] [i_3 + 1]))) : (-var_4 && var_6)));
                        arr_25 [i_5] [i_5] [i_4] [i_4 + 1] [i_3 - 1] [i_2] = ((var_10 != (((~20551) ^ 44991))));
                    }
                }
            }
        }
        arr_26 [i_2] [22] = ((((+(((arr_11 [i_2]) ? var_16 : var_0)))) / (((arr_15 [i_2] [i_2]) * (((arr_15 [i_2] [i_2]) * (arr_20 [i_2] [i_2] [i_2] [i_2] [i_2])))))));
    }
    for (int i_7 = 0; i_7 < 11;i_7 += 1)
    {

        /* vectorizable */
        for (int i_8 = 0; i_8 < 11;i_8 += 1)
        {
            var_21 = (arr_2 [i_8] [i_7]);

            for (int i_9 = 0; i_9 < 11;i_9 += 1)
            {
                var_22 -= (((arr_7 [i_7]) ? (arr_27 [i_9] [i_7]) : var_12));
                var_23 = ((var_4 ? (!1) : (((65535 == (arr_20 [i_7] [i_7] [i_7] [i_9] [i_9]))))));
            }
            for (int i_10 = 1; i_10 < 7;i_10 += 1)
            {
                var_24 += var_4;

                for (int i_11 = 0; i_11 < 11;i_11 += 1) /* same iter space */
                {
                    var_25 = (((arr_12 [i_10 + 4] [i_10]) ? ((var_17 ? -1 : (arr_39 [i_10]))) : (arr_11 [i_10 + 4])));
                    var_26 = ((-(arr_16 [i_11] [i_10 + 3] [i_7])));
                    var_27 = ((-44984 + (arr_11 [i_7])));
                    var_28 = ((-4915300336154194665 < var_15) * (((arr_6 [i_10 + 3]) ? (arr_31 [i_7] [i_8]) : 65535)));
                }
                for (int i_12 = 0; i_12 < 11;i_12 += 1) /* same iter space */
                {

                    for (int i_13 = 3; i_13 < 9;i_13 += 1)
                    {
                        arr_45 [i_7] [i_8] [i_10] [i_12] [i_13] = (arr_21 [i_7] [i_7] [i_7] [i_12] [i_12]);
                        var_29 = (arr_22 [i_7] [i_7] [i_7] [i_8] [i_10 + 3] [i_12] [i_13]);
                        arr_46 [i_10] = (((var_9 * 65535) ? var_6 : ((((arr_30 [i_12] [i_7]) * (arr_44 [i_7] [i_8] [i_12]))))));
                        arr_47 [i_7] [i_10] [i_13] [i_10] [i_8] = var_10;
                    }
                    arr_48 [i_7] [i_8] [i_10] [2] [i_10] = (arr_17 [i_7] [21] [i_10 - 1] [i_10]);
                    arr_49 [i_12] [i_10] = var_3;
                    arr_50 [i_10] [i_8] [5] [i_12] = var_10;
                    var_30 = (((((-1931179061 ? var_11 : (arr_13 [1] [i_10] [i_8])))) ? (arr_19 [21] [21] [21] [21]) : var_7));
                }
                var_31 = var_5;
                var_32 = (((((arr_11 [i_7]) ? 255 : var_1)) << 1));
            }
        }
        for (int i_14 = 1; i_14 < 7;i_14 += 1)
        {
            var_33 = (((min((min(var_8, (arr_52 [i_7] [i_7] [i_7]))), var_16)) >> (((arr_40 [i_14 + 4] [i_14] [i_7]) & (((arr_52 [i_7] [i_7] [i_14]) / (arr_28 [i_7] [i_14])))))));

            for (int i_15 = 0; i_15 < 1;i_15 += 1)
            {
                var_34 &= ((max((min(255, 46439)), (arr_32 [i_7] [i_14] [i_14 - 1] [i_15]))));
                var_35 = (min(var_35, (arr_17 [i_7] [i_7] [i_14] [i_15])));
                var_36 = (((((var_9 + (arr_40 [1] [1] [i_15])))) + var_16));

                /* vectorizable */
                for (int i_16 = 0; i_16 < 1;i_16 += 1)
                {
                    arr_57 [i_7] [i_15] [i_15] [i_16] [i_16] = var_5;
                    arr_58 [i_15] [i_15] [i_14] [i_15] = 65535;
                    var_37 *= (arr_31 [i_16] [i_15]);
                }
            }
            var_38 = (min(var_38, (((!(var_10 & -var_7))))));
        }
        var_39 += (((!(((1023 ? var_2 : 65535))))) ? 30340 : (((arr_42 [i_7] [i_7] [i_7] [i_7] [i_7]) | var_17)));
        var_40 = ((-(min((arr_17 [8] [i_7] [20] [1]), -var_17))));
        var_41 = (((((((arr_7 [i_7]) ? var_10 : -1)) == ((-(arr_12 [i_7] [i_7]))))) ? ((min(1, 1))) : (((7208889807121069443 == (min((arr_54 [i_7] [i_7] [1]), (arr_21 [i_7] [i_7] [i_7] [23] [i_7]))))))));
    }
    var_42 = (min(var_6, (((((var_6 ? var_16 : var_0))) / var_6))));
    #pragma endscop
}
