/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159241
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_6 ? var_5 : (109 || -2642034470125289497)));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_21 = (((var_0 * var_0) << (var_18 - 1863925864605215131)));
        var_22 = (arr_1 [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_23 ^= (((2797157387 ? var_17 : 18446744073709551615)));
        arr_5 [4] [i_1] = ((-2002439467 ? (~575138248740682143) : -39484));
        var_24 = ((var_11 ? (arr_3 [i_1] [i_1]) : var_4));
        var_25 = (((((-(arr_4 [i_1])))) && (arr_4 [i_1])));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    {
                        var_26 |= ((-55 * (arr_8 [i_1] [i_1])));
                        arr_12 [i_1] = (((arr_10 [i_1] [18] [i_1]) ? -var_14 : (-127 - 1)));
                    }
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        arr_15 [19] = var_8;
        var_27 = (max(var_27, (((((min(var_15, ((-(arr_14 [i_5])))))) % (min(((2147483647 ? 2667961696 : 4294967295)), (((-7581717693101855133 ? 1 : 2147483646))))))))));
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 24;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 24;i_7 += 1)
        {
            {
                arr_22 [i_6] [i_7] |= (!-100);
                var_28 = (((arr_18 [i_6]) ? (max(var_7, var_2)) : ((max(((var_7 ? 2657893612 : (arr_19 [i_6] [i_6]))), var_15)))));
                arr_23 [9] [3] [i_7] = ((max(var_0, (arr_20 [i_6] [i_7] [i_7]))));
                var_29 = (3961447150 * 21);
            }
        }
    }
    var_30 = (var_12 ? ((var_12 ? var_8 : (max(var_9, var_3)))) : ((max(512009059, 1))));
    #pragma endscop
}
