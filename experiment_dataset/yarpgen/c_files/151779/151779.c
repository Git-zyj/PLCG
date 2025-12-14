/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151779
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_19 = (min((~-16892), (((arr_7 [i_1] [i_1] [i_0]) ? (arr_7 [i_1] [i_0] [i_0]) : -244128533))));
                var_20 = ((-(arr_7 [19] [19] [i_1])));
                arr_8 [i_0] [i_0] [i_0] = (max(((~(arr_5 [i_0]))), ((((arr_5 [i_0]) < (arr_5 [23]))))));
                var_21 |= (((((~(arr_0 [i_0] [i_0])))) ? (max((arr_7 [i_1] [i_0] [i_0]), (arr_7 [i_0] [i_0] [i_1]))) : var_5));
            }
        }
    }
    var_22 = ((var_10 ? (1673852328 >= var_9) : 1673852329));
    var_23 = 1673852329;
    #pragma endscop
}
