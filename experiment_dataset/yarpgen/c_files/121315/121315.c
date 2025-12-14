/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121315
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (!-1171910479);
    var_11 -= ((var_7 ? (((((var_2 ? -117 : var_6))) ? var_5 : var_0)) : (max(-1435702030, ((var_8 ? var_8 : 1171910478))))));
    var_12 = ((!(~var_2)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_13 += 29598;

                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        var_14 = (min(var_14, ((((~29600) ? var_5 : ((-104503006 ? ((29598 ? var_6 : var_5)) : var_4)))))));
                        var_15 = ((!(((16384 ? 113 : 5)))));
                        arr_12 [i_0] [10] [i_0] [i_0] [i_0] [i_3] = ((-87 + 2147483647) >> (-114 + 114));
                        arr_13 [i_0] [i_3] [i_2] [i_3] = (((~-87) ? (((~var_0) | ((var_3 ? 114 : var_4)))) : (max((((arr_0 [i_3]) ? (arr_8 [i_2] [i_0] [i_0]) : -29576)), ((~(arr_3 [i_3 - 1] [i_2])))))));
                        arr_14 [i_0] [i_3] [i_1] [i_2] [i_3] [i_3] = arr_7 [i_0] [i_0];
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 20;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            {
                                arr_21 [i_0] [i_4] [i_0] [i_0] = (((-1171910477 ? (arr_2 [i_4]) : -1008094655)));
                                arr_22 [i_0] [i_0] [i_2] [i_2] [i_4] [5] [i_2] = ((1981183298 > (((min((arr_7 [i_0] [i_1 - 1]), 28381))))));
                            }
                        }
                    }
                    var_16 ^= ((((-(arr_17 [i_1] [i_1] [i_1 - 2] [i_1] [i_1 - 3] [i_1 - 2])))) ? var_8 : 83);
                }
            }
        }
    }
    #pragma endscop
}
