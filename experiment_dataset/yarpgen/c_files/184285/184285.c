/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184285
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_12 = ((13888397231350950666 << (13888397231350950667 - 13888397231350950625)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_13 = (max(var_9, ((max((!var_4), var_2)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_14 = ((~((var_0 ? var_4 : var_10))));
                                arr_14 [i_3] [i_1] [i_2] [i_2] [i_3] [i_1] = ((-var_7 ? ((((min(var_2, var_6))) ? (max(var_5, var_10)) : (((var_4 ? var_8 : var_6))))) : ((((max(var_1, var_8))) ? (((min(var_7, var_7)))) : ((var_6 ? var_4 : var_5))))));
                            }
                        }
                    }
                    var_15 = (((var_7 / var_10) ? -var_10 : (((((((var_0 + 2147483647) << (var_7 - 19394)))) ? var_0 : -var_1)))));
                }
            }
        }
        arr_15 [i_0] = (min(1663961690263139701, -2223037261125144048));
        arr_16 [i_0] = ((((var_2 ? var_8 : var_7)) / ((var_1 ? ((max(var_7, var_6))) : var_7))));
    }
    var_16 = (((((((((var_0 + 2147483647) >> var_6))) ? var_4 : -var_11))) ? ((max(var_11, var_0))) : (((~var_7) ? (var_3 - var_4) : ((var_0 ? var_7 : var_11))))));
    var_17 = ((min((min(var_10, var_9)), ((var_6 ? var_5 : var_4)))));
    #pragma endscop
}
