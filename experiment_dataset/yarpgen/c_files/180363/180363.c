/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180363
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    var_19 = ((-(min((arr_6 [i_2 - 1] [1] [i_2] [i_1]), (arr_3 [i_2 - 2] [i_2 - 2] [i_0])))));
                    arr_8 [i_1] [i_1] [i_1] [i_1] = (max(((max((arr_7 [i_0] [i_2 + 1] [i_1] [i_1]), var_13))), (((arr_7 [i_0] [i_2 - 1] [i_1] [i_2]) ? (arr_7 [i_0] [i_2 + 1] [i_1] [1]) : (arr_4 [10] [i_2 + 1])))));
                }
            }
        }
        var_20 = (arr_0 [i_0]);
        arr_9 [i_0] = (arr_7 [i_0] [i_0] [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        arr_13 [6] = 1;
        var_21 = ((1 & (arr_10 [i_3])));
        var_22 = (arr_11 [i_3] [i_3]);
    }
    var_23 = (max((((~var_17) | var_2)), var_1));
    var_24 &= (max(var_8, 511));
    var_25 = (min(var_25, -var_13));
    #pragma endscop
}
