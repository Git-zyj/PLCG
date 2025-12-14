/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16105
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((max((min(4858477268282361640, 2620442397667613642)), (~-106)))) ? (((var_3 ? (!var_2) : (24198 == var_7)))) : (-1546458574 >= 2017246448));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    var_18 *= ((arr_1 [i_0] [6]) | 1075759354);

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        arr_10 [i_0] [i_0] [i_0] [i_0] [3] [1] = (var_15 >= 6517627020156066918);
                        var_19 ^= ((var_4 - ((var_3 >> (67649253 - 67649231)))));
                        var_20 = (-16729333642343195559 ? (arr_8 [i_1] [i_1 + 4] [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1]) : var_12);
                    }
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        arr_13 [i_0] [i_0] [i_2] [i_2] = (var_3 ? ((var_0 ? var_0 : var_7)) : (arr_6 [i_0] [i_1 - 2] [i_0] [i_4]));
                        var_21 = 0;

                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            var_22 = var_3;
                            var_23 = (-48 & (arr_1 [i_0] [6]));
                        }
                        var_24 = ((!(arr_4 [i_4] [i_0])));
                    }
                }
                arr_16 [i_0] [i_0] [i_1] = arr_5 [i_0] [i_0];
                arr_17 [9] [i_1] [i_1] = ((150 ? 11929117053553484692 : (arr_12 [i_0] [i_1 + 2] [i_1 - 1] [i_1] [i_1] [i_0])));
                arr_18 [i_0] = var_10;
            }
        }
    }
    var_25 = (1 <= 0);
    var_26 = (((((6517627020156066918 ? var_7 : var_8))) && var_8));
    var_27 |= var_1;
    #pragma endscop
}
