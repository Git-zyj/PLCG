/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137094
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_7;
    var_18 = var_15;
    var_19 = 0;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_20 = (max(((((arr_2 [i_0]) ? var_0 : (arr_2 [i_0])))), (((arr_0 [i_0]) / 45))));
        arr_4 [5] = (((((arr_0 [i_0]) ? -52221893 : 13687582612331774622))));
        arr_5 [1] [i_0] = ((-((min((arr_1 [5] [i_0]), (arr_1 [i_0] [i_0]))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    {
                        var_21 = (max(var_21, (((127 > (arr_14 [i_1] [i_1] [i_1] [i_2] [i_3 - 1] [13]))))));

                        for (int i_5 = 2; i_5 < 15;i_5 += 1)
                        {
                            var_22 = (min(var_22, 59941));
                            var_23 *= ((!(arr_17 [i_2 + 1] [i_2] [i_5 - 1])));
                        }
                        var_24 = (((arr_18 [i_1] [i_2 - 1] [i_2 - 1] [2] [i_2 - 1]) | ((-88 ? (arr_14 [i_2] [i_3] [i_2] [i_2] [i_2] [i_1]) : 806373712))));
                        var_25 = var_16;
                        var_26 -= (arr_9 [i_2 + 1]);
                    }
                }
            }
        }
        var_27 = (arr_6 [i_1] [i_1]);
        var_28 = (((arr_11 [i_1]) ? 157 : (arr_11 [i_1])));
    }
    var_29 *= (!var_2);
    #pragma endscop
}
