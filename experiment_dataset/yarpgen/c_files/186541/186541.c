/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186541
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (~var_2);

    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        var_17 *= ((arr_1 [i_0]) % ((max((-2147483647 - 1), (arr_0 [i_0 + 1])))));
        arr_2 [i_0] = (arr_0 [i_0 - 2]);
    }
    for (int i_1 = 2; i_1 < 13;i_1 += 1)
    {
        var_18 -= min(3390053794, 2147483647);
        var_19 = var_5;
        var_20 = (max(var_20, var_15));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 14;i_5 += 1)
                        {
                            {
                                arr_15 [i_4] [i_2 - 1] [i_3] [14] [i_1] = ((2147483647 ? (((!((((arr_6 [i_1 + 3] [10]) ? (-2147483647 - 1) : var_9)))))) : 26998));
                                var_21 = (min(var_21, (((-(max((((arr_11 [i_1] [9] [14]) ? (arr_4 [i_5]) : (arr_9 [i_3] [i_2]))), 2147483647)))))));
                            }
                        }
                    }
                    var_22 ^= (((var_13 || 18446744073709551615) ? (((!(arr_3 [i_1 + 1])))) : 61));
                    var_23 += 7;
                }
            }
        }
        var_24 -= (1 >= 35267);
    }
    for (int i_6 = 0; i_6 < 12;i_6 += 1)
    {
        var_25 = (min((((var_0 ? (arr_7 [i_6]) : (arr_7 [i_6])))), ((+(max((arr_0 [8]), var_14))))));
        var_26 = ((((var_11 >= 254) ? (arr_12 [i_6] [14] [i_6] [i_6] [i_6]) : (!65532))));
    }
    #pragma endscop
}
