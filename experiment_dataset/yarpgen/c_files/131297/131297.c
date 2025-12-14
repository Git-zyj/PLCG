/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131297
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (!(!var_14));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_6 [i_0] = ((~(arr_3 [i_0] [i_0] [i_1])));
                arr_7 [i_0] [i_1] [i_0] = ((15183700771812979949 || ((min((arr_3 [i_0] [i_0] [i_1]), 5949520048416468833)))));
                var_16 = (arr_4 [13] [i_1]);
            }
        }
    }
    var_17 -= (((((!3263043301896571660) - (min(var_11, 18446744073709551615)))) + (((((((-24935 + 2147483647) << var_5)) < (min(16777208, -92))))))));
    var_18 = (max(((((~14851212814297187011) ? (max(var_0, 16777229)) : var_14))), ((4095 ? var_8 : 13613121761936664936))));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            {
                                arr_23 [i_2] [i_3] [i_6] [i_5] [i_6] = (arr_10 [i_5 + 1]);
                                arr_24 [i_2] [i_3] [6] [i_5] [i_2] |= (min(243, -var_6));
                            }
                        }
                    }
                    var_19 = (arr_20 [i_2] [i_2] [i_4] [i_2]);
                    arr_25 [i_2] [i_2] [i_2] [i_2] = ((!(arr_1 [i_4])));
                }
            }
        }
    }
    #pragma endscop
}
