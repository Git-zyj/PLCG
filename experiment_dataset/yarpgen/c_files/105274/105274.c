/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105274
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_11 = ((var_3 <= (min((arr_4 [i_1] [i_1]), 0))));
                    var_12 = (arr_0 [i_0 + 1]);
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        var_13 = (arr_6 [i_3]);
        var_14 = (((max((max(var_5, 1)), (arr_2 [i_3] [i_3]))) >= (arr_7 [9] [11])));
    }
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        var_15 = (((((arr_8 [i_4]) / (arr_8 [i_4]))) % ((((arr_9 [i_4]) || (arr_8 [i_4]))))));
        var_16 = (arr_8 [22]);
        var_17 = ((((arr_8 [i_4]) > (arr_8 [i_4]))));
        var_18 = 32424;
    }
    var_19 = var_2;
    var_20 = var_1;
    #pragma endscop
}
