/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175744
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                var_15 = (((arr_3 [i_0] [i_0] [i_1]) * ((((((arr_3 [i_1] [i_0] [i_0]) ? 1863835935 : (arr_1 [i_0 - 1] [i_0])))) ? (min((arr_2 [6] [i_1]), var_4)) : var_13))));
                arr_4 [i_0] = (min(31712, -6661267916990453897));
            }
        }
    }
    var_16 *= ((!(var_13 <= 1773147043)));

    /* vectorizable */
    for (int i_2 = 2; i_2 < 19;i_2 += 1)
    {
        arr_9 [16] = (!-6661267916990453912);

        for (int i_3 = 1; i_3 < 19;i_3 += 1)
        {

            for (int i_4 = 1; i_4 < 21;i_4 += 1)
            {
                arr_16 [i_4] [i_3] [i_3] [i_2] = (1318299491 ? 1863835924 : 53164);

                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    var_17 = (max(var_17, var_3));
                    var_18 = (arr_12 [i_3] [i_3]);

                    for (int i_6 = 2; i_6 < 19;i_6 += 1)
                    {
                        var_19 = var_7;
                        var_20 = (arr_19 [i_6 - 1] [i_6 + 4] [i_6 + 1] [i_3] [i_6]);
                        var_21 = (((arr_22 [i_6 + 4] [i_3 + 3]) ? (((arr_19 [i_2] [i_3] [i_4] [i_3] [i_6]) ? var_4 : var_0)) : var_8));
                        var_22 = var_10;
                    }
                    for (int i_7 = 1; i_7 < 20;i_7 += 1)
                    {
                        var_23 |= -12372;
                        var_24 = ((~(~var_12)));
                    }
                    var_25 = ((~(arr_24 [i_2 - 2] [10] [i_4 + 2] [i_5] [i_3])));
                }
            }
            for (int i_8 = 4; i_8 < 20;i_8 += 1)
            {
                var_26 = (arr_22 [i_8 + 1] [7]);
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 23;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 23;i_10 += 1)
                    {
                        {
                            var_27 *= (arr_24 [i_2 + 4] [i_3 + 3] [i_8] [i_9] [i_2]);
                            var_28 = (i_3 % 2 == zero) ? ((((((arr_14 [i_2 + 3] [i_3] [i_8]) + 9223372036854775807)) >> var_6))) : ((((((((arr_14 [i_2 + 3] [i_3] [i_8]) - 9223372036854775807)) + 9223372036854775807)) >> var_6)));
                            arr_31 [i_10] [i_10] [i_3] = (arr_28 [i_2 + 3] [i_3 + 4] [i_3 + 4]);
                            var_29 *= 16;
                        }
                    }
                }
            }
            arr_32 [i_2 + 2] [i_3 + 3] [i_2] &= ((~((var_5 ? -9246 : var_4))));
        }
        var_30 = (1491196647 % -1322921831);
        /* LoopNest 2 */
        for (int i_11 = 2; i_11 < 22;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 23;i_12 += 1)
            {
                {
                    var_31 = (arr_35 [16] [i_11] [i_11] [i_12]);
                    arr_38 [i_2 + 4] [i_11] [i_12] = var_12;
                    arr_39 [i_2] [11] [i_11] [i_12] = ((var_13 || (arr_18 [i_12] [i_11 + 1] [i_11] [i_2 + 1] [1])));
                }
            }
        }

        for (int i_13 = 1; i_13 < 20;i_13 += 1)
        {
            arr_42 [i_13] [i_13] = ((+((((arr_11 [i_13] [i_13]) || (arr_26 [i_2] [i_13 - 1] [i_13 + 1]))))));

            for (int i_14 = 0; i_14 < 23;i_14 += 1)
            {
                arr_45 [i_13] [i_13] [i_14] = (((arr_5 [i_13 + 3] [i_2 + 3]) ? var_6 : (arr_6 [i_13 + 3] [i_2 + 3])));
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 1;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 23;i_16 += 1)
                    {
                        {
                            var_32 = var_6;
                            var_33 = (!126);
                        }
                    }
                }
                var_34 = (!118);
            }
            for (int i_17 = 2; i_17 < 22;i_17 += 1)
            {
                arr_55 [4] [i_13] [i_17 - 2] = (-6246543767595802178 ? -1575430038 : ((-6661267916990453883 ? 8 : 255)));
                var_35 = ((var_7 ? var_11 : (arr_36 [i_13 + 1] [i_2 + 1])));
            }
            var_36 = (((-27 - 53163) ? var_4 : var_3));
        }
    }
    var_37 = var_6;
    #pragma endscop
}
