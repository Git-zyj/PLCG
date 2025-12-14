/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107128
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {

            /* vectorizable */
            for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
            {
                var_17 = var_14;
                var_18 = ((var_13 ? var_13 : var_1));
                var_19 = ((var_8 ? var_0 : var_14));
                var_20 = (max(var_20, var_13));
            }
            for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
            {

                for (int i_4 = 2; i_4 < 23;i_4 += 1)
                {
                    var_21 = var_13;
                    var_22 = (max((~var_12), var_11));
                    arr_11 [i_0 + 1] [i_1] [i_4] [5] = ((1704015597 ? 0 : var_13));
                    var_23 = (((((var_11 ? var_7 : var_6))) ? (((var_10 ? var_11 : var_5))) : var_15));
                }
                var_24 = (min(var_24, var_10));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 23;i_6 += 1)
                    {
                        {
                            arr_18 [i_0] [i_1] [6] [i_3] [i_5] [i_6] = (max((((!((max(-739690028, -19440)))))), (max(((max(-16393, 73))), var_12))));
                            var_25 = (~var_10);
                            arr_19 [i_0] [i_1] [i_3] [i_5] [4] = (((((var_16 ? var_14 : var_10))) ? (((var_16 ? var_9 : ((min(var_8, var_5)))))) : (~var_4)));
                        }
                    }
                }
                arr_20 [i_0 + 1] [22] [i_3] [i_3] = (((((var_11 ? var_15 : var_1))) ? (max(var_3, (min(var_1, var_4)))) : var_8));
            }
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                arr_23 [i_0] [i_0] [i_1 - 1] [i_7] = var_4;
                arr_24 [i_0] [i_1] [i_7] [i_7] = -var_11;
                var_26 ^= ((var_1 ? ((min(0, 89))) : var_6));
            }
            arr_25 [i_1 + 1] [i_1] [i_0] &= var_3;
        }
        arr_26 [i_0] [i_0] = var_13;
        var_27 = var_6;
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 18;i_8 += 1)
    {
        for (int i_9 = 2; i_9 < 16;i_9 += 1)
        {
            {
                var_28 = (((!var_5) ? (!var_2) : (!var_1)));
                arr_33 [i_9] = var_16;
            }
        }
    }
    #pragma endscop
}
