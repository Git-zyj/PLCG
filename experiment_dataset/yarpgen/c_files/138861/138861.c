/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138861
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_3 ? var_1 : var_7));

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        var_12 = ((arr_1 [i_0 - 1]) & ((min(-175651325, var_4))));
        var_13 = (max(459706392, var_7));
        var_14 -= var_8;
        var_15 = var_8;
        var_16 = (max(var_16, (((-((min(14874, var_7))))))));
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 21;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 22;i_4 += 1)
                {
                    {
                        arr_11 [1] [i_4] [10] [i_4 - 1] = (arr_5 [i_4 - 1]);
                        arr_12 [8] [i_4] = (!var_10);
                        var_17 = (max(var_17, ((~(arr_9 [i_2])))));
                    }
                }
            }
        }
        var_18 = 533867108377564104;
    }
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 1; i_6 < 15;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 17;i_8 += 1)
                {
                    {
                        var_19 -= (max(var_10, (((-13973 ? -4949 : -4949)))));
                        arr_25 [5] [7] [5] [i_8] = ((((max((max((arr_23 [i_5] [i_5] [i_6] [12] [6] [i_8]), var_9)), (459706388 | 479335600)))) ? (~-29475) : -533867108377564104));
                        arr_26 [0] [i_6] [0] [i_6] = arr_21 [i_6 + 1];
                    }
                }
            }
        }
        arr_27 [i_5] = var_1;
    }
    #pragma endscop
}
