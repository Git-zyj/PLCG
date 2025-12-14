/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13716
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_9 ? 17993773380955342229 : var_2));
    var_15 = ((((((var_3 >= ((var_7 ? 10564582225153803348 : var_6)))))) == 133693440));
    var_16 = var_10;

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    var_17 = var_13;
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_18 *= arr_1 [i_0 + 1];
                                var_19 = (~var_13);
                            }
                        }
                    }
                }
            }
        }
        var_20 = var_4;
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 23;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 24;i_6 += 1)
            {
                {
                    var_21 = (max(123, 14656258466554305699));
                    var_22 = (((((7882161848555748252 ? (arr_7 [i_0] [i_0] [i_5 + 1] [14] [i_6 - 2]) : (arr_7 [i_0] [i_0] [i_5 + 1] [i_6] [i_6 - 2])))) ? ((17519940325411721352 ? (arr_7 [22] [i_5] [i_5 + 1] [i_5] [i_6 - 2]) : 17519940325411721352)) : 95));
                }
            }
        }
    }
    var_23 = var_5;
    #pragma endscop
}
