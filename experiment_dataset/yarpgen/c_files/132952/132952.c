/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132952
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((1 || var_15) && (((1 ? 1 : 7665770957705137042))))) || ((max(2147483646, var_7)))));
    var_20 ^= ((~(((((var_7 ? 7665770957705137054 : var_13))) ? var_3 : var_11))));

    for (int i_0 = 1; i_0 < 9;i_0 += 1) /* same iter space */
    {
        var_21 = var_7;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_13 [0] [i_1] [0] [i_3] [i_0] = (~-var_2);
                                var_22 = ((((!((min(-7665770957705137042, 15))))) ? (arr_9 [i_1] [i_0] [i_0]) : 16));
                                arr_14 [i_0 + 3] [i_1] [i_2] [11] [i_3] [i_0] = 7665770957705137035;
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_5 = 3; i_5 < 10;i_5 += 1)
                    {
                        var_23 = (!var_4);
                        var_24 = (((((var_11 ? (arr_5 [i_0] [0] [7] [i_0]) : var_7))) ? var_10 : (arr_16 [i_0] [i_1] [i_0])));
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_25 = (arr_15 [i_0 + 1] [i_0]);

                        /* vectorizable */
                        for (int i_7 = 3; i_7 < 9;i_7 += 1)
                        {
                            arr_21 [i_0] [i_0] [10] [10] [i_7] = (((arr_11 [10] [i_0 + 3] [i_2 - 3] [i_7 - 1] [10] [1] [i_7 + 3]) != (arr_11 [i_0 + 3] [i_0 + 1] [i_2 - 1] [i_7 + 4] [0] [7] [i_2])));
                            var_26 = (min(var_26, (((6968525690673681080 | (arr_11 [i_0] [i_0 + 3] [i_0] [i_0 + 3] [i_0] [i_0] [i_0]))))));
                            var_27 = var_17;
                        }
                    }
                    arr_22 [i_0] = (((min(6968525690673681102, (((arr_20 [i_0 + 4] [i_0] [i_1] [i_2] [i_0]) ? var_10 : 7665770957705137049)))) + ((((((361941487 ? var_7 : var_2))) ? ((min(7050, (arr_10 [3] [12] [11] [1] [i_1])))) : (!11808))))));
                    arr_23 [4] [i_0] [i_0] [i_0] = (1 | -3);
                }
            }
        }
    }
    for (int i_8 = 1; i_8 < 9;i_8 += 1) /* same iter space */
    {
        var_28 = (max(var_28, (((((((((arr_0 [i_8 + 1]) || 3)) ? -1723163198 : ((((arr_16 [i_8] [i_8] [8]) && var_3)))))) && -15)))));
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 13;i_9 += 1)
        {
            for (int i_10 = 2; i_10 < 12;i_10 += 1)
            {
                {
                    var_29 &= -32112;
                    arr_33 [i_8] [i_9] = (min((32113 % -6968525690673681053), (var_2 < -7665770957705137034)));
                }
            }
        }

        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            var_30 = ((-(((!((min(-39, var_15))))))));
            var_31 &= ((198 ? -32745 : 1));
        }
        /* vectorizable */
        for (int i_12 = 0; i_12 < 1;i_12 += 1)
        {
            /* LoopNest 3 */
            for (int i_13 = 0; i_13 < 13;i_13 += 1)
            {
                for (int i_14 = 1; i_14 < 10;i_14 += 1)
                {
                    for (int i_15 = 1; i_15 < 12;i_15 += 1)
                    {
                        {
                            var_32 ^= var_0;
                            arr_50 [i_8] [i_13] [6] [i_14] [i_15] &= (arr_35 [i_15 + 1] [i_14 - 1]);
                            var_33 = 0;
                            var_34 = ((!(((var_8 ? (arr_29 [i_8] [i_8] [11]) : var_4)))));
                        }
                    }
                }
            }
            var_35 = (arr_48 [i_8] [i_12] [3] [i_8] [i_8]);
            var_36 = (min(var_36, (arr_1 [i_8] [i_12])));
        }
    }
    var_37 = ((var_14 ? (min((max(var_2, 11652819918864969305)), 6968525690673681066)) : (((((var_5 ? var_5 : 3901933863))) ? var_6 : var_14))));
    #pragma endscop
}
