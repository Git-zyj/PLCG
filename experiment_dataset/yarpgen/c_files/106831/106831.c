/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106831
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_9;
    var_13 = var_10;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_14 = (max((max((arr_2 [i_0] [15]), ((min(var_1, (arr_1 [i_1])))))), var_10));

            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                arr_9 [i_0] [i_0] [1] = (min((arr_5 [i_0] [i_1] [i_2]), ((((arr_2 [18] [18]) % (arr_1 [i_0]))))));
                arr_10 [i_0] [i_0] [i_0] [4] = (max(((((arr_5 [i_1] [i_1] [i_0]) <= (arr_5 [i_0] [i_1] [i_2])))), var_10));
            }
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                var_15 += (arr_12 [i_0] [i_0] [i_0] [i_0]);
                var_16 &= (arr_3 [i_0] [i_1] [i_3]);
            }
            /* vectorizable */
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                arr_15 [22] [i_1] [i_4] = arr_3 [i_4] [i_4] [i_4];
                var_17 = (max(var_17, (28817 <= var_6)));
                var_18 = (arr_5 [12] [i_1] [i_1]);
            }
            for (int i_5 = 1; i_5 < 21;i_5 += 1)
            {
                var_19 = (arr_4 [i_0] [i_0]);
                arr_18 [i_0] [i_0] [i_1] = (arr_17 [i_0] [i_0] [i_0] [i_0]);
                arr_19 [i_0] [i_5] [i_0] = (((arr_17 [i_5] [i_5 + 1] [i_5] [i_5]) < ((var_1 >> (((arr_17 [i_5] [i_5 + 1] [i_5] [i_5]) - 21509))))));
                var_20 = (arr_4 [0] [i_1]);
                arr_20 [i_1] [15] = (((arr_4 [i_0] [i_0]) || (arr_5 [i_0] [i_0] [i_0])));
            }
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            var_21 = (max(var_21, (arr_0 [i_0] [i_6])));
            var_22 = (min(var_22, (arr_23 [i_0])));
            var_23 ^= 54;
        }
        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            var_24 = (arr_27 [i_0] [i_0]);
            arr_28 [i_7] = (arr_5 [i_0] [9] [i_0]);
        }
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {

            for (int i_9 = 0; i_9 < 23;i_9 += 1)
            {
                var_25 = (arr_4 [i_0] [i_0]);
                var_26 = (max(var_26, ((min((arr_32 [i_8]), -9223372036854775806)))));
                var_27 += (arr_2 [i_8] [i_8]);
            }
            for (int i_10 = 2; i_10 < 19;i_10 += 1)
            {
                var_28 = (min(var_28, 7455));
                var_29 = (arr_12 [i_0] [i_0] [i_8] [i_10]);
                var_30 ^= (max(var_3, (arr_12 [i_0] [i_0] [i_0] [12])));
                var_31 = ((((arr_14 [i_10 - 1] [i_10] [i_10] [i_10]) + (arr_14 [i_10 + 4] [i_10] [i_10 - 2] [i_10]))));
                var_32 ^= (min(212, (max((arr_13 [i_0] [i_8] [i_10 - 2]), (arr_13 [i_0] [i_0] [i_10 - 1])))));
            }

            /* vectorizable */
            for (int i_11 = 3; i_11 < 20;i_11 += 1)
            {
                var_33 = (max(var_33, (arr_8 [i_11 + 3])));
                arr_42 [i_11] [i_11 - 2] [i_11 + 1] = var_7;
            }
            for (int i_12 = 0; i_12 < 23;i_12 += 1)
            {
                var_34 = (arr_32 [i_12]);
                var_35 = arr_4 [i_8] [i_12];
                arr_45 [i_12] [i_0] &= (arr_38 [i_0] [i_0] [i_0]);
                var_36 = (arr_6 [3] [i_8] [i_12] [i_12]);
            }
            for (int i_13 = 2; i_13 < 22;i_13 += 1)
            {
                arr_50 [12] &= var_8;
                arr_51 [i_0] [i_0] = (((arr_17 [i_0] [i_0] [i_0] [10]) - ((min((arr_7 [i_0] [i_8] [i_0]), (arr_2 [i_0] [15]))))));
                var_37 = (max((min((arr_39 [15] [i_13 - 2]), (arr_39 [i_13 + 1] [i_13 + 1]))), (arr_39 [6] [i_13 - 1])));
            }
            arr_52 [i_0] [i_0] = (max((min(var_4, (arr_29 [i_0]))), ((max((min(201, 55)), (min(54, var_11)))))));
        }
        var_38 = (min(var_38, (arr_25 [12])));
    }

    for (int i_14 = 1; i_14 < 23;i_14 += 1)
    {
        arr_55 [i_14 - 1] = (((arr_53 [i_14]) % (arr_53 [i_14 - 1])));

        /* vectorizable */
        for (int i_15 = 1; i_15 < 23;i_15 += 1)
        {
            arr_59 [i_14] [i_14 + 1] [i_14 + 1] = (arr_57 [i_14 - 1] [i_14] [i_14 - 1]);
            arr_60 [i_15] [i_14] [i_14] = (arr_56 [i_14]);
            var_39 |= arr_57 [17] [i_15] [14];
            /* LoopNest 2 */
            for (int i_16 = 1; i_16 < 23;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 24;i_17 += 1)
                {
                    {

                        for (int i_18 = 0; i_18 < 24;i_18 += 1)
                        {
                            arr_67 [i_14] [i_14 + 1] [21] [0] [i_14] [i_14 + 1] &= (arr_53 [i_15]);
                            var_40 = (max(var_40, (arr_63 [i_15 - 1] [i_15 - 1])));
                        }
                        for (int i_19 = 0; i_19 < 24;i_19 += 1)
                        {
                            var_41 = (arr_64 [i_14 + 1] [i_14]);
                            var_42 = (arr_62 [i_14 - 1] [i_16] [i_16] [0]);
                            arr_72 [3] [i_14] [i_15] [3] [i_16] [1] [i_19] = 98;
                            arr_73 [i_14] [i_14] [7] [i_14] [7] [i_14] = (arr_62 [i_14] [i_15] [i_15] [i_17]);
                            var_43 = arr_53 [i_15];
                        }
                        for (int i_20 = 1; i_20 < 22;i_20 += 1)
                        {
                            arr_77 [i_14] [i_17] [i_14] [i_14] [i_14] |= (((arr_61 [i_16] [i_16 - 1] [i_16 - 1] [i_16 - 1]) + (arr_61 [i_14] [i_14 - 1] [i_16] [i_16])));
                            var_44 = (arr_56 [i_14 - 1]);
                            var_45 = (min(var_45, (arr_68 [i_17] [i_20 + 1] [i_17] [i_20])));
                            arr_78 [6] [i_20] [i_16 + 1] [i_20] [i_14] = var_11;
                            arr_79 [i_20] = var_7;
                        }
                        arr_80 [i_14] [i_15 - 1] [i_16] [i_17] [i_17] = (arr_71 [i_17] [i_17] [0] [i_15] [i_15] [1]);
                        var_46 = (arr_62 [i_14] [i_14] [i_16] [i_17]);
                    }
                }
            }
            arr_81 [i_15] [i_14] = (arr_74 [i_15] [16] [16] [16] [i_14 + 1] [i_14]);
        }
    }

    /* vectorizable */
    for (int i_21 = 2; i_21 < 13;i_21 += 1)
    {
        var_47 = (arr_12 [i_21 - 2] [i_21 - 2] [i_21 - 2] [i_21]);
        var_48 |= (arr_58 [i_21] [i_21 + 2]);
    }
    for (int i_22 = 2; i_22 < 12;i_22 += 1)
    {
        var_49 = (min(var_49, (arr_21 [i_22 - 1] [i_22 - 1] [i_22])));
        arr_87 [i_22 + 2] [i_22] = (((arr_21 [i_22] [i_22] [i_22]) <= (max(((max(193, (arr_26 [i_22] [i_22])))), (arr_71 [i_22 + 1] [i_22] [i_22 + 2] [i_22] [i_22] [i_22])))));
    }
    #pragma endscop
}
