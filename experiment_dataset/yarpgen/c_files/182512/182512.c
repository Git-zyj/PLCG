/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182512
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_17 = (min((((((~(-32767 - 1))) >= 236))), ((8191 ? 0 : (min(1927867401, var_3))))));
                var_18 = ((!((((((~(-32767 - 1)))) ? (~-16525) : 1)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 9;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        {
                            var_19 = (min(((((var_12 ? (arr_6 [i_2]) : (arr_15 [i_2] [i_2] [i_4] [7]))) - ((max(73, -8))))), (min((((arr_15 [i_2] [i_3] [1] [i_5]) ? (arr_1 [i_2] [i_2]) : (arr_17 [3] [3] [8] [7] [i_2]))), ((var_11 ? 4689 : 78))))));
                            var_20 = (((-22889 * -16525) - (arr_2 [23])));
                            arr_18 [i_2] [i_4] [i_3 - 2] [i_2] = -8177;
                            arr_19 [i_2] [i_2] [11] [i_2] [i_2] = (((!((min(var_11, (arr_4 [5])))))));
                            var_21 *= (((((-27236 ? ((((arr_15 [8] [i_3] [1] [4]) || (arr_16 [i_2] [i_2] [1] [i_2])))) : var_4))) ? var_3 : (((!194) ? var_12 : -var_6))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        {
                            var_22 = -var_3;
                            var_23 = ((-(((arr_6 [i_7]) ? (arr_20 [i_3 - 2] [i_3 - 2] [i_3 + 3]) : (0 && -3)))));

                            for (int i_8 = 2; i_8 < 11;i_8 += 1)
                            {
                                arr_26 [9] [i_3 - 2] [i_2] = var_1;
                                var_24 = (max(var_3, ((var_6 ? ((87 ? -32297 : var_0)) : (arr_15 [i_2] [4] [3] [i_2])))));
                                var_25 &= ((-((min(-24889, ((min(-73, var_13))))))));
                            }
                            for (int i_9 = 0; i_9 < 12;i_9 += 1)
                            {
                                var_26 |= var_3;
                                var_27 += 85;
                            }
                            for (int i_10 = 0; i_10 < 1;i_10 += 1)
                            {
                                var_28 |= (arr_10 [i_2] [i_3] [5]);
                                var_29 = 246;
                            }
                        }
                    }
                }
                var_30 = 32767;
            }
        }
    }
    #pragma endscop
}
