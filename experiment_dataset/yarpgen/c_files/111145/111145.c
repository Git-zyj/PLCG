/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111145
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= var_17;
    var_19 = (min(var_19, var_3));

    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        var_20 = (arr_0 [i_0 - 3]);
        arr_2 [i_0] [i_0] = -18446744073709551615;
    }

    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        arr_7 [i_1] |= (arr_4 [i_1]);
        var_21 = (((arr_0 [i_1]) >= 1));

        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            var_22 = (max(18446744073709551615, -26609));
            var_23 &= ((~((max((arr_10 [i_1] [i_2]), (arr_10 [i_1] [i_2]))))));
        }
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 3; i_4 < 9;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 6;i_5 += 1)
                {
                    {
                        var_24 = 18446744073709551615;
                        var_25 = (max((arr_16 [1] [9] [9]), (((!0) ? 9802 : (~18446744073709551609)))));
                    }
                }
            }
            arr_18 [i_1] [i_1] [i_3] |= -1;

            /* vectorizable */
            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                arr_21 [4] [8] [i_6] = (((arr_4 [i_1]) > (arr_11 [i_1] [i_3] [i_6])));

                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    arr_26 [i_1] [6] = var_15;
                    var_26 = (max(var_26, (arr_5 [i_6])));
                }
                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    arr_29 [i_8] [4] [i_6] [i_8] = 2047;
                    arr_30 [0] [i_8] [i_6] [i_8] [7] = (arr_28 [i_1] [i_1] [i_3] [i_6] [i_1] [i_8]);
                    var_27 = -2740805800;
                }
                var_28 = (arr_13 [i_1]);
            }
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 10;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 10;i_10 += 1)
                {
                    {
                        var_29 = -244;

                        /* vectorizable */
                        for (int i_11 = 3; i_11 < 8;i_11 += 1)
                        {
                            var_30 = ((arr_25 [7] [i_10] [i_9] [i_3] [1]) >> (2712464525887728589 - 2712464525887728563));
                            var_31 &= (((var_1 != 18446744073709551591) << 13));
                            var_32 &= (arr_32 [7] [5] [7] [i_1]);
                            var_33 -= var_15;
                            var_34 = (((arr_33 [i_3] [2] [i_11 - 3]) >= (arr_34 [8] [i_3] [i_1])));
                        }
                        /* vectorizable */
                        for (int i_12 = 4; i_12 < 8;i_12 += 1)
                        {
                            var_35 = arr_28 [i_12 + 1] [i_12] [i_12 - 2] [i_12] [i_12 - 2] [i_12 - 2];
                            var_36 += (-(arr_39 [i_12 - 2] [i_12] [i_12 + 1] [i_12 - 2] [i_12 + 1] [i_1]));
                        }
                        var_37 ^= (((!237) ? (arr_11 [i_1] [i_3] [i_3]) : (max(7, (arr_11 [i_10] [i_9] [i_1])))));
                        arr_42 [i_1] [i_1] [2] [i_1] [6] [2] = (max((max((arr_25 [i_3] [i_3] [i_9] [i_3] [i_9]), (arr_25 [i_3] [i_3] [i_3] [i_3] [i_3]))), (!249)));
                        var_38 = ((~(arr_11 [i_3] [i_9] [i_10])));
                    }
                }
            }
            var_39 += max(((min((arr_17 [i_1] [i_1] [i_1] [i_1] [6]), (arr_40 [i_1] [i_1] [i_3] [i_1] [i_3])))), ((0 ? 18446744073709551615 : 11)));
        }
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 23;i_13 += 1)
    {

        for (int i_14 = 0; i_14 < 23;i_14 += 1)
        {
            var_40 = -var_0;
            /* LoopNest 2 */
            for (int i_15 = 0; i_15 < 23;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 23;i_16 += 1)
                {
                    {
                        var_41 = (-21 && 4294967283);
                        var_42 = (max(var_42, 171));
                    }
                }
            }
        }
        var_43 ^= ((((-(arr_47 [i_13] [i_13] [i_13] [i_13]))) - 19));
        var_44 -= ((-(!var_3)));
    }
    for (int i_17 = 0; i_17 < 1;i_17 += 1)
    {
        /* LoopNest 2 */
        for (int i_18 = 0; i_18 < 23;i_18 += 1)
        {
            for (int i_19 = 0; i_19 < 23;i_19 += 1)
            {
                {
                    var_45 = 4294967295;
                    arr_61 [i_17] [i_18] [22] = var_6;

                    /* vectorizable */
                    for (int i_20 = 0; i_20 < 23;i_20 += 1)
                    {
                        arr_64 [i_17] [i_17] [i_17] [i_17] = (~(arr_44 [i_20]));
                        var_46 = ((((141 << (((arr_46 [i_18]) - 134395011603132504)))) != var_8));
                        var_47 = (arr_52 [i_20]);
                        var_48 = (min(var_48, (arr_60 [i_18] [i_19] [i_20])));
                    }
                }
            }
        }
        var_49 = 1;
    }
    /* vectorizable */
    for (int i_21 = 0; i_21 < 21;i_21 += 1)
    {

        for (int i_22 = 2; i_22 < 17;i_22 += 1)
        {
            arr_72 [i_21] [i_22] [i_22] = -4037760021570609747;
            var_50 = 26;
            var_51 = 606016291;
            var_52 = var_1;
        }
        for (int i_23 = 0; i_23 < 21;i_23 += 1)
        {
            var_53 = (max(var_53, (arr_67 [i_21])));
            var_54 = 18446744073709551583;
            var_55 = ((~(arr_50 [i_23] [15])));
        }
        for (int i_24 = 0; i_24 < 21;i_24 += 1)
        {
            var_56 = (((arr_56 [i_24] [i_21]) + (arr_56 [i_21] [i_21])));
            /* LoopNest 3 */
            for (int i_25 = 0; i_25 < 21;i_25 += 1)
            {
                for (int i_26 = 0; i_26 < 21;i_26 += 1)
                {
                    for (int i_27 = 3; i_27 < 20;i_27 += 1)
                    {
                        {
                            var_57 = (!(arr_45 [i_21] [i_24]));
                            var_58 = -4037760021570609747;
                        }
                    }
                }
            }
        }
        for (int i_28 = 0; i_28 < 21;i_28 += 1)
        {
            var_59 = (((~(arr_71 [i_21] [i_28] [i_28]))) | (arr_54 [i_28]));
            arr_89 [i_21] [i_21] [i_21] = (((arr_58 [i_21] [i_28]) ^ ((((arr_78 [i_21]) && var_9)))));
        }
        var_60 = (max(var_60, 32761));
    }
    #pragma endscop
}
