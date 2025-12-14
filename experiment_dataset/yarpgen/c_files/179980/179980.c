/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179980
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, (((var_2 ^ (min((~var_6), (11005380676369152084 * var_19))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_21 = (max(var_21, (((((57862 + var_2) - (((arr_3 [i_0] [i_0] [i_0]) + (arr_1 [i_0])))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_22 = ((var_4 && ((((((~(arr_7 [i_0] [i_0])))) ? (((arr_9 [i_0] [i_0] [1] [13] [i_3] [i_0]) | var_0)) : -39)))));
                                arr_16 [12] [1] [5] [0] [i_4] [i_4 - 1] [2] = (((!var_9) % ((-((-32488 ? 32479 : 253))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                {
                    var_23 += (max(18446744073709551602, 9));
                    var_24 = (((arr_21 [i_6] [i_7] [i_6] [i_6]) ? (arr_22 [i_6]) : (((~(268435455 + 23488))))));
                    arr_23 [i_6] [i_6] [i_7] = (arr_20 [i_5] [i_6] [i_7]);
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_8 = 3; i_8 < 9;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 11;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 11;i_10 += 1)
            {
                {
                    arr_34 [i_8] [i_9] [i_10] = ((((((arr_29 [i_8 + 2] [i_8 - 2] [i_8 - 3]) ? (arr_29 [i_8 - 2] [i_8 - 1] [i_8 + 2]) : (arr_29 [i_8 + 1] [i_8 + 1] [i_8 + 1])))) ? (((arr_29 [i_8 + 1] [i_8 + 2] [i_8 - 3]) / (arr_29 [i_8 - 2] [i_8 + 2] [i_8 - 1]))) : -var_19));
                    arr_35 [i_8 - 2] [i_8] = (max((min(22, ((18446744073709551615 ? 245 : 48342)))), ((((var_11 + 2147483647) << (((((arr_9 [i_8] [i_8] [i_8] [5] [i_10] [9]) + 5527533071187639109)) - 16)))))));
                }
            }
        }
    }
    var_25 = var_16;
    #pragma endscop
}
