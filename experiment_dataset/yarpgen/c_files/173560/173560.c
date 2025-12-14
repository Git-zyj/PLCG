/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173560
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            arr_5 [i_0] [3] = (((-1051860662186891047 + 9223372036854775807) >> (((arr_0 [i_1 - 4] [i_0 + 2]) - 74))));
            arr_6 [i_0] = var_5;
            arr_7 [4] &= 4523342449899494051;
        }

        /* vectorizable */
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            arr_11 [i_0] = (!29830);
            arr_12 [i_0] = var_12;
            arr_13 [i_0] [i_2] = var_3;
            var_14 |= 8843987149198436974;
        }
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            var_15 = (max(var_15, (((var_7 ? 34359738367 : 0)))));
            arr_16 [i_3] |= (min(18446744073709551612, 38066));
            arr_17 [i_0] [i_0] = 5957352549702531928;
        }
        for (int i_4 = 1; i_4 < 9;i_4 += 1)
        {
            arr_21 [i_0] [i_4] [i_0] = var_12;
            /* LoopNest 3 */
            for (int i_5 = 2; i_5 < 7;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 8;i_7 += 1)
                    {
                        {
                            var_16 = (min(var_16, 245760));
                            var_17 = (min(var_17, ((min(((max((!8160), (max((arr_4 [i_0] [i_0]), 27))))), ((-(var_5 * var_5))))))));
                            var_18 = ((-((-(max(1100659288, 9223372036854775787))))));
                            arr_30 [i_0] [i_0] [i_0 + 1] [i_0 - 3] [i_0] [i_0] [i_0] = 128;
                            var_19 -= (((var_3 < var_3) / (((arr_0 [i_0 - 3] [i_4 - 1]) + var_2))));
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_8 = 2; i_8 < 9;i_8 += 1)
        {
            /* LoopNest 2 */
            for (int i_9 = 1; i_9 < 8;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 0;i_10 += 1)
                {
                    {
                        var_20 = 2;
                        arr_42 [i_0] [1] [i_0 - 1] [i_0] = ((1 * (arr_33 [i_0] [i_0 + 2] [i_0 - 2])));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 10;i_11 += 1)
            {
                for (int i_12 = 3; i_12 < 9;i_12 += 1)
                {
                    {
                        var_21 = (((((((arr_47 [0] [i_0] [i_0] [0]) > var_10)))) <= var_13));
                        var_22 &= -662;
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_13 = 3; i_13 < 16;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 17;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 17;i_15 += 1)
            {
                {
                    arr_59 [i_13] [i_14] = 4523342449899494051;
                    var_23 = 32;
                    var_24 -= 128;
                }
            }
        }
    }
    #pragma endscop
}
