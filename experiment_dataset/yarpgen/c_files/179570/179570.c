/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179570
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_12 = (arr_2 [3]);
            arr_5 [i_0] [i_0] [i_0] = (arr_2 [i_0]);
        }
        var_13 = (arr_2 [i_0]);
    }
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        var_14 = (min(var_14, 51492));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 4; i_4 < 13;i_4 += 1)
            {
                {
                    arr_14 [i_2] [i_2] [i_2] [13] = (arr_7 [i_2]);
                    var_15 = (arr_7 [i_3]);
                }
            }
        }
        var_16 = 14038;
    }
    var_17 = var_3;
    var_18 = var_10;
    #pragma endscop
}
