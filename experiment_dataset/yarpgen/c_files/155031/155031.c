/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155031
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_12 = ((((((arr_2 [i_0]) ? (arr_4 [i_2]) : (((arr_10 [i_1]) ? 61440 : -57))))) ? (var_6 + var_7) : 211));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_13 = (((arr_4 [i_3]) ? (arr_1 [i_1]) : var_1));
                                var_14 = (((arr_3 [i_1] [i_1]) ? ((var_5 ^ (~-5485339847963520836))) : ((var_4 ? (arr_8 [i_0] [i_0] [i_0] [20]) : ((var_10 ? (arr_4 [i_4]) : var_2))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 ^= var_8;
    var_16 = (min(var_16, var_2));
    #pragma endscop
}
