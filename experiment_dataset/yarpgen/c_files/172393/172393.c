/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172393
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, (((var_1 ? (~-9222) : ((0 ? 1 : var_12)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                var_15 = ((~((((arr_4 [i_0] [i_1 + 1] [i_1]) || var_6)))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_16 = (arr_4 [i_0] [i_0] [i_0]);
                                arr_15 [i_0] [i_0] [i_1] [i_1] [i_2] [i_0] [i_0] = (((var_12 + 2147483647) << (((((var_3 + 2147483647) << (var_13 - 1))) - 2139368793))));
                                var_17 = (~1903988338);
                                var_18 = var_11;
                                var_19 = -1;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 15;i_6 += 1)
        {
            {
                arr_23 [i_5] [i_6] [i_6] = ((((max(var_1, var_7)))) - (((var_10 - var_2) ? -3 : 2404561009)));
                arr_24 [i_5] [i_5] = ((((((arr_21 [i_5] [i_5] [i_6]) / var_12))) ? (!-14) : ((var_13 ? (-2249343225156745836 >= 3280069953) : (var_9 % var_0)))));
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 16;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 18;i_9 += 1)
                        {
                            {
                                var_20 = max(((((var_9 ? var_8 : 1903988338)) % (arr_17 [i_5]))), 41);
                                var_21 = (min(var_21, 57));
                                var_22 = (-41 >= 16);
                                arr_32 [i_5] [i_5] [i_7] [i_8] [i_9] = (((2249343225156745822 - var_9) ? (((-2147483647 - 1) ? -1 : 2404561009)) : (var_8 - var_1)));
                                arr_33 [i_5] [i_5] [i_5] [i_8 + 2] [i_9] = 8084773701117338929;
                            }
                        }
                    }
                }
                var_23 = (min(var_23, ((min(var_13, (var_1 == -41))))));
            }
        }
    }
    #pragma endscop
}
