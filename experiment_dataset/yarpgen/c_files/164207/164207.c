/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164207
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_7;
    var_15 = (min(var_15, -1506044278));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_12 [i_1] [i_2] = (arr_7 [i_1]);
                        var_16 += (arr_8 [i_0] [i_0] [i_0]);
                        var_17 = var_8;
                    }
                }
            }
        }
        arr_13 [i_0] [i_0] = (var_10 == -21);
        arr_14 [i_0] = 1506044293;
        var_18 = arr_10 [i_0] [i_0] [i_0];
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_19 = (((((arr_3 [1] [i_4]) + 9223372036854775807)) >> (((arr_3 [8] [8]) - 2121765878411590047))));

        for (int i_5 = 1; i_5 < 8;i_5 += 1)
        {
            arr_22 [i_4] [i_5] = (arr_1 [i_4] [i_4]);

            for (int i_6 = 4; i_6 < 9;i_6 += 1)
            {
                arr_25 [i_5] [i_5] [i_5 + 1] [i_5] = var_13;
                arr_26 [i_4] [i_5] [i_5] [i_4] = (arr_0 [i_4] [i_5 + 3]);
            }

            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                var_20 *= var_10;
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {
                        {
                            var_21 = (arr_9 [i_7] [i_7]);
                            arr_33 [i_9] [i_5] [i_7] [i_5] [i_4] = (((arr_8 [i_4] [i_5] [i_7]) % (arr_8 [i_4] [i_5] [i_7])));
                        }
                    }
                }
            }
            arr_34 [10] [i_5] [i_5 + 3] &= (-1506044278 || var_3);
        }
        arr_35 [i_4] = var_8;
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 11;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 11;i_11 += 1)
            {
                {

                    for (int i_12 = 2; i_12 < 10;i_12 += 1)
                    {
                        arr_44 [i_4] [i_4] [i_4] [10] [i_4] [i_4] &= var_3;
                        arr_45 [i_4] [i_4] [i_10] [i_4] [i_4] = 1771590580;
                        arr_46 [i_4] [i_10] [i_10] [i_12] = var_0;
                    }
                    for (int i_13 = 3; i_13 < 10;i_13 += 1)
                    {
                        arr_49 [i_4] [i_10] [i_4] [i_4] [i_4] [i_4] = -var_5;
                        var_22 = var_11;
                        var_23 = 7740833069372069466;
                        arr_50 [i_10] [i_10] = (!var_13);
                    }
                    var_24 = (((~(arr_31 [i_10]))));
                }
            }
        }
    }
    #pragma endscop
}
