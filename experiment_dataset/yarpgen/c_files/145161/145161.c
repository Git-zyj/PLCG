/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145161
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= 1572658163;
    var_12 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    var_13 = 20;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_14 -= ((((((min(155, var_9))) ? ((1 ? var_10 : (arr_12 [i_0] [i_1] [i_2] [1] [i_3] [i_4]))) : ((9 ? 530823120 : 20))))) - ((-((var_10 ? (arr_3 [i_0] [i_0]) : 3023483883109462112)))));
                                var_15 = (max(var_15, ((max(((4187155508 ? 1 : (((arr_0 [i_0]) ? (arr_5 [i_4]) : var_3)))), 10372)))));
                                arr_13 [i_0] [i_1] [14] [i_3 + 1] [i_4] |= ((!((max((arr_10 [i_1 + 3] [i_1] [i_2 - 1] [i_3 - 1]), (arr_10 [i_1 + 1] [i_2] [i_2 + 2] [i_3 - 1]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
