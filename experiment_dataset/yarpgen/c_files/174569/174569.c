/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174569
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_4;
    var_19 = var_7;
    var_20 = var_11;

    /* vectorizable */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 12;i_3 += 1)
                {
                    {
                        arr_13 [i_3 - 1] [i_0] [i_0] [i_0] = ((var_12 ? var_16 : -var_13));
                        var_21 = 1;
                        arr_14 [10] [i_1] [i_0] [11] [10] [13] = ((-(231 >= -34)));
                    }
                }
            }
        }
        arr_15 [i_0] = (arr_12 [i_0] [i_0 - 2] [i_0 + 3] [i_0] [i_0] [i_0]);
    }
    for (int i_4 = 1; i_4 < 23;i_4 += 1)
    {
        var_22 += (255 ? (arr_17 [i_4]) : ((var_3 ? var_11 : (min(var_14, (arr_16 [i_4]))))));
        var_23 = (min(0, 76));
        arr_18 [i_4] [i_4 - 1] = 22;
    }
    for (int i_5 = 2; i_5 < 21;i_5 += 1)
    {
        var_24 = (min(11, (arr_21 [i_5 - 2])));
        var_25 = ((arr_21 [i_5]) ? (--2184951354350367733) : (((-(max(1, 11))))));
        var_26 = -1732125888;
    }
    #pragma endscop
}
