/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100741
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        arr_8 [i_0] [i_0] [i_0] [i_0] = (~5642126779167561555);
                        arr_9 [i_2] [i_2] = (!var_5);
                    }
                }
            }
        }
        arr_10 [i_0] [i_0] = ((!(arr_7 [i_0])));
    }
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 10;i_6 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        arr_21 [i_4] [i_4] [i_4] [i_4] [i_5] = -35845;
                        arr_22 [2] [i_5] = 35824;
                    }
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        var_17 = (!29691);
                        var_18 = (min(var_18, (((~(max(((~(arr_11 [i_4]))), ((max(29690, (arr_2 [i_4] [i_4] [i_4])))))))))));
                        var_19 = (min(-51, (max((arr_0 [i_6 - 1]), var_0))));

                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 11;i_9 += 1) /* same iter space */
                        {
                            var_20 = var_7;
                            var_21 &= ((!(-32767 - 1)));
                        }
                        for (int i_10 = 0; i_10 < 11;i_10 += 1) /* same iter space */
                        {
                            var_22 = (min(var_22, (max((max((arr_27 [i_6 - 1] [i_6] [i_6 - 1] [i_6] [i_6 - 2] [i_6]), ((max(35845, 29692))))), ((-((min(35, 1)))))))));
                            var_23 = min(((max((min(0, (arr_4 [i_4] [i_4]))), (!var_0)))), (max((min(224, 4753)), 255)));
                        }
                        for (int i_11 = 0; i_11 < 11;i_11 += 1) /* same iter space */
                        {
                            arr_33 [i_5] [i_5] [i_5] [9] [i_6] [i_5] [i_11] = (min((max(((-(arr_32 [i_4] [i_5] [6] [6] [6] [i_11] [6]))), var_8)), -224));
                            arr_34 [1] [i_5] [i_5] [1] [i_5] [i_5] = ((~((~((max(var_3, 3)))))));
                            arr_35 [i_4] [i_5] [i_6] [i_5] [i_8] [i_11] = (max(((max(var_3, var_4))), (max((min(-9223372036854775795, -1)), var_6))));
                        }
                        arr_36 [i_5] [i_5] [i_5] [i_6] [6] = ((!((max(var_16, ((max((arr_20 [i_4] [i_5] [i_4] [i_4]), 255))))))));
                    }
                    for (int i_12 = 2; i_12 < 9;i_12 += 1)
                    {
                        var_24 ^= ((min((((!(arr_3 [11] [i_5] [13]))), (max(16299091138815929657, var_4))))));
                        var_25 |= max(((-(max(var_3, (arr_37 [i_4] [i_6 - 2] [i_6 - 2]))))), (!var_0));
                    }
                    for (int i_13 = 0; i_13 < 11;i_13 += 1)
                    {
                        arr_42 [i_4] [i_5] [i_5] [i_13] = ((!((min(13479711992867481548, (arr_20 [i_6 + 1] [i_5] [i_6 - 1] [i_6 - 2]))))));
                        var_26 -= ((~(max((-2147483647 - 1), 1))));
                        arr_43 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = (min((min(211, (arr_14 [i_4] [i_13]))), (max((arr_14 [i_5] [i_13]), -193335744))));
                        var_27 ^= (max(((max(149953259, 227))), (min(var_9, var_6))));
                        arr_44 [i_4] [i_5] [i_4] [i_4] [i_4] = ((+((max((arr_29 [3] [i_6 - 2] [2] [i_6 - 2] [i_6]), (arr_29 [5] [i_6 - 2] [i_6 + 1] [i_6 - 2] [7]))))));
                    }
                    arr_45 [i_5] [i_6 - 2] = (max(((max((!var_14), var_14))), (max(((min((arr_12 [i_4]), -7463))), (max(0, var_10))))));

                    for (int i_14 = 3; i_14 < 10;i_14 += 1)
                    {
                        var_28 += (max((max(19, ((-(arr_16 [2]))))), (max(var_8, var_14))));
                        arr_49 [i_4] [i_5] [i_5] = (min(((-(arr_38 [i_6 - 2] [i_14 - 1] [i_14] [i_14 - 2] [0]))), ((max((min(24930, 16)), 1)))));
                        arr_50 [i_4] [i_5] [i_6] [i_14] = (min((min(var_1, 8589934591)), 13479711992867481548));
                        var_29 = (min(var_29, ((max((!4045099384531586271), (arr_38 [i_6] [i_6 - 1] [i_6 + 1] [i_6] [i_6]))))));
                    }
                    for (int i_15 = 0; i_15 < 11;i_15 += 1)
                    {
                        var_30 = (max((min(2147483635, (arr_3 [i_6] [i_6 + 1] [i_6]))), (min(var_11, (arr_3 [i_6] [i_6] [i_6])))));
                        arr_54 [i_4] [i_4] [i_6] [i_6] [i_15] [i_5] = (((-(max(0, var_1)))));
                    }
                    for (int i_16 = 1; i_16 < 9;i_16 += 1) /* same iter space */
                    {

                        for (int i_17 = 0; i_17 < 11;i_17 += 1)
                        {
                            arr_60 [i_4] [i_5] [i_4] [i_4] [6] [i_4] = (~9223372036854775796);
                            var_31 = (~-237);
                        }
                        var_32 = (max(var_32, (((~((min(var_3, 57740))))))));
                        arr_61 [i_5] [10] |= ((-((max(var_12, var_8)))));
                        var_33 ^= ((-((min(-11, (arr_51 [i_6 - 2] [i_6 - 1] [i_6 + 1] [i_16 - 1] [4] [4]))))));
                    }
                    /* vectorizable */
                    for (int i_18 = 1; i_18 < 9;i_18 += 1) /* same iter space */
                    {
                        var_34 = ((~(arr_51 [i_6 - 2] [i_6 - 2] [i_6] [i_18 + 1] [i_18 + 1] [0])));
                        arr_64 [i_4] [i_4] [i_5] [i_6] [i_18 - 1] [i_18] = var_3;
                    }
                    arr_65 [i_5] = (max((!var_14), (!0)));
                    arr_66 [i_4] [i_5] [6] [2] = (((-(arr_27 [3] [i_5] [i_5] [i_5] [i_5] [8]))));
                }
            }
        }
        var_35 = (min((max(((min(var_11, var_15))), (max(8, 549751619584)))), ((min((arr_48 [i_4] [i_4] [4] [i_4] [i_4] [1]), (!1))))));
        arr_67 [i_4] = (-2147483647 - 1);
    }
    for (int i_19 = 0; i_19 < 13;i_19 += 1)
    {
        var_36 = ((+(min((min((arr_3 [i_19] [8] [i_19]), (arr_5 [i_19] [i_19] [i_19]))), (arr_69 [i_19])))));
        arr_70 [i_19] = ((((!(arr_1 [i_19])))));
    }
    var_37 = (((~((min(var_3, var_4))))));
    #pragma endscop
}
