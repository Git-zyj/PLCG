/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160185
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= var_5;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_20 -= ((((max((arr_5 [i_3 + 1] [1]), var_16))) ? (arr_0 [i_0] [0]) : (((((max(var_10, 2147483647))) && var_15)))));
                                arr_12 [i_3 + 1] [i_3 + 1] [i_2] [i_0] [i_0] = (var_2 - var_10);
                                var_21 = (max(var_21, ((((arr_9 [i_4] [i_3 + 1] [i_2] [i_1] [i_0 - 1]) ? 242 : ((var_4 ? (~var_11) : (1 ^ 16770))))))));
                            }
                        }
                    }
                    var_22 = (max(var_22, ((max(7771140713189775, 2147483647)))));
                    var_23 += max(110, (arr_8 [5] [i_1] [i_1] [i_1] [i_1]));
                }
            }
        }
    }
    #pragma endscop
}
