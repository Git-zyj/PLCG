/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111971
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (~-1750871591);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    var_13 = (arr_1 [i_2]);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_12 [7] [i_1] [i_2] [i_2] [i_4] = min((max(32280, (-9223372036854775807 - 1))), (((1 ? var_8 : (arr_3 [i_0 + 3] [i_0 - 1] [i_0])))));
                                var_14 *= -1318327614;
                                var_15 = (min(var_15, (((((((arr_6 [i_2 - 1] [i_0 - 1]) ? 5159614794535633781 : (arr_6 [i_2 - 1] [i_0 + 1])))) ? var_0 : (arr_6 [i_2 - 1] [i_0 + 1]))))));
                                var_16 = (min(var_16, ((((((!((max(1, var_0)))))) << (98 - 75))))));
                            }
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 16;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            {
                                arr_24 [i_6 + 2] [i_6 + 2] [i_6] [16] [i_6] [i_5] [i_6 + 1] = (min((max((arr_7 [i_0 + 3] [i_6 + 1]), (((arr_15 [i_0 + 3] [i_0] [i_0] [i_0 + 2]) << 0)))), (min(((var_3 ? 32282 : var_4)), (arr_4 [i_0 - 1])))));
                                var_17 = ((((((arr_13 [i_0 + 1] [i_5] [i_6 - 1] [i_7]) ? (arr_23 [i_7]) : 2106982160))) ? ((max((arr_22 [i_0 + 2]), (arr_16 [i_0 + 1] [i_1] [i_5] [i_6 + 1])))) : (min((arr_23 [i_1]), 4933259411547122448))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 16;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            {
                                var_18 = (~((min((min(1, (arr_27 [i_9] [i_5] [i_1] [i_0 + 2]))), var_8))));
                                arr_32 [i_5] [i_1] [i_5] [i_8 + 2] [i_9] = var_10;
                            }
                        }
                    }
                    arr_33 [i_5] = (max(((-1318327614 ? (max(-1177042676, 1177042676)) : -4096)), ((((2073227504 ? var_0 : -77))))));
                }
                arr_34 [i_0] [i_1] = var_2;
                var_19 = ((~(min(var_2, (arr_1 [i_0 + 1])))));
                arr_35 [i_0 + 3] [5] = (14 + -32275);
            }
        }
    }
    var_20 = var_9;
    var_21 *= (~-4096);
    var_22 = var_3;
    #pragma endscop
}
