/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159923
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_19 = (min((arr_11 [1] [i_1 - 1] [i_2] [i_4]), 768));
                                var_20 = (arr_2 [i_1 - 2]);
                            }
                        }
                    }
                }
                var_21 = 1;
                var_22 = (max(var_22, ((((((arr_10 [i_0] [i_0] [4]) ? (arr_2 [i_0]) : (arr_5 [i_0]))))))));
                var_23 = (max(var_23, (arr_7 [i_0] [3])));
            }
        }
    }
    var_24 = var_5;
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 1;i_6 += 1)
        {
            {
                var_25 |= (max(var_8, (max((((arr_18 [5]) - var_7)), ((var_11 ? -36 : (arr_18 [i_6])))))));
                var_26 = (max(var_26, 2147483647));

                /* vectorizable */
                for (int i_7 = 2; i_7 < 22;i_7 += 1)
                {
                    var_27 = (((arr_22 [i_5]) % (arr_21 [i_6 - 1] [i_6] [i_6])));
                    /* LoopNest 2 */
                    for (int i_8 = 4; i_8 < 22;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 22;i_9 += 1)
                        {
                            {
                                var_28 = var_1;
                                var_29 = 1;
                            }
                        }
                    }
                    var_30 = (max(var_30, ((((arr_20 [i_5]) | var_4)))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 22;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 22;i_11 += 1)
        {
            {
                var_31 = (arr_28 [i_10] [i_11] [17] [12]);
                var_32 = (arr_31 [0] [1]);
            }
        }
    }

    /* vectorizable */
    for (int i_12 = 1; i_12 < 12;i_12 += 1)
    {
        var_33 |= ((var_12 ? 1 : (arr_13 [i_12 + 1] [i_12 + 2] [i_12 + 1] [i_12 + 1] [i_12])));
        var_34 |= (((arr_37 [i_12 + 1]) ? var_1 : (arr_37 [i_12 - 1])));
    }
    for (int i_13 = 0; i_13 < 24;i_13 += 1)
    {
        var_35 = (min(var_35, ((!((max((arr_41 [i_13]), (arr_41 [i_13]))))))));
        var_36 = (max(var_36, (!-29)));
        var_37 = (max(var_37, ((((((((arr_42 [i_13] [i_13]) && var_14)))) ? (arr_41 [1]) : (!1))))));
        var_38 = (((arr_40 [i_13]) < (((-8845600030036826224 != ((((arr_41 [i_13]) | (arr_41 [i_13])))))))));
    }
    #pragma endscop
}
