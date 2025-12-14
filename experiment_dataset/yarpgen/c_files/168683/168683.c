/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168683
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((~(((min(17, var_3)) | (var_12 > var_10)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = (((((max(-1, var_3)))) ? (arr_2 [i_0] [i_0] [i_1]) : (((var_3 * var_9) ? -12 : (arr_0 [i_0] [i_1])))));
                arr_6 [i_0] = (((((((min(-18, var_14))) ? ((170 ? -5 : 0)) : 9223372036854775800))) ? (((-((var_11 ? var_13 : var_4))))) : (max((!var_10), (min(9223372036854775785, var_6))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_16 = (max(var_16, var_10));
                            var_17 ^= ((-27 | (((((25319 ? 1 : -18))) ? 1003395829 : var_5))));
                            arr_11 [i_0] [i_0] [i_0] [i_0] [i_2] [i_2] = ((((min(15535, var_10))) ? ((min((arr_10 [i_3 - 1] [i_3 - 1] [i_3] [i_3] [i_3]), 255))) : (((arr_10 [i_3 + 1] [i_3] [12] [i_3] [i_3]) ? var_8 : var_13))));
                        }
                    }
                }
                var_18 = (max(var_10, ((((min(var_10, var_0))) ? (((var_7 ? var_6 : -120))) : 161))));
            }
        }
    }
    var_19 = (max(var_19, var_12));

    /* vectorizable */
    for (int i_4 = 1; i_4 < 20;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 21;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 20;i_8 += 1)
                        {
                            {
                                arr_25 [2] [i_6] [2] = (arr_17 [i_6]);
                                var_20 ^= (!5712323837581944764);
                            }
                        }
                    }
                    var_21 = (arr_12 [i_4]);
                }
            }
        }
        arr_26 [i_4 + 1] = (((!var_8) && 5));
        var_22 = (((arr_21 [i_4 - 1] [i_4] [6] [19]) ? 249 : var_7));
        arr_27 [i_4] = var_2;
    }

    for (int i_9 = 0; i_9 < 18;i_9 += 1)
    {
        arr_30 [16] = 10162038762246102364;
        var_23 = (~(((((2147483647 ? -3430 : 29629))) ? (arr_9 [i_9] [20] [i_9] [18] [i_9]) : 1880291963)));
    }
    #pragma endscop
}
