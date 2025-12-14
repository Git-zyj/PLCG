/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152371
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((-((((max(36926, 36926))) ? var_9 : ((var_3 ? 380234899 : var_11))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_2] [i_3 - 2] = ((~(min((arr_0 [i_3 - 2]), var_2))));
                            arr_10 [10] = (min(var_6, (min((~var_15), ((((arr_4 [i_0] [i_1] [i_2] [i_3]) - var_0)))))));
                        }
                    }
                }
                var_17 = (max(var_17, var_13));
                /* LoopNest 3 */
                for (int i_4 = 2; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            {
                                var_18 &= ((+(((arr_14 [i_4 - 1] [i_5 - 1]) ? (arr_14 [i_4 - 2] [i_5 - 1]) : (arr_14 [i_4 - 2] [i_5 - 1])))));
                                arr_18 [3] [3] [i_4] = ((arr_7 [i_1] [i_1] [i_4] [i_4 - 1]) ? var_13 : (((arr_8 [i_6] [i_5] [i_4] [i_0] [i_0]) + var_10)));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 21;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        {
                            var_19 ^= (((((max(var_15, 28610)))) ? ((+(min((arr_20 [i_0] [i_1] [i_8]), var_13)))) : (((((arr_2 [i_1] [i_1] [i_7]) || (((var_14 ^ (arr_15 [i_0] [4] [i_7] [i_0] [i_1] [4]))))))))));
                            var_20 = (max(var_20, (((((arr_13 [i_1]) ? var_5 : 28208))))));
                            var_21 = var_1;
                            arr_24 [i_7] = (max(2147483647, (arr_12 [i_0] [i_7] [i_8])));
                        }
                    }
                }
            }
        }
    }
    var_22 = (+(((-724209926 - var_3) % ((max(var_14, var_1))))));
    #pragma endscop
}
