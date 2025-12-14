/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113238
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_3;
    var_13 = ((~(min((max(-60, 1611454378410994138)), 97))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_14 -= 127;
                                var_15 = ((((max(var_3, ((18446744073709551615 ? var_9 : 0))))) && (((((!(arr_7 [9] [i_1] [i_2] [i_3]))) ? (min((arr_10 [i_4] [i_0] [i_2] [i_0] [i_0]), 18446744073709551615)) : 18446744073709551610)))));
                            }
                        }
                    }
                }
                var_16 = var_0;
            }
        }
    }
    #pragma endscop
}
