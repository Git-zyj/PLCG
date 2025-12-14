/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119418
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_0] = ((~((0 / (arr_2 [4] [i_1 - 1] [i_1 - 3])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_20 ^= ((16382 ? 1 : 2147483617));
                            var_21 = (max(var_21, (arr_1 [i_0])));
                            arr_10 [i_0] [i_0] [i_0] [i_0] [7] = (((15745314243309218021 ? 64 : 7)));
                            arr_11 [i_3] [5] [i_1 - 3] [i_0] |= ((min((max(var_12, (arr_1 [i_1]))), 1)));
                            var_22 = (min(var_22, (((!(((-(arr_2 [i_0] [i_1 - 4] [i_1 - 1])))))))));
                        }
                    }
                }
            }
        }
    }
    var_23 = (!var_15);
    #pragma endscop
}
