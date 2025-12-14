/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134794
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = -1459055410;

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_18 = ((+(min((arr_0 [i_0] [i_0]), (arr_1 [i_0] [i_0])))));
        arr_2 [i_0] = (arr_1 [i_0] [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_2] [i_0] = (((-var_4 <= 3431429546) ? (max((arr_6 [i_1 - 1] [i_1 - 3] [i_1 - 3]), var_7)) : var_0));
                    arr_8 [i_0] [i_0] = 19782;
                    arr_9 [i_0] [i_0] [i_0] [i_2] = var_9;
                    var_19 = 0;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
    {
        arr_12 [i_3] [2] = (((((~45741) + 2147483647)) << (((((var_2 > (arr_6 [i_3] [i_3] [i_3])))) - 1))));
        arr_13 [i_3] [i_3] = ((~(arr_0 [i_3] [i_3])));

        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            arr_16 [i_3] [15] = (arr_15 [i_4] [1]);
            arr_17 [i_3] = var_10;
        }

        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            var_20 ^= ((-14008 ? (var_6 & var_8) : var_14));
            arr_21 [i_3] [i_5] |= var_5;
        }

        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            var_21 = ((((112 ? 0 : (arr_18 [i_3] [i_6]))) >= (arr_20 [i_3])));
            var_22 = (min(var_22, (((~(arr_19 [i_3] [i_3] [i_3]))))));
        }
        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            arr_27 [i_3] [i_7] [i_3] = (arr_14 [i_3] [i_7]);
            var_23 = 542923946;
            arr_28 [i_3] [i_7] [i_7] = (arr_6 [5] [5] [15]);
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 20;i_8 += 1)
            {
                for (int i_9 = 4; i_9 < 19;i_9 += 1)
                {
                    {

                        for (int i_10 = 2; i_10 < 17;i_10 += 1)
                        {
                            arr_36 [i_3] [i_3] [i_8] [i_8] [i_8] [i_8] = (arr_34 [i_9] [i_9 - 1] [i_9 - 3] [i_9 + 1] [i_9]);
                            var_24 -= (arr_23 [i_3]);
                            var_25 = ((~((-(arr_3 [i_3])))));
                        }
                        for (int i_11 = 0; i_11 < 20;i_11 += 1)
                        {
                            arr_40 [i_3] [i_7] [i_3] [i_3] [i_7] [i_8] [i_8] = arr_39 [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_9] [i_9] [i_8];
                            arr_41 [i_8] [i_3] [i_8] = (((arr_38 [i_8] [11]) ? var_9 : (arr_29 [i_8] [i_9 - 3] [i_9 - 3] [i_9])));
                            var_26 = (~3771906152481340599);
                        }
                        for (int i_12 = 0; i_12 < 20;i_12 += 1) /* same iter space */
                        {
                            var_27 = (min(var_27, ((((~3542496000) ? (arr_3 [i_3]) : (arr_15 [1] [1]))))));
                            arr_45 [i_7] [i_12] [i_8] [i_12] [1] = var_1;
                            arr_46 [1] [i_7] [8] [i_8] [i_7] [i_7] = (!3372187567356943266);
                        }
                        for (int i_13 = 0; i_13 < 20;i_13 += 1) /* same iter space */
                        {
                            arr_49 [i_3] [i_3] [i_8] [i_3] [i_3] = ((-1 >= (((arr_38 [i_9] [i_9 - 1]) & (arr_10 [i_3] [i_7])))));
                            var_28 = 60;
                        }
                        arr_50 [i_3] [i_8] [i_8] [15] = (((arr_35 [i_7] [i_8] [i_9 + 1] [i_9]) ? (arr_35 [i_3] [i_8] [i_9 - 1] [i_9]) : (arr_35 [i_3] [i_8] [i_9 - 3] [0])));
                        var_29 = 1;
                        var_30 = (arr_20 [i_9]);
                    }
                }
            }
        }
    }
    #pragma endscop
}
