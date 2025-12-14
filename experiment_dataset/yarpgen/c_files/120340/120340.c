/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120340
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((1 ? (max(255, var_13)) : var_1))) ? (var_7 & -1) : ((-2105590912 ? (var_13 + 4294967295) : (min(var_14, var_11))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_16 = ((~(((arr_3 [i_0] [i_2] [i_1]) ^ (arr_3 [i_0] [i_1] [i_1])))));
                    arr_7 [i_0] [i_0] [i_0] [i_1] = (((((arr_4 [i_0] [i_1]) + (arr_0 [i_1] [i_1]))) + ((-(arr_4 [11] [i_0])))));
                    var_17 = (((min((7312146404884288857 % var_13), ((((arr_2 [i_0] [i_1] [i_1]) ? (arr_3 [i_0] [i_1] [i_1]) : -43))))) == 511));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_15 [i_1] [i_0] [i_2] [i_3] [i_4] [i_1] [i_1] = max(-1, (min((arr_8 [i_4 - 1] [i_4 - 1] [i_4] [i_4 + 1] [i_4 + 1]), -12660)));
                                var_18 = 6544;
                                var_19 = ((-(max(31326, (arr_8 [i_2] [i_4 + 1] [i_4] [i_4 + 1] [i_4 - 1])))));
                                var_20 = 1;
                                var_21 = (min(188, (((((arr_9 [i_0] [i_2] [i_1] [i_3] [i_1]) ? 65535 : (arr_5 [i_0])))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            {
                                var_22 = ((((((~var_12) ? -355950296 : (var_8 >= 113)))) ? 4095 : -3));
                                arr_21 [i_1] [9] = ((((((max((arr_13 [i_0] [i_1] [i_5] [i_5]), 65535)) - -251887892))) ? ((1 ? 1 : (((arr_19 [3] [i_5] [i_2] [i_2] [i_1] [i_0]) ? 1 : -1)))) : (arr_19 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])));
                                arr_22 [i_0] [i_1] [i_1] [i_5] [i_6] = var_0;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
