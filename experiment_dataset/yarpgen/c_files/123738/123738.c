/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123738
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max((63488 / -1652247646), ((19287 / (min(19287, var_10))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_20 = ((((arr_1 [i_0] [i_1]) + (!32759))));
                var_21 = (((min(0, 537214136)) >= ((min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))))));
            }
        }
    }
    var_22 = var_0;
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 24;i_4 += 1)
            {
                {
                    var_23 *= 6436830873396746114;

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        var_24 = var_18;
                        arr_21 [13] [i_3] = (var_15 + 4979671142058698598);
                        var_25 &= 53578;
                        var_26 *= (arr_13 [i_2 - 2]);

                        for (int i_6 = 1; i_6 < 24;i_6 += 1)
                        {
                            var_27 *= (!2081488388623468797);
                            var_28 = (((arr_10 [i_6]) / (32744 | var_7)));
                            var_29 = (6436830873396746109 ? 7158140610186169888 : (arr_24 [i_3] [i_3 + 1] [i_3] [i_3 - 1] [i_3 + 3]));
                        }
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            arr_27 [i_4] [i_3] [i_4] [i_5] [i_7] = ((29267 ? var_18 : var_15));
                            var_30 *= ((((((arr_16 [i_2 + 1] [i_3 + 3] [i_4 + 1] [i_5]) ? var_11 : 112))) && (var_16 != 13)));
                            arr_28 [i_2 - 1] [i_2 - 1] [i_4] [i_5] [i_7] = ((var_12 >= (arr_10 [i_7])));
                        }
                        for (int i_8 = 0; i_8 < 25;i_8 += 1)
                        {
                            var_31 = (((arr_12 [i_3]) + var_6));
                            arr_33 [i_2] [i_3] [i_4] [i_5] [i_5] = ((var_16 | (arr_22 [i_3] [i_3] [i_3 - 1] [i_3 + 1] [i_3 + 2])));
                            var_32 = (min(var_32, 6639612454855264291));
                            var_33 = (max(var_33, ((((arr_26 [i_2] [i_2] [i_4 + 1] [i_2]) | (arr_19 [i_2 - 1] [i_3 + 2]))))));
                        }
                    }
                    arr_34 [i_2] [i_2] = (!var_4);
                }
            }
        }
    }
    #pragma endscop
}
