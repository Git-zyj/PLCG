/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158221
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    var_17 = ((((arr_8 [i_2 + 1] [i_2 + 1] [i_0 - 1] [i_0 - 1]) < (arr_8 [i_2 - 1] [i_2 + 1] [i_0 - 2] [i_0 - 2]))) ? ((0 << (2987 - 2979))) : ((min(var_5, 15341))));
                    arr_10 [i_1] = (min(((min((-9223372036854775807 - 1), 255))), (((((arr_5 [i_1] [i_2 + 2]) ? (arr_1 [i_0]) : -1)) % (arr_3 [16] [i_0 - 2] [i_2 - 2])))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            {
                var_18 = ((((((arr_15 [i_3]) ? 193 : var_7))) ? (-9223372036854775807 - 1) : ((var_11 ? (arr_9 [i_3]) : -1))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        {
                            var_19 = (max(var_19, (((((((((-(arr_17 [i_3] [i_3] [i_4] [i_6]))) + 9223372036854775807)) << (((((~21) + 23)) - 1)))) | 7472145581358110324)))));
                            var_20 -= ((1318081666840650473 * (((var_0 % var_0) + -0))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
