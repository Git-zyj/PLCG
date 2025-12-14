/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188935
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_19 = var_11;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_14 [4] [8] = ((var_6 ? (max((arr_6 [i_4 - 1] [15] [i_0] [i_0]), 6531721905650032906)) : var_2));
                                var_20 = (((arr_4 [i_0]) < var_13));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 7;i_7 += 1)
            {
                {
                    arr_25 [i_5] [5] [i_5] = arr_2 [i_5];
                    arr_26 [i_5] [i_5] [i_6] [i_5] = var_3;
                }
            }
        }
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 10;i_8 += 1)
        {
            for (int i_9 = 3; i_9 < 9;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 10;i_10 += 1)
                {
                    {
                        var_21 = var_11;
                        var_22 += (((max((arr_30 [i_10] [i_9] [3]), var_9))) ? ((131072 / (arr_16 [i_5] [i_5]))) : var_16);
                        var_23 = (min(var_18, (arr_0 [i_9 - 1])));
                    }
                }
            }
        }
        var_24 -= 119;
        var_25 = var_10;
    }
    for (int i_11 = 0; i_11 < 11;i_11 += 1)
    {
        var_26 = max((((~(arr_37 [i_11])))), (max((arr_1 [14]), var_14)));
        var_27 = ((-var_6 ? var_14 : (((((arr_36 [i_11]) && var_4))))));
    }
    var_28 &= (((var_15 & (min(-4399167376383974460, 4251372108299246555)))));
    var_29 = var_1;
    var_30 |= (131072 ? -1 : 4294967295);
    #pragma endscop
}
