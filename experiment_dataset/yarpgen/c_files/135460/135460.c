/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135460
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_13;
    var_18 = ((!(((var_7 ? (min(206, var_0)) : (559580035 != -466546443))))));
    var_19 = -337295668;
    var_20 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_1] [i_0] [i_0] = (~-2097151);
                                arr_17 [i_0] [i_0] [i_1] [i_3] [i_0] = (~(arr_14 [i_4] [i_4] [i_4 - 1] [i_4] [i_4] [i_4 - 2] [i_4 - 1]));
                                arr_18 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0] [i_0] = arr_2 [i_1];
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 13;i_7 += 1)
                        {
                            {
                                var_21 *= (-((((arr_21 [i_7] [i_1] [i_1] [i_6] [i_7] [i_7]) <= ((-(arr_2 [i_6])))))));
                                arr_26 [i_7] [i_1] [i_5] [i_1] [i_1] [i_0] = (min(var_14, (arr_22 [i_0] [i_1] [i_5] [i_1] [i_6] [i_1])));
                                var_22 = (min(var_22, (((((var_5 && (~var_15))))))));
                                var_23 ^= min((!-8388608), (~var_1));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
