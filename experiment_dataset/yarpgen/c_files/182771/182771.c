/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182771
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        var_12 = ((~(arr_5 [i_1] [i_1 - 1] [i_1] [i_1 - 1])));
                        var_13 = var_5;
                        arr_10 [i_0] [2] [i_1] [0] = var_11;
                        var_14 = var_8;
                    }
                    var_15 = (min((~79), ((min(var_5, var_3)))));
                    arr_11 [i_1] = ((!(arr_0 [i_0])));
                }
            }
        }
    }
    var_16 -= var_10;
    #pragma endscop
}
