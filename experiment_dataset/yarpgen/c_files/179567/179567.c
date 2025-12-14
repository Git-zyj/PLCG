/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179567
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [i_1] = -1191366449;
                arr_7 [i_1] [1] = ((((max((arr_3 [i_1 - 1]), 94))) ? (var_1 ^ 0) : (arr_2 [i_1])));
                arr_8 [i_1] = (((~var_0) ? -0 : ((min(30928, -94)))));
                arr_9 [i_1] = (arr_5 [i_1] [i_1]);
                arr_10 [i_1] = var_6;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            {
                var_12 = (min(var_12, ((((arr_16 [i_2]) ? (((-((min((arr_12 [i_3]), (arr_11 [i_3]))))))) : ((((((arr_11 [i_2]) + -94))) ? 0 : ((var_2 ? (arr_11 [i_3]) : 2471069286409961236)))))))));

                /* vectorizable */
                for (int i_4 = 1; i_4 < 15;i_4 += 1)
                {
                    var_13 = (max(var_13, (((~(arr_16 [i_2 - 2]))))));
                    arr_19 [i_3] [i_4] = arr_18 [i_2] [9] [9] [i_2];
                }
            }
        }
    }
    #pragma endscop
}
