/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119737
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((var_1 >= (((var_1 ? var_0 : var_2))))) && var_11));
    var_14 = ((((min(var_11, var_8))) ? ((var_6 ? ((var_9 ? var_9 : var_1)) : var_2)) : var_5));

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        var_15 = ((+(((arr_1 [i_0 + 1]) >> ((var_8 & (arr_0 [i_0])))))));
        arr_2 [i_0] = ((((!(var_3 > var_10))) || (arr_0 [i_0 - 2])));
        var_16 = 214;
    }
    for (int i_1 = 2; i_1 < 21;i_1 += 1)
    {
        var_17 = (max(var_17, (((~((min((arr_4 [i_1 + 1]), (var_4 == var_1)))))))));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_18 = (((arr_6 [i_1 + 1] [i_1 - 2]) ? (arr_6 [i_1 + 1] [i_1 - 2]) : var_1));
            var_19 = (((var_2 <= var_7) | (arr_6 [i_1 - 2] [i_1 - 2])));
            var_20 = (max(var_20, (arr_7 [i_1 - 1] [i_1 - 1])));

            for (int i_3 = 2; i_3 < 19;i_3 += 1)
            {
                var_21 = (arr_8 [i_3 + 1]);
                var_22 += (arr_11 [i_1] [i_1] [i_2] [i_2]);
            }
            for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
            {
                arr_14 [i_4] [i_2] [i_4] [i_2] = ((!(arr_4 [i_1 - 2])));

                for (int i_5 = 2; i_5 < 20;i_5 += 1)
                {
                    arr_17 [i_1] [i_2] [i_2] [i_5] = -var_3;
                    arr_18 [i_1] [i_5] [i_5] = (((arr_10 [i_1] [i_1] [i_1 + 1]) % (arr_3 [i_1 + 1] [i_5 + 2])));
                }
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    var_23 = (((arr_19 [i_1] [i_1] [i_1 - 2] [i_6] [i_6] [i_6]) ? (arr_19 [i_1 - 2] [i_1 - 2] [i_1 - 2] [i_1 - 1] [i_1 - 2] [i_4]) : var_1));
                    var_24 = (min(var_24, (((-(arr_12 [i_1] [i_1] [i_2]))))));
                    var_25 = (arr_12 [i_1] [i_1] [i_6]);
                    var_26 -= (arr_10 [i_1 - 2] [i_2] [i_4]);
                }
                arr_22 [i_4] [i_1] [i_1] [i_1] = (~var_11);
                var_27 = (((arr_7 [i_1] [i_1 + 1]) ? (arr_7 [i_1] [i_1 - 2]) : var_4));
            }
            for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
            {
                var_28 += ((-(((arr_13 [i_1] [i_1] [i_7]) ? (arr_5 [i_1] [i_2] [i_2]) : (arr_23 [i_1] [i_2] [i_7] [i_7])))));
                arr_26 [i_2] [i_7] = (arr_24 [i_1 - 1] [i_2] [i_1 - 2]);
                arr_27 [i_7] [i_2] [i_2] [i_1] = (((arr_4 [i_2]) ? var_3 : ((~(arr_25 [i_2] [i_7])))));
                arr_28 [i_7] [i_1 - 1] [i_1] [i_1 - 1] = (((arr_13 [i_1 + 1] [i_2] [i_1 + 1]) == (arr_7 [i_2] [i_7])));
            }
            for (int i_8 = 0; i_8 < 22;i_8 += 1) /* same iter space */
            {

                for (int i_9 = 0; i_9 < 22;i_9 += 1)
                {
                    var_29 = (arr_21 [i_1] [i_1] [i_2] [i_8] [i_9]);
                    arr_35 [i_1 - 2] [i_2] [i_8] [i_1 - 2] = -var_9;
                    var_30 = (max(var_30, (-17 > 16)));
                }

                for (int i_10 = 0; i_10 < 22;i_10 += 1) /* same iter space */
                {
                    arr_39 [i_10] [i_2] [i_10] [i_10] = (((arr_8 [i_1 - 1]) ? var_9 : (((arr_29 [i_8] [i_10] [i_1] [i_10]) ? var_1 : (arr_20 [i_1] [i_1] [i_1] [i_1 - 1])))));
                    var_31 = (min(var_31, ((((var_4 ? (arr_6 [i_1] [i_2]) : var_1)) > var_12))));
                    var_32 += (arr_10 [i_1 - 2] [i_1 - 1] [i_1 - 1]);
                }
                for (int i_11 = 0; i_11 < 22;i_11 += 1) /* same iter space */
                {
                    var_33 += (arr_15 [i_1 + 1] [i_1] [i_2] [i_2] [i_1] [i_11]);
                    var_34 = ((var_9 | (arr_37 [i_11])));
                }
                for (int i_12 = 0; i_12 < 22;i_12 += 1)
                {
                    var_35 = (max(var_35, var_9));
                    var_36 -= ((-(arr_24 [i_12] [i_2] [i_1 + 1])));

                    for (int i_13 = 3; i_13 < 21;i_13 += 1) /* same iter space */
                    {
                        var_37 += (((arr_46 [i_13] [i_13 + 1] [i_1 + 1] [i_1] [i_1 - 1]) > var_11));
                        var_38 = (min(var_38, (arr_5 [i_1 - 2] [i_1 + 1] [i_13 + 1])));
                        var_39 = (!(arr_19 [i_1 - 2] [i_1 - 2] [i_1 - 1] [i_1 + 1] [i_12] [i_13 - 1]));
                        var_40 = (((arr_38 [i_2] [i_13 - 1] [i_13 - 2] [i_8] [i_13 - 3]) << var_9));
                    }
                    for (int i_14 = 3; i_14 < 21;i_14 += 1) /* same iter space */
                    {
                        var_41 = var_10;
                        var_42 = (max(var_42, var_10));
                    }
                    var_43 -= ((var_11 >> (((arr_7 [i_1 - 1] [i_1 + 1]) - 7637008769143904858))));
                }
                for (int i_15 = 0; i_15 < 22;i_15 += 1)
                {
                    arr_53 [i_15] [i_2] = (((arr_49 [i_1 + 1] [i_2] [i_1 + 1] [i_15] [i_2]) * (arr_49 [i_1 + 1] [i_2] [i_8] [i_1 - 2] [i_1 - 2])));
                    arr_54 [i_1 + 1] [i_2] [i_2] [i_15] = (((arr_4 [i_15]) ? var_0 : (arr_4 [i_15])));
                }
            }
            arr_55 [i_1 + 1] [i_1 + 1] = ((arr_32 [i_1 - 1]) == (arr_32 [i_1 - 2]));
        }
        /* vectorizable */
        for (int i_16 = 0; i_16 < 22;i_16 += 1)
        {
            arr_58 [i_1] [i_16] = (((arr_30 [i_1 - 2] [i_16]) ? var_9 : (((arr_13 [i_1] [i_16] [i_16]) / (arr_48 [i_16] [i_16] [i_16] [i_16] [i_16])))));
            var_44 = (((arr_52 [i_1] [i_16] [i_16] [i_1 - 1]) ? (arr_13 [i_16] [i_1 - 1] [i_1 - 1]) : var_2));
            var_45 += var_6;
            arr_59 [i_1 - 2] [i_1 - 2] = ((((1073741822 ? var_3 : var_8)) * var_9));
        }
        var_46 = (min(var_46, (arr_42 [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1 - 1])));
    }
    var_47 = (max(var_6, ((var_11 > (var_6 <= var_9)))));
    #pragma endscop
}
