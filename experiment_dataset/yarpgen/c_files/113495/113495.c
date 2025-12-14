/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113495
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= 2147483647;
    var_16 = (max(31366, (((32767 ? 0 : 2609743620921267835)))));
    var_17 = (min(var_13, (max(749893058598835031, (!var_0)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_18 *= 1;
                arr_5 [i_0 + 1] [i_0 + 1] = var_13;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_19 += ((!((!(((2147483647 ? var_3 : -2260528490086642504)))))));
                            arr_11 [i_3] [i_3] [i_3] [6] [i_3] = (arr_6 [i_0 + 1] [i_1 - 1] [i_3]);
                            arr_12 [i_0] [i_0] [4] [i_2] [i_3] [i_3] = var_8;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
