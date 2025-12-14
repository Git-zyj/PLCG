/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144630
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_17 = ((-((((-(arr_1 [i_0 - 2])))))));
                var_18 = (max(var_18, ((((arr_4 [i_1] [i_1]) ? ((min((arr_1 [i_1]), ((65535 ? 65525 : 17587))))) : (arr_2 [i_1]))))));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_19 = ((!(arr_7 [i_3] [i_1] [i_2])));
                                var_20 = (min(var_20, ((96 ? (arr_7 [i_2] [i_3 + 2] [i_2 - 1]) : ((((max(24894, 1130511157))) ? ((~(-127 - 1))) : (max(var_4, (arr_3 [i_0] [i_4])))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = var_13;
    /* LoopNest 2 */
    for (int i_5 = 3; i_5 < 18;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 17;i_6 += 1)
        {
            {
                var_22 -= ((-((max((arr_15 [i_5] [i_6 + 1]), 51253)))));
                /* LoopNest 3 */
                for (int i_7 = 2; i_7 < 17;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        for (int i_9 = 3; i_9 < 17;i_9 += 1)
                        {
                            {
                                var_23 *= 65525;
                                var_24 = (max(var_24, var_6));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
