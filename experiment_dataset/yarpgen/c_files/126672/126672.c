/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126672
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
                arr_4 [i_0] = (min((max((arr_3 [i_0] [8] [i_0]), (!-4027059479345319363))), ((((arr_3 [i_0] [i_1] [16]) != (((((arr_1 [21]) != 4027059479345319362)))))))));
                var_20 = (arr_1 [i_0]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                var_21 &= (((((((((arr_8 [i_2] [i_2] [i_2]) && (arr_6 [1] [i_3])))) - (arr_7 [i_2] [i_3] [1])))) ? ((((((arr_5 [0]) ? (arr_5 [6]) : 3775373098))) ? ((-(arr_5 [10]))) : (((-(arr_6 [15] [i_3])))))) : ((max((arr_6 [i_2] [i_2]), -4027059479345319363)))));
                arr_9 [i_2] [i_3] [2] &= (arr_8 [17] [i_3] [i_2]);
            }
        }
    }
    var_22 = ((((~-91) ? var_10 : ((var_8 ? 3386894121 : 2852)))));
    #pragma endscop
}
