/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138690
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((-(var_7 + var_1)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        arr_11 [i_2] [i_3] = -4064;
                        var_11 = (max(var_11, (arr_0 [i_0] [i_0])));
                    }
                    for (int i_4 = 2; i_4 < 9;i_4 += 1)
                    {
                        var_12 = (max(var_12, (arr_14 [i_4 + 2])));

                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            var_13 -= 4075;
                            var_14 -= ((var_8 ? (arr_0 [i_4 - 2] [i_4 - 1]) : var_6));
                        }
                    }
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        var_15 |= var_6;
                        arr_21 [i_6] [i_1] [i_2] [i_6] = ((4064 ? 4062 : 4294967295));
                    }
                    var_16 = var_8;
                    var_17 += var_2;
                }
            }
        }
        arr_22 [i_0] = ((~(~var_5)));
    }
    for (int i_7 = 1; i_7 < 10;i_7 += 1)
    {
        var_18 = ((-(!95)));
        var_19 &= ((!(arr_3 [i_7] [i_7])));

        for (int i_8 = 1; i_8 < 9;i_8 += 1)
        {

            for (int i_9 = 0; i_9 < 12;i_9 += 1)
            {
                var_20 = (max(var_20, (((!(((var_2 ? -var_7 : 127))))))));
                var_21 *= (5 + 3);
                var_22 = (((((arr_9 [i_7] [i_8 - 1] [i_8 + 2] [i_7 - 1] [i_8]) ? 35184103653376 : (arr_9 [i_8] [7] [i_8 + 1] [i_7 - 1] [i_7]))) <= ((((arr_8 [i_7] [i_7] [i_8 + 2] [i_7]) & var_5)))));

                for (int i_10 = 0; i_10 < 12;i_10 += 1)
                {
                    var_23 ^= arr_16 [i_7] [i_7] [i_8] [i_8] [8] [i_10] [11];
                    var_24 = -var_0;
                }
            }
            var_25 = (max(var_0, (((((!(arr_12 [i_7] [i_7] [i_7] [i_8 + 2]))) && ((max(var_5, (arr_2 [i_7] [i_8])))))))));
            arr_33 [i_7] = (5940 && var_8);
            var_26 &= 2;
        }
        var_27 *= (max(((max((arr_8 [i_7] [i_7 + 1] [i_7 + 1] [i_7 + 1]), var_5))), ((-(arr_30 [i_7 - 1] [i_7 + 1] [i_7 - 1])))));
        var_28 -= (arr_19 [i_7] [i_7 - 1] [i_7 + 1]);
    }
    for (int i_11 = 0; i_11 < 17;i_11 += 1)
    {

        /* vectorizable */
        for (int i_12 = 0; i_12 < 17;i_12 += 1)
        {
            arr_40 [i_11] = (((arr_34 [i_11]) ? 11 : (arr_39 [i_12])));

            for (int i_13 = 1; i_13 < 15;i_13 += 1)
            {
                arr_44 [i_11] [i_11] [i_13] = (arr_37 [6] [i_12]);
                arr_45 [i_11] [i_13] [i_12] [2] = 1;
                var_29 = (!97);

                for (int i_14 = 0; i_14 < 17;i_14 += 1)
                {
                    arr_48 [i_11] [i_12] [i_11] [i_13] = arr_46 [8] [i_12] [i_13 - 1] [i_14];
                    arr_49 [i_13] [i_12] [i_12] [i_14] [i_14] [i_13] = (arr_42 [i_11] [i_12] [i_11] [i_12]);
                    var_30 = (min(var_30, (((var_5 % (((arr_35 [i_11]) ? (arr_38 [i_11]) : (arr_47 [i_11] [6] [i_11]))))))));
                    var_31 -= -4064;
                    var_32 = ((-(arr_37 [i_11] [i_13 + 2])));
                }
                for (int i_15 = 4; i_15 < 14;i_15 += 1)
                {
                    var_33 = (max(var_33, var_3));
                    arr_52 [i_11] [i_13] [i_12] [i_12] [i_13] [i_11] = (arr_42 [i_11] [i_11] [i_15] [i_13]);
                }
                for (int i_16 = 0; i_16 < 17;i_16 += 1)
                {
                    var_34 = (min(var_34, (((var_2 & (((arr_37 [i_12] [i_12]) ? var_2 : 11)))))));
                    var_35 = (max(var_35, (arr_54 [i_13 + 1] [i_13 + 2] [i_12] [i_11])));
                }
                var_36 = (((arr_37 [i_11] [i_11]) != var_3));
            }
        }
        var_37 = (max(var_37, ((max(-var_7, (!var_5))))));
        arr_56 [i_11] = -4294967281;

        /* vectorizable */
        for (int i_17 = 0; i_17 < 17;i_17 += 1)
        {
            arr_60 [i_17] [i_11] = -var_2;
            /* LoopNest 3 */
            for (int i_18 = 0; i_18 < 17;i_18 += 1)
            {
                for (int i_19 = 2; i_19 < 16;i_19 += 1)
                {
                    for (int i_20 = 2; i_20 < 16;i_20 += 1)
                    {
                        {
                            var_38 = ((!(arr_58 [i_19 - 2] [i_19 - 1])));
                            var_39 ^= (((arr_54 [1] [i_18] [10] [i_20]) ^ (arr_67 [i_20] [i_20] [i_20] [i_20] [i_20 + 1])));
                            var_40 -= (arr_61 [i_20 + 1]);
                        }
                    }
                }
            }
            var_41 += ((-4070 | (arr_42 [i_17] [i_17] [14] [i_11])));
        }
        arr_69 [i_11] = ((((-(arr_66 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11]))) == 31935));
    }
    var_42 = (min(var_42, -122));
    var_43 += (((~var_2) ^ var_6));
    #pragma endscop
}
