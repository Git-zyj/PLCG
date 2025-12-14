/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123898
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_0, ((var_3 ? var_3 : ((21627 ? var_13 : var_3))))));
    var_17 = var_3;

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_18 = (arr_0 [i_0] [i_0]);
        var_19 = (((((18841 ? (arr_0 [i_0] [i_0]) : (((arr_1 [i_0] [i_0 + 2]) ? var_13 : var_0))))) ? 18446744073709551615 : ((((!var_1) ? (max(var_1, 2147483647)) : 43902)))));

        /* vectorizable */
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
            {
                var_20 ^= (((-32767 - 1) & (arr_1 [i_1 + 2] [i_1 - 1])));
                /* LoopNest 2 */
                for (int i_3 = 1; i_3 < 13;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        {
                            arr_13 [i_0 - 1] [i_1] [i_0 - 1] [i_1] [i_0 - 1] [i_2] [8] = var_12;
                            arr_14 [i_1] [i_2] = (((((var_10 + 2147483647) << (var_1 - 3988940919589153500))) < var_9));
                        }
                    }
                }
            }
            for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
            {
                var_21 = ((~(1 * var_8)));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 12;i_7 += 1)
                    {
                        {
                            var_22 = ((~(arr_20 [i_7] [i_5] [i_5] [i_7 - 1] [i_7 - 1] [i_7])));
                            var_23 -= ((1 ? 3359874640 : (((var_7 ? var_0 : var_7)))));
                            arr_23 [i_7] [i_5] [i_5] [i_6] [i_7] = -1;
                        }
                    }
                }
            }
            arr_24 [i_0] = var_6;
        }
    }
    for (int i_8 = 0; i_8 < 25;i_8 += 1)
    {
        var_24 = (((15238 - 1585820276) ^ (37644 != 432345564227567616)));
        var_25 = var_6;
        arr_27 [i_8] = var_0;
    }
    #pragma endscop
}
