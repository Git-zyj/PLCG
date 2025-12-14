/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177588
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((~(min(var_16, ((33554304 ? var_13 : 19))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_18 = ((max((arr_4 [i_0 + 2] [i_1 - 3] [i_1 + 1] [i_1 - 3]), 121)) - (((arr_4 [i_0 + 2] [i_1 - 2] [i_1] [i_1 - 2]) ? 3848379760021900611 : (arr_4 [i_0 + 2] [i_1 - 1] [1] [i_1 - 2]))));
                            arr_10 [i_0] [i_0] [i_2] [i_0] = (arr_1 [i_0]);
                            arr_11 [i_2] [i_3] [i_2] [i_2] [i_1 - 3] [i_2] &= ((-(arr_0 [i_0 + 2])));
                        }
                    }
                }
                var_19 = ((((((min(-122, var_15))) ? (((var_8 ? -2147483645 : var_16))) : (~var_11))) >= (((-(var_0 > var_12))))));
                var_20 ^= var_6;
            }
        }
    }
    #pragma endscop
}
