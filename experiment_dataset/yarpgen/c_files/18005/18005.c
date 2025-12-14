/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18005
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, -var_1));
    var_11 = (((-7780705208608251536 + 9223372036854775807) >> (6992644549707243162 - 6992644549707243137)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = ((arr_0 [i_0]) / (arr_2 [i_0]));

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            arr_8 [i_0] [i_0] = var_6;
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_16 [i_0] [i_0] = (((var_8 != (arr_15 [i_3] [i_0] [i_2] [i_0] [i_0]))));

                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            var_12 = -6992644549707243152;
                            arr_19 [4] [i_0] [i_0] [i_3] [i_4] [0] = 5490209094893807415;
                            var_13 = (min(var_13, (((~(arr_5 [i_2 - 1] [i_2 - 1] [i_2 - 1]))))));
                        }

                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            var_14 = (max(var_14, ((((((-(arr_4 [i_0] [i_1])))) + (arr_5 [i_3] [i_1] [i_0]))))));
                            arr_23 [i_3] [i_0] [i_0] = (((((arr_7 [10]) & (arr_17 [7] [i_1] [i_1] [i_0]))) ^ var_3));
                            arr_24 [i_1] [i_1] [i_0] [i_0] = ((((var_2 / (arr_22 [i_0] [i_1] [i_2] [i_3] [i_5]))) ^ var_0));
                            arr_25 [i_0] [i_1] [i_0] [i_5] = (((arr_22 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2] [1]) >= (arr_22 [i_2 - 1] [i_3] [i_5] [i_5] [i_5])));
                        }
                        for (int i_6 = 4; i_6 < 10;i_6 += 1)
                        {
                            var_15 = (1 > 11454099524002308464);
                            var_16 = (min(var_16, 1));
                            arr_29 [i_2] [i_1] [i_0] [i_3] = (((12956534978815744176 & 1) >> 1));
                        }
                        arr_30 [i_0] [i_0] [9] [4] = -var_6;
                    }
                }
            }
            arr_31 [i_1] [i_0] [i_0] = (arr_7 [i_0]);
        }
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            var_17 = (arr_4 [i_0] [i_0]);
            arr_34 [i_0] = (+-820005348);
            arr_35 [i_0] [i_7] = ((var_7 / -6905053526527021315) % -3235);
            var_18 = (max(var_18, (arr_1 [i_0])));
        }
        arr_36 [i_0] = (11454099524002308476 == 1492499781);
        /* LoopNest 2 */
        for (int i_8 = 2; i_8 < 10;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 10;i_9 += 1)
            {
                {
                    arr_43 [i_0] [i_8 - 2] [i_0] = ((((((arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [3]) ? var_8 : (arr_21 [i_0] [i_0] [i_0] [i_8] [i_8] [i_0])))) ? (arr_40 [i_9 - 1] [i_0]) : 549755809792));
                    arr_44 [5] [i_8 + 1] [4] [i_0] = (((arr_26 [i_8 - 2] [i_8 - 2] [i_9 - 1] [i_9 + 1]) != (arr_26 [i_8 - 1] [i_8 - 2] [i_9 - 1] [i_9 - 1])));
                    arr_45 [i_0] [i_0] [i_9] = ((!(arr_41 [i_0] [i_9 - 1])));
                }
            }
        }
    }
    var_19 = var_2;
    #pragma endscop
}
