/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143289
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += ((((((!2963081346) ? ((var_2 ? var_12 : var_6)) : ((min(-18, var_6)))))) ? ((var_0 ? var_2 : var_0)) : (~var_1)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 4; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_17 *= ((((max((arr_9 [i_4] [i_3] [i_4] [4] [i_4] [1] [i_0]), var_14))) ? (((~(arr_10 [i_1] [i_1] [i_2 - 4] [i_3] [i_4] [i_3 - 1])))) : (((!0) ? (((var_14 ? 155 : 455347492))) : (arr_6 [i_4])))));
                                arr_11 [i_0] [15] [i_0] [i_1] [i_0] [i_3] [i_4] = ((((max((arr_7 [i_1] [i_1 + 2]), -118))) ? var_15 : var_4));
                            }
                        }
                    }
                }
                var_18 = (max(var_18, ((((((var_2 ? (((arr_2 [10]) << (((arr_2 [8]) - 365726907)))) : -63))) ? var_2 : (arr_1 [i_0]))))));
                var_19 = (min(var_19, var_3));
                arr_12 [i_0] [i_1] = ((3963963457 ? 3781212215 : 10685));
            }
        }
    }
    #pragma endscop
}
