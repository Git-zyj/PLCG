/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17427
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (-(!var_11));
    var_13 &= var_0;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = var_1;

        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            var_14 = (arr_1 [i_0] [i_1]);
            arr_8 [i_1] = (min(((((((arr_0 [2]) + 2147483647)) >> (271383317 + 1274)))), (arr_4 [7] [i_1] [5])));
            var_15 &= ((+(((arr_7 [i_1 + 2] [i_0]) ? (~var_8) : (arr_0 [i_0])))));
        }
    }

    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        arr_12 [i_2] = var_3;

        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    {
                        var_16 = (max(var_16, (((((~(arr_13 [i_4]))) < ((((arr_16 [i_2] [i_5] [i_4]) ? 0 : (arr_16 [i_5] [i_5] [i_2])))))))));
                        arr_20 [12] [i_3] [i_5] [i_4] [i_4] = (arr_19 [i_2] [i_3] [i_3] [i_4] [i_5] [i_5]);
                    }
                }
            }
            arr_21 [i_3] &= ((((arr_11 [i_3]) ? -var_4 : (arr_11 [i_2]))));
            arr_22 [i_2] = 255;
        }
        var_17 = 9223372036854775807;
    }
    /* vectorizable */
    for (int i_6 = 2; i_6 < 10;i_6 += 1) /* same iter space */
    {
        var_18 = (((2682410282408861730 ^ var_2) ? (arr_18 [i_6 + 1] [i_6 - 1]) : (arr_2 [i_6 + 1])));
        var_19 *= (9223372036854775807 + -615397244);
        var_20 *= (((arr_5 [i_6 + 1] [i_6] [i_6]) ? (arr_5 [i_6 - 2] [i_6] [16]) : var_8));
    }
    for (int i_7 = 2; i_7 < 10;i_7 += 1) /* same iter space */
    {
        var_21 = (!(((0 * ((min((arr_9 [i_7 + 1]), 9223372036854775797)))))));
        var_22 -= ((((arr_25 [i_7]) | (arr_23 [i_7 - 1]))));
        var_23 = (((arr_16 [i_7] [i_7] [i_7 + 1]) & (max((-127 - 1), (arr_16 [i_7] [i_7] [i_7 + 2])))));
        arr_27 [i_7] = ((~(arr_25 [i_7 - 2])));
    }
    #pragma endscop
}
