/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103643
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= var_11;
    var_13 = var_1;
    var_14 = (min(var_14, 8));

    /* vectorizable */
    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        var_15 = (arr_0 [i_0 + 3]);
        var_16 = (62259 % (arr_1 [i_0 - 4]));
        arr_3 [i_0 + 2] = (((arr_2 [i_0 - 4]) ? (arr_0 [i_0 + 1]) : (arr_1 [i_0 - 4])));
        arr_4 [i_0 - 2] = (arr_0 [i_0 + 3]);
    }
    /* LoopNest 3 */
    for (int i_1 = 1; i_1 < 15;i_1 += 1)
    {
        for (int i_2 = 2; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 16;i_3 += 1)
            {
                {
                    var_17 = (((((arr_0 [i_1 + 2]) / (arr_6 [i_1 + 2]))) % ((min(var_9, (arr_6 [i_1 + 2]))))));

                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        var_18 = 62269;
                        var_19 = (arr_10 [i_1 + 4] [i_1 + 4]);
                        arr_18 [i_1] [i_3 - 1] [i_2 + 1] [i_2 - 2] [i_1] = (((((((((arr_7 [i_1 + 2] [i_1]) & (arr_0 [i_1 + 1]))) <= (arr_0 [i_1 + 2]))))) != var_5));
                    }
                    var_20 = (arr_6 [i_2 + 1]);
                }
            }
        }
    }
    #pragma endscop
}
