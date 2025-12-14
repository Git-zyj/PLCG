/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126917
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 9;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {

                    for (int i_3 = 3; i_3 < 8;i_3 += 1)
                    {
                        arr_12 [i_0] [i_2] [i_2] |= (arr_3 [i_2]);
                        arr_13 [i_0] [i_1] [i_1] [1] = (((3859389816 ? 3859389816 : -107)));
                        arr_14 [i_0] [i_0] [i_2] = (arr_5 [i_0]);
                    }
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        arr_17 [i_2] [i_1] [i_1] = 115;

                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            arr_22 [i_0] [i_0] [1] [i_2] [i_4] [i_5] = ((var_7 * (45735 > -107)));
                            arr_23 [i_0 - 1] [1] [i_0] [i_0] [i_0] [i_0] = ((524294412465037617 ? (arr_9 [i_0] [i_2] [i_1] [i_0]) : var_7));
                        }
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            arr_26 [6] [i_1] [i_2] [i_2] [i_2] [i_4] [i_6] = 123;
                            arr_27 [i_0] [i_2] = var_11;
                        }
                    }
                    arr_28 [i_0] [i_0] = var_10;
                }
            }
        }
        arr_29 [i_0] = 3859389816;
        arr_30 [i_0] = (arr_5 [i_0]);
        arr_31 [1] = 2156;
    }
    /* vectorizable */
    for (int i_7 = 1; i_7 < 9;i_7 += 1) /* same iter space */
    {
        arr_34 [i_7] = (var_7 / var_7);
        arr_35 [i_7] = ((435577479 * (arr_3 [8])));
    }
    var_14 = ((((min(((-2156 ? var_12 : var_8)), var_13))) % (min(435577480, 957416130))));
    var_15 = 260046848;
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 17;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 17;i_9 += 1)
        {
            {
                arr_41 [i_9] [i_8] &= (arr_37 [i_8] [i_9]);
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 17;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 16;i_11 += 1)
                    {
                        {
                            arr_46 [i_8] [i_8] [8] &= var_13;

                            for (int i_12 = 0; i_12 < 1;i_12 += 1)
                            {
                                arr_50 [i_8] [15] [i_8] [i_9] [i_11] [i_11] [i_12] = ((((min(-13444, var_2))) == 435577479));
                                arr_51 [8] [i_11] [i_10] [12] [8] = (max(var_6, ((var_3 ? ((260046848 ? (arr_44 [i_8]) : (arr_40 [i_8] [i_8] [i_8]))) : var_0))));
                            }
                            arr_52 [1] [i_9] [i_10] [i_11] = 0;
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_13 = 0; i_13 < 17;i_13 += 1)
    {
        for (int i_14 = 1; i_14 < 15;i_14 += 1)
        {
            {
                arr_57 [i_13] = (((min((-1281638022 % 1), 4100644481050976884)) / ((max((((arr_45 [i_13] [i_13] [i_13] [i_14] [i_14 + 2]) / (arr_42 [i_14] [i_13]))), ((min(var_12, (arr_56 [i_13])))))))));
                arr_58 [i_13] = (max((arr_38 [i_13] [i_13]), (arr_42 [i_14 - 1] [4])));
            }
        }
    }
    #pragma endscop
}
