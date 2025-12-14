/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16055
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = -53128;
    var_15 = 3202;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_6 [9] [23] [i_2] [i_0] = (arr_5 [i_1] [2] [i_1 + 2] [7]);

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            var_16 = (!178);
                            var_17 *= ((var_1 & ((65529 | (arr_2 [i_2] [i_2] [i_2])))));
                        }
                        var_18 = (arr_10 [9] [i_1] [9] [9] [i_3]);
                    }
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {

                        for (int i_6 = 1; i_6 < 21;i_6 += 1)
                        {
                            var_19 ^= -679763697;
                            var_20 = max(var_0, -1);
                            var_21 = ((-119 ? ((var_13 ? (arr_5 [i_0] [12] [i_5] [i_5]) : 7)) : ((0 - ((var_2 ? 7 : var_12))))));
                            var_22 = (min((~var_3), 3920513555));
                        }
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            arr_18 [i_0] [20] [i_2] [i_5] [24] [20] [i_0] = 1024289098;
                            var_23 -= var_5;
                        }
                        var_24 = var_9;

                        for (int i_8 = 0; i_8 < 25;i_8 += 1)
                        {
                            var_25 = (((((1 >= (((0 > (arr_3 [18]))))))) != ((0 ? 24843 : 14027))));
                            var_26 = var_8;
                        }
                    }
                    for (int i_9 = 0; i_9 < 25;i_9 += 1)
                    {
                        arr_25 [i_0] [i_1 + 3] [i_9] [i_9] [i_1 - 1] = (~1);
                        var_27 = ((+(((((3920513548 ? (arr_24 [i_0] [i_0] [i_0] [i_0] [i_9] [2]) : -1))) ? (var_4 || 9223372036854775807) : var_12))));
                    }
                    var_28 = (min(-27120, ((((arr_2 [i_1 + 1] [i_1 + 3] [i_0]) || (arr_2 [i_1 + 2] [i_1 + 3] [i_1]))))));
                }
            }
        }
    }
    #pragma endscop
}
