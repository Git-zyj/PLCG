/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183459
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_12 *= 0;
                    var_13 = (min(var_13, ((((arr_5 [i_0] [i_0] [i_2] [i_0]) << (((1 > (arr_1 [i_2])))))))));
                    var_14 = (min(var_14, ((((var_2 < 2322759612) ? (((max((arr_4 [i_0] [i_2]), var_10)))) : (min(2322759612, 1972207683)))))));
                    var_15 = (min(var_15, 1));
                    var_16 = (max(var_16, (((1 ? (~var_10) : ((-1 ? 2322759604 : -1)))))));
                }
            }
        }
    }
    var_17 *= ((1 ? 1 : var_3));

    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_18 = (max(var_18, (((((2819098781 ? var_1 : (-732942257 < -1598599596612245285))) / -1)))));
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 19;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 19;i_6 += 1)
                {
                    {
                        arr_20 [i_3] [i_4] [i_5 - 2] [i_5 - 2] [2] &= ((7738918920541586766 < (((56 ? var_0 : -1999269373)))));
                        var_19 -= ((0 ? var_0 : 1));
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_7 = 0; i_7 < 21;i_7 += 1)
        {
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 21;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 19;i_9 += 1)
                {
                    {
                        var_20 = (min(var_20, ((1 ? (8500774404510530237 * 1) : var_1))));
                        arr_29 [i_3] [i_7] [i_8] [i_9] &= (((((arr_8 [i_3] [i_3]) ? 1 : var_3)) & (arr_19 [i_3] [i_8] [i_9 + 2] [i_9 - 1] [i_7])));
                        var_21 -= (((-10110885618102470 - -98) / var_2));
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_10 = 2; i_10 < 19;i_10 += 1)
            {
                for (int i_11 = 2; i_11 < 17;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 18;i_12 += 1)
                    {
                        {
                            var_22 |= var_2;
                            var_23 = (min(var_23, (((14 ? -16 : -90)))));
                        }
                    }
                }
            }
            var_24 = (min(var_24, (((var_9 ? 99 : (arr_24 [i_3] [i_7]))))));
        }
        for (int i_13 = 2; i_13 < 20;i_13 += 1)
        {
            var_25 -= arr_34 [i_3] [i_3] [i_13] [4] [4];
            arr_39 [i_3] [i_13] [i_13] = ((-1423732259 & (!8503857339836951363)));
        }
        for (int i_14 = 0; i_14 < 21;i_14 += 1)
        {
            var_26 = (min(var_26, var_5));
            var_27 = min((max((min(603006231, 1)), (-3 || -1423732259))), var_5);
            var_28 *= var_2;
        }
        var_29 = (min(var_29, -var_5));
    }
    for (int i_15 = 1; i_15 < 1;i_15 += 1)
    {
        var_30 = (min(var_30, var_9));
        /* LoopNest 3 */
        for (int i_16 = 0; i_16 < 1;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 25;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 1;i_18 += 1)
                {
                    {
                        var_31 -= -496912144;
                        var_32 -= ((((min((-56 == 3691961065), (arr_51 [16] [12] [i_17])))) ? (((arr_43 [2]) | 1)) : (((1972207683 ? -25 : 3691961065)))));
                        var_33 -= (3680621525 | 242);
                    }
                }
            }
        }
    }
    #pragma endscop
}
