/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188602
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_8;
    var_18 = (max(var_18, (25605 == 39931)));

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        arr_4 [i_0] = ((min((((arr_1 [i_0]) || var_4)), var_6)) ? 39929 : ((((arr_1 [i_0 + 1]) != 39929))));
        arr_5 [i_0 - 1] = (((21254 - ((1 ? var_14 : -113712710)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_19 = (((206430280 / 572155061) ? (arr_1 [16]) : 39929));
                                var_20 = var_10;
                            }
                        }
                    }
                    arr_17 [i_0] [i_1] [i_1] [22] = (((((!(((~(arr_13 [1] [i_0] [i_0] [i_0] [i_0]))))))) - (arr_12 [i_0] [i_0])));
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        var_21 *= ((-1 || (arr_8 [i_5] [i_5] [i_5] [i_5])));
        arr_20 [i_5] = 8191;
    }
    for (int i_6 = 1; i_6 < 13;i_6 += 1)
    {
        var_22 += ((((var_15 | (31656 & 98875453792646680))) | var_10));
        var_23 = (max(var_23, var_2));
    }
    var_24 ^= (min(var_7, ((max(1, 12662)))));
    var_25 -= (min(7940192301080469032, var_12));
    #pragma endscop
}
