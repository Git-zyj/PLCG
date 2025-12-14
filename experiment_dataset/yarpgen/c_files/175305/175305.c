/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175305
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_10 * ((max((((-31342 ? -31348 : -31339))), var_15)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = (~106);
                arr_7 [i_0] [i_0] [i_0] = (min(109, 1));
            }
        }
    }

    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        var_17 = ((((+(((arr_9 [i_2]) ? (arr_3 [i_2] [i_2] [i_2]) : var_6)))) % ((min((((arr_0 [i_2]) ? var_9 : var_8)), ((min(-31342, 106))))))));
        arr_10 [i_2] = ((((((arr_4 [i_2] [i_2]) ? var_15 : 129))) && (arr_5 [i_2] [i_2] [i_2])));

        /* vectorizable */
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            var_18 = var_1;
            arr_13 [i_2] [i_2] [i_3] = ((31362 ? 0 : 20));
            arr_14 [i_2] [i_2] = ((106 ? var_6 : var_3));
        }
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            arr_20 [i_4] = -31341;
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    {
                        arr_25 [i_4] [i_4] [i_4] [0] = (236 || 2);
                        var_19 = var_5;

                        for (int i_8 = 0; i_8 < 25;i_8 += 1)
                        {
                            var_20 = (max(var_20, 127));
                            var_21 = (-((var_9 ? -var_0 : -22484)));
                            arr_30 [i_4] [i_5] [16] [i_7] [i_8] = ((31331 >> (-61 + 80)));
                            var_22 += (!-126);
                        }
                        var_23 += var_6;
                        arr_31 [i_4] = (max((~2), (min((arr_2 [i_6]), (min(-1, (arr_23 [i_4] [i_5] [i_6] [i_4] [i_6] [i_6])))))));
                    }
                }
            }
            arr_32 [i_4] [i_4] [i_4] = ((1 < (~106)));
        }
        var_24 = (max(var_24, (((!((max(-75, 1))))))));
    }
    #pragma endscop
}
