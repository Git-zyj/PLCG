/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11927
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_17 = -28134;
        var_18 = min((((28124 < (~var_5)))), ((~(min(var_11, (arr_3 [i_0]))))));
        arr_4 [16] &= 88;
        arr_5 [i_0] = (-var_10 % -var_2);
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {
        arr_9 [i_1] = (~(((min(var_9, var_15)))));
        var_19 &= (min((max(-89, 88)), -82));
    }

    for (int i_2 = 0; i_2 < 21;i_2 += 1) /* same iter space */
    {
        var_20 &= ((~(((arr_2 [i_2]) - 28141))));

        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            arr_15 [i_2] = ((-((((~-58) < 4294967295)))));
            var_21 = (~3679462018);
            arr_16 [i_2] [i_3] = 63;
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    {
                        var_22 ^= (min((((134 | (((0 < (arr_2 [i_2]))))))), (((((arr_0 [i_2]) ^ 360173250)) >> (min(1, 4703930390049589160))))));
                        arr_22 [i_2] [i_3] [i_4] [i_4 - 1] [i_4] = (((((arr_7 [i_3] [i_5]) * var_8))));
                        var_23 &= (var_5 && 134);
                        arr_23 [i_4] [i_3] [i_4 - 1] [i_3] [i_4] [i_5] = (min(((min(2047, var_7))), 113));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_6 = 4; i_6 < 20;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    {

                        for (int i_8 = 0; i_8 < 21;i_8 += 1)
                        {
                            arr_32 [i_2] [i_2] [i_2] [i_7] [i_2] = ((((min(32779, 121))) < (0 % -89)));
                            var_24 ^= -var_8;
                            arr_33 [i_6] [i_7] [i_6] [i_6] [i_6] [i_6] [i_6] = (~28133);
                        }
                        var_25 ^= (((max((!var_9), 3919030274230802619)) + (((((arr_24 [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6 + 1]) == 3919030274230802619))))));
                    }
                }
            }
        }
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            var_26 = (max(1713998020, 1));
            var_27 &= 9689490;
        }
        /* vectorizable */
        for (int i_10 = 3; i_10 < 17;i_10 += 1)
        {
            var_28 = ((((arr_18 [i_2] [i_2] [i_2] [i_2]) == var_12)));

            for (int i_11 = 0; i_11 < 21;i_11 += 1)
            {
                var_29 ^= ((!(arr_6 [i_10 + 1])));
                arr_42 [i_2] [i_2] [i_10] = ((-(arr_21 [i_11] [i_10] [i_11] [i_10 + 3])));
            }
            for (int i_12 = 0; i_12 < 21;i_12 += 1)
            {
                arr_45 [i_10] [i_10 - 2] [i_2] [i_10] = (!79);
                arr_46 [i_2] [i_10] = var_8;
                var_30 &= ((-(arr_20 [i_10 + 2] [i_12])));
                arr_47 [i_10] [i_10] [i_12] = ((3919030274230802619 != (arr_29 [i_2] [i_2] [i_10 + 3])));
            }
        }
        var_31 ^= (min(((((~(arr_26 [i_2] [i_2] [i_2]))))), ((3919030274230802606 | (arr_18 [i_2] [i_2] [i_2] [i_2])))));
        var_32 ^= (min(((var_5 + (arr_28 [i_2] [i_2] [i_2]))), ((max(2147483642, -9689511)))));
    }
    for (int i_13 = 0; i_13 < 21;i_13 += 1) /* same iter space */
    {
        var_33 ^= (((min(var_8, var_7))));
        arr_51 [i_13] = ((1 | (var_11 >= var_7)));
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 17;i_14 += 1)
    {
        var_34 ^= (arr_29 [i_14] [i_14] [i_14]);
        var_35 ^= (arr_44 [i_14] [i_14] [i_14] [i_14]);
        var_36 &= (1 == -4294967295);
        /* LoopNest 3 */
        for (int i_15 = 4; i_15 < 16;i_15 += 1)
        {
            for (int i_16 = 3; i_16 < 14;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 17;i_17 += 1)
                {
                    {
                        var_37 = (arr_19 [i_14] [i_15]);

                        for (int i_18 = 1; i_18 < 13;i_18 += 1)
                        {
                            arr_62 [i_14] [i_14] [i_16 + 3] [i_14] [6] = (~1);
                            var_38 = (!-958598469);
                        }
                        var_39 = (248 + 1);

                        for (int i_19 = 0; i_19 < 17;i_19 += 1)
                        {
                            arr_67 [i_14] [i_15 - 3] [i_19] [i_17] [10] &= (arr_34 [i_19] [i_16 - 3] [i_19]);
                            var_40 ^= ((36520 - ((((arr_27 [i_19] [i_17] [i_14]) < var_7)))));
                            var_41 ^= ((~(!14527713799478748996)));
                        }
                        for (int i_20 = 0; i_20 < 17;i_20 += 1)
                        {
                            var_42 = ((-(arr_66 [i_15 - 2] [i_15 - 1] [i_15] [i_16 + 2] [i_14])));
                            var_43 = ((-(((var_1 > (arr_44 [i_16 - 2] [i_16 - 2] [i_16 + 1] [i_17]))))));
                        }
                        var_44 = (~134);
                    }
                }
            }
        }
    }
    for (int i_21 = 0; i_21 < 20;i_21 += 1)
    {
        var_45 ^= (~1);
        /* LoopNest 3 */
        for (int i_22 = 0; i_22 < 1;i_22 += 1)
        {
            for (int i_23 = 3; i_23 < 18;i_23 += 1)
            {
                for (int i_24 = 0; i_24 < 20;i_24 += 1)
                {
                    {
                        arr_82 [i_21] [i_22] [i_22] [i_22] &= (max((!var_13), (!var_15)));
                        var_46 = (~3115621709);
                    }
                }
            }
        }
        var_47 &= ((-1 | (min((arr_81 [i_21] [16] [i_21] [i_21]), var_12))));
        arr_83 [i_21] [i_21] = ((max((arr_81 [i_21] [i_21] [i_21] [i_21]), (arr_28 [i_21] [i_21] [i_21]))));
    }
    var_48 = -var_7;
    var_49 ^= var_11;
    #pragma endscop
}
