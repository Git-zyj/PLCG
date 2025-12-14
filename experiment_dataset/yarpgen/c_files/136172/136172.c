/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136172
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_20 = (~var_9);
        arr_2 [4] [i_0] = (arr_1 [i_0] [3]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = (((arr_1 [i_1] [i_1]) * var_16));
        arr_6 [i_1] [i_1] = var_8;
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    {
                        arr_15 [i_2] = ((-var_12 ? -71 : (((arr_11 [i_1] [i_1] [i_4] [i_1]) % (arr_3 [i_3])))));
                        var_21 = (max(var_21, 20));
                        arr_16 [i_1] [i_2] = ((var_19 - (((var_6 ? (arr_14 [i_1] [i_1] [i_3]) : (arr_1 [i_1] [i_2]))))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        arr_20 [i_5] = (((arr_12 [i_5] [i_5] [i_5] [i_5]) ? 42 : (((var_12 | (arr_7 [i_5]))))));
        arr_21 [i_5] = 42;
        arr_22 [i_5] [i_5] = -29534;
    }
    var_22 = 121205104;
    var_23 = var_17;
    #pragma endscop
}
