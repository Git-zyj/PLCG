/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112567
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (!var_15);

    for (int i_0 = 4; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        arr_13 [i_0] [i_1] [i_1] [i_2] [0] [i_3] = ((((arr_4 [i_0 - 4]) ? var_10 : (arr_4 [i_0 - 4]))));
                        arr_14 [0] [i_2] = ((1 ? (((-21989 ? -20 : -20))) : (((min(-1, (arr_10 [i_0] [i_0] [i_0] [i_0]))) + (arr_6 [0])))));
                    }
                    for (int i_4 = 2; i_4 < 23;i_4 += 1)
                    {
                        arr_18 [i_0] [i_0] [i_0] [i_4] = ((38460 + (arr_1 [i_0])));
                        arr_19 [i_0] [i_1] [0] [i_1] [i_0] = (min(((((1 > var_2) | ((-(arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))), (((var_4 ? var_18 : var_7)))));
                        arr_20 [16] = var_10;
                    }
                    for (int i_5 = 3; i_5 < 22;i_5 += 1) /* same iter space */
                    {
                        arr_23 [i_0] [i_0] [i_2] [i_0] [i_5] [i_2] = (var_0 ? -7637977601844477515 : 1);
                        arr_24 [i_0] = (arr_0 [i_2]);
                    }
                    for (int i_6 = 3; i_6 < 22;i_6 += 1) /* same iter space */
                    {
                        arr_29 [i_6] [0] [0] [i_0] = (~1792);
                        arr_30 [i_0] [6] [i_2] [i_2] [i_6] = (!1);
                        arr_31 [i_0] [i_1] [i_1] [i_2] [i_0] [i_6] = (((min((arr_12 [i_0] [i_0] [i_0] [i_6 - 1] [i_6]), 1)) < 672113109013331696));
                    }
                    arr_32 [i_0] = (((((arr_5 [i_1] [i_2 + 1] [i_0]) * (var_2 != var_4))) > -var_18));
                }
            }
        }
        arr_33 [4] = ((max((((var_12 ? 1 : var_9))), var_0)) > var_17);
        arr_34 [i_0] [i_0] = (~var_11);
    }
    var_20 = var_16;
    #pragma endscop
}
