/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135720
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((max(var_1, (998 && var_3))) % var_4));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0] [5] = (((!30569) <= (arr_1 [i_1])));
                arr_6 [i_0] [i_1] [i_1] = -30540;
                arr_7 [1] [i_1] [13] &= 30559;
                arr_8 [i_0] = ((-var_5 ? 30543 : ((~(arr_1 [i_0])))));
            }
        }
    }
    var_19 = ((!((max(var_4, ((8437217418786776757 ? var_13 : var_1)))))));
    var_20 = (~var_5);

    /* vectorizable */
    for (int i_2 = 1; i_2 < 20;i_2 += 1)
    {
        arr_11 [i_2] = -30557;
        arr_12 [0] = (!933499444777464277);
        arr_13 [i_2] [i_2] = ((1 & ((var_5 ? var_3 : (arr_10 [i_2 + 1])))));
        arr_14 [i_2] = var_16;
        arr_15 [i_2 + 2] [i_2 + 2] = var_17;
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        arr_18 [i_3] = (~-var_3);

        for (int i_4 = 3; i_4 < 18;i_4 += 1)
        {
            arr_21 [i_3] [i_3] = -20096;

            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                arr_26 [i_3] [1] = var_16;
                arr_27 [i_3] [i_3] [i_3] [i_3] = 30575;
            }
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    {
                        arr_33 [i_3] = (arr_29 [1] [i_4] [16] [i_7]);
                        arr_34 [i_3] [i_4] [i_4] [i_4] = ((30569 ? (var_8 | var_14) : (!-30539)));
                    }
                }
            }
        }
        arr_35 [i_3] = 3527;
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 19;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 19;i_10 += 1)
                {
                    {
                        arr_44 [i_8] [i_8] [i_10] [i_10] [i_3] = var_1;
                        arr_45 [i_3] [i_10] [i_9] = 30580;
                        arr_46 [i_3] [i_3] [1] [i_10] [i_3] = (var_7 ? (arr_30 [i_3] [i_10] [i_9]) : -30544);
                    }
                }
            }
        }
        arr_47 [i_3] [i_3] = 1;
    }
    #pragma endscop
}
