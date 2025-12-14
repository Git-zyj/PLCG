/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12379
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_6 [13] [13] [i_0] = -670445358701753531;
                arr_7 [i_0] [15] [i_0] = (((arr_4 [i_1] [i_0]) ? (((arr_4 [i_0] [i_1]) - (arr_5 [i_0]))) : (((15134 ? -9136929058341655038 : ((-(arr_3 [i_0]))))))));
                arr_8 [i_0] [i_1] = (arr_5 [i_1]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            {
                arr_15 [i_2] &= ((-(((arr_1 [i_3]) - ((13395231860703660775 ? -670445358701753523 : var_9))))));
                arr_16 [0] [i_3] = (min((arr_2 [i_3]), 9223372036854775807));
                arr_17 [i_2] [i_3] [i_3] = ((((((((arr_0 [i_2]) ? -670445358701753531 : -9136929058341655058))) ? 27813 : (((arr_14 [i_2] [i_2]) ? -9136929058341655048 : (arr_12 [i_2]))))) << (((((arr_9 [i_3]) ? (arr_12 [i_2]) : (!27815))) - 1961909193))));
                arr_18 [i_3] [i_2] = ((max((!-9136929058341655048), (arr_10 [i_2] [9]))));
            }
        }
    }
    #pragma endscop
}
