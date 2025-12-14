/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142776
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((135 == 1) ? ((min(237, 100))) : ((((min(var_12, var_16))) << ((((max(var_0, var_0))) - 40942))))));
    var_20 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_21 = min(1179559548, 121);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_22 = (92 == 2646);
                                var_23 |= (((var_7 && var_10) / (max(var_9, var_1))));
                                var_24 = ((((((max(var_18, var_0))) ? var_0 : ((max(var_16, var_2))))) / var_10));
                            }
                        }
                    }
                }
                var_25 = (max(var_25, ((max((((var_7 == var_18) ? var_16 : ((var_12 ? var_11 : var_11)))), ((((64873 << (((-6 + 34) - 24)))) ^ ((min(var_2, var_2))))))))));
                var_26 = max(14706, var_7);
            }
        }
    }

    for (int i_5 = 2; i_5 < 19;i_5 += 1)
    {
        var_27 = ((((var_8 << ((((max(var_3, var_16))) - 243)))) | ((((min(var_13, var_14)) == (min(var_18, var_16)))))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 21;i_9 += 1)
                        {
                            {
                                arr_27 [i_5] [i_6] [i_6] [i_6] [i_9] = (((((((var_5 ? var_1 : var_13)) * var_7))) ? (((var_1 == var_3) ? ((min(var_11, var_11))) : var_15)) : (((var_10 && (((-927542560 ? 24 : 1))))))));
                                arr_28 [i_6] [17] [i_7] [i_8] [i_7] = (((-127 - 1) ? 85 : 166));
                            }
                        }
                    }
                    arr_29 [i_6] = (((((((((var_10 ? var_1 : var_6))) && (((var_13 << (var_14 - 35298)))))))) ^ (((((var_1 ? var_18 : var_10))) ? (var_2 == var_11) : (max(var_17, var_13))))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_10 = 1; i_10 < 22;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 23;i_11 += 1)
            {
                {
                    arr_35 [i_10] = ((((var_18 >= var_3) ? ((1 ? 6 : -694039248)) : ((max(var_6, var_15))))) / (min(((var_14 << (((var_7 + 133) - 10)))), ((max(var_5, var_4))))));
                    arr_36 [i_5] [i_10] [11] = (((var_6 && var_10) < ((max(var_2, var_12)))));
                }
            }
        }
    }
    for (int i_12 = 0; i_12 < 18;i_12 += 1)
    {
        var_28 = (min(var_28, (max((min(9614084963300578972, (((229 ? 85 : 84))))), ((((((max(1, 29340)))) * (var_1 - var_11))))))));
        var_29 -= (max(var_16, ((((min(var_6, var_9))) ? (var_16 ^ var_9) : ((min(var_2, var_4)))))));
        arr_40 [i_12] = (max((min((max(117, -59)), var_5)), ((((var_1 | var_1) == var_16)))));
    }
    #pragma endscop
}
