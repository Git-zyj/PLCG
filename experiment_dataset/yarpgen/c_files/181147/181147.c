/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181147
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [9] = (arr_3 [i_1 - 1]);
                var_11 = ((0 * (min((min(185730180, var_6)), (var_10 <= 1536)))));
            }
        }
    }
    var_12 = ((var_0 * ((min((var_10 / var_10), 6)))));
    /* LoopNest 2 */
    for (int i_2 = 4; i_2 < 9;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            {
                arr_11 [i_3] [1] [1] |= (min(((min((arr_1 [i_2 - 3] [i_2 + 1]), 0))), (228 % 228)));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 11;i_5 += 1)
                    {
                        {
                            arr_17 [12] [12] |= (arr_3 [i_2]);
                            arr_18 [i_2] [i_2 - 2] [i_2] [i_2] [0] |= (max(((((arr_13 [i_3] [i_3] [i_3] [i_3]) || var_7))), (max(var_10, 57695))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 2; i_6 < 18;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 1;i_7 += 1)
        {
            {
                var_13 = arr_1 [i_6] [i_6];
                arr_24 [i_6] [i_6] = (arr_20 [i_7] [i_6 - 1]);
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    for (int i_9 = 2; i_9 < 15;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 19;i_10 += 1)
                        {
                            {
                                arr_35 [i_6 - 1] [i_9] [i_10] [i_9 + 1] [i_10] = ((min((min(1, var_7)), (max(var_6, 18446744073709551615)))) <= ((max(((var_7 ? var_10 : (arr_22 [14]))), 1011154548))));
                                arr_36 [i_6] [i_9] = 34610;
                                var_14 *= (((((-((var_5 ? 30926 : -812806051))))) ? (min((min((arr_30 [i_6] [12] [18] [i_9 + 2] [i_9] [i_10]), var_6)), (var_8 > var_6))) : 1307499531));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
