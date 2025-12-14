/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171232
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] &= var_8;
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_12 = var_1;
                            arr_10 [i_3] [i_1] [i_3] [i_1] |= (-3674 & var_11);
                            arr_11 [i_0] [i_0] [i_0] [i_2] [i_0] = var_4;
                        }
                    }
                }
            }
        }
    }
    var_13 -= (!974005492);
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 19;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            {
                arr_17 [i_4] [i_5] = (var_6 + (((var_1 ? var_2 : var_9))));

                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    arr_20 [i_6] [i_4] [i_4] [i_4 + 2] = (((var_10 & 7084) ? (!67) : 10));
                    var_14 += (((max(719235678, (445671544 & -67))) == (-11 && 652158055)));
                    arr_21 [i_4] [i_5] [i_5] = (((~41) == 285));
                }

                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {
                    var_15 = ((var_11 - (22 * var_9)));
                    arr_25 [i_4] [i_5] [i_5] = ((var_1 - (((974005502 >= ((var_4 ? -67 : var_0)))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 1; i_8 < 10;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 11;i_9 += 1)
        {
            {
                var_16 = (min(var_16, var_0));
                arr_32 [i_9] [i_9] = (((~(arr_23 [i_9]))) ^ (min(-11, (arr_23 [i_9]))));
            }
        }
    }
    var_17 ^= (~-85);
    #pragma endscop
}
