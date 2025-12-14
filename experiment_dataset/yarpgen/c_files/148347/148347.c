/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148347
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= ((var_2 - var_4) ? (var_2 != -487369531984680417) : (((3271018364 / -16586) ? (1 | 19) : var_4)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_7 [i_0] = (min((min(4294967295, 21)), (37 + -22)));
                arr_8 [i_1] [i_0] = ((-(((max((arr_5 [i_1]), 4519)) << (((-25 % -22328) + 33))))));
                arr_9 [i_0] [i_1] = (arr_5 [7]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_13 = (min(var_13, (((0 + (max((arr_13 [i_3 + 2] [i_3 - 3] [i_3] [1] [i_3 - 2]), (arr_13 [i_3 - 3] [i_3 + 1] [i_3 + 3] [i_3] [i_3 + 3]))))))));
                            var_14 = ((((((4519 < (arr_13 [15] [i_3] [i_2] [15] [15])))) & 2)));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 2; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 18;i_6 += 1)
                        {
                            {
                                arr_24 [i_0] [i_1] [i_1] [i_5] = -22;
                                var_15 = ((~(~-21)));
                                arr_25 [i_0] [i_0] [i_5] [i_4 - 2] [i_5] [i_5] [i_6] = (!1);
                                var_16 = min(0, (max((arr_23 [i_6] [i_4 + 1] [i_5 + 1] [i_4 + 1]), 1147048392105958866)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
