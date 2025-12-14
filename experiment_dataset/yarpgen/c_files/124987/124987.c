/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124987
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((49 ? (206 ^ 1) : ((49 ? var_12 : var_2))))) ? ((1245422640 << (25650 - 25641))) : var_5));
    var_14 = (var_6 >= 266441192);
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_12 [i_3] [i_1 - 2] [i_2] [i_3 - 4] = ((59 ? (arr_1 [1] [i_1]) : (arr_9 [i_3] [i_1] [i_2] [i_3] [i_3])));
                            var_15 *= (arr_1 [9] [i_3]);
                        }
                    }
                }
                var_16 = ((arr_9 [i_0] [i_0] [i_0] [20] [i_1]) ? (((27 <= (((arr_3 [i_0 + 1]) * (arr_6 [i_1])))))) : ((1 ? 53 : 49)));
            }
        }
    }
    #pragma endscop
}
