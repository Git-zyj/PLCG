/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122729
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_0] = (arr_1 [i_0] [i_0]);
                var_14 = -21714;
                var_15 = -16309;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_15 [i_4] [i_2] [i_0] = ((max(((-126 ? (arr_7 [i_0] [i_0] [i_2] [i_0]) : -1424309594)), 12795)) == var_0);
                                arr_16 [i_1] [i_2] [i_2] = ((var_8 ? (((arr_12 [i_0] [i_2]) ? (~7318) : (((((arr_10 [i_0] [i_1] [i_2] [i_0]) + 2147483647)) >> 1)))) : (((max((arr_9 [i_2] [i_2] [i_2]), 31744))))));
                                var_16 = (max((max((arr_13 [i_0] [i_1] [i_2] [i_3] [i_4]), ((-1 ? (arr_3 [i_4] [i_0]) : (arr_13 [i_0] [i_0] [i_2] [i_0] [i_4]))))), ((-(arr_1 [i_4] [i_3])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 |= (!-31200);
    var_18 = ((12812 ? (((!(((var_7 ? -27641 : var_7)))))) : var_11));
    #pragma endscop
}
