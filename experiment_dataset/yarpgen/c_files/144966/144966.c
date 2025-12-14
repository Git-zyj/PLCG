/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144966
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_7;

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_11 = (((((((var_0 ? 18723 : var_6))) ? (arr_2 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))) < (((arr_2 [i_0] [i_0]) ? var_0 : ((var_0 ? 15419884147559058659 : 15419884147559058663))))));
        arr_3 [i_0] = (((((15419884147559058640 ? (arr_1 [12] [i_0]) : 2575849268472806621))) ? ((((arr_1 [5] [5]) ? var_1 : (((-326646549 == (arr_0 [i_0] [i_0]))))))) : ((3026859926150492966 | (arr_0 [i_0] [i_0])))));
        arr_4 [i_0] = (min((178716189 && 0), (min(((3026859926150492952 ? var_8 : (arr_1 [i_0] [i_0]))), -9))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                {
                    var_12 = (max(var_12, var_0));
                    arr_11 [i_2] = (arr_10 [12] [i_2] [i_3] [i_3]);
                    arr_12 [i_2] = (arr_9 [i_2] [7] [i_2]);
                    arr_13 [i_1] [i_2] [i_3] = -1;
                }
            }
        }

        for (int i_4 = 3; i_4 < 14;i_4 += 1)
        {
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        {
                            arr_27 [i_4] [i_6] [11] [i_4] [i_4] [i_4] = -26;
                            arr_28 [i_1] [i_4] [i_4] [i_6] [i_7] = (((arr_0 [i_6] [i_4 - 2]) ? 10 : 13));
                            var_13 += ((1082370974 ? (arr_18 [i_4] [i_1] [i_5]) : var_1));
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_8 = 2; i_8 < 14;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 15;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 15;i_10 += 1)
                    {
                        {
                            var_14 = (((arr_33 [i_4 + 1] [i_4] [i_4] [i_4 + 1] [i_8 + 1]) ? 93 : (((arr_21 [i_4 - 1] [i_8]) ? 65519 : (arr_32 [i_10] [i_10] [2] [i_10])))));
                            arr_36 [2] [i_4] [i_8 - 1] [i_9] [i_10] = 511;
                        }
                    }
                }
            }
            var_15 = (var_9 ? 0 : (arr_2 [i_4 - 3] [i_4]));

            for (int i_11 = 0; i_11 < 15;i_11 += 1)
            {
                var_16 = (arr_22 [i_4] [i_4]);
                var_17 = (var_5 ? 1658021062 : (arr_5 [i_4 - 2] [i_4 + 1]));
            }
        }
    }
    var_18 = ((min(-17, var_0)));
    #pragma endscop
}
