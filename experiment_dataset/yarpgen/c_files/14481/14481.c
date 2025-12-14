/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14481
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                var_12 = (min(var_12, (arr_4 [i_1] [i_0])));
                var_13 = (-1864145326496850793 ? -9223372036854775802 : -7368036994380190784);
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_14 = (min(var_14, (((((min(580988225031244596, var_8))) ? (min(1864145326496850792, (var_10 | var_7))) : 2885562333135461782)))));
                                var_15 = (min(var_15, ((((min((arr_16 [i_2] [i_4] [i_5] [6] [i_6] [i_6]), (arr_16 [i_6 - 1] [i_6] [i_6] [12] [i_6] [i_6]))) - ((min(0, var_9))))))));
                                arr_19 [6] |= (min((arr_12 [i_2] [i_3] [i_5] [i_6]), (((arr_12 [i_2] [i_3] [i_5] [i_6 - 1]) ? (arr_12 [i_2] [i_2] [i_2] [i_2]) : 120627174))));
                            }
                        }
                    }
                    var_16 += var_3;
                    arr_20 [i_2] = (((760153893712574095 ? 1774528794 : (arr_13 [i_2] [i_3] [i_4] [i_4]))));
                }
            }
        }
    }
    var_17 = var_8;
    #pragma endscop
}
