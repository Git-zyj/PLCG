/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120544
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_9;
    var_13 = var_0;
    var_14 = ((var_4 >> ((((-(var_10 - 61874))) - 61859))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    var_15 = var_6;

                    for (int i_3 = 3; i_3 < 8;i_3 += 1)
                    {
                        var_16 = (~80);
                        var_17 = (((arr_8 [i_0] [i_0] [i_0] [0] [i_0]) > ((((89 ? 169 : var_0))))));
                        var_18 = ((((!((!(arr_5 [i_1] [i_1] [i_3]))))) || 255));
                    }
                    for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
                    {
                        arr_12 [i_1] = ((!(((arr_0 [i_2 + 2]) || 15694))));
                        arr_13 [i_0] [i_1] = (((((arr_11 [i_0] [i_2 - 1] [i_2 - 1] [7] [3] [i_0]) % (~var_0))) | (((((((var_9 ? (arr_6 [i_1]) : (arr_5 [i_0] [i_1] [i_1])))) <= ((62 ? (arr_10 [i_4] [i_2 + 2] [i_2] [i_1] [9]) : var_0))))))));
                        var_19 *= (max(((((~(arr_0 [3]))) | (((arr_7 [i_4] [i_1] [i_2] [i_4]) ? (arr_3 [i_4]) : 1)))), (max(var_1, (((arr_3 [i_4]) ? (arr_7 [i_0] [i_0] [i_0] [4]) : 27750))))));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
                    {
                        var_20 *= (~var_5);
                        var_21 = -3543094469283941086;
                        arr_17 [i_5] [i_1] [i_5] |= (!(((var_1 ? var_8 : 3977527198813546664))));
                        var_22 = ((-((-(arr_0 [i_0])))));
                        var_23 = ((((((var_6 + 2147483647) >> (arr_4 [i_0] [i_0])))) / (((arr_11 [3] [i_1] [i_2] [i_2] [i_5] [1]) & (arr_9 [i_0] [i_1])))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
