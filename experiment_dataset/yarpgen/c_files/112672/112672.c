/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112672
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_11;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] [i_0] &= (arr_1 [i_0]);

        /* vectorizable */
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            arr_6 [i_1 - 3] = ((~(arr_5 [i_1 - 2])));
            arr_7 [i_1 - 4] [10] = (((arr_3 [17] [i_1] [i_0]) >= var_4));
            var_20 = var_8;
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                arr_13 [i_2] [13] [i_2] [i_2] = arr_3 [i_0] [i_2] [i_2];
                arr_14 [i_0] [i_0] [i_0] &= (min((arr_10 [i_0]), (max((arr_4 [i_0]), (arr_5 [i_2])))));
            }
            for (int i_4 = 3; i_4 < 18;i_4 += 1)
            {
                var_21 = (-1715492389 || -1937012287);
                var_22 = (arr_9 [i_0] [18] [18]);
                arr_17 [i_4] [i_2] [i_0] = (arr_15 [i_2] [i_2] [i_4 - 2] [i_2]);
                arr_18 [i_2] [i_2] = (min(((min((var_4 - 4294967295), ((var_10 ? (arr_8 [i_0] [i_2] [i_2]) : var_6))))), (min((((arr_1 [i_0]) * (arr_16 [i_0] [i_2] [i_2]))), (arr_3 [19] [i_2] [2])))));
            }
            var_23 = (1 >> 1);
            var_24 = ((((max((var_0 <= var_5), (min((arr_9 [6] [6] [6]), (arr_12 [i_0] [i_0] [16] [i_2])))))) ^ var_7));
            var_25 = (((((((min((arr_11 [i_0] [7]), var_18))) && (((1 ? 4294967295 : var_5)))))) >= ((((arr_4 [11]) == (arr_9 [i_0] [i_2] [i_2]))))));
        }
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            arr_21 [19] [19] = 0;
            arr_22 [6] [i_0] = (max(1, (((((((arr_20 [i_5] [i_5] [i_0]) ? (arr_19 [17] [i_5]) : (arr_1 [4])))) && (arr_20 [i_0] [i_5] [i_5]))))));
            var_26 |= ((~(var_13 << 1)));
            arr_23 [i_0] = (((((arr_9 [i_0] [13] [i_5]) % (max(var_2, var_4)))) + (((((arr_0 [i_0] [i_5]) < ((max(var_6, var_16)))))))));
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            arr_26 [i_6] [i_0] [11] = ((!(arr_20 [i_0] [i_0] [i_6])));
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 0;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 20;i_9 += 1)
                    {
                        {
                            var_27 = (!1);
                            arr_34 [i_8] [i_6] [i_8] [i_6] [i_8] [i_8] = (arr_27 [i_6] [i_7]);
                        }
                    }
                }
            }
        }
    }
    for (int i_10 = 0; i_10 < 18;i_10 += 1) /* same iter space */
    {
        var_28 = (arr_5 [i_10]);
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 18;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 0;i_12 += 1)
            {
                for (int i_13 = 3; i_13 < 15;i_13 += 1)
                {
                    {
                        arr_46 [i_10] [i_11] [1] [i_13] = (((1 ^ 1) == (arr_31 [i_10] [10] [i_12] [13])));
                        var_29 = ((var_0 + (((arr_44 [10] [10] [i_12] [6]) % (arr_20 [i_12] [i_11] [1])))));
                        var_30 = ((-((((arr_45 [i_12 + 1] [i_12 + 1] [i_13] [i_13 - 1]) > (arr_45 [i_12 + 1] [i_12 + 1] [i_13 + 3] [i_13 - 1]))))));
                    }
                }
            }
        }
        var_31 = ((arr_45 [i_10] [i_10] [0] [i_10]) % (((9 << (((((arr_30 [i_10] [1] [i_10] [i_10]) + 93)) - 6))))));
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 18;i_14 += 1) /* same iter space */
    {

        for (int i_15 = 0; i_15 < 1;i_15 += 1)
        {
            arr_51 [i_14] [i_15] [i_14] = (((arr_15 [i_14] [i_15] [i_14] [i_15]) ? (arr_15 [1] [i_15] [i_15] [i_15]) : var_11));

            for (int i_16 = 0; i_16 < 18;i_16 += 1)
            {
                var_32 = (arr_37 [i_14] [i_16]);
                var_33 = (arr_24 [i_16]);
                var_34 = (arr_49 [i_15]);
                var_35 = (((arr_42 [i_16] [16] [4] [i_14]) > 1));
                var_36 = (arr_54 [i_15]);
            }
            var_37 |= ((arr_29 [i_14] [i_15]) ? (arr_29 [i_14] [i_15]) : (arr_29 [i_14] [i_14]));
            arr_55 [i_15] = ((arr_53 [i_14] [i_15] [i_15]) != var_13);
            /* LoopNest 2 */
            for (int i_17 = 0; i_17 < 18;i_17 += 1)
            {
                for (int i_18 = 1; i_18 < 15;i_18 += 1)
                {
                    {
                        arr_60 [i_15] [i_17] [i_15] [i_15] = (((var_13 >> (((arr_35 [i_17]) - 101)))));
                        var_38 = (((arr_44 [i_18 + 3] [i_18 + 3] [i_18 - 1] [i_18]) * 0));
                    }
                }
            }
        }
        for (int i_19 = 0; i_19 < 18;i_19 += 1)
        {
            arr_63 [i_14] [i_19] = 0;
            arr_64 [i_19] [i_19] = var_9;
            arr_65 [i_14] [i_14] = (((arr_45 [1] [i_19] [i_14] [i_14]) ? ((((arr_32 [i_19] [1] [i_14] [i_14] [i_14]) || (arr_58 [i_14] [i_19] [i_19] [i_14])))) : ((((arr_33 [i_14] [i_14]) != (arr_36 [i_19]))))));
        }
        for (int i_20 = 0; i_20 < 1;i_20 += 1)
        {
            var_39 = (((arr_33 [i_20] [i_14]) % var_15));
            arr_69 [6] = (arr_31 [1] [i_14] [i_14] [i_14]);
        }
        var_40 = (((arr_16 [i_14] [17] [i_14]) ? (arr_32 [1] [1] [4] [4] [1]) : (arr_35 [i_14])));

        for (int i_21 = 2; i_21 < 16;i_21 += 1)
        {
            var_41 = (4294967285 * 1);
            var_42 = var_18;
        }
        arr_72 [i_14] = ((1 ? var_1 : (arr_1 [i_14])));

        for (int i_22 = 4; i_22 < 15;i_22 += 1)
        {
            var_43 = (max(var_43, var_16));
            var_44 += var_4;
            var_45 = var_14;
        }
        for (int i_23 = 0; i_23 < 18;i_23 += 1)
        {
            var_46 = var_10;
            var_47 = (min(var_47, var_1));
            var_48 = var_6;

            for (int i_24 = 0; i_24 < 18;i_24 += 1)
            {
                arr_82 [i_23] [i_23] [i_24] [i_14] = var_17;
                arr_83 [i_14] [i_14] [i_14] = (((arr_11 [i_14] [i_14]) ^ ((((arr_58 [i_23] [i_23] [i_23] [i_23]) ^ var_16)))));
            }
        }
        for (int i_25 = 0; i_25 < 18;i_25 += 1)
        {
            var_49 = (~var_9);
            var_50 = (((arr_80 [i_14] [i_25] [i_14]) > (((arr_78 [i_14] [i_25] [2]) % 1))));
            arr_86 [i_14] [i_14] [i_25] = var_0;
            arr_87 [i_14] = (arr_52 [i_25]);
        }
        for (int i_26 = 0; i_26 < 18;i_26 += 1)
        {
            var_51 = (((arr_66 [2] [i_14] [i_26]) % (arr_25 [i_14])));
            var_52 = var_6;
        }
    }
    #pragma endscop
}
