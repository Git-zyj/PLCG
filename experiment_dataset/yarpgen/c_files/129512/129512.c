/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129512
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_15 = (((arr_0 [i_0]) <= (arr_0 [i_0])));
        var_16 += (((((arr_1 [i_0]) - (arr_2 [3] [i_0]))) <= (arr_2 [i_0] [i_0])));

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_17 = (min(var_17, ((((arr_3 [i_1]) <= ((((!(arr_1 [i_1]))))))))));
            var_18 = (arr_2 [0] [0]);
        }
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            arr_8 [i_0] = (arr_7 [4]);

            for (int i_3 = 3; i_3 < 12;i_3 += 1)
            {
                var_19 = (arr_6 [i_0]);
                var_20 += (arr_3 [i_0]);
                var_21 += (arr_9 [i_0] [i_0] [i_0]);
            }
        }
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            var_22 = (min(var_22, (arr_2 [i_0] [i_4])));
            var_23 = (arr_5 [i_0] [i_0] [i_4]);
        }
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            var_24 = (arr_0 [i_5]);
            var_25 = (((arr_0 [i_0]) >= (arr_0 [i_0])));
            var_26 = (arr_14 [i_0]);

            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                var_27 = (arr_15 [i_0] [i_0] [i_0]);
                var_28 = ((!(arr_17 [i_6] [i_5] [i_5] [i_0])));
                var_29 = ((-980127297 == (~-4457937129009980171)));
            }
            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                arr_24 [i_0] [i_5] [i_7] = (arr_10 [i_0] [i_0] [i_7]);
                var_30 = (arr_0 [i_0]);

                for (int i_8 = 0; i_8 < 13;i_8 += 1)
                {
                    var_31 = (arr_26 [i_0] [i_0] [i_8]);
                    var_32 = (arr_25 [12] [8] [i_7] [i_7] [i_8]);
                    var_33 = (arr_2 [i_0] [i_8]);
                    var_34 = 7130500396919446560;
                }
                for (int i_9 = 0; i_9 < 13;i_9 += 1)
                {
                    arr_31 [i_0] [i_5] [i_7] [i_7] [i_7] [4] = (arr_20 [i_0] [i_5]);
                    var_35 = (arr_2 [i_0] [i_5]);
                    var_36 *= (((!(arr_29 [i_5] [i_9]))));
                }
                arr_32 [i_0] [i_0] [i_7] [1] = -980127274;
            }
            for (int i_10 = 0; i_10 < 13;i_10 += 1)
            {
                arr_36 [i_10] [i_10] [i_10] [i_10] = arr_34 [i_5] [i_10];
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 13;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 13;i_12 += 1)
                    {
                        {
                            var_37 += (arr_2 [i_0] [i_0]);
                            arr_43 [i_5] = (arr_26 [i_11] [i_11] [i_11]);
                            arr_44 [i_11] [i_5] [i_10] [i_5] [i_0] [i_10] [i_5] = (arr_12 [i_0]);
                            var_38 = (arr_25 [i_10] [i_5] [i_10] [i_10] [i_11]);
                        }
                    }
                }
                arr_45 [i_0] [i_5] [i_10] = arr_28 [i_0] [i_5] [i_5] [i_10] [i_10];
            }
        }
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 20;i_13 += 1)
    {
        arr_48 [12] [i_13] = (arr_46 [i_13]);
        var_39 -= (((arr_46 [i_13]) >= (arr_47 [i_13])));

        for (int i_14 = 0; i_14 < 20;i_14 += 1)
        {

            for (int i_15 = 2; i_15 < 16;i_15 += 1)
            {
                var_40 = arr_50 [i_15 + 4] [i_15 + 1] [i_15 + 4];

                for (int i_16 = 0; i_16 < 20;i_16 += 1)
                {
                    var_41 = (arr_50 [i_14] [i_14] [i_16]);
                    var_42 -= (arr_54 [i_13] [i_14] [9] [i_13]);
                }
                var_43 = (arr_46 [i_14]);
            }
            for (int i_17 = 0; i_17 < 20;i_17 += 1)
            {
                arr_60 [i_13] [i_13] [i_13] |= (arr_57 [i_17] [i_14] [i_13] [i_13]);
                arr_61 [i_13] = (arr_55 [i_13] [i_14] [i_14]);
                var_44 -= (arr_51 [i_13] [i_14] [12]);
            }
            var_45 ^= (arr_54 [i_13] [i_14] [i_13] [i_14]);
        }
        for (int i_18 = 0; i_18 < 20;i_18 += 1) /* same iter space */
        {
            arr_65 [i_18] = (arr_52 [i_18] [i_18] [i_13]);
            arr_66 [i_13] = (arr_46 [i_13]);
        }
        for (int i_19 = 0; i_19 < 20;i_19 += 1) /* same iter space */
        {
            var_46 -= (arr_53 [i_13] [i_19]);
            var_47 ^= (arr_58 [i_13] [i_13]);
            var_48 = (max(var_48, -7507));
            var_49 = (arr_47 [i_13]);
        }
    }
    for (int i_20 = 0; i_20 < 12;i_20 += 1)
    {
        var_50 *= (min((((arr_2 [i_20] [i_20]) + (min((arr_17 [i_20] [i_20] [i_20] [i_20]), (arr_3 [i_20]))))), (((arr_59 [i_20]) - (min((arr_19 [i_20] [i_20] [i_20]), (arr_9 [i_20] [i_20] [i_20])))))));

        /* vectorizable */
        for (int i_21 = 0; i_21 < 12;i_21 += 1)
        {
            arr_78 [i_20] [i_21] = (arr_39 [i_20] [i_20] [i_20] [i_21] [i_20]);
            var_51 = (arr_57 [i_20] [i_21] [i_20] [i_21]);
        }
        /* vectorizable */
        for (int i_22 = 2; i_22 < 11;i_22 += 1)
        {
            var_52 = (arr_25 [i_20] [i_20] [i_20] [i_20] [i_22]);
            var_53 ^= (((arr_73 [i_20] [i_20]) && (arr_73 [i_20] [i_20])));
        }
        arr_83 [i_20] = (arr_63 [i_20]);
        var_54 = (-(arr_68 [i_20]));
    }
    var_55 = min(var_4, var_5);
    var_56 = (min(var_56, var_11));
    var_57 = (var_13 && var_5);
    #pragma endscop
}
