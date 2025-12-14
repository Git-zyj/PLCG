/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166452
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_2;
    var_11 = var_3;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_12 = 1955512723;
        var_13 = (min(var_13, (var_1 / var_2)));

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_14 ^= -var_1;

            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                arr_8 [i_0] [9] [i_0] [7] = 2339454572;

                for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
                {
                    var_15 += var_5;
                    arr_11 [i_3] |= -1955512723;
                }
                for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
                {
                    arr_16 [i_0] [17] [10] [i_4] = ((((arr_1 [i_0]) ? var_8 : 3676128893)));
                    arr_17 [i_0] = (~2339454573);

                    for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
                    {
                        arr_21 [i_0] [12] [i_5] = ((arr_6 [i_2 + 1]) ? (arr_6 [i_2 - 1]) : (arr_6 [i_2 - 2]));
                        arr_22 [1] [1] [5] [i_0] [i_5] [14] [i_0] = 15140;
                        arr_23 [i_0] [i_4] [i_0] [i_1] [i_1] [i_0] = 618838403;
                    }
                    for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
                    {
                        arr_27 [i_0] [i_1] [i_2] [i_0] [i_4] [i_6] |= var_8;
                        arr_28 [i_0] [i_1] [13] [i_0] [i_1] [i_1] [i_6] = -263547930;
                    }
                }
                var_16 -= ((!(arr_6 [i_2 - 1])));
            }
            for (int i_7 = 1; i_7 < 19;i_7 += 1) /* same iter space */
            {
                var_17 = (min(var_17, var_6));
                arr_32 [12] [10] &= var_2;

                for (int i_8 = 2; i_8 < 19;i_8 += 1)
                {
                    var_18 = var_0;
                    var_19 = (((arr_20 [5] [i_0] [5] [14] [i_7 + 1]) || (arr_20 [4] [i_0] [i_0] [i_7] [i_7 + 1])));

                    for (int i_9 = 0; i_9 < 20;i_9 += 1)
                    {
                        var_20 = (((arr_24 [i_9] [i_7] [i_0] [i_7 + 1] [i_7]) ? (arr_9 [i_8] [i_7 + 1] [i_7] [i_7]) : (arr_29 [i_7 + 1] [i_7 + 1] [i_7 - 1] [i_1])));
                        arr_39 [4] [i_0] [i_7] [i_7] [i_8] [i_9] = (arr_29 [i_0] [i_1] [9] [i_7 - 1]);
                        arr_40 [i_0] [i_1] [14] [18] [10] &= (arr_6 [i_7]);
                        var_21 = (((arr_10 [i_1] [i_7 - 1] [i_8 - 2] [i_8 + 1]) / (arr_10 [i_1] [i_7 - 1] [i_8 - 2] [i_8 + 1])));
                    }
                    for (int i_10 = 0; i_10 < 0;i_10 += 1)
                    {
                        var_22 = (((!(arr_14 [15] [i_0] [i_0] [i_0]))));
                        arr_43 [i_0] [i_0] [i_7] [i_8] [i_10] = (~var_3);
                        arr_44 [i_10] [8] [i_0] [i_0] [i_1] [8] = (var_6 == (arr_24 [i_10 + 1] [i_10] [i_0] [i_10 + 1] [i_10]));
                    }
                    var_23 = (min(var_23, var_5));
                    arr_45 [18] [i_8] [i_0] = ((var_5 ? var_2 : var_1));
                }
                arr_46 [i_0] [i_0] [i_0] = (arr_7 [15] [i_7] [i_7] [i_7 + 1]);
            }
            for (int i_11 = 1; i_11 < 19;i_11 += 1) /* same iter space */
            {
                arr_50 [i_0] = (((arr_36 [i_11]) == 14));

                for (int i_12 = 0; i_12 < 20;i_12 += 1)
                {

                    for (int i_13 = 0; i_13 < 20;i_13 += 1) /* same iter space */
                    {
                        var_24 &= (((((var_2 ? 618838402 : (arr_31 [i_13])))) ? (1955512723 ^ var_4) : (~var_6)));
                        var_25 = (min(var_25, 246));
                        arr_59 [i_13] [i_0] [i_11 - 1] [i_0] [i_0] = (((arr_20 [i_11 - 1] [i_0] [10] [i_0] [i_0]) ^ (arr_20 [i_11 - 1] [i_0] [i_11] [i_0] [i_11])));
                    }
                    for (int i_14 = 0; i_14 < 20;i_14 += 1) /* same iter space */
                    {
                        var_26 *= -var_7;
                        var_27 += ((var_4 ? (arr_10 [i_11 - 1] [14] [i_11 - 1] [i_12]) : var_7));
                        var_28 = (arr_30 [i_0] [i_11 - 1] [i_11]);
                    }

                    for (int i_15 = 0; i_15 < 20;i_15 += 1)
                    {
                        arr_65 [i_0] [1] [1] [i_12] [i_15] &= (arr_57 [i_11 + 1] [i_11] [i_11 + 1] [i_11 + 1] [i_11 + 1]);
                        arr_66 [i_11] [i_11 - 1] [5] [i_11] [i_11] [i_0] = (((arr_9 [i_0] [i_11 + 1] [i_11 + 1] [i_15]) ? 263547930 : (arr_47 [i_15] [i_1] [i_11] [i_11 - 1])));
                    }
                    for (int i_16 = 0; i_16 < 20;i_16 += 1)
                    {
                        var_29 ^= 263547929;
                        arr_70 [i_0] [13] [i_0] [1] [i_0] = var_0;
                    }
                    for (int i_17 = 0; i_17 < 20;i_17 += 1)
                    {
                        arr_73 [8] [i_1] [i_1] [19] [3] [19] [i_0] = ((-(arr_68 [17] [i_0] [i_0] [i_0] [i_0])));
                        arr_74 [i_17] [i_0] [i_1] [i_1] [i_0] [i_0] = (var_5 ? (arr_63 [i_0] [11] [i_0] [i_12] [i_12]) : (arr_6 [i_11]));
                        arr_75 [i_0] [5] [i_11] [i_0] [i_17] = ((1955512723 ? 618838406 : -33554432));
                    }
                }
            }
        }
        for (int i_18 = 0; i_18 < 20;i_18 += 1)
        {
            var_30 = -11085044753284334975;
            arr_78 [3] [1] [i_0] = ((arr_5 [i_0] [i_0] [i_0] [i_0]) | (arr_5 [i_0] [i_0] [5] [i_0]));
        }
    }
    for (int i_19 = 1; i_19 < 12;i_19 += 1)
    {
        var_31 ^= 3676128894;
        arr_81 [i_19 - 1] = var_7;
    }
    #pragma endscop
}
