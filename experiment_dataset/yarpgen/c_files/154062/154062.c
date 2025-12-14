/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154062
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= (max(var_6, var_2));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_12 = (((~8521215115264) ^ 138538465099776));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_13 *= (((arr_11 [11] [i_3] [i_2] [2] [i_1] [i_0]) ? ((((arr_11 [i_1] [1] [11] [3] [i_0] [i_1]) ? (arr_11 [i_0] [i_1] [i_2] [i_3] [3] [i_0]) : (arr_11 [i_0] [6] [0] [i_2] [6] [i_4])))) : 138538465099776));
                                var_14 = (min(var_14, (((((((arr_6 [i_2] [i_2]) ? 2810 : -1407519179439729984))) ? var_9 : (((arr_5 [8]) << (((arr_3 [i_0]) - 11981)))))))));
                            }
                        }
                    }
                }
                var_15 = -10299;
            }
        }
    }
    #pragma endscop
}
