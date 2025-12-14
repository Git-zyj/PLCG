/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166487
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (var_4 ? (min((var_4 <= var_15), (max(var_7, var_1)))) : ((max(245, 1610612736))));
    var_18 -= var_8;
    var_19 = (1610612748 ? (max(var_13, (min(var_13, var_10)))) : ((((var_13 & var_12) ? var_12 : (var_9 || var_1)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_20 = ((!(((((max(var_12, var_13))) ? (min(var_2, var_16)) : (min(var_12, var_9)))))));
                                var_21 = (((-9447 - 10) & var_8));
                                arr_13 [i_0] [i_1] [i_1] [i_1] [i_4] = ((3930944926 ? 204 : (max(1610612732, 1610612763))));
                                var_22 = (((((var_5 <= var_14) ? ((var_5 ? var_6 : var_5)) : (var_5 == var_5)))) - (max((var_7 * var_16), var_6)));
                                var_23 = ((((min(((min(var_7, var_7))), (max(var_3, var_1))))) ? var_8 : ((var_13 ? var_8 : (var_4 - var_8)))));
                            }
                        }
                    }
                    arr_14 [i_0] [6] [i_2] = ((+((((var_14 > var_4) <= (var_9 / var_9))))));
                }
            }
        }
    }
    #pragma endscop
}
