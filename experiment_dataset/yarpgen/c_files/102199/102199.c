/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102199
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, -var_4));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_0] [i_0] [i_0] [i_2] = (+-0);
                                var_14 += ((+(max((arr_0 [i_2 - 1]), 102))));
                            }
                        }
                    }
                    arr_13 [i_2] [i_1 + 2] [i_0] [i_2] = (((~1193554171) || 41263));
                }
            }
        }

        /* vectorizable */
        for (int i_5 = 3; i_5 < 16;i_5 += 1)
        {
            var_15 = ((1 ? 17356 : (arr_10 [4] [i_0] [i_5] [10] [i_5 - 1])));
            arr_17 [16] = -var_8;
            var_16 = -13652;
        }
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 15;i_7 += 1)
            {
                {
                    var_17 = (min((arr_1 [i_6] [i_7 + 1]), 1003946291714126954));
                    var_18 = (arr_20 [i_0] [i_6] [i_7] [i_7 + 2]);
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 10;i_8 += 1)
    {
        arr_25 [i_8] [1] = (8972042406640842508 < var_1);
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 10;i_10 += 1)
            {
                {
                    arr_33 [i_8] [i_9] [i_10] [i_8] = (!1);
                    /* LoopNest 2 */
                    for (int i_11 = 2; i_11 < 9;i_11 += 1)
                    {
                        for (int i_12 = 2; i_12 < 8;i_12 += 1)
                        {
                            {
                                var_19 = (min(var_19, (arr_28 [i_8])));
                                var_20 = (max(((((arr_8 [i_12] [i_9] [i_10] [i_12 - 2]) < (arr_18 [i_12] [14])))), (arr_28 [i_11 - 2])));
                                arr_39 [i_12] = ((+((var_8 ? (arr_27 [i_11 + 1]) : ((max(30378, (arr_36 [i_8]))))))));
                                arr_40 [i_8] [i_12] [i_8] [i_8] [i_8] = (arr_37 [i_8] [i_8] [i_12] [i_8] [i_8]);
                                var_21 = (arr_5 [1] [i_10] [i_11] [i_12]);
                            }
                        }
                    }
                }
            }
        }
        var_22 = (min(var_22, ((min(((15440 | ((2048 ? (arr_1 [i_8] [i_8]) : 20)))), -2070)))));
    }
    /* LoopNest 3 */
    for (int i_13 = 1; i_13 < 11;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 13;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 13;i_15 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_16 = 0; i_16 < 13;i_16 += 1)
                    {
                        var_23 = (((((!(arr_41 [i_13])))) >> 13));
                        var_24 *= 1193554171;
                    }
                    var_25 += var_5;
                    var_26 = -19641;
                }
            }
        }
    }
    var_27 = -var_3;
    #pragma endscop
}
