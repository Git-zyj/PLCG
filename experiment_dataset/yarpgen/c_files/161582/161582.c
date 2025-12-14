/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161582
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_11 = var_9;
                    arr_7 [8] [i_1 - 1] [2] = (((((((max((arr_3 [i_0] [i_0]), (arr_2 [i_2])))) ? var_8 : (min((arr_2 [3]), (arr_6 [1] [4] [i_1 - 1] [i_0])))))) ? (((3586480997 >> (((arr_6 [i_1 + 1] [11] [3] [0]) - 144817561077522046))))) : ((((((arr_3 [10] [5]) ? (arr_6 [i_1 + 1] [i_1 + 1] [i_2] [i_2]) : 0))) ? (arr_1 [i_0]) : ((((!(arr_2 [i_1])))))))));
                    var_12 = (min(var_12, (((3586480995 ? (((-((max(var_8, (arr_3 [i_2] [i_0]))))))) : (((3399499638 * 3363057299) ? (arr_2 [i_2]) : (((arr_4 [i_2] [5] [i_0]) + 708486277)))))))));
                }
            }
        }
    }
    var_13 = (((41 - var_2) < var_5));
    var_14 = (((-((var_10 ? var_6 : 3586480999)))));
    #pragma endscop
}
