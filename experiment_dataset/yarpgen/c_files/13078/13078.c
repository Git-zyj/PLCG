/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13078
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_20 *= (((((arr_1 [i_0]) ? (arr_2 [i_0]) : (arr_1 [i_0]))) * 65535));
        var_21 *= 0;
        var_22 *= 24434;
        var_23 = (max(var_23, ((((((arr_0 [i_0]) ? (arr_0 [i_0]) : var_16)) % 65535)))));
        var_24 *= (~1);
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 8;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        var_25 *= (max(1, var_11));
                        var_26 = max(((-(arr_13 [i_1] [i_3 + 3] [i_3 + 3] [i_3 + 3] [i_3 + 3]))), (((arr_12 [i_3 + 3] [i_3 + 3] [i_3 + 3] [i_3 + 1] [i_3]) ? (arr_13 [i_2] [i_3 + 3] [i_3 - 1] [i_3 - 1] [i_4]) : (arr_9 [i_3 + 1] [i_3 - 1] [i_3 + 2]))));
                        var_27 = (min(var_27, ((1 * ((((max(1, 0)) && (((-44980849 ? 1 : 1))))))))));
                    }
                }
            }
        }
        var_28 *= ((((((arr_15 [i_1]) >= (arr_15 [i_1])))) + (((arr_3 [i_1]) ? (((arr_6 [i_1]) | 23878)) : var_5))));
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_29 *= (arr_16 [1]);
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 0;i_7 += 1)
            {
                {
                    var_30 *= (((-(arr_21 [i_7 + 1] [i_6] [i_5]))) & (((((arr_17 [i_5] [14]) ? 1 : var_4)) << ((((arr_16 [0]) && (arr_21 [i_5] [i_5] [i_5])))))));
                    var_31 = (max(var_31, (~var_11)));
                }
            }
        }

        /* vectorizable */
        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            var_32 *= (arr_16 [8]);
            var_33 = (min(var_33, ((((arr_16 [6]) + (arr_16 [1]))))));
            var_34 = (~(arr_19 [i_5] [i_8] [1]));
        }
        for (int i_9 = 1; i_9 < 1;i_9 += 1)
        {
            var_35 *= (65535 & 0);
            var_36 *= ((((var_4 ? (arr_26 [i_9 - 1] [i_9 - 1] [i_9 - 1]) : var_3))) || ((!((((-2147483647 - 1) ? var_3 : var_12))))));
        }
        var_37 *= ((var_8 > ((~(arr_17 [i_5] [8])))));
    }
    var_38 *= (min(0, var_16));
    #pragma endscop
}
