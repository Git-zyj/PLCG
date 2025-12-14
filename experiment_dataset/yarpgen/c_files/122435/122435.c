/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122435
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_17;

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_20 += arr_1 [i_0];

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            arr_7 [i_1] = (arr_0 [i_1]);
            arr_8 [i_0] [i_1] [i_1] = ((!((!(((-(arr_1 [i_0]))))))));

            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                var_21 = ((var_12 ? -var_4 : (arr_5 [i_1] [i_0])));
                var_22 -= ((-(((~var_12) ^ (arr_4 [i_0])))));
            }
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_23 -= ((!(((18446744073709551615 ? (arr_1 [i_3]) : (((!(arr_11 [i_0])))))))));
            var_24 = (min(var_24, var_5));
            var_25 = (arr_5 [i_3] [i_0]);
        }
        var_26 ^= (arr_5 [i_0] [i_0]);
    }
    for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {

            for (int i_6 = 1; i_6 < 17;i_6 += 1)
            {
                var_27 = (arr_18 [i_6 + 1] [i_4]);
                var_28 = (arr_9 [i_4] [i_5] [i_4] [i_6 - 1]);
                var_29 -= var_14;
            }
            var_30 = ((~var_5) ? (arr_17 [i_4]) : (arr_16 [i_5] [i_4]));
            arr_22 [i_4] [i_5] = var_6;
        }
        var_31 = (~var_17);
        var_32 ^= (~var_0);
    }
    for (int i_7 = 0; i_7 < 18;i_7 += 1) /* same iter space */
    {

        for (int i_8 = 0; i_8 < 18;i_8 += 1)
        {
            var_33 = -var_6;

            for (int i_9 = 1; i_9 < 15;i_9 += 1)
            {

                for (int i_10 = 3; i_10 < 17;i_10 += 1)
                {
                    var_34 = (arr_2 [i_9 + 2] [i_7]);
                    var_35 = (arr_6 [i_7] [i_9 + 3] [i_10 - 1]);
                }
                var_36 = (arr_2 [i_9 + 3] [i_7]);
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 18;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 15;i_12 += 1)
                    {
                        {
                            arr_36 [i_7] [i_8] [i_12 + 2] = ((-(arr_33 [i_8])));
                            var_37 *= ((!(((arr_14 [i_11]) || ((!(arr_6 [i_12 + 1] [i_11] [i_7])))))));
                            arr_37 [i_7] [i_8] [i_12 + 2] [i_11] [i_12] [i_12 - 1] = (arr_5 [i_7] [i_7]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_13 = 1; i_13 < 16;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 18;i_14 += 1)
                    {
                        {
                            arr_43 [i_8] = (arr_42 [i_13 + 2] [i_13 + 1] [i_13 + 1] [i_13 + 1] [i_13 - 1] [i_13 + 1]);
                            var_38 &= (!((((~var_5) ? -var_11 : (arr_26 [i_13 + 2])))));
                            var_39 ^= ((+(((arr_29 [i_7] [i_8] [i_8] [i_8]) * var_7))));
                            var_40 = (min(var_40, ((((-121 ? 15 : 8))))));
                            arr_44 [i_9 + 2] [i_8] [i_9 + 3] [i_9 + 1] [i_9 + 2] = ((var_4 ? (((~(arr_15 [i_8] [i_9 - 1])))) : (((arr_32 [i_13 + 2] [i_13 + 2] [i_13 + 1] [i_13 + 1] [i_13 + 1] [i_8]) ^ (((arr_11 [i_13]) ? var_3 : (arr_26 [i_14])))))));
                        }
                    }
                }
                arr_45 [i_7] [i_8] [i_8] = -var_17;
            }
            arr_46 [i_8] = ((!(1 == 0)));
        }
        var_41 = (arr_11 [i_7]);
    }
    var_42 = (!var_12);
    #pragma endscop
}
