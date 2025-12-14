/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171644
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0] [i_0]);
        var_13 -= (min(((min((148956556 / var_4), ((((arr_1 [i_0] [18]) / (arr_0 [12]))))))), (min((((arr_0 [10]) ? var_7 : var_10)), (206 | var_5)))));
        arr_3 [i_0] = ((var_1 | ((76 ? 1252366000 : 14008794424510203787))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 24;i_1 += 1)
    {
        var_14 = (max(var_14, ((((!195) || 195)))));
        var_15 += var_2;
        var_16 = -15168;
    }
    for (int i_2 = 4; i_2 < 14;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                arr_13 [i_2 + 1] [i_3] = var_0;
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        {
                            var_17 -= (arr_1 [i_2 - 1] [i_5]);
                            var_18 += (((((-860648597 ? 1511364078 : 679725204))) | (arr_19 [i_2 + 1] [i_3] [i_4] [i_5] [i_2 - 4])));
                            var_19 = ((~(max((arr_18 [i_3] [i_3]), var_1))));
                            arr_20 [i_4] [i_3] [i_3] [i_4] [i_3] = var_7;
                        }
                    }
                }
            }
            var_20 = ((+(((arr_4 [i_3]) / ((154976371 ? (arr_16 [i_2 + 1]) : (arr_1 [i_3] [i_3])))))));
            arr_21 [i_3] = (((-1481105389 ? (arr_16 [i_2 - 4]) : 26213)));
        }
        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {
            var_21 = ((!(((((min(var_0, var_4))) ? 12299488667663732194 : -63)))));
            var_22 = (max(var_22, ((min((((var_5 | (1 | 72)))), 15898225113049205680)))));
            var_23 += (-2136041932 | -712361604);
            var_24 += (~394);
        }
        arr_25 [i_2 - 2] = (arr_6 [i_2 - 1]);
        arr_26 [i_2 - 4] = (max(25822, ((~(3251090112 | -839846462)))));
        var_25 = (860648596 ? 14791928419375606595 : 24849);
        var_26 = (((arr_14 [i_2 - 4] [i_2 - 4] [i_2 - 4] [i_2 - 4] [10]) | var_5));
    }
    var_27 = (((((var_8 | var_3) | var_5)) | var_8));
    #pragma endscop
}
