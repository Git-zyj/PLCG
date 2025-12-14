/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102906
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_19 ^= (((max((arr_2 [i_0] [i_0 - 1]), 4)) ^ (arr_1 [i_1])));

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    arr_9 [i_0] [i_1] = ((((4356939359584600291 / 46) ? 1 : (28 | var_16))));
                    var_20 = min(var_7, (((arr_2 [i_1] [i_0 - 1]) ? (arr_2 [i_0 - 1] [i_0 - 1]) : -108991003)));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_16 [i_4] [i_0] [i_4] [i_3] [i_2] [i_0] [i_0] = ((((-(-23 & 1614768580))) >= (var_12 ^ 0)));
                                var_21 += 2817;
                            }
                        }
                    }
                    arr_17 [i_0] [i_1] [i_1] = (((((-(-1985291297 == var_13)))) ? (-9223372036854775807 - 1) : ((-(arr_2 [i_0] [i_0 - 1])))));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_22 [i_0] [i_5] [i_6] = var_6;
                                arr_23 [i_6] [i_0] [i_2] = ((3243378591040746841 ^ ((((max(var_4, var_18))) ? (max(0, var_2)) : var_0))));
                                arr_24 [i_0] [i_1] [i_2] [i_5] [i_0] [i_6] = (arr_7 [i_1] [i_2] [i_6]);
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    arr_27 [i_0] [i_1] [i_0] = var_12;
                    arr_28 [i_0] = ((1023168303030745549 ? 1992821393 : (arr_19 [i_0 - 1])));
                }
                for (int i_8 = 2; i_8 < 16;i_8 += 1)
                {
                    var_22 -= ((((min(1, var_2))) ? ((var_12 | (~var_18))) : ((-(arr_7 [i_0 - 1] [i_0 - 1] [i_8 - 2])))));
                    arr_32 [i_0 - 1] [i_0] = var_6;
                    var_23 = min(var_9, ((((((var_15 ? 60 : 1))) || var_13))));
                    arr_33 [i_0] [i_1] [i_8] [i_8] = (68 > 1961329316);
                    arr_34 [i_0] [i_1] [i_0] = (1063478706 + (max((arr_14 [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_0 - 1] [i_0 - 1]), -111)));
                }
            }
        }
    }
    var_24 = (max((((~var_16) % (~-8342))), ((((min(-14, 322352550))) ? 201326592 : 0))));
    #pragma endscop
}
