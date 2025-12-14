/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177066
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        var_16 = -var_0;
                        var_17 = var_10;
                        var_18 = (arr_2 [i_0 - 2]);

                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            var_19 = arr_10 [i_0 - 1] [i_1] [i_2] [i_3] [i_4];
                            var_20 = (((var_9 >= var_15) != ((((arr_10 [i_4] [i_4] [i_2] [i_3] [i_4]) && var_11)))));
                            var_21 |= 1;
                            var_22 = ((~(arr_0 [i_2])));
                        }
                        for (int i_5 = 1; i_5 < 18;i_5 += 1)
                        {
                            var_23 = (min(var_23, (((-(arr_6 [i_0] [i_0 - 2]))))));
                            arr_13 [i_5] [i_2] [i_2] [i_2] [i_0] = ((~(arr_2 [i_2])));
                        }
                        for (int i_6 = 4; i_6 < 20;i_6 += 1)
                        {
                            var_24 = (((((arr_2 [i_6]) ? (arr_1 [i_1] [i_6]) : 2517539287)) << (1125899905794048 - 1125899905794026)));
                            var_25 *= ((1 * (arr_15 [i_0] [i_1] [i_2] [i_3] [i_6 - 2])));
                            var_26 = (((arr_1 [i_6 - 3] [i_2 + 3]) ? var_15 : (arr_6 [i_0 + 2] [i_6 - 3])));
                            var_27 = 1777428008;
                        }
                    }
                    for (int i_7 = 1; i_7 < 20;i_7 += 1)
                    {
                        var_28 = (arr_4 [i_2] [i_7]);
                        arr_20 [i_0] [i_2] [i_2] [i_7] = ((~(max((arr_11 [i_0] [i_0] [i_1] [i_2] [i_2] [i_7 - 1]), (arr_11 [i_7] [i_7 + 2] [i_7] [i_7 + 2] [i_2] [i_7 + 2])))));
                    }
                    var_29 += -46;
                    var_30 *= (min((arr_2 [6]), ((-(arr_15 [i_0] [i_1] [i_1] [i_2 - 3] [i_0])))));
                }
            }
        }
    }

    for (int i_8 = 0; i_8 < 24;i_8 += 1)
    {
        arr_25 [i_8] = arr_24 [i_8];
        var_31 &= (arr_24 [i_8]);
    }
    var_32 = 19168;
    var_33 = (min(-4726042018181220106, var_10));
    #pragma endscop
}
