/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131172
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_13 = (((min((((arr_0 [14]) ? var_11 : 0)), var_6)) | (arr_2 [i_0])));
                    arr_9 [i_0] [i_0] [i_0] [i_0] = var_12;
                    var_14 -= (((((((1 ? var_12 : var_9))) && var_0)) ? (((!var_6) ? var_7 : (!var_0))) : (((var_12 && (((var_10 ? (arr_4 [18]) : var_5))))))));

                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        var_15 = (((((arr_8 [i_0 - 2] [i_1] [i_2]) ? var_6 : ((var_1 ? (arr_12 [i_0] [i_0] [i_2] [7] [i_3 + 3]) : var_9)))) | (((min((max(0, 1)), (!var_6)))))));
                        var_16 = (1 ? 1 : -32767);
                        var_17 -= (((((109 ^ -2807250333953868278) > 16)) ? 1 : (1 || 50)));
                        arr_13 [i_0] [i_0] [i_1] [i_2] [11] [i_3] = var_11;
                    }
                    for (int i_4 = 2; i_4 < 18;i_4 += 1) /* same iter space */
                    {
                        var_18 &= (max((max((!0), ((var_5 ? (arr_1 [i_4] [i_4]) : 33554400)))), ((((var_1 & -9) * ((((arr_6 [i_0] [i_4] [i_0]) > var_3))))))));
                        arr_18 [i_0] = (((((arr_11 [i_4 + 2] [i_0] [i_2] [i_1] [i_0] [i_0 + 1]) > var_10)) ? ((var_7 ? (arr_11 [i_2] [i_4 - 1] [i_2] [i_0 - 3] [i_0] [i_4 - 2]) : (arr_10 [1] [i_0] [i_1] [i_0] [i_0]))) : (((arr_10 [i_1] [i_0] [i_2] [i_0] [i_0]) ? var_8 : (arr_2 [i_0])))));
                        arr_19 [i_0] [i_0 - 3] [i_0 - 3] [i_0 - 1] [i_0] [i_0] = ((((((~var_1) ? ((1361989776606870498 ? 1 : -3585713140920620860)) : var_8))) ? ((max(((max(var_6, -9))), (~var_1)))) : ((var_4 ? 0 : var_8))));
                        arr_20 [i_4] [i_4] [i_0] = ((9 ? 1 : 1));
                    }
                    for (int i_5 = 2; i_5 < 18;i_5 += 1) /* same iter space */
                    {
                        arr_23 [i_0 - 3] [i_1] [i_1] [i_0] = ((var_7 || ((min(var_8, (var_7 | var_3))))));
                        var_19 *= ((~((65528 ? ((var_11 ? var_6 : var_4)) : (arr_7 [i_5] [i_5] [i_5] [i_0])))));
                        var_20 = ((((((var_12 * var_2) / 1))) ? (arr_11 [i_0 - 2] [i_0] [i_0] [i_0] [i_0] [i_0]) : ((-(arr_10 [i_0] [i_0] [1] [i_0] [i_0])))));
                    }
                }
            }
        }
    }
    var_21 = max(var_5, ((((max(-17, 1))) ? -1 : 32767)));
    #pragma endscop
}
