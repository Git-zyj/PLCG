/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189225
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, 1));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_21 = var_19;

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_22 = (arr_3 [i_1] [i_1] [i_0]);
            var_23 |= 742374382;
            var_24 ^= ((var_14 && ((((arr_4 [i_0] [11]) & (arr_4 [i_0] [i_1]))))));
            var_25 &= (((-126 + 2147483647) >> (((arr_1 [i_0]) + 11))));
            var_26 = (arr_0 [i_0]);
        }

        /* vectorizable */
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 22;i_4 += 1)
                {
                    {

                        for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
                        {
                            arr_15 [16] [i_2] [i_3] [i_4 + 1] [i_5] [i_4] = 54;
                            var_27 = (min(var_27, (((!((((arr_13 [i_0] [i_2] [4] [i_4] [i_5] [16]) ? (arr_6 [i_0]) : var_1))))))));
                            var_28 = (arr_0 [i_5]);
                            var_29 = (~5943192636444196103);
                        }
                        for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
                        {
                            var_30 = var_13;
                            var_31 = ((((((arr_3 [i_0] [7] [i_0]) ? (arr_2 [i_4]) : (arr_13 [i_4] [i_4] [i_3] [i_0] [20] [i_2])))) ? 16089767813416830749 : (arr_17 [i_4] [i_0] [11] [i_2] [1])));
                            arr_20 [i_6] [i_4] [i_3] = ((!(arr_6 [i_4 - 1])));
                        }
                        var_32 = (+(((arr_9 [i_3] [i_2] [i_0]) ? var_1 : 1)));
                        arr_21 [18] [i_4] = (37875 != 47275);
                        var_33 = (i_4 % 2 == zero) ? (((arr_16 [i_4] [i_4 + 1] [i_4] [i_4 - 2] [i_4]) >> (((arr_16 [i_4] [i_4 + 1] [i_4] [i_4 - 2] [i_4]) - 39513)))) : (((arr_16 [i_4] [i_4 + 1] [i_4] [i_4 - 2] [i_4]) >> (((((arr_16 [i_4] [i_4 + 1] [i_4] [i_4 - 2] [i_4]) - 39513)) + 19986))));
                    }
                }
            }
            var_34 = (max(var_34, (((var_16 <= (arr_3 [14] [i_2] [3]))))));
        }
        /* vectorizable */
        for (int i_7 = 1; i_7 < 22;i_7 += 1)
        {
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 24;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        {
                            var_35 = -254571211;
                            arr_32 [i_7] [i_7] [i_7 + 2] [i_7 + 2] [i_7] [1] = 54;
                            arr_33 [10] [i_7] [i_7] &= ((1197045653 ? -110 : ((31512 ? 34531 : 3907))));
                        }
                    }
                }
            }
            var_36 = (arr_6 [16]);
        }
        /* vectorizable */
        for (int i_11 = 2; i_11 < 21;i_11 += 1)
        {
            var_37 = arr_19 [0] [i_0] [18];
            var_38 = (((arr_35 [i_0] [i_11 + 1]) & (arr_35 [i_0] [i_11 - 1])));
        }
        for (int i_12 = 0; i_12 < 1;i_12 += 1)
        {
            var_39 -= ((~(((arr_8 [i_0] [i_0] [i_0]) ? (arr_10 [i_0] [i_0] [i_12]) : (((!(arr_5 [i_0] [i_12]))))))));
            var_40 = (arr_0 [i_0]);
        }
        arr_42 [i_0] [i_0] = (arr_5 [3] [i_0]);
    }
    /* vectorizable */
    for (int i_13 = 3; i_13 < 15;i_13 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 17;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 17;i_15 += 1)
            {
                {
                    var_41 = var_5;
                    arr_52 [i_14] [i_14] [i_15] [i_15] = var_4;
                }
            }
        }
        var_42 = (!3903283022061643685);
    }
    for (int i_16 = 3; i_16 < 15;i_16 += 1) /* same iter space */
    {
        var_43 &= (arr_22 [i_16 + 1]);
        var_44 = var_7;
        var_45 = (arr_24 [i_16] [i_16] [i_16]);
        /* LoopNest 2 */
        for (int i_17 = 0; i_17 < 17;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 17;i_18 += 1)
            {
                {
                    var_46 = (arr_35 [i_16] [i_16]);
                    arr_63 [i_16] [i_16] [1] [i_17] = (arr_53 [i_16] [i_17]);
                    var_47 &= ((!(arr_57 [i_16] [i_17] [i_18])));
                    var_48 = (arr_24 [i_18] [12] [i_16]);
                }
            }
        }
        var_49 = (max(var_49, (!88)));
    }
    #pragma endscop
}
