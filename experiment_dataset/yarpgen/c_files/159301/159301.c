/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159301
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_19 = (((!16) ? -37 : (((!(27 - -45))))));
                    arr_6 [i_0] [i_0] [i_2] = ((!(((arr_3 [i_0] [i_1] [i_2]) == 58))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            {

                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    arr_15 [i_5] [i_4] [i_5] = 2884163552045070337;
                    var_20 = (var_4 - -40);
                    arr_16 [i_4] [i_4] [5] [i_5] = (arr_7 [i_3] [i_3]);
                    var_21 = max((arr_14 [i_3] [i_4] [i_5] [i_5]), ((var_1 ? 11 : (arr_10 [i_3]))));
                    var_22 = min((arr_8 [i_3]), ((min(2147483644, -39))));
                }
                var_23 ^= ((((((max(-10, 35046933135360)) << (((-13 + 72) - 52))))) + ((19565 ? 7319043843768116465 : (arr_8 [i_3])))));
                var_24 = (max(var_24, (-54 || -9)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 16;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 16;i_7 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_8 = 3; i_8 < 15;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 16;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 16;i_10 += 1)
                        {
                            {
                                arr_30 [i_6] [i_6] [i_8] [i_10] = ((!(((var_10 << (var_3 - 17776))))));
                                var_25 = ((-13 / var_11) ? ((1 ? (((13 ? (arr_5 [i_9]) : 65525))) : 1281569340921109374)) : -32);
                                arr_31 [i_6] [i_7] [i_7] [i_9] = (((((11 | -24) ^ (arr_22 [i_6] [i_8 - 2] [i_6]))) / (((-62 + var_1) | 2))));
                                var_26 = ((!(((max(9223372036854775807, 4294967295))))));
                            }
                        }
                    }
                }
                var_27 = (-106 || var_2);
                var_28 -= (!-4024);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 17;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 17;i_12 += 1)
        {
            {
                arr_40 [i_11] [i_12] [i_12] = (-669204104 - 24);
                arr_41 [i_11] = 6044845803015611904;
                arr_42 [i_11] [i_11] [i_11] = ((arr_3 [i_11] [i_11] [i_12]) & (max((!var_5), -39)));
                arr_43 [i_11] [i_11] = (((((~((max(var_3, var_9)))))) ? var_6 : (((-9223372036854775807 - 1) + 13))));
            }
        }
    }
    var_29 = var_1;
    #pragma endscop
}
