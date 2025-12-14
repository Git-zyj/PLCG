/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150348
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= (((((9223372036854775799 ? -1583818583 : ((1583818583 ? 12278124482285475020 : 4294967295))))) ? var_14 : -var_1));
    var_17 = (((((var_9 || var_2) ? ((var_13 ? 9223372036854775807 : var_12)) : (4521461773453257178 / var_2)))) ? var_13 : (var_13 ^ var_1));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1 - 3] [5] &= (((arr_6 [i_0] [i_1 + 2] [i_2]) ? (arr_5 [i_0] [i_0] [i_2]) : ((((!(arr_3 [i_0])))))));

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        arr_13 [i_2] [i_2] [i_2] [i_2] [i_2] = var_10;
                        arr_14 [i_0] [i_1 + 2] = ((!(((((((arr_9 [i_3] [8] [i_2]) ? var_13 : (arr_1 [i_1])))) ? var_8 : (arr_9 [i_0] [i_1] [i_2]))))));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            {
                                arr_22 [i_0] [i_1 + 1] [i_2] [i_4] [i_5] [i_5] = var_1;
                                var_18 = (-((-15191 ? 60 : 12278124482285475020)));
                                arr_23 [i_0] [i_1] [12] [i_4] [i_5] = ((-77 ? -101 : -32762));
                            }
                        }
                    }
                    arr_24 [i_0] [i_0] = ((((~var_10) ? (~var_14) : var_9)));
                }
            }
        }
    }
    #pragma endscop
}
