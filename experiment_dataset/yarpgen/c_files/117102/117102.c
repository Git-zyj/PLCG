/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117102
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_17 = 2147483644;
                                var_18 = ((var_1 ^ (~-23058)));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        {
                            var_19 = ((-((((max(610213984, var_9))) ? ((1709556180 ? (arr_13 [i_5]) : var_9)) : (((arr_11 [i_0] [i_0] [i_0]) / var_3))))));
                            arr_17 [i_0] [i_1] [i_5] = -272988137;
                            var_20 = (!1213596565);
                            arr_18 [1] [i_1] [i_5] [i_1] &= ((!(-1213596566 == var_6)));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 3; i_7 < 23;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 25;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 25;i_9 += 1)
            {
                {
                    arr_26 [i_7] [i_7] [i_9] = (arr_22 [i_9] [i_7] [i_7]);
                    var_21 = (max(184629878, 2934617555));
                }
            }
        }
    }
    #pragma endscop
}
