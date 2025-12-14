/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119115
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_16 = (min(var_16, (!180572053)));
        arr_3 [i_0] = (max(((((arr_2 [i_0]) && (arr_1 [i_0])))), (((arr_0 [i_0]) ? (arr_0 [i_0]) : var_15))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        {
                            var_17 = var_11;
                            var_18 -= (arr_14 [i_0] [i_1] [i_2] [i_3] [i_2]);
                            var_19 = 2737492758;
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 9;i_6 += 1)
                {
                    {

                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            var_20 = (((~var_10) ? (arr_21 [i_7] [i_0] [i_5] [i_5] [i_6 - 1]) : ((0 ? var_14 : 1))));
                            var_21 = ((arr_18 [i_6 + 2] [i_6 + 2] [i_6 + 1]) ? -113 : -625966776237441331);
                            var_22 ^= ((180572053 ? 2737492752 : 2737492752));
                        }
                        var_23 = 2103230086;
                        var_24 = (((arr_22 [i_1] [i_5] [2]) ? (((arr_8 [i_0] [i_1] [i_5]) / var_10)) : var_11));
                    }
                }
            }
        }
        for (int i_8 = 2; i_8 < 10;i_8 += 1)
        {
            arr_25 [i_0] [i_8] = (((max((arr_8 [i_0] [i_8] [i_8 - 2]), (arr_8 [i_0] [i_0] [i_8 - 2]))) != (((max(var_13, (!63)))))));
            var_25 += ((1 ? -5165 : 1));
        }
        var_26 = 1557474538;
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 11;i_9 += 1) /* same iter space */
    {
        var_27 -= (((arr_8 [i_9] [i_9] [i_9]) ? var_15 : 180572065));
        var_28 += var_3;
    }
    var_29 = (min(var_8, var_2));
    var_30 = 72057319160020992;
    var_31 = ((((var_14 ? (!var_4) : var_4)) << var_5));
    var_32 = ((1980977703392922881 ? (((var_12 ^ var_11) * var_7)) : (~var_12)));
    #pragma endscop
}
