/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180886
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 302678913;
    var_14 = (min(var_14, (((1 ? var_11 : ((min(var_0, -22213319))))))));
    var_15 = (((var_4 ? var_1 : (((min(125, 27298)))))));
    var_16 = var_0;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = ((-(arr_0 [i_0])));
        var_17 -= 1;

        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 14;i_3 += 1)
                {
                    {
                        var_18 = (arr_9 [i_3 - 1] [1] [13] [i_3] [i_3]);

                        for (int i_4 = 1; i_4 < 12;i_4 += 1)
                        {
                            arr_15 [i_0] [5] [i_0] [i_0] [3] [i_0] = ((28812 ? -106 : var_8));
                            arr_16 [i_0] [1] [i_3] [1] = var_3;
                        }
                        for (int i_5 = 1; i_5 < 13;i_5 += 1)
                        {
                            var_19 = (min(var_19, ((((!115) ? var_4 : (!var_0))))));
                            var_20 += ((var_11 ? var_3 : (arr_11 [0] [i_5 + 2] [i_5 - 1] [i_5 - 1] [i_5 - 1])));
                            var_21 = (~var_0);
                        }
                        arr_19 [i_0] [i_0] = (i_0 % 2 == zero) ? (((-(((arr_3 [i_0]) << (((((arr_5 [i_0] [1] [i_0]) + 28417)) - 21))))))) : (((-(((arr_3 [i_0]) << (((((((arr_5 [i_0] [1] [i_0]) + 28417)) - 21)) - 35502)))))));
                    }
                }
            }
            var_22 = (arr_0 [i_1 - 2]);
        }
        var_23 = -25122;
    }
    #pragma endscop
}
