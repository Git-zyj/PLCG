/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136436
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= var_7;
    var_14 = (min(var_14, var_7));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_15 = ((270193800 ^ ((((arr_10 [i_1] [i_1]) ? (270193795 != var_8) : 0)))));
                                var_16 = ((var_2 ? 2708519031386603753 : var_7));
                                var_17 ^= (arr_3 [19] [i_1] [i_2]);
                            }
                        }
                    }
                    arr_17 [i_2] [i_1] [i_2] = var_9;
                }
            }
        }
    }
    var_18 = -27218;
    #pragma endscop
}
