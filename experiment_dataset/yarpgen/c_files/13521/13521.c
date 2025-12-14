/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13521
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_16 += (max(var_5, 58));
                                var_17 ^= min((!31), ((-58 ? (-58 > var_8) : -65532)));
                            }
                        }
                    }
                    var_18 += (max(((((6094772366218602597 + 583632187422153605) < (12351971707490949008 + -63)))), ((-(var_14 || var_14)))));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_19 = (max((min(15138547813586685267, 1)), 53));
                                var_20 = ((max((max(6094772366218602594, 6094772366218602582)), -var_5)));
                                arr_15 [i_1] = min(((-(max(-6, 0)))), 12351971707490949012);
                                var_21 = var_14;
                                var_22 = ((~(min(var_2, var_15))));
                            }
                        }
                    }
                    arr_16 [i_1] = max(7942795772291643893, 6094772366218602569);
                    var_23 = ((+(((10503948301417907716 > var_14) << (((min(var_9, var_11)) - 50230))))));
                }
            }
        }
    }
    var_24 = (min(((((-4960 ? var_1 : var_11)))), (min((var_0 / 73), ((38076 ? var_2 : 1))))));
    #pragma endscop
}
