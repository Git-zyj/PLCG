/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123286
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_9;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = 255;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_12 += (((arr_1 [10]) * (arr_0 [i_1] [i_2])));
                    arr_8 [i_2] [i_2] [7] = (((arr_6 [i_0] [i_2] [11]) - (arr_0 [i_2] [i_2])));
                    var_13 -= (((arr_6 [i_0] [i_1] [i_0]) > (arr_6 [i_0] [i_1] [i_2])));
                    var_14 = (((arr_3 [i_0] [i_1] [i_2]) * (arr_3 [i_2] [i_1] [i_0])));
                }
            }
        }
        var_15 = var_9;
        arr_9 [i_0] [i_0] = ((+((41 ? (-9223372036854775807 - 1) : -9223372036854775789))));
    }
    var_16 = 0;
    #pragma endscop
}
