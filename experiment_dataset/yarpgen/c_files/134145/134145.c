/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134145
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_17 -= (min((((var_10 ? var_1 : (arr_0 [6])))), var_11));

                    for (int i_3 = 3; i_3 < 20;i_3 += 1)
                    {
                        var_18 = (arr_10 [16] [i_1] [i_1] [17] [15] [i_3]);
                        var_19 = (max(var_19, var_13));
                        var_20 = (max(var_20, 7719734228291063877));
                    }
                    for (int i_4 = 2; i_4 < 21;i_4 += 1)
                    {
                        arr_15 [i_0] [i_1] [i_1] [i_4] [i_0] [i_0] = (~var_13);
                        var_21 = var_1;
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            arr_20 [22] [5] [i_5] [i_1] [i_0] = var_11;
                            var_22 = (((arr_14 [i_1] [12]) ? (arr_11 [i_0] [i_0] [i_0] [i_0]) : 0));
                        }
                        var_23 = (((arr_18 [i_5] [3] [i_5] [i_2] [i_5] [i_1] [i_0]) ? (arr_18 [i_5] [i_5] [i_5] [21] [i_5] [i_1] [1]) : (arr_18 [i_0] [i_0] [i_5] [i_2] [i_2] [6] [8])));

                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            arr_23 [i_0] [i_1] [i_0] [i_7] |= ((((~(arr_8 [7] [22] [20] [13]))) * ((-1 ? (-32767 - 1) : var_1))));
                            var_24 = -2;
                            var_25 = (max(var_25, (!var_14)));
                        }

                        for (int i_8 = 0; i_8 < 23;i_8 += 1)
                        {
                            arr_26 [i_0] [i_1] [14] [i_5] [i_5] = (arr_10 [i_8] [i_8] [i_5] [i_2] [i_1] [i_0]);
                            var_26 -= ((1 ? 1593808967 : 1682415087));
                            arr_27 [i_5] [i_1] [i_2] [i_5] = (((((~var_11) + 2147483647)) << (((var_11 + 2701158328) - 2701200596))));
                        }
                    }
                    var_27 = ((((((((-32767 - 1) ? var_15 : var_11)) & (2701158308 | -14)))) ? (~var_9) : (~18446744073709551613)));
                }
            }
        }
    }
    var_28 = ((var_0 ? (~9223372036854775807) : var_10));
    #pragma endscop
}
