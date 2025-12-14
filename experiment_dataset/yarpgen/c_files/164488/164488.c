/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164488
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_15 -= (min((max(-var_4, ((-(arr_2 [i_0 - 1] [i_1]))))), -122));
                var_16 = ((((arr_1 [i_0] [i_0 - 2]) ? ((min(49152, 16383))) : (((arr_1 [i_0] [i_1]) ? 17 : (arr_0 [i_0 + 1] [i_1]))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_17 ^= (((((arr_7 [i_0] [i_0] [i_0] [i_0 + 1]) ? (arr_2 [i_0 - 1] [i_0 + 2]) : (arr_7 [i_0] [i_0] [i_0] [i_0 + 3]))) * ((-(arr_2 [i_2] [i_0 - 1])))));
                                var_18 = -118;
                                var_19 = ((((-((~(arr_9 [i_0] [i_1] [i_2])))))) != (min((arr_7 [i_0] [i_1] [i_0 + 2] [i_1]), (((arr_1 [i_0] [i_1]) ? var_9 : (arr_9 [i_1] [i_2] [i_3]))))));
                                arr_12 [i_0 + 3] [i_1] [i_2] [i_3] [i_4] = (max((((arr_6 [i_0] [i_0] [i_0 + 2] [i_0 - 2] [i_0] [i_0 - 1]) ? 15 : (arr_7 [i_0 + 3] [i_0 + 1] [i_0 + 2] [i_0 - 2]))), 55971));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 &= ((var_13 ? var_14 : (min(var_9, ((min(var_8, 0)))))));
    #pragma endscop
}
