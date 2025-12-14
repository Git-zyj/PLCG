/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175884
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_14 ^= ((min(835530859, (arr_1 [i_0]))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    var_15 = 3459436436;

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        var_16 = var_5;
                        var_17 = (((arr_1 [i_0]) << ((((var_13 ? 18843 : 4)) - 18828))));
                        var_18 = (var_8 & (((224 >> (((arr_4 [i_0] [i_1] [i_2] [i_2]) - 1741950894))))));
                        var_19 = ((((((arr_7 [i_0] [i_2]) ? var_10 : var_8))) ^ -2014784685542544588));
                        var_20 = (max(var_20, var_5));
                    }
                    for (int i_4 = 4; i_4 < 12;i_4 += 1)
                    {
                        var_21 += 268427913023017552;
                        var_22 = (arr_10 [i_0] [i_0] [i_0] [i_0]);
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        var_23 = ((((arr_13 [i_2] [i_1] [i_1] [i_2] [i_5] [i_5]) ? (arr_5 [i_0] [i_1] [i_2 + 2]) : 166)));
                        var_24 = var_0;
                        var_25 = 268427913023017543;
                        var_26 = ((9 * (arr_1 [i_0])));
                    }
                    var_27 *= var_11;
                }
            }
        }
        var_28 = ((var_0 ? ((903141771 ? (((max(17060, 99)))) : 3459436436)) : ((min((1717412058162931368 && 3015), (((arr_4 [i_0] [i_0] [i_0] [i_0]) ? 52 : (arr_3 [i_0] [i_0] [i_0]))))))));
    }
    var_29 = 14;
    #pragma endscop
}
