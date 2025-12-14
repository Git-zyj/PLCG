/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180086
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (~var_16);
    var_20 = var_3;

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_21 = 1;
        var_22 = 1;
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        arr_5 [6] = (arr_4 [i_1] [5]);
        var_23 = (arr_1 [i_1]);
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 9;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 8;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    {
                        var_24 = (arr_13 [i_1] [i_4] [i_3 - 1] [i_4] [i_1] [i_2]);
                        arr_14 [i_4] [11] [11] [11] = ((-(arr_6 [i_2 + 3])));
                    }
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        arr_17 [i_5] = (min(-2732456152741509378, (arr_7 [i_5])));
        var_25 = max(31208, 2801528573);
    }
    #pragma endscop
}
