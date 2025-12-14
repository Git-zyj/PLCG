/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133808
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((var_0 ? ((var_6 ? var_6 : var_0)) : var_6))) ? var_2 : var_6));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_11 = ((max(var_1, var_0)));
                    var_12 &= ((((min(var_3, var_7))) ? var_9 : var_4));
                    var_13 = (max(((var_0 ? ((min(var_7, var_2))) : (~var_7))), ((-((var_5 ? var_9 : var_3))))));
                }
            }
        }

        /* vectorizable */
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            var_14 = var_7;
            var_15 = ((var_4 ? var_8 : ((var_3 ? var_0 : var_7))));
            var_16 = (!var_7);
            var_17 = var_4;
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        {
                            var_18 = -var_8;
                            var_19 |= ((~(var_1 - var_0)));
                        }
                    }
                }
            }
            var_20 ^= 523776;
            var_21 = (!var_1);
            var_22 = -var_2;
        }
        for (int i_8 = 0; i_8 < 21;i_8 += 1)
        {
            var_23 = -var_0;
            var_24 -= ((((min(var_7, var_9))) ? (((min((max(var_7, var_9)), var_4)))) : var_0));
        }
        var_25 -= ((max((min(var_7, var_8)), var_7)));
        var_26 = (((((min(var_9, var_0)))) ? (~var_9) : (((!(var_1 && var_8))))));
    }
    for (int i_9 = 0; i_9 < 19;i_9 += 1)
    {
        var_27 = (((var_2 ? -var_5 : var_4)));
        var_28 |= (((var_4 ? var_0 : var_2)));
        arr_26 [i_9] = var_4;
    }
    var_29 = (max(var_29, (((-var_4 ? ((((33292288 ? 1924955863 : -1732381841)))) : var_2)))));
    var_30 = var_0;
    #pragma endscop
}
