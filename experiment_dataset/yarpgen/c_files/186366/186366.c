/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186366
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_14 ? var_15 : (((((var_9 ? 5692819849535440331 : 13845212101041161723))) ? ((67 ? var_10 : 3079264999)) : 15))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_17 = (arr_1 [i_0 - 2]);
        var_18 = ((var_12 > ((1 ? -4277084392824758024 : 1))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 10;i_3 += 1)
                {
                    {
                        var_19 = 3579959279;
                        var_20 = (~var_10);
                    }
                }
            }
        }

        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            var_21 = ((65500 ? var_8 : 13845212101041161729));
            var_22 = 4095;
            arr_14 [i_0] [i_4] [i_0] = (arr_0 [i_0]);
        }
    }
    var_23 = ((var_4 ? (-9223372036854775800 / -var_11) : 114));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            {
                var_24 = (max(var_24, var_1));
                var_25 = (arr_6 [i_5]);
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 19;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 18;i_9 += 1)
            {
                {
                    arr_30 [i_8] [18] [i_8] = ((((max((arr_28 [i_7] [i_8] [i_9]), ((var_3 ? 10256 : var_4))))) >= ((((((arr_27 [i_8]) ? 1 : var_14))) ? 15727778645308597184 : 10708438628095898474))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 19;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            {
                                var_26 = 1;
                                var_27 = ((((((1 && 4206125270) ? (1 != 1) : (~1)))) ? var_14 : var_12));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
