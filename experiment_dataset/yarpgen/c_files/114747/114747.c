/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114747
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
                var_20 = ((~(!2147483647)));
                var_21 = (((~(arr_0 [9] [1]))));
                var_22 = ((!(((arr_2 [i_0]) && -5111068709941430870))));
            }
        }
    }
    var_23 = (((~48) ? (~9223372036854775807) : (((var_5 | -3253910369447405419) & var_5))));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 4; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                {
                    var_24 = (~268435455);
                    var_25 += (((((((max(var_11, 910968357))) ? (((var_9 || (arr_13 [i_4] [i_3] [i_2])))) : 1))) ? var_13 : ((var_2 ? -1 : (((arr_13 [i_4] [4] [i_2]) ? 132 : var_18))))));
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 16;i_6 += 1)
                        {
                            {
                                arr_20 [i_2] [i_3] [1] [2] [i_3] &= -2147483647;
                                arr_21 [i_6] [6] [i_5] [i_4] [i_4] [2] [12] = ((((((arr_16 [i_2] [18] [i_3 - 3]) ? -1026825145 : (arr_16 [i_2] [i_3] [i_3 - 3])))) || var_18));
                                arr_22 [i_2] [i_2] [i_2] [i_5] [i_6] = 0;
                            }
                        }
                    }
                }
            }
        }
    }
    var_26 = var_6;
    #pragma endscop
}
