/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110575
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        var_19 = -0;
                        var_20 = (arr_10 [i_1] [i_3]);
                    }
                    for (int i_4 = 2; i_4 < 13;i_4 += 1)
                    {
                        arr_15 [i_1] [i_1] [i_0] [i_4] [i_4] = (~1);
                        var_21 = ((((max((max(-854117432631299496, 1)), ((max((arr_12 [i_0] [i_1] [i_2] [i_4 - 1] [i_1] [i_0]), -30035678)))))) ? (((31214 ? -8935867249221360313 : (arr_3 [i_2])))) : (max(1, 2737912066527637535))));
                        var_22 = (((arr_5 [i_2]) >> (255 - 244)));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        var_23 = 917433279;
                        var_24 = 1;
                        var_25 = (((arr_14 [i_0]) ? ((55951 ? 14 : 55949)) : (arr_5 [i_0])));
                        var_26 = (arr_0 [i_0]);
                        arr_18 [i_0] [i_0] [i_0] [i_5] = ((1793517224 ? -817178580 : 1));
                    }
                    var_27 = (max(var_27, (!4263484441)));
                }
            }
        }
    }
    var_28 = ((((2737912066527637544 ? 0 : 6080693663903171534))));
    #pragma endscop
}
