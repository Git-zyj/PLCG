/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13552
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_9 & ((min(-var_8, var_2)))));
    var_15 += 2044;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_16 = (min(var_16, (((211 ? (!3) : ((-((min(37, 184))))))))));
                                var_17 = (4294967273 && -7940080300900316738);
                                arr_12 [i_0] [i_4] [i_2] [1] [i_4] = (min((((arr_5 [i_1]) | ((var_4 ? (arr_6 [i_2] [i_3] [i_2]) : 0)))), ((((((arr_11 [9] [9] [i_2]) ? var_4 : (arr_11 [11] [i_1] [i_2]))) << (((((arr_2 [i_0 - 3]) ? 24202 : var_1)) - 24200)))))));
                            }
                        }
                    }
                }
                arr_13 [i_0] [i_1] &= (-2147483647 - 1);
            }
        }
    }
    #pragma endscop
}
