/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127863
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_16 = (max(var_16, (((max(0, (arr_5 [i_1])))))));
                var_17 = 17;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            {
                var_18 = (arr_10 [i_3] [i_2] [i_3]);
                var_19 = (max(var_19, (((1 != (((arr_8 [i_2] [1]) ? (max((arr_6 [i_2] [8]), (arr_10 [i_2] [6] [16]))) : (~0))))))));
                var_20 *= (0 || 4294967286);
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                {
                    arr_22 [i_4] = ((127 ? 113 : 1917168349));
                    arr_23 [i_4] [i_5] [i_6] [i_6] = ((1 == ((min(69, (max((arr_9 [i_6] [19]), 0)))))));
                }
            }
        }
    }
    #pragma endscop
}
