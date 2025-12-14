/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180939
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((-(min(34053, (max(var_0, 3928522658))))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_21 = (min(var_21, ((min(337297765, 534961064)))));
        var_22 += (((arr_2 [i_0] [7]) ? ((var_13 ? (arr_2 [i_0] [i_0]) : (arr_0 [i_0]))) : -180225860));
        var_23 *= -17;

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_24 = ((((((2014634706 ? (arr_2 [14] [4]) : var_2)))) % (((var_3 ? (arr_3 [i_0] [i_0]) : 65535)))));
            var_25 = ((!(arr_3 [i_0] [i_1])));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 0;i_4 += 1)
                    {
                        {
                            var_26 = (min(var_26, -1598712964));
                            arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_4] = ((+(((arr_10 [i_0] [12] [3]) ? 2237447721 : (arr_15 [i_0] [i_1] [i_2] [i_4 + 1])))));
                            var_27 = (min(var_27, (arr_5 [i_0] [i_0] [i_4])));
                        }
                    }
                }
            }
        }
        var_28 = -1431777946;
    }
    /* LoopNest 3 */
    for (int i_5 = 4; i_5 < 16;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 0;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {

                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {

                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            var_29 = ((~(arr_5 [i_5] [i_5] [i_5])));
                            var_30 = (min(var_30, ((min((arr_12 [i_6] [i_6 + 1]), var_8)))));
                        }
                        for (int i_10 = 2; i_10 < 17;i_10 += 1)
                        {
                            arr_31 [i_5] [i_5] [8] [i_5] [i_8] [i_10 - 1] = (((arr_19 [i_5] [i_7] [i_10]) ? ((max(840389684, 3422852545))) : var_0));
                            arr_32 [i_5] [i_8] [i_10] = (min((((arr_0 [i_6 + 1]) ? var_17 : (arr_30 [i_5] [i_5 + 2]))), ((var_2 * (arr_0 [i_6 + 1])))));
                        }
                        var_31 = max(-var_18, (204 - 1));
                    }
                    var_32 += (arr_27 [i_5]);
                    var_33 = 9;
                }
            }
        }
    }
    #pragma endscop
}
