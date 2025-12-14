/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177825
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_13 -= (((~2068877534) ? (((var_2 ? var_0 : var_6))) : (min(((var_11 ? var_9 : var_7)), (((var_7 ? var_7 : var_3)))))));
        arr_2 [i_0] [i_0 + 1] = (min(((2479144753 ? 7 : 0)), -var_11));
        var_14 = ((!(((var_1 ? var_7 : var_9)))));
        var_15 = ((((min(var_6, var_0))) ? ((((!((min(var_0, var_9))))))) : var_3));
        var_16 = ((!(((var_6 ? var_5 : var_11)))));
    }
    for (int i_1 = 1; i_1 < 18;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    {
                        var_17 -= (min(((~((var_9 ? var_2 : var_11)))), ((max(((var_7 ? var_8 : var_1)), (~var_6))))));

                        for (int i_5 = 2; i_5 < 18;i_5 += 1)
                        {
                            var_18 ^= (((~var_9) ? (~var_2) : ((var_11 ? var_12 : var_9))));
                            var_19 = ((var_12 ? (((!(((var_10 ? var_0 : var_4)))))) : (!-6294912536469880360)));
                            var_20 = (min(((min(var_10, var_7))), -var_3));
                            arr_16 [i_4] [i_4] = var_6;
                            arr_17 [i_1] [i_1] [i_4] [i_4] [11] [i_1 + 1] [i_1 - 1] = (((((var_4 ? var_10 : var_1))) ? (min(var_9, var_1)) : (!var_8)));
                        }
                        /* vectorizable */
                        for (int i_6 = 3; i_6 < 18;i_6 += 1)
                        {
                            var_21 = var_3;
                            arr_20 [i_4] [i_2] [i_4] [i_4] [i_6] [i_1] [i_4] = ((var_8 ? var_11 : var_7));
                        }
                    }
                }
            }
        }
        arr_21 [i_1] [i_1] = var_5;
        var_22 = ((((min(-2118722545, -2924781215336118917))) ? ((var_0 ? var_3 : var_4)) : -var_1));
    }
    var_23 = (var_7 ? ((((min(var_8, var_4))) ? ((var_10 ? var_11 : var_1)) : var_10)) : ((((!73) ? 0 : 0))));
    #pragma endscop
}
