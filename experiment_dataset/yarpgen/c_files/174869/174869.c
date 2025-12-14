/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174869
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, ((max((max(-1105976638, var_14)), var_1)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 17;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        arr_9 [i_2] [i_2] [i_1 + 1] [i_0] = (arr_7 [i_0]);
                        var_16 = (arr_2 [i_2] [i_0]);
                        var_17 &= ((((arr_8 [i_0]) ? -1 : (arr_7 [i_1]))));
                        var_18 -= (arr_5 [i_1 - 1] [i_1 + 2] [i_1]);
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        arr_14 [i_4] [i_2] = 35092;
                        var_19 = 126;
                        arr_15 [i_0] [i_0] = ((1 ? 35596 : 1082510666186017509));
                    }
                    arr_16 [i_1] = -112;
                }
            }
        }
    }
    var_20 = ((max(var_12, var_8)));
    #pragma endscop
}
