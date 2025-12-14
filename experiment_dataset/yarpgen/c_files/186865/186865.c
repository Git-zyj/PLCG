/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186865
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {
                    var_16 = (min(var_16, (((-5685427777720637878 + (arr_6 [i_0] [0] [i_1] [i_2 + 1]))))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        var_17 = (max(var_17, 16139192747843654348));
                        var_18 = (arr_6 [i_0] [i_1] [i_1] [i_3]);
                        var_19 = (2307551325865897267 || 1048649468);
                        var_20 = (0 <= var_5);
                    }
                    var_21 = ((-(((arr_1 [i_0] [i_0]) | var_1))));
                    var_22 = 9800;
                }
            }
        }
    }

    for (int i_4 = 1; i_4 < 22;i_4 += 1)
    {
        var_23 = (max((max((var_13 > var_5), (max(4411301294260484182, 16139192747843654350)))), (((((max((arr_11 [i_4]), (arr_11 [i_4]))))) + (max(17178086211694449634, (arr_10 [i_4 - 1])))))));
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 19;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 22;i_6 += 1)
            {
                {
                    var_24 = (max(var_24, var_11));
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 22;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 23;i_8 += 1)
                        {
                            {
                                var_25 = (((max((max(var_6, var_0)), (arr_12 [i_4 + 1] [20]))) / (((((max(var_9, 14267920511631048433))) ? (((arr_19 [i_7] [i_5] [i_6]) % (arr_20 [i_4 - 1] [19] [i_4 - 1] [i_7] [19]))) : (((arr_13 [i_4 - 1] [i_5]) ? 1058427324 : (arr_18 [i_4 + 1] [i_5] [i_6] [i_4 + 1] [i_8]))))))));
                                var_26 = -1717781292;
                            }
                        }
                    }
                    var_27 = (((max(1048649468, var_1)) + (max(((16139192747843654349 >> (((arr_15 [i_4 - 1]) + 707037150902415571)))), (arr_14 [i_4] [i_4] [i_4] [i_4 - 1])))));
                }
            }
        }
    }
    var_28 = (((!-var_12) ? (((var_11 * var_12) ? var_1 : (var_3 != var_4))) : var_1));
    var_29 = var_9;
    #pragma endscop
}
