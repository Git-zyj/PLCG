/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108330
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_11 = (((((arr_0 [i_0 + 1]) ? (arr_0 [i_0 + 1]) : (arr_0 [i_0 + 1]))) - (((196 > (arr_0 [i_0 + 1]))))));
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 21;i_4 += 1)
                            {
                                arr_15 [i_0] [19] [1] [i_2] [i_0] [i_1] [i_0] = 8791319817657129045;
                                var_12 = ((!(((((max((arr_10 [i_0] [i_1] [i_1] [i_0]), var_9)))) <= ((162 ? 2673594765183021940 : 31))))));
                                var_13 = ((16725121284972977274 ? (((var_7 ? (arr_5 [i_0 + 1] [i_0 - 1]) : 1))) : ((6129420025727014138 ? -588640382741012377 : 22063))));
                                arr_16 [i_0 + 1] [i_0 + 1] [i_2] [i_3] [i_0 + 1] = (max(((max(21323, (arr_14 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0 + 1])))), (~-29870)));
                            }
                            var_14 = min(224, 14);
                            var_15 = (min(var_15, 4114607236));
                            var_16 = ((((var_8 + (min((arr_14 [i_1] [i_0] [i_1] [i_1] [i_0]), 3291126505540609772)))) * (((max((arr_13 [i_2 - 3] [i_3] [1] [i_2 - 3] [i_3] [i_3] [i_3]), (arr_13 [i_2 - 3] [i_2 - 2] [8] [8] [8] [8] [i_2])))))));
                            arr_17 [i_0] [i_2 + 2] [i_0] = ((((max((arr_13 [i_0] [i_2 - 2] [i_0 + 1] [i_3] [9] [i_0] [i_0 + 1]), (arr_13 [i_1] [i_2 + 1] [i_0 - 1] [i_0 - 1] [5] [i_2 + 1] [i_3])))) + ((max((arr_13 [i_0 - 1] [i_2 + 1] [i_0 - 1] [i_1] [i_0] [i_3] [i_2 + 1]), (arr_13 [i_2] [i_2 - 2] [i_0 - 1] [i_3] [i_1] [i_0 - 1] [i_0 - 1]))))));
                        }
                    }
                }
                arr_18 [i_0] [i_0] [i_1] = var_9;
            }
        }
    }
    var_17 = var_4;
    #pragma endscop
}
