/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132089
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (~64);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_21 = max((arr_4 [i_0] [1]), (((!((max((arr_0 [i_0]), 0)))))));
                    var_22 = 52;
                }
            }
        }
    }
    var_23 = ((-(--8)));
    /* LoopNest 3 */
    for (int i_3 = 2; i_3 < 11;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 12;i_5 += 1)
            {
                {
                    arr_18 [i_3] [i_4] [i_3] = (max(((~((max(119, -60))))), (~119)));
                    arr_19 [i_5 - 1] [i_4] [i_4] [i_3] = (max((max((arr_17 [i_5 + 1] [i_4] [i_3]), ((max(92, 88))))), ((~(~0)))));
                    var_24 = (max(var_24, (((~((-(~538454292387709444))))))));
                    arr_20 [i_3] [i_3 + 1] [i_3] [i_3] = ((+(max((max((arr_14 [i_3 - 2] [i_5 + 1]), 0)), ((((arr_11 [i_5]) ? (arr_12 [i_3] [i_3]) : 81)))))));
                }
            }
        }
    }
    #pragma endscop
}
