/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144020
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= (-1 ? 5 : (((5 ? -2 : -15282))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_12 *= ((arr_3 [i_0 - 1]) >= ((min((-2147483647 - 1), 93))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_13 = (min((~var_3), ((((arr_2 [i_0 + 1] [i_1 + 1]) ? var_1 : (arr_8 [i_0 + 1] [i_0 - 1] [i_0] [i_1 + 1] [2] [i_1]))))));
                            var_14 = (arr_3 [2]);
                        }
                    }
                }
                var_15 = max(248, -119);
            }
        }
    }
    #pragma endscop
}
