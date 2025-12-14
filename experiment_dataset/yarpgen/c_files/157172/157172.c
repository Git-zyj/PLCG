/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157172
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (~(arr_3 [i_0] [i_0]));

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_13 = (((arr_0 [i_1]) - (arr_3 [i_1] [i_0])));
            arr_7 [7] [i_1] [i_1] |= (!var_0);
            arr_8 [i_1] [i_1] [i_0] = -1714862633;
        }
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                arr_15 [2] [i_2] [i_3] |= (arr_14 [i_2] [i_2] [i_3]);
                var_14 = (!(arr_3 [i_3] [i_2]));
            }
            for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
            {
                var_15 |= ((var_8 ? 1 : (arr_11 [i_0] [i_2] [i_4])));
                var_16 |= ((-(arr_12 [i_0] [4] [i_0])));
            }
            for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
            {

                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    var_17 |= arr_3 [i_0] [i_2];
                    arr_23 [i_0] [i_5] [i_5] [i_5] [i_6] = (!4294967291);
                    var_18 |= (arr_3 [i_0] [i_2]);
                    var_19 = (var_7 || var_11);
                }
                for (int i_7 = 1; i_7 < 1;i_7 += 1)
                {
                    var_20 = (max(var_20, ((((arr_20 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 - 1]) ? (arr_20 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 - 1]) : (arr_20 [i_7 - 1] [i_7 - 1] [3] [i_7 - 1]))))));
                    arr_28 [i_5] [i_5] [i_0] = (arr_21 [i_7 - 1] [i_7] [i_7] [i_5]);
                }
                for (int i_8 = 0; i_8 < 13;i_8 += 1)
                {
                    var_21 *= (((arr_6 [i_0] [i_2] [i_8]) ? var_12 : (arr_3 [i_0] [i_5])));
                    var_22 *= (arr_19 [12] [i_2] [i_5] [i_8]);
                }
                var_23 = (~1);
                arr_31 [i_5] [i_5] [i_5] [i_0] = (((0 < 4294967276) - 32752));
                arr_32 [i_5] = (((arr_3 [i_0] [i_0]) ? (arr_5 [i_0]) : ((var_12 ? 255 : 46))));
            }
            arr_33 [i_2] = (((arr_14 [i_0] [i_2] [i_2]) ? 48 : (((arr_5 [i_0]) ? var_10 : 37))));

            for (int i_9 = 1; i_9 < 10;i_9 += 1)
            {
                var_24 = var_4;
                var_25 = -4;
            }
            for (int i_10 = 1; i_10 < 11;i_10 += 1)
            {

                for (int i_11 = 4; i_11 < 11;i_11 += 1)
                {
                    arr_41 [i_11 - 1] [i_10] [12] [i_0] = ((!((((arr_0 [i_11]) ? var_12 : var_4)))));
                    var_26 *= 112;
                }
                for (int i_12 = 1; i_12 < 1;i_12 += 1)
                {

                    for (int i_13 = 0; i_13 < 13;i_13 += 1)
                    {
                        var_27 = 5;
                        arr_47 [i_12] [i_2] [i_12] = (((((arr_44 [i_0] [i_12] [i_10 + 2] [i_2] [i_0]) && var_7)) || ((0 || (arr_19 [i_0] [0] [i_0] [i_12])))));
                        arr_48 [i_12] [i_12] = 108;
                    }
                    for (int i_14 = 0; i_14 < 1;i_14 += 1)
                    {
                        var_28 = 5;
                        arr_51 [i_0] [i_2] [i_10] [i_12] [i_12] = 246;
                        var_29 = 0;
                        arr_52 [i_12] [i_14] = 26875;
                    }
                    for (int i_15 = 2; i_15 < 10;i_15 += 1)
                    {
                        arr_56 [i_0] [i_0] [6] [2] [i_0] |= (arr_53 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [10]);
                        var_30 = (((arr_30 [i_0] [i_12 - 1] [i_12 - 1] [i_12] [i_15]) < var_3));
                    }
                    for (int i_16 = 0; i_16 < 13;i_16 += 1)
                    {
                        var_31 |= (arr_54 [i_16] [i_16] [i_12] [i_10] [i_2] [i_0]);
                        var_32 *= (~33);
                        var_33 = ((262143 + (((arr_9 [i_2] [i_2]) + (arr_3 [i_0] [4])))));
                        var_34 *= (arr_53 [i_0] [i_2] [i_2] [i_2] [i_2] [i_0] [i_16]);
                    }
                    var_35 |= (arr_25 [i_0] [i_2] [i_10] [i_12] [i_12] [i_12]);
                    arr_59 [i_0] [i_12] [i_10 + 2] [i_12] = ((~(arr_21 [i_0] [i_0] [i_0] [i_12])));
                }
                for (int i_17 = 0; i_17 < 13;i_17 += 1)
                {
                    arr_62 [i_0] [i_0] [i_0] [i_0] [7] [i_0] |= var_7;
                    arr_63 [i_0] [i_0] [3] = (((arr_5 [i_10 + 1]) ? (arr_5 [i_10 - 1]) : 172));
                    var_36 *= (arr_61 [i_0] [i_0]);
                    var_37 = -26875;
                }
                var_38 = (max(var_38, ((((arr_24 [i_10 - 1] [i_2] [i_10] [i_10 + 2] [8] [6]) ? 0 : 0)))));
                arr_64 [i_0] [i_2] [i_10] = (!0);
            }
            var_39 = (max(var_39, ((51 ? (((4294967291 < (arr_3 [i_0] [5])))) : ((var_6 ? -12 : var_12))))));
        }
        arr_65 [4] = ((~(arr_43 [i_0] [i_0] [i_0])));
    }
    var_40 = var_1;
    var_41 *= (min((!var_10), var_0));
    #pragma endscop
}
