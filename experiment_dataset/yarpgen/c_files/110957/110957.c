/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110957
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= var_10;
    var_15 |= var_7;
    var_16 = (~var_10);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = (((((arr_1 [i_0] [i_0]) - (arr_0 [11]))) | (arr_1 [0] [0])));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 23;i_3 += 1)
                {
                    {
                        arr_12 [1] [1] [i_1] [i_1] [i_3 + 1] = (((((arr_9 [i_2] [i_1] [i_2] [i_3 + 1] [i_1]) & (arr_1 [i_1] [i_3]))) << (((arr_3 [i_0] [i_0] [i_0]) - 10748009493282889663))));
                        var_17 = (((arr_10 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1]) | (((arr_3 [i_0] [i_0] [i_0]) | (arr_5 [i_0])))));
                    }
                }
            }
        }
        var_18 = (max(var_18, ((((~(arr_3 [i_0] [i_0] [i_0])))))));
        arr_13 [i_0] = (((arr_8 [15] [16] [i_0] [i_0]) + (arr_0 [i_0])));
    }
    for (int i_4 = 1; i_4 < 13;i_4 += 1)
    {
        arr_16 [i_4 - 1] = (((((arr_10 [i_4 - 1] [i_4 + 1] [i_4] [i_4]) ? (((arr_1 [i_4] [i_4 + 1]) ? (arr_15 [i_4]) : (arr_1 [i_4] [i_4 - 1]))) : (11 > 83))) - (arr_4 [i_4 + 1] [12] [i_4])));
        var_19 = (max(var_19, 1430695921381423637));
        var_20 = (max(var_20, (((~(arr_15 [i_4 - 1]))))));
    }
    #pragma endscop
}
