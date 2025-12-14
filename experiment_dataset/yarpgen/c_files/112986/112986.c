/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112986
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        arr_9 [i_0] [i_1] [i_0] [8] [i_2] &= (arr_5 [i_0]);
                        var_17 = ((-1 ? 1200148588 : 199));
                        arr_10 [i_1] [i_1] [i_2] = (arr_4 [i_1] [i_1]);
                    }
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        arr_13 [6] [i_1 - 1] [i_1] [i_4] = (var_4 & 1764585542);
                        var_18 = (i_1 % 2 == zero) ? ((((arr_2 [i_1]) << (((arr_5 [i_1]) - 396630908))))) : ((((arr_2 [i_1]) << (((((arr_5 [i_1]) - 396630908)) + 1505739971)))));
                    }
                    arr_14 [i_0] [i_1 - 1] [i_0] [i_0] |= var_2;
                }
            }
        }
        var_19 = (max(var_19, (((((((arr_2 [i_0]) ? var_0 : var_9))) || -81)))));
        var_20 = (arr_4 [i_0] [i_0]);
        arr_15 [i_0] = -723885895;
        var_21 += (var_0 >= 47081);
    }
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        arr_18 [i_5] = var_5;
        arr_19 [i_5] [i_5] = ((!(((((max((-127 - 1), 15))) ? 1 : ((3 ^ (arr_16 [i_5]))))))));
        var_22 = (max(var_22, (((!(~var_16))))));
    }
    for (int i_6 = 0; i_6 < 10;i_6 += 1)
    {
        arr_22 [i_6] = (arr_7 [2] [i_6] [1]);
        arr_23 [i_6] = (((47053 | (((arr_11 [i_6] [i_6] [i_6]) + -60)))));
    }
    for (int i_7 = 1; i_7 < 12;i_7 += 1)
    {
        var_23 = (arr_24 [i_7 + 3] [i_7]);

        /* vectorizable */
        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                for (int i_10 = 3; i_10 < 14;i_10 += 1)
                {
                    {
                        arr_36 [i_7] [11] = (arr_26 [i_10 - 3]);
                        arr_37 [i_7] [8] [8] [i_10] [i_10] = -47056;
                    }
                }
            }
            arr_38 [i_7] = (18454 % -32755);
        }
        /* vectorizable */
        for (int i_11 = 1; i_11 < 11;i_11 += 1)
        {
            var_24 = 121;
            arr_43 [i_7] = 99;
        }
    }

    for (int i_12 = 0; i_12 < 20;i_12 += 1)
    {
        /* LoopNest 3 */
        for (int i_13 = 0; i_13 < 20;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 1;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 20;i_15 += 1)
                {
                    {
                        arr_52 [i_12] [i_13] [i_12] [13] [7] = (arr_44 [i_12] [i_13]);
                        arr_53 [i_12] [i_12] [i_13] [i_14] [i_12] [12] = ((var_3 ^ (((arr_49 [i_12] [i_12] [i_14] [4]) ^ (arr_48 [i_13] [i_12])))));
                    }
                }
            }
        }

        for (int i_16 = 0; i_16 < 20;i_16 += 1)
        {
            /* LoopNest 3 */
            for (int i_17 = 0; i_17 < 20;i_17 += 1)
            {
                for (int i_18 = 3; i_18 < 18;i_18 += 1)
                {
                    for (int i_19 = 2; i_19 < 19;i_19 += 1)
                    {
                        {
                            var_25 = (max(var_25, (3706202081742217694 / 47076)));
                            var_26 = (-1819243510 ? ((max((arr_60 [i_19 - 2] [i_19 + 1] [i_19]), var_15))) : (arr_63 [i_12] [i_17] [i_16]));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_20 = 0; i_20 < 20;i_20 += 1)
            {
                for (int i_21 = 2; i_21 < 19;i_21 += 1)
                {
                    {
                        var_27 = 47081;
                        var_28 ^= (max(32122, 1));
                        var_29 -= ((((((arr_60 [i_21] [1] [i_21]) * ((18483 ? 7651843226605478880 : 53))))) || (((arr_71 [i_12] [i_12] [i_12] [i_12]) && 8397))));
                    }
                }
            }
            var_30 = ((1 ? (arr_63 [16] [17] [11]) : -1939568647));
        }
        for (int i_22 = 0; i_22 < 20;i_22 += 1) /* same iter space */
        {
            arr_75 [i_12] [i_12] = ((((((-2147483647 - 1) + 2147483647)) + 2147483647)) << (((arr_48 [i_12] [i_12]) - 6561133845080384951)));
            var_31 = ((44993 ? 47104 : 18459));
        }
        /* vectorizable */
        for (int i_23 = 0; i_23 < 20;i_23 += 1) /* same iter space */
        {
            arr_79 [i_12] = (((((arr_70 [i_12] [i_12] [i_12] [i_12]) || var_4)) ? 0 : (arr_65 [i_12] [i_12])));
            arr_80 [i_12] [i_12] = (arr_50 [6] [i_23] [i_12] [i_23] [6]);
        }
        arr_81 [i_12] [i_12] = (arr_71 [i_12] [i_12] [i_12] [i_12]);
        var_32 = (max(var_32, (arr_67 [i_12])));
    }
    #pragma endscop
}
