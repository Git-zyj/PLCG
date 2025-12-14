/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103477
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        arr_2 [6] = ((((((max((arr_1 [i_0]), (arr_0 [i_0])))) <= 1)) ? ((~(arr_0 [i_0]))) : (((arr_1 [i_0]) ? ((max((arr_0 [0]), 1))) : ((((arr_0 [i_0]) || (arr_0 [i_0]))))))));
        var_13 = (min(((~(arr_0 [i_0]))), 1));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            arr_8 [1] [i_1] |= ((~(((arr_4 [i_1]) - (arr_7 [i_2])))));
            var_14 = (min(var_14, ((((arr_5 [i_2] [i_1]) == (!1))))));
            var_15 = (~var_5);
        }
        arr_9 [4] [3] = (~(arr_0 [4]));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                {

                    for (int i_5 = 1; i_5 < 9;i_5 += 1) /* same iter space */
                    {
                        arr_21 [i_1] [i_1] [i_1] &= (~(arr_14 [i_5 - 1] [i_3]));
                        arr_22 [i_1] [i_1] [i_1] [i_5] [i_1] = 1;
                        arr_23 [0] [8] [0] [i_5] = (arr_17 [i_5 - 1] [i_5 - 1] [i_5] [i_5]);
                        arr_24 [i_1] [i_3] [i_3] [i_5] = (arr_18 [i_1]);
                    }
                    for (int i_6 = 1; i_6 < 9;i_6 += 1) /* same iter space */
                    {
                        arr_27 [1] = (arr_17 [6] [i_1] [i_1] [i_1]);
                        arr_28 [i_1] [1] [i_4] [i_6 + 1] = ((~(arr_26 [i_6] [i_6] [9] [i_6 + 1])));
                    }
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        var_16 = (!(arr_11 [i_1] [i_4] [i_7]));
                        arr_32 [i_7] [i_4] [i_4] [i_3] [i_1] &= (arr_17 [2] [i_3] [i_4] [6]);
                        var_17 ^= ((var_8 > (arr_4 [i_7])));
                    }
                    var_18 = (min(var_18, (arr_6 [1])));
                    var_19 = (~var_7);
                    arr_33 [1] [i_3] = 1;
                }
            }
        }
        var_20 = (max(var_20, (arr_11 [i_1] [i_1] [i_1])));

        for (int i_8 = 0; i_8 < 10;i_8 += 1) /* same iter space */
        {
            var_21 = (((arr_34 [i_1]) <= var_0));
            var_22 &= (arr_12 [i_1] [i_1] [7]);
            arr_37 [i_1] [i_1] [i_8] &= (!var_1);
        }
        for (int i_9 = 0; i_9 < 10;i_9 += 1) /* same iter space */
        {
            var_23 = (arr_39 [i_9]);
            arr_40 [i_1] [i_9] [i_9] &= ((((!(arr_4 [0])))));
            var_24 = (4565259837667439493 & (arr_29 [i_1] [i_1] [i_9]));
            arr_41 [i_1] [9] = ((~(arr_3 [i_1])));
        }
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            arr_45 [i_1] = (arr_3 [i_1]);
            var_25 = (min(var_25, var_11));

            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                var_26 = ((((var_1 || (arr_44 [i_1] [i_1] [i_1])))) + (arr_12 [i_1] [i_10] [4]));
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 10;i_12 += 1)
                {
                    for (int i_13 = 2; i_13 < 8;i_13 += 1)
                    {
                        {
                            var_27 = (max(var_27, (((+(((arr_36 [9] [3]) ? 1 : 8648310611285162715)))))));
                            arr_54 [i_1] [9] [i_1] [i_1] [i_1] [i_1] [i_1] = (-(arr_26 [i_1] [i_1] [i_1] [i_1]));
                            var_28 *= (arr_51 [i_13 + 2] [i_13] [i_13 + 1]);
                        }
                    }
                }
                arr_55 [i_11] &= (~((77 ? (arr_6 [i_10]) : 7843)));
                var_29 *= ((var_10 > (arr_18 [i_1])));
            }
            for (int i_14 = 0; i_14 < 1;i_14 += 1)
            {
                arr_59 [i_1] [i_10] [i_14] [i_1] = 1;
                arr_60 [i_1] [i_10] [i_1] |= var_9;
                var_30 = (arr_47 [i_10] [1] [i_10] [2]);
            }
            for (int i_15 = 0; i_15 < 10;i_15 += 1)
            {
                arr_63 [i_1] = (arr_17 [i_1] [i_1] [i_15] [i_1]);
                /* LoopNest 2 */
                for (int i_16 = 2; i_16 < 9;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 10;i_17 += 1)
                    {
                        {
                            var_31 = (!(arr_68 [i_16] [i_1] [i_16 + 1] [i_16 - 1] [i_17]));
                            arr_70 [i_1] [i_1] [i_16] [i_15] [i_15] [1] = 4565259837667439497;
                        }
                    }
                }
                var_32 ^= ((50 || (arr_10 [1] [i_1] [i_1])));
                var_33 &= ((((0 <= (arr_4 [i_1])))));
                var_34 ^= ((((((arr_51 [i_1] [i_10] [i_15]) & var_9))) ? 1 : (~var_12)));
            }
        }
    }
    for (int i_18 = 2; i_18 < 21;i_18 += 1)
    {
        var_35 = ((((((((((arr_72 [i_18]) ? -5 : var_9)) + 2147483647)) << var_5))) ? -1 : (((arr_71 [i_18 + 2] [i_18 - 1]) | (arr_72 [i_18])))));
        var_36 = var_12;
        var_37 = (min(var_37, var_9));
    }
    var_38 = ((var_2 ? var_8 : var_5));
    #pragma endscop
}
