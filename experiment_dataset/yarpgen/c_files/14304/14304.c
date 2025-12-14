/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14304
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_15;
    var_18 = max(((max(37, 734))), ((var_4 ? ((8017814131136997583 ? var_3 : 64802)) : (max(var_1, var_12)))));

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_19 = (((arr_4 [i_0 - 2] [i_0 + 1] [i_0 - 2]) ? (arr_4 [i_0 - 1] [i_0 - 2] [i_0 - 2]) : (arr_4 [i_0 - 2] [i_0 - 1] [i_0 + 2])));
            arr_6 [i_0] = (arr_1 [i_0 - 3]);
            var_20 = (((~var_4) <= var_11));
            arr_7 [i_0] [i_0] [i_0] = (arr_1 [i_0 + 2]);
        }
        var_21 = (min(var_21, ((((arr_0 [i_0 - 3] [i_0 - 1]) >= var_10)))));
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            var_22 = var_5;
            /* LoopNest 2 */
            for (int i_4 = 2; i_4 < 14;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    {

                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            var_23 = (min(var_23, 8160));
                            var_24 = (min(var_24, (arr_18 [i_2] [i_3] [10] [i_5] [12] [i_6])));
                            var_25 = (~((max(-87, var_16))));
                            arr_22 [9] [i_2] [i_4 - 1] [9] [i_6] = (((arr_0 [i_2] [i_6]) / ((max(9633694927003300322, 1)))));
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            var_26 = -125;
                            var_27 = (((arr_23 [i_2] [i_4 + 2] [i_7] [i_4 + 2]) ? 721 : 1205464834));
                        }
                        var_28 = var_3;
                    }
                }
            }
            arr_25 [i_2] = (max(((var_5 ? (arr_0 [i_2] [i_3]) : 41829)), ((5230 ? 734 : 141))));

            for (int i_8 = 0; i_8 < 18;i_8 += 1)
            {

                for (int i_9 = 1; i_9 < 17;i_9 += 1) /* same iter space */
                {
                    var_29 = max(((max(0, 86))), var_15);
                    var_30 = (((((arr_15 [i_3] [i_2] [i_9 - 1] [i_9 - 1]) ? 147 : -var_1)) >= ((max((max((arr_11 [i_2] [i_3]), (arr_5 [i_2]))), 12)))));
                    var_31 = (((max(9972, 0))) ? ((9954 ? 225 : (((arr_9 [i_2] [i_2]) ? (arr_28 [6] [6] [i_9]) : (arr_24 [17] [17] [9] [i_3] [1] [i_2]))))) : -39892);
                    arr_30 [i_2] [11] [i_2] [i_8] [i_2] = ((~(((arr_14 [i_2] [i_3] [i_3] [i_9]) ? (arr_9 [0] [i_8]) : var_14))));
                }
                for (int i_10 = 1; i_10 < 17;i_10 += 1) /* same iter space */
                {
                    var_32 = (max(-9951, 3142587468));
                    arr_34 [i_2] [i_3] [i_8] [i_2] = ((((((var_12 ? -87 : (arr_26 [i_3] [i_2] [11]))))) > var_6));
                }
                arr_35 [i_2] [i_2] = var_16;
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 18;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 18;i_12 += 1)
                    {
                        {
                            arr_40 [3] [i_2] [3] [i_11] [i_3] [i_8] = ((((((max((arr_16 [i_2] [12] [i_2] [i_2] [12] [i_2]), (arr_4 [i_2] [i_11] [i_11]))) | ((-87 ? 10807018453360814504 : 23711))))) ? 11504928418385197484 : (~65535)));
                            var_33 = (max((((-2147483647 - 1) + var_15)), ((-9972 ? (arr_13 [i_2] [i_2] [i_2] [i_2]) : (arr_29 [i_2] [i_2] [7] [i_2])))));
                            arr_41 [i_2] [i_11] [i_11] [i_11] [i_2] = ((((((((227343351 ? 2577752506 : 2019601130900251020)) >= (((-20 ? 5234 : 11))))))) >= ((var_16 ? 9509312253101543589 : ((max(var_3, (arr_26 [i_2] [i_2] [i_2]))))))));
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 18;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 1;i_14 += 1)
            {
                {
                    arr_47 [i_2] [i_2] [i_13] [i_13] = (arr_31 [i_2] [i_13]);
                    arr_48 [i_2] [i_2] [i_2] = (max((arr_27 [i_2] [i_2] [i_2]), ((max((arr_33 [i_2] [i_2] [i_2] [i_2]), (arr_14 [i_2] [i_13] [i_13] [i_2]))))));
                }
            }
        }
    }
    for (int i_15 = 2; i_15 < 18;i_15 += 1)
    {
        var_34 = (((arr_3 [6] [i_15]) ? (arr_5 [i_15 + 1]) : var_6));
        var_35 = (arr_4 [i_15 + 1] [i_15 - 2] [i_15 + 1]);
    }
    #pragma endscop
}
