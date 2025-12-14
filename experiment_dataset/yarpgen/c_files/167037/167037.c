/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167037
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_7;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_14 ^= -1;
        var_15 = (arr_1 [i_0]);
        var_16 = 3465848402;
        var_17 = max(((~(max(var_5, 1308139623)))), (!-var_4));
    }

    for (int i_1 = 2; i_1 < 19;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            var_18 = var_9;

            for (int i_3 = 1; i_3 < 18;i_3 += 1)
            {
                var_19 = (max(var_19, (~-var_9)));
                var_20 = (((arr_5 [i_1 - 1]) * var_8));
            }
        }
        var_21 += (((arr_9 [i_1 + 1] [i_1 + 1] [i_1 - 2] [i_1 - 2]) ? ((max((arr_9 [i_1 + 1] [i_1 - 2] [i_1] [i_1 - 1]), (arr_9 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1])))) : ((~(arr_3 [i_1 + 1])))));
    }
    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        var_22 = (!13);
        var_23 = (max((arr_9 [i_4] [i_4] [1] [i_4]), (max(((28352 ^ (arr_6 [i_4] [i_4]))), (((-(arr_8 [i_4] [i_4] [i_4]))))))));

        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_24 = (((arr_15 [7] [11] [i_4]) + (((arr_3 [i_4]) ? var_2 : var_7))));
            var_25 = (min(var_25, (arr_4 [i_4])));
        }
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {

            for (int i_7 = 2; i_7 < 14;i_7 += 1)
            {
                arr_22 [i_7 - 1] [i_6] [1] [i_6] = ((!(((-(arr_9 [i_7 - 2] [i_7 - 1] [i_7 + 1] [i_7 - 2]))))));
                arr_23 [i_6] [i_6] [i_7] [i_7 - 1] = (arr_10 [11] [11] [i_6] [i_7]);
                arr_24 [i_7] [i_4] [i_6] [i_4] = ((144115188075855871 - (((!(arr_16 [i_6] [i_6]))))));
            }
            arr_25 [i_4] [i_4] [i_6] = (((max(4216917078, var_3)) - 2720431799));
        }
        var_26 = -var_7;

        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            var_27 = (min(var_27, ((((1 ? 1 : (arr_17 [i_8] [i_4] [i_4])))))));
            arr_29 [i_8] [i_4] [i_4] = 30560;
            arr_30 [1] = ((-(arr_10 [i_4] [i_8] [i_4] [i_4])));
        }
        for (int i_9 = 0; i_9 < 16;i_9 += 1)
        {

            for (int i_10 = 0; i_10 < 16;i_10 += 1)
            {
                arr_38 [i_4] [0] [i_9] [i_4] = var_1;
                var_28 = ((var_4 ? (((536870911 ^ (arr_16 [i_9] [i_9])))) : (arr_7 [i_4] [i_4] [i_4] [i_9])));
            }
            var_29 |= ((((((arr_6 [i_9] [i_4]) * (arr_7 [i_4] [i_9] [i_4] [i_4])))) - ((var_11 ? var_10 : (arr_28 [i_4] [i_4] [i_9])))));
            var_30 *= var_11;
        }
    }
    for (int i_11 = 0; i_11 < 22;i_11 += 1)
    {

        for (int i_12 = 1; i_12 < 19;i_12 += 1)
        {
            var_31 = (((((((arr_43 [i_11] [i_11] [i_11]) ? var_2 : var_9)))) ? (((arr_43 [8] [i_12 + 3] [i_11]) ? (((arr_39 [i_11]) ? (arr_43 [i_11] [i_11] [i_11]) : var_6)) : ((1 ? var_1 : 1828171654)))) : (((!(arr_42 [i_11]))))));

            for (int i_13 = 0; i_13 < 22;i_13 += 1)
            {
                var_32 -= (((((-(arr_40 [i_11])))) % (arr_41 [i_13])));
                arr_49 [i_11] = var_6;
            }
            arr_50 [i_11] = (((arr_47 [i_11] [i_11] [i_11]) ? ((((((arr_45 [1] [i_12] [i_12 + 3] [i_12]) ? 63865 : (arr_43 [i_11] [i_11] [i_11])))) ? ((992 ? (arr_44 [i_11]) : (arr_45 [i_12] [i_11] [i_11] [i_11]))) : -var_5)) : ((-(((arr_41 [i_11]) + var_10))))));
            var_33 = (((arr_40 [i_11]) ? var_10 : (arr_39 [i_11])));
        }
        arr_51 [i_11] = ((-((-(arr_40 [i_11])))));
        var_34 ^= ((-(arr_39 [12])));
    }

    for (int i_14 = 1; i_14 < 1;i_14 += 1)
    {
        arr_54 [i_14] = ((!((((((arr_48 [i_14] [i_14] [i_14]) == 65535)) ? 4222355278685534336 : var_6)))));
        arr_55 [i_14 - 1] = (max((~var_11), (((((arr_40 [i_14]) ? (arr_6 [i_14] [i_14]) : (arr_53 [i_14]))) / (~var_6)))));
        arr_56 [i_14] = (max(((255 ? ((((arr_53 [i_14 - 1]) && var_2))) : (!-1))), (max(((var_11 ? 232 : (arr_5 [i_14]))), (!127)))));
        arr_57 [i_14] [0] = (!var_6);
    }
    #pragma endscop
}
