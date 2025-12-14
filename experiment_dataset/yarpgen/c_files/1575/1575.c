/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1575
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_7;
    var_16 = 0;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_17 = (max(var_17, (((6413 * (48074 == 17461))))));
                                arr_11 [i_0] = 48074;
                                arr_12 [3] [i_1] [i_1] [i_2] [i_3] [16] = ((((((arr_1 [i_0 + 3]) != (arr_1 [i_0 - 2])))) / var_14));
                                var_18 = ((1 >= (((arr_10 [i_0] [i_1] [i_2 - 2] [i_3] [4]) + (arr_3 [i_0 + 1])))));
                                var_19 = (max(var_19, (19079 != -9001201179820915154)));
                            }
                        }
                    }
                    var_20 *= ((var_6 << (((arr_7 [i_0] [i_0] [i_1] [14]) - 9008991449552714034))));
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 16;i_6 += 1)
                        {
                            {
                                var_21 *= (arr_15 [i_1] [i_5]);
                                var_22 = (((arr_8 [i_0 - 2] [i_0] [i_0 - 1]) && 8218));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = var_7;
    #pragma endscop
}
