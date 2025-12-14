/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109687
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_20 = (max(var_20, ((((((arr_1 [8]) ? (arr_3 [i_0]) : var_8))) ? (((((var_16 * var_2) == 3398094992981082114)))) : (((arr_0 [i_0]) ^ 1800048762))))));
                    var_21 = (~15048649080728469502);
                    arr_9 [i_0] [i_0] [i_0] = 2494918534;
                }
            }
        }
    }

    for (int i_3 = 4; i_3 < 14;i_3 += 1)
    {
        arr_12 [i_3] = (arr_4 [i_3] [i_3]);
        /* LoopNest 3 */
        for (int i_4 = 1; i_4 < 12;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    {
                        var_22 *= ((((-((~(arr_8 [i_3 - 4] [6] [i_5]))))) * (!var_14)));
                        arr_20 [i_3] [i_3] [i_5] [i_6] = (((arr_19 [i_3] [i_3] [i_3] [i_3 - 3]) < (((!(arr_19 [i_3] [i_3] [i_3 - 1] [i_3 - 1]))))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 19;i_7 += 1)
    {
        var_23 = 0;
        var_24 = 1;
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 19;i_9 += 1)
            {
                {
                    var_25 *= var_13;
                    var_26 = (((arr_24 [i_7] [i_7] [i_9]) ? var_8 : 22584));
                }
            }
        }
    }
    #pragma endscop
}
