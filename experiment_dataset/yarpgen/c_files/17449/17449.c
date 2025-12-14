/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17449
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= var_15;
    var_19 = (min((!268435454), var_0));
    var_20 = (((!((max(var_2, var_6))))));

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_21 = (arr_1 [5]);
        var_22 = ((!(((-(arr_0 [i_0]))))));

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_23 -= (arr_2 [i_0]);
            arr_5 [i_0] [i_0] [i_0] = var_5;
        }
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            var_24 = ((~(min((arr_0 [i_0 + 1]), (((arr_8 [i_0]) ? -268435455 : (arr_2 [18])))))));
            arr_9 [i_0] = ((((((min(268435455, 268435461))) ? (arr_6 [5] [i_0]) : ((-(arr_3 [i_0 + 1] [i_0] [i_2]))))) != (arr_2 [i_0 - 1])));
            arr_10 [i_0] = 2;
            var_25 = (max(var_25, ((max(25055, 268435452)))));
        }

        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            var_26 = min((min((arr_2 [i_0 - 1]), 35255)), (arr_4 [i_0 - 1]));
            var_27 = (max((arr_11 [i_0] [17] [i_0 + 1]), (35255 / 255)));

            /* vectorizable */
            for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
            {
                var_28 = (i_0 % 2 == zero) ? (((var_7 << (((arr_7 [i_0] [i_0 - 1] [i_0]) - 10627166409507062671))))) : (((var_7 << (((((arr_7 [i_0] [i_0 - 1] [i_0]) - 10627166409507062671)) - 16788627420442820437)))));
                arr_16 [i_0] [i_0] [i_4] = var_12;
            }
            for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
            {
                arr_19 [i_0] = ((+(max((min((arr_11 [12] [i_3] [17]), (arr_13 [i_0]))), (arr_15 [i_0] [i_0] [i_0] [15])))));
                var_29 = ((((max(-268435455, (((var_0 >= (arr_14 [6]))))))) ? (max((arr_0 [i_0 + 1]), (arr_6 [i_0] [i_0]))) : ((((2046 ? 119 : (arr_1 [1])))))));
                arr_20 [i_0] [i_0] = ((((((arr_1 [i_0 + 1]) >= (arr_17 [i_0 - 1] [11] [i_5]))))) >= (min((arr_13 [i_0]), (arr_13 [i_0]))));
                var_30 = (arr_4 [i_0 - 1]);
                var_31 |= (max((((-(arr_18 [i_0 + 1] [i_0 - 1] [i_0 - 1])))), (((arr_18 [i_0 + 1] [i_0 - 1] [i_0 - 1]) ? ((((arr_0 [i_3]) / (arr_13 [i_3])))) : (arr_7 [i_0] [i_3] [i_3])))));
            }
            /* vectorizable */
            for (int i_6 = 4; i_6 < 17;i_6 += 1)
            {
                var_32 = (~var_16);
                var_33 = (((arr_11 [i_6 - 1] [i_0 - 1] [i_0]) + (arr_11 [i_6 + 2] [i_0 - 1] [i_0])));
            }
            /* vectorizable */
            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {
                var_34 -= -268435479;
                arr_27 [i_0] [i_7] [i_3] [i_0] = ((var_12 < ((2147483648 ? (arr_2 [i_0]) : 6674812643559840525))));
            }
            arr_28 [i_0] [i_3] = var_13;
        }
        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {

            /* vectorizable */
            for (int i_9 = 0; i_9 < 19;i_9 += 1)
            {

                for (int i_10 = 0; i_10 < 19;i_10 += 1)
                {

                    for (int i_11 = 0; i_11 < 19;i_11 += 1)
                    {
                        arr_38 [i_9] [i_8] [i_10] [i_8] [i_8] [i_10] &= ((-(arr_12 [i_10] [i_0 - 1])));
                        arr_39 [i_0] [i_0] = arr_23 [i_0] [i_9] [i_0 - 1] [i_9];
                    }

                    for (int i_12 = 0; i_12 < 19;i_12 += 1)
                    {
                        arr_42 [i_9] [i_0] [i_9] [i_0] [i_0] = 45;
                        var_35 = (((arr_30 [i_0] [i_0] [i_0 - 1]) ? var_0 : (arr_41 [i_0] [1])));
                        var_36 = (arr_14 [i_0]);
                        var_37 = (arr_29 [i_0 - 1] [i_8] [i_0]);
                        var_38 ^= (arr_37 [i_0 + 1]);
                    }
                    for (int i_13 = 0; i_13 < 19;i_13 += 1)
                    {
                        var_39 = -var_5;
                        var_40 -= (arr_11 [i_0] [i_0] [i_0 + 1]);
                        var_41 = ((!(arr_34 [i_0] [i_0 + 1] [1] [i_0] [i_0 - 1] [i_0 - 1])));
                    }
                }
                arr_46 [13] [i_8] [i_0] [i_8] = ((-(arr_26 [i_0] [i_8])));
                arr_47 [i_0] [i_8] = ((!(arr_43 [i_0 + 1] [6] [i_0 + 1] [i_0 - 1] [i_0 + 1])));
            }
            var_42 = ((!(((var_4 ? (arr_13 [i_0]) : (arr_13 [i_0]))))));
            var_43 = (max((!var_12), ((-(arr_6 [i_0] [i_0])))));
            arr_48 [i_0] [i_0] [i_0] = var_14;

            for (int i_14 = 0; i_14 < 19;i_14 += 1)
            {
                var_44 = ((((var_2 ? var_5 : (arr_36 [i_0 + 1] [9] [i_14] [5] [i_14])))) ? (max(var_14, (arr_36 [i_0 + 1] [i_8] [15] [1] [i_0 + 1]))) : (arr_18 [i_0 + 1] [i_8] [i_14]));
                arr_51 [i_0] [i_8] [i_0] [i_0] = (arr_43 [i_8] [i_8] [i_14] [i_8] [i_8]);
                var_45 = (~109);
                var_46 = ((((min((arr_30 [i_0] [i_0 + 1] [i_0]), (arr_30 [i_0] [i_0 + 1] [i_0])))) - (((!(arr_30 [i_0] [i_0 + 1] [i_0]))))));
            }
        }
    }
    for (int i_15 = 4; i_15 < 14;i_15 += 1)
    {
        var_47 &= 1048568;
        arr_54 [7] = ((((arr_23 [i_15] [i_15 - 4] [i_15] [i_15 + 3]) & 97)));
        var_48 = (min(var_48, ((((arr_50 [i_15 - 3] [i_15 - 3] [i_15]) - var_10)))));
    }
    for (int i_16 = 1; i_16 < 21;i_16 += 1)
    {
        arr_58 [i_16] = var_7;
        arr_59 [i_16] = (i_16 % 2 == zero) ? (((var_7 ? (((arr_56 [i_16]) << (((arr_56 [i_16]) - 212)))) : (arr_57 [i_16 + 2])))) : (((var_7 ? (((arr_56 [i_16]) << (((((arr_56 [i_16]) - 212)) + 150)))) : (arr_57 [i_16 + 2]))));
    }
    #pragma endscop
}
