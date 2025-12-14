/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129131
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((max(1, 1835008)) != var_2)) ? var_0 : var_17));
    var_19 = ((var_7 ? -5766428067183837546 : 1));
    var_20 = (!1);
    var_21 = 1;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = 1;
        arr_4 [17] [5] = 1419005664;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        arr_7 [i_1] = -31335;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                {
                    var_22 = (((((4503599627370495 ? var_12 : 3875))) ? ((1 ? 1 : 2744806455709388876)) : (arr_8 [i_3])));

                    for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
                    {

                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            var_23 = (min(var_23, (arr_13 [i_1] [16] [i_1])));
                            arr_17 [i_4] [i_3] [i_2] [i_1] = (((-38 ? 71 : 3875)));
                            var_24 = ((~((1 / (arr_8 [22])))));
                        }
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            arr_20 [i_1] [9] [i_4] [17] = (arr_16 [20] [i_2] [23] [23] [i_2]);
                            arr_21 [i_1] [i_2] [i_6] [i_4] [i_3] = var_14;
                            var_25 = (1 * 0);
                            var_26 = ((arr_14 [i_1] [4] [i_6] [i_4]) ? (arr_14 [7] [i_2] [i_3] [7]) : 1357557862259286736);
                        }
                        var_27 = (!1);
                        arr_22 [i_4] [4] = (((arr_9 [21] [i_2] [10]) ? (arr_14 [13] [i_3] [i_2] [13]) : (arr_8 [i_3])));
                        arr_23 [i_4] [i_1] [i_2] [i_1] = -22525;
                    }
                    for (int i_7 = 0; i_7 < 25;i_7 += 1) /* same iter space */
                    {
                        arr_26 [7] [i_2] = ((-1419005665 ? (arr_10 [i_1]) : (arr_10 [i_1])));
                        var_28 *= (arr_12 [i_1] [i_1] [i_2] [i_3] [i_7] [i_1]);
                        var_29 = (((!-72) ? 4382042561479336419 : (1357557862259286736 && var_2)));
                    }
                    var_30 = (arr_13 [0] [i_2] [i_3]);
                }
            }
        }

        for (int i_8 = 0; i_8 < 25;i_8 += 1)
        {
            var_31 = ((((((arr_18 [i_1] [2] [i_1]) ? (arr_16 [18] [18] [i_8] [i_8] [i_8]) : (arr_16 [i_1] [i_8] [i_8] [i_8] [i_1])))) ? (arr_18 [i_8] [i_8] [i_1]) : ((~(arr_8 [i_1])))));
            var_32 = ((3 ? 32768 : 127));
            arr_29 [i_8] [i_8] [i_1] = (arr_25 [i_1] [i_1] [i_8] [i_8] [i_8]);
            var_33 = (arr_18 [i_8] [i_8] [i_8]);
            arr_30 [i_1] [i_8] [i_8] = (((arr_13 [12] [4] [i_1]) ? (((~(arr_13 [i_8] [i_1] [12])))) : (arr_9 [i_8] [i_8] [i_1])));
        }
        var_34 *= arr_13 [i_1] [i_1] [i_1];
        var_35 = (~(arr_5 [i_1]));
    }
    #pragma endscop
}
