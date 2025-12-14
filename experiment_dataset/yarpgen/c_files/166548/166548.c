/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166548
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (var_8 == var_9);

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_15 = ((((4294967295 >> (1071644672 - 1071644646))) ^ (arr_0 [i_0])));
        arr_4 [i_0] = ((!(((((((arr_0 [3]) ? (arr_2 [i_0]) : (arr_1 [i_0])))) ? (((arr_1 [i_0]) - (arr_2 [i_0]))) : (arr_2 [i_0]))))));
        arr_5 [i_0] = (((~(arr_3 [i_0] [i_0]))) <= (((arr_3 [i_0] [i_0]) | (arr_3 [i_0] [i_0]))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_16 += arr_3 [i_1] [16];
        var_17 = (min(var_17, (arr_6 [i_1] [1])));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 19;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    {
                        arr_15 [i_1] [i_1] [i_1] [i_1] = (((arr_13 [i_1] [i_3 - 1] [i_3] [i_3]) * (arr_13 [i_1] [i_3 - 1] [6] [i_4])));
                        var_18 += (((arr_1 [i_2]) >> (((arr_1 [i_1]) - 1541208926))));
                    }
                }
            }
        }
    }
    var_19 += ((((var_13 / var_9) * var_9)));
    #pragma endscop
}
