/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128395
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_15 = (min((arr_2 [i_0] [i_0 - 2] [i_0 - 2]), 1));
                var_16 ^= (((((var_2 / 9786000974829259052) ? (((min((arr_0 [i_1]), (arr_1 [i_0] [i_1]))))) : 3419548517)) != (((arr_0 [i_1]) ? var_12 : (((~(arr_1 [i_1] [i_1 + 2]))))))));
                var_17 += (arr_1 [i_0] [i_0]);
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                {
                    var_18 = var_3;

                    /* vectorizable */
                    for (int i_5 = 2; i_5 < 18;i_5 += 1)
                    {
                        var_19 -= var_8;
                        var_20 |= 3972008227;
                        arr_16 [i_2] [i_5] [i_2] = var_13;
                        arr_17 [i_5] = (arr_13 [i_2] [i_2]);
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        var_21 ^= 7936;
                        var_22 = (max(var_22, (((3972008227 ^ (arr_15 [i_2] [i_3] [i_4] [i_3]))))));
                        var_23 = -13874;
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_7 = 2; i_7 < 18;i_7 += 1) /* same iter space */
    {
        var_24 *= var_3;
        arr_23 [i_7] [i_7] = 11804748368697754603;
        /* LoopNest 2 */
        for (int i_8 = 1; i_8 < 20;i_8 += 1)
        {
            for (int i_9 = 3; i_9 < 20;i_9 += 1)
            {
                {
                    var_25 = (max(var_25, ((((arr_18 [i_7 + 1]) & 13873)))));

                    for (int i_10 = 0; i_10 < 21;i_10 += 1)
                    {
                        var_26 ^= (arr_14 [i_9] [i_8] [i_7]);
                        var_27 = 778433379;
                        var_28 = (var_3 ^ var_1);
                    }
                }
            }
        }
        arr_31 [i_7] [i_7] = var_4;
        var_29 += (((arr_29 [i_7 + 2] [20]) || 3516533917));
    }
    for (int i_11 = 2; i_11 < 18;i_11 += 1) /* same iter space */
    {

        for (int i_12 = 2; i_12 < 19;i_12 += 1)
        {
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 21;i_13 += 1)
            {
                for (int i_14 = 2; i_14 < 18;i_14 += 1)
                {
                    {

                        for (int i_15 = 0; i_15 < 21;i_15 += 1)
                        {
                            var_30 = var_7;
                            arr_43 [i_12] [i_12] = 9223372036854775807;
                            var_31 *= (max((((1254409543339838421 ? var_2 : (arr_13 [i_12] [i_12])))), (arr_21 [i_11])));
                            arr_44 [i_11] [i_11] [i_12] [i_13] [i_12] [i_13] = (((~(63 || 18116931048199604406))));
                        }
                        for (int i_16 = 0; i_16 < 21;i_16 += 1)
                        {
                            var_32 = (((!var_3) & (((-9223372036854775807 - 1) | (arr_37 [i_12 + 1] [i_11 - 1])))));
                            arr_47 [i_12] [i_12] = var_10;
                            var_33 = (arr_21 [i_11]);
                        }
                        arr_48 [i_12] [i_13] [i_12] [i_12] = (max((((var_7 > (arr_15 [i_12] [i_12 + 2] [i_12] [i_12])))), (arr_15 [i_12] [i_12 - 1] [i_11] [i_12])));
                    }
                }
            }
            var_34 = (arr_24 [i_12 - 1] [i_12 - 1]);
            var_35 = (min(var_35, (~3024718844)));
        }

        for (int i_17 = 0; i_17 < 21;i_17 += 1)
        {
            var_36 += (arr_10 [i_11] [i_11] [i_11 + 3]);
            var_37 |= -8231948933036583827;
        }
        for (int i_18 = 0; i_18 < 21;i_18 += 1)
        {
            arr_53 [i_11] [i_11] [i_11] = min(299005226, (arr_24 [i_11] [i_11 + 1]));
            arr_54 [1] [i_11] [i_11] = 8529752710406520717;
            arr_55 [i_11] = (22108 % 299005226);
            var_38 = ((((((arr_26 [i_11 + 3]) >= var_2))) % (arr_25 [8] [i_11 + 3] [i_11])));
            /* LoopNest 2 */
            for (int i_19 = 0; i_19 < 21;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 21;i_20 += 1)
                {
                    {
                        var_39 = (max((((var_8 ^ var_2) % (max(8529752710406520710, -550147358)))), ((var_8 ^ ((min(var_6, var_5)))))));
                        var_40 = (max((((arr_20 [i_11 + 2]) > var_13)), ((!(-32767 - 1)))));
                        var_41 = (max(var_41, ((((var_11 ? (arr_59 [i_11 - 2] [i_11 + 1] [i_11 + 2] [i_11] [i_11 + 2] [i_11 - 2]) : (arr_59 [i_11 - 2] [i_11 - 2] [i_11] [2] [i_11 + 2] [i_11])))))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_21 = 2; i_21 < 18;i_21 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_22 = 0; i_22 < 21;i_22 += 1)
        {
            for (int i_23 = 2; i_23 < 19;i_23 += 1)
            {
                {

                    for (int i_24 = 2; i_24 < 18;i_24 += 1)
                    {
                        arr_74 [i_21] [i_22] [i_22] [i_24] = 1;
                        var_42 = (max(var_42, (arr_51 [i_21 - 1] [i_21 + 1])));
                        arr_75 [i_24] [i_22] = (arr_14 [i_21] [i_21] [i_21]);
                        arr_76 [i_22] |= ((!(((-106 ^ (arr_49 [i_21] [i_21] [i_23 + 2]))))));
                    }
                    arr_77 [i_22] = (((arr_60 [i_21] [i_22] [i_21] [i_21]) ? (arr_60 [i_21] [i_21] [i_21] [i_22]) : (arr_60 [i_23 + 1] [i_23 + 2] [i_22] [i_21 - 2])));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_25 = 3; i_25 < 18;i_25 += 1)
        {
            for (int i_26 = 1; i_26 < 19;i_26 += 1)
            {
                {
                    var_43 = (arr_25 [i_21] [i_25 - 1] [i_25 - 1]);
                    arr_82 [i_21] [i_21] [i_21] [i_21] = (arr_67 [i_21 - 2] [i_26 - 1]);
                    /* LoopNest 2 */
                    for (int i_27 = 1; i_27 < 20;i_27 += 1)
                    {
                        for (int i_28 = 2; i_28 < 20;i_28 += 1)
                        {
                            {
                                var_44 *= ((!(arr_7 [i_21 - 1])));
                                var_45 = var_5;
                                var_46 = var_4;
                            }
                        }
                    }
                    arr_89 [i_21] [i_21] [i_21] [i_26 + 2] = var_8;
                    var_47 = (((arr_18 [i_21 + 3]) ^ 4183680475));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_29 = 2; i_29 < 18;i_29 += 1) /* same iter space */
    {
        var_48 = (max(var_48, ((-11051 + (arr_90 [i_29 - 1])))));
        var_49 = (((arr_9 [i_29 + 2] [i_29 + 2]) ? (arr_9 [i_29 + 2] [i_29]) : (arr_9 [i_29 + 1] [i_29 + 1])));
    }
    var_50 = ((var_7 ? var_6 : (-var_9 ^ 3774779650)));
    #pragma endscop
}
