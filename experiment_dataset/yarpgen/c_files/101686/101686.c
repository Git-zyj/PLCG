/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101686
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min((((!var_16) - 8191)), (min((max(var_5, var_7)), var_0))));
    var_19 *= min(57345, (-127 - 1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 14;i_4 += 1)
                            {
                                arr_11 [i_0] [i_1 + 1] [i_0] [i_3] [i_4] [i_0] = (-127 - 1);
                                arr_12 [i_1] [i_0] [i_1] = ((((((127 ? 57344 : 3)) - (arr_9 [1] [i_0] [i_1] [i_2] [i_2] [i_4]))) - ((~(-127 - 1)))));
                                var_20 = (max((((((((arr_2 [i_4]) && 0)))) | (max(var_8, var_11)))), var_5));
                                arr_13 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1 + 1] = (((((((arr_7 [i_0] [i_0] [i_1 + 1] [9] [9] [i_4]) - var_14))) && -57345)));
                            }
                            arr_14 [i_0] [i_2] &= 57345;
                            arr_15 [3] [i_0] [8] = 57344;
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    var_21 -= 8190;
                    arr_18 [i_0] [i_1] = (((arr_17 [i_1 + 1] [i_1] [i_0] [i_0]) && 8191));
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    arr_23 [i_6] [i_0] [i_0] = arr_7 [i_1 - 1] [i_0] [i_1 + 1] [i_1] [i_1 + 1] [i_1 - 1];
                    var_22 = (var_13 / -1930455825);
                    arr_24 [i_0] [i_1 - 1] [i_1 - 1] [3] = ((-126 * (-127 - 1)));
                }
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    var_23 = (min(-var_7, (arr_9 [i_1] [i_0] [i_1] [i_1 + 1] [i_1 + 1] [i_1])));
                    var_24 -= (min(-126, 4398046511103));
                    var_25 *= (((arr_8 [i_0] [i_0] [i_0] [i_7]) ? (((var_10 - 731033395) + (arr_25 [i_0] [i_7]))) : (104 && 24)));
                }
            }
        }
    }
    var_26 = ((-((8192 - (0 | var_9)))));
    #pragma endscop
}
