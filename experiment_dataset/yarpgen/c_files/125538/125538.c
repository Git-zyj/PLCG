/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125538
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        var_13 -= (arr_0 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_14 = (arr_7 [i_0] [i_0] [i_2] [5]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0] [i_2] [i_4] = (var_7 == var_1);
                                arr_16 [i_0] [i_0] [2] [10] [i_3] [i_3] [i_4] = (((255 & 5063790121879232201) <= (((-18 / var_6) + var_0))));
                                var_15 = (max(var_15, (((((arr_10 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_1 + 1] [i_1 - 4]) ? 16842 : (arr_10 [i_0 - 1] [4] [8] [i_1 - 4] [i_1 - 1]))) / ((-18 ? var_10 : (arr_10 [i_0 + 2] [i_1] [i_1] [i_1 - 3] [i_1 + 1])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        arr_19 [i_5] = arr_0 [i_5];
        arr_20 [i_5] [i_5] |= (((arr_18 [i_5]) * (arr_2 [i_5])));
        arr_21 [i_5] [i_5] = -3041514389;
        arr_22 [i_5] |= (arr_13 [i_5] [i_5] [i_5] [i_5] [i_5]);
        arr_23 [i_5] = (-30668 * 3260924061);
    }
    var_16 = (((max(var_8, var_10)) == ((((((var_3 ? 42121 : 1))) ? 1 : (max(17, 4294967290)))))));
    #pragma endscop
}
