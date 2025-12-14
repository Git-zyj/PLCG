/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156261
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (~var_0);

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_5 [1] = 1;
            arr_6 [i_0] = ((var_11 <= 1) <= var_16);
        }
        arr_7 [1] = -1;
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_11 [i_2] = 0;

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            arr_15 [i_3] = var_16;
            arr_16 [i_2] [i_3] [i_3] = (!(arr_8 [i_2] [i_2]));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 1;i_6 += 1)
                {
                    {
                        arr_23 [i_5] = 0;
                        arr_24 [i_5] [i_6] = arr_9 [i_2] [i_4];
                        arr_25 [i_5] [i_4] [i_4] [i_4] = -1;
                    }
                }
            }
            arr_26 [i_2] [i_4] = arr_8 [i_2] [i_2];
        }
        arr_27 [i_2] = ((((((((arr_10 [i_2]) ? (arr_10 [i_2]) : var_9))) ? 1 : (1 + 1))) | (((0 ^ 0) ^ ((var_15 ? 1 : 1))))));

        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            arr_31 [i_2] [i_2] [i_7] = 1;
            arr_32 [i_2] [1] = ((((max((arr_30 [i_2] [i_2]), 1))) <= -1));
            arr_33 [1] = (((((!(1 & 1)))) | (~var_12)));
        }
    }
    for (int i_8 = 0; i_8 < 0;i_8 += 1)
    {
        arr_38 [1] |= ((~((max(var_1, var_12)))));
        arr_39 [i_8] = 0;
        arr_40 [0] = (max((max(1, 1)), (!var_11)));
    }
    var_18 = (~var_14);
    #pragma endscop
}
