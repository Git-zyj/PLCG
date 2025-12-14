/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111774
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        arr_4 [i_0] = ((-((var_0 ? 52001 : (arr_3 [i_0 - 1] [i_0 - 1])))));
        var_19 = (min(var_19, ((((((5461319987759012033 ? 1 : 9))) ? -134217664 : ((66977792 ? (var_18 / 4160749621) : 0)))))));
    }

    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_20 = (((var_17 ? (var_9 == -1848718080) : -5461319987759012043)) ^ ((((!(arr_3 [i_1] [i_1]))))));
        var_21 += ((((257551347 && (!var_18))) || 524160));
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] [i_2] = (~0);
        var_22 = (max(var_22, ((((arr_8 [i_2]) ? -var_8 : ((-707597492 ? (arr_3 [i_2] [i_2]) : var_11)))))));
        var_23 *= (((var_0 | var_2) ? (max(18097862267385061111, var_18)) : var_8));
    }
    for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
    {
        var_24 |= 4160749639;
        var_25 = ((-((524164 >> (17245 - 17222)))));
        arr_12 [i_3] [i_3] = ((-(((((var_17 ? var_15 : var_11))) ^ (arr_1 [i_3])))));
    }
    for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 9;i_6 += 1)
            {
                {
                    arr_24 [i_4] [i_5] [i_5] = var_13;
                    arr_25 [10] [i_5] [i_6] = ((-var_5 ? (var_9 / var_15) : (min(51838, ((var_16 ? -755130156 : var_11))))));
                }
            }
        }

        for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
        {
            var_26 = var_11;
            var_27 = (((var_16 & var_4) ? ((((((arr_27 [i_4] [i_4]) ? 1 : var_6))) ? ((var_8 ? (arr_17 [i_7]) : var_7)) : ((min((arr_26 [i_4] [i_4]), (arr_28 [i_4])))))) : -var_3));
            arr_29 [i_4] [i_4] [i_4] |= 139;
            var_28 = 134217664;
        }
        for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_9 = 2; i_9 < 8;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 11;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 11;i_11 += 1)
                    {
                        {
                            arr_40 [i_9] [i_9] [i_9] [10] [i_9] [i_10] = var_10;
                            var_29 = (-755130156 > 134217654);
                            var_30 = 45690;
                            var_31 = ((max(((var_4 == (arr_23 [i_4] [i_8] [i_9 + 1]))), (!var_1))));
                        }
                    }
                }
            }
            var_32 = (((((((max((arr_31 [i_4] [i_8]), (arr_32 [i_4] [i_4] [i_8])))) ? var_8 : (var_10 / var_5)))) ? (max(-9106090496156607237, ((var_2 ? 255 : (arr_23 [i_4] [i_4] [i_8]))))) : (((var_14 * 348881806324490522) ? 13519 : var_17))));
            var_33 = ((((var_5 % ((3893572925206970797 ? var_12 : var_11))))) ? ((707597492 ? (arr_23 [i_4] [i_4] [i_8]) : var_4)) : (((134217674 ? 178582692 : var_16))));
        }
    }
    #pragma endscop
}
