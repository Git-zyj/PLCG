/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179374
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_10 -= ((((min(-18, var_7))) ? ((max((arr_0 [i_0 - 1]), (6565463308782299202 <= 39840)))) : (((!(((var_0 ? var_5 : (arr_0 [i_0 + 2])))))))));
        var_11 |= (max((min((arr_1 [i_0 - 1] [1]), var_4)), ((min(var_7, (arr_1 [i_0 - 1] [i_0]))))));
        var_12 = var_5;
        var_13 = (max(((27876 ? (((min(7, (arr_0 [i_0]))))) : var_9)), ((((arr_0 [i_0]) ? (arr_0 [i_0 + 2]) : ((var_9 ? (arr_1 [8] [i_0 - 1]) : -5803257164261206541)))))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            var_14 = ((~(min(((var_2 ? var_8 : var_1)), var_2))));
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        {
                            var_15 = (max(var_15, ((((((~(~3)))) ? (arr_3 [4] [i_5]) : 0)))));
                            var_16 = arr_0 [i_1];
                            var_17 = ((((((18446744073709551615 ? 4294438087 : var_0)))) ? (((max((arr_8 [i_1] [i_2]), (arr_8 [i_1] [i_2]))))) : (~var_9)));
                            var_18 = (((var_7 > (arr_4 [10] [i_1]))) ? var_4 : -736334997);
                        }
                    }
                }
            }
            var_19 -= ((!(((var_9 ? (arr_6 [3]) : var_8)))));
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
        {
            var_20 += (((arr_3 [i_6] [i_1]) ? (arr_5 [i_1]) : ((var_1 ? var_4 : 139))));
            var_21 = (arr_3 [8] [i_1]);
            var_22 ^= ((arr_6 [i_1]) ? var_9 : (((-1 ? var_3 : var_2))));
            var_23 |= (arr_0 [i_1]);
        }
        for (int i_7 = 0; i_7 < 13;i_7 += 1) /* same iter space */
        {
            var_24 = (!4965590912530139078);
            var_25 -= ((8847358495283478187 ? 13510236262529608780 : ((max((((arr_12 [i_7] [i_7] [i_7] [i_7] [i_7]) ? (arr_5 [i_7]) : 76)), (65535 <= -1))))));
        }
        var_26 &= var_2;
        var_27 = ((((-90 ? (arr_13 [i_1] [i_1] [i_1]) : (max(var_0, var_5)))) - (arr_9 [i_1])));
    }
    for (int i_8 = 0; i_8 < 13;i_8 += 1) /* same iter space */
    {
        var_28 = ((((max((arr_4 [i_8] [i_8]), (arr_4 [i_8] [i_8])))) / (((arr_4 [i_8] [i_8]) * (arr_4 [i_8] [i_8])))));
        var_29 = ((((arr_10 [i_8] [i_8] [i_8] [i_8]) ? 25753 : 0)));
    }
    var_30 *= (!var_9);
    var_31 = (((var_8 ? var_0 : (!1))));
    #pragma endscop
}
