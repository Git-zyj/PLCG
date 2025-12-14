/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131356
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_14;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] [8] = 0;
        var_20 = ((1 < (arr_2 [i_0])));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        arr_7 [i_1] = (arr_2 [i_1]);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 11;i_3 += 1)
            {
                {
                    arr_13 [i_1] [i_1] [6] [i_1] = var_13;
                    arr_14 [i_1] [i_1] [i_1] = -1;
                    var_21 = var_14;
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_22 = (((((~(arr_11 [i_4] [i_4] [i_4])))) & (max((max((arr_0 [i_4]), var_4)), (arr_11 [i_4] [i_4] [i_4])))));
        arr_19 [i_4] [i_4] = (((1650266740 ? 2279489113 : 3905575672)));
    }
    var_23 = ((-(~0)));
    #pragma endscop
}
