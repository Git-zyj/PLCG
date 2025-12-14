/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161368
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_10;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_18 -= ((21 ? 14082156394409137706 : -1626530530652262503));
                    arr_7 [i_2] [9] [i_0] = (max((((((((arr_6 [i_2] [i_0] [i_0]) ? var_4 : 65535))) && 6333814312972935644))), ((((arr_4 [i_0] [i_0] [i_0]) ? 4294967295 : var_1)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_19 ^= var_11;
                                arr_13 [i_4] = (max(1619539507, (min((min((arr_3 [i_0]), 1842116689)), 24952))));
                                var_20 = (min((((((var_6 ? (arr_5 [i_0] [i_1] [i_2] [i_2]) : 0))) ? (arr_5 [i_1 - 1] [i_1 - 1] [i_1] [i_1]) : -70)), (((arr_4 [3] [i_1] [i_1]) ? var_2 : ((min(72, var_12)))))));
                                var_21 = (arr_11 [i_4] [5] [i_3] [i_2] [2] [2]);
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 1; i_5 < 15;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 16;i_7 += 1)
            {
                {
                    var_22 = (arr_20 [i_7]);
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 15;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            {
                                var_23 -= (+(min((arr_25 [i_5 - 1] [i_7 - 1] [i_7 - 1] [14] [i_7 - 1] [5]), var_12)));
                                arr_28 [i_5] [i_6] [i_7] [i_7] [i_7] |= ((((min((arr_15 [3] [i_9]), -45))) ? -100 : ((-45 ? 6333814312972935644 : 65535))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = -24952;
    #pragma endscop
}
