/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149662
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 16;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            arr_6 [i_0] [i_0] [i_1] = 1974695038;
            arr_7 [i_0] [i_0] = ((!(9883 & var_15)));
            var_18 = var_0;
            /* LoopNest 2 */
            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 15;i_3 += 1)
                {
                    {
                        arr_13 [i_0] [i_2] [i_2] = (arr_11 [i_0] [i_0] [i_0 - 2] [i_0] [i_0]);
                        var_19 = (!-1974695035);
                        arr_14 [11] [i_0] [0] = -1410617502;
                        arr_15 [i_0] = (var_4 ? 32767 : 13203);
                    }
                }
            }
        }
        arr_16 [i_0] = (249 + -1974695023);
        arr_17 [i_0] [i_0] = var_10;
    }
    for (int i_4 = 4; i_4 < 16;i_4 += 1) /* same iter space */
    {
        arr_20 [i_4] [i_4] = ((!(((var_8 + ((min(var_5, var_11))))))));
        var_20 ^= (min(((18446744073709551603 ? 4294967295 : -27)), (arr_0 [i_4 - 3])));
        arr_21 [i_4] |= ((max((((arr_2 [i_4]) ? var_1 : 44)), (!44))));
    }
    for (int i_5 = 4; i_5 < 16;i_5 += 1) /* same iter space */
    {
        arr_26 [i_5] |= 19;
        arr_27 [i_5] [i_5] = min(var_3, ((-((min(var_6, var_16))))));
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 17;i_8 += 1)
                {
                    {
                        var_21 *= (((((max(12239, var_2)) * var_10)) * var_1));
                        arr_36 [i_6] [i_6] [i_7] [i_8] = ((var_12 | (((arr_24 [i_5 - 4]) ? (arr_8 [i_5] [i_5 - 3] [i_7]) : 1146385096208811994))));
                    }
                }
            }
        }
    }
    for (int i_9 = 4; i_9 < 16;i_9 += 1) /* same iter space */
    {
        var_22 ^= (((arr_8 [i_9] [i_9 - 1] [i_9]) ? (arr_3 [i_9 - 4] [i_9 - 2]) : 245));
        var_23 = ((((max(0, (max(230, -7060823624927102381))))) ? (min((arr_29 [i_9 - 3] [i_9 - 3]), 34189)) : -4294967271));
    }
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 21;i_10 += 1)
    {
        for (int i_11 = 2; i_11 < 19;i_11 += 1)
        {
            {
                arr_43 [i_10] [i_10] [i_11] = (max(((18446744073709551615 ? ((max((arr_42 [i_10] [i_10] [1]), -807169108))) : (arr_39 [i_10]))), ((max(((~(arr_42 [i_10] [i_10] [i_10]))), (~var_12))))));
                var_24 &= (max(((min(var_0, (arr_42 [i_11] [i_11] [i_11 + 2])))), 96425261991439332));
            }
        }
    }
    #pragma endscop
}
