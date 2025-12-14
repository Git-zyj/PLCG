/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140789
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_13 *= 0;
                            arr_9 [i_2] [i_2] [i_1] [i_0] [i_2] = (((((0 - (min(0, 650770906311139512))))) ? -1293775407 : (arr_1 [i_3])));
                        }
                    }
                }
                var_14 = (arr_8 [14] [i_0] [i_0] [i_0] [i_0] [1]);
                var_15 = (((~(((arr_1 [i_0]) - 1)))));
            }
        }
    }
    var_16 = -1293775409;
    #pragma endscop
}
