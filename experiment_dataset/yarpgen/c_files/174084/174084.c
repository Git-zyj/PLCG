/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174084
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_10 = 255;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 23;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [i_1] = ((((((arr_5 [i_0] [i_1] [i_3]) > 9223372036854775807))) > (((((((arr_2 [i_3 - 1]) || var_4))) > -var_8)))));
                        var_11 = ((((arr_7 [i_0] [i_0] [i_2]) ? 183 : (29 & 1))));
                        var_12 |= (((33423360 * 1) ? (arr_7 [19] [19] [i_3 - 3]) : (((1 ? (arr_1 [i_3] [i_3 - 2]) : (arr_6 [i_2] [15] [i_3 - 2]))))));
                        var_13 &= var_5;
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        var_14 = (((+(((arr_6 [i_4] [9] [i_4]) ? (arr_2 [i_4]) : 8)))));
        var_15 ^= ((7972524850609248272 + 18446744073709551615) && (var_9 & var_5));
    }
    for (int i_5 = 3; i_5 < 13;i_5 += 1)
    {
        var_16 *= (((((var_7 ? 0 : (arr_14 [i_5] [i_5]))) << (((((arr_3 [i_5] [i_5] [i_5 - 3]) ? var_0 : var_4)) - 3211498789)))));
        arr_17 [i_5] = (((-76 - 1) ? (((arr_11 [i_5] [i_5] [i_5 - 2] [i_5 + 1] [i_5 - 3] [i_5 + 1]) ? (arr_6 [i_5] [i_5] [0]) : (arr_15 [i_5]))) : var_5));
        arr_18 [i_5] = (668333296 + -var_4);
    }
    var_17 = var_8;
    var_18 |= (-(var_1 || 56));
    var_19 = var_7;
    #pragma endscop
}
