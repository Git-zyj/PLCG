/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110322
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    var_16 = (min(var_16, (arr_1 [i_0])));
                    var_17 = (((((!1966080) ? ((2486 ? (arr_4 [i_0]) : var_0)) : 1))) % ((var_8 - (max(var_1, 1)))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_18 = ((max(1884699340, (!3347626472))));
                                arr_13 [i_4] [7] [i_2] [7] [i_4] = (arr_7 [i_0 + 1] [i_1] [i_2] [16] [i_4] [i_0 + 1]);
                                var_19 |= (min((((arr_6 [i_0 + 1] [i_1] [i_0 + 1] [i_3]) ^ (arr_10 [i_3 + 1] [i_1] [i_1] [i_0 + 1]))), (((var_5 || (arr_10 [i_0 + 1] [i_2] [i_3 - 2] [i_4]))))));
                            }
                        }
                    }
                    arr_14 [i_0] [i_1] [i_2] [i_2] = ((((-(min((arr_11 [i_0] [i_0] [i_0] [i_1] [i_1] [i_1] [i_2]), var_7)))) <= ((+(((arr_7 [i_0] [18] [i_0] [i_0 + 1] [i_0] [i_0]) ? var_1 : -1))))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 20;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 19;i_6 += 1)
            {
                {
                    var_20 += max((((var_5 ^ -24831714) ? var_13 : var_7)), ((min(20, ((-(arr_8 [i_5] [i_5] [i_5] [i_5])))))));
                    var_21 = (min(((35189 ? (((var_3 << (var_3 - 18635)))) : ((-(arr_21 [8] [i_5] [i_5] [i_0]))))), ((((min((arr_7 [i_0] [i_0] [i_5] [1] [i_5 + 1] [i_6 - 1]), 24831721)) % ((-1 ? 1879048192 : var_5)))))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 21;i_8 += 1)
                        {
                            {
                                arr_27 [1] [i_8] [i_6] [i_5] = ((-(max(var_10, (arr_10 [i_8] [i_7] [i_6 + 1] [19])))));
                                var_22 = (min(-0, (arr_4 [i_5 - 1])));
                                var_23 = (min((~34), ((-(arr_10 [i_5] [i_5 - 1] [i_5 - 1] [i_0 + 1])))));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 25;i_9 += 1) /* same iter space */
    {
        arr_31 [i_9] = (((arr_30 [i_9] [i_9]) / (~var_13)));
        arr_32 [i_9] = var_0;
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 25;i_10 += 1) /* same iter space */
    {
        var_24 = (min(var_24, ((16498231660890592385 % (arr_34 [24])))));
        /* LoopNest 2 */
        for (int i_11 = 3; i_11 < 23;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 25;i_12 += 1)
            {
                {
                    var_25 = (arr_34 [i_10]);
                    arr_40 [i_10] [i_11 + 2] [i_12] [i_12] = (!2673897216);
                }
            }
        }
    }
    for (int i_13 = 4; i_13 < 11;i_13 += 1)
    {
        var_26 = (min(var_26, var_6));
        var_27 = ((-(((4294967295 >= var_2) * (((!(arr_23 [1] [i_13] [i_13] [1]))))))));
    }
    var_28 = -var_10;
    #pragma endscop
}
