/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161454
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 24;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] = (((arr_9 [i_1] [i_2 - 1] [i_3] [i_3] [i_3] [i_3] [i_3 - 1]) * -32751));
                                arr_12 [i_0] [i_1] [i_4] [i_4] |= (var_1 != (arr_10 [i_4] [i_4] [i_3 + 1] [i_2]));
                            }
                        }
                    }
                    var_19 = (arr_4 [i_0]);
                    arr_13 [i_0] [i_0] [i_0] [i_0] = (((1 ? 1 : var_14)));
                }
            }
        }
        var_20 |= (((var_8 % 545040243) < (arr_6 [0])));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                {
                    arr_19 [i_0] [i_0] [i_0] = ((arr_17 [i_0]) != (arr_17 [i_0]));
                    arr_20 [i_5] [i_5] [i_6] &= 17721607810221772675;
                    arr_21 [i_6] [i_0] [i_0] = (((arr_5 [i_5]) != (arr_14 [i_0] [i_0])));
                    var_21 += (arr_9 [i_0] [i_0] [i_5] [i_5] [i_6] [i_6] [i_6]);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 16;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            {
                var_22 = (max(var_22, (((((arr_5 [i_8]) ? (arr_5 [i_8]) : (arr_5 [i_7])))))));
                /* LoopNest 3 */
                for (int i_9 = 0; i_9 < 16;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 16;i_10 += 1)
                    {
                        for (int i_11 = 3; i_11 < 12;i_11 += 1)
                        {
                            {
                                arr_36 [i_7] [i_7] [1] [i_8] [i_7] = 1374502121867906516;
                                var_23 = ((-var_11 ? ((1 ? (!5730440) : ((-(arr_23 [5]))))) : (4289236856 && 1009744081)));
                                var_24 = ((-((~((-(arr_14 [i_7] [i_8])))))));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_12 = 0; i_12 < 18;i_12 += 1) /* same iter space */
    {
        arr_40 [i_12] [i_12] = (min(219, 5730440));
        arr_41 [i_12] = -42;
        arr_42 [i_12] [i_12] = ((!((((arr_38 [i_12]) ? 6612702735470348139 : 14002912830094404578)))));
    }
    for (int i_13 = 0; i_13 < 18;i_13 += 1) /* same iter space */
    {
        arr_45 [i_13] &= var_16;
        /* LoopNest 3 */
        for (int i_14 = 0; i_14 < 18;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 18;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 18;i_16 += 1)
                {
                    {
                        arr_54 [i_16] [i_14] [i_14] = (!725136263487778964);
                        var_25 &= ((-((min((min((arr_16 [i_13]), 0)), (min(1, var_2)))))));
                        arr_55 [i_13] [i_14] [i_14] [i_16] = (max((min(var_3, (!725136263487778937))), ((((arr_51 [i_14]) ? (arr_46 [i_13] [i_15]) : (arr_46 [i_13] [15]))))));
                    }
                }
            }
        }
        arr_56 [i_13] = ((var_17 % ((0 ? (arr_50 [i_13] [i_13] [i_13]) : 128))));
        var_26 += ((((max(1, var_13)))));
    }
    #pragma endscop
}
