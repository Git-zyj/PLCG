/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137977
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_6;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 24;i_3 += 1)
                {
                    {
                        var_11 = (arr_2 [3] [i_2]);
                        arr_12 [24] [i_1] &= ((32765 - (~-584475810)));
                        var_12 = -23542;

                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            arr_15 [i_0] [i_1] [i_2] [i_0] [i_1] = (((((-(arr_4 [i_3] [i_3])))) ? ((~(arr_0 [13] [7]))) : (arr_9 [i_1] [i_2 - 1] [i_3] [2])));
                            arr_16 [i_4] [i_4] [11] [i_2 - 1] [i_4] = (arr_7 [i_1] [i_3] [i_4]);
                            var_13 = (min(var_13, (arr_10 [i_0] [i_0] [i_0] [i_0])));
                        }
                    }
                }
            }
        }
        var_14 &= (arr_13 [i_0] [i_0] [10] [15] [i_0]);
        var_15 *= 28893;
        arr_17 [11] = var_8;
        var_16 = (max(var_16, (arr_2 [i_0] [12])));
    }
    var_17 *= var_2;
    #pragma endscop
}
