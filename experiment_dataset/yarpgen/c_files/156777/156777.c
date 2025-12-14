/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156777
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_13 = (max(var_13, ((var_7 ? (((((9963128671309909985 ? (arr_0 [i_1]) : 0))) ? 1473821164275295712 : (arr_1 [i_2]))) : (arr_6 [i_0] [i_1] [11] [i_2])))));
                    var_14 = (min(var_14, var_9));
                    var_15 = var_10;
                }
            }
        }
    }
    var_16 = var_8;
    var_17 = var_2;
    var_18 = var_12;

    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        var_19 = (min(var_19, (((var_8 ? var_3 : var_11)))));
        var_20 = var_6;
    }
    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        var_21 = var_12;

        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        {
                            var_22 = (max(var_22, var_7));
                            var_23 = ((1473821164275295712 ? 4294967295 : 5));
                        }
                    }
                }
            }
            var_24 = var_9;
            arr_23 [i_4] = ((var_5 ? ((16320 ? -1560920560 : 2934247024)) : (arr_4 [i_5] [11] [1])));
        }
        var_25 = (max(var_25, ((((((var_6 ? var_3 : var_10))) ? var_11 : var_5)))));
    }
    #pragma endscop
}
