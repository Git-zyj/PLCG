/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11365
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= ((((min(var_17, ((18789 ? 0 : var_6))))) ? var_14 : 11827266119404947278));
    var_19 = (min(var_19, (((((var_6 && (((var_0 ? 117440512 : -16415))))) ? 6619477954304604338 : (var_6 || var_6))))));
    var_20 = (var_7 & var_12);

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] &= (var_12 && 6619477954304604357);
        arr_4 [i_0] [i_0] = (((var_12 ? var_16 : var_3)));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_21 = (max(var_21, (arr_1 [i_1] [i_2])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_19 [i_2] [i_1 + 1] [i_2] [i_3] [i_4] [i_3] [i_3] = (((min((arr_11 [20] [i_3] [i_0]), ((((arr_10 [i_1] [i_3] [i_4 - 2]) < var_6)))))) ? ((((var_1 && ((((arr_1 [i_1] [i_3]) ? (arr_12 [i_0] [1] [i_2] [i_4]) : (arr_8 [i_0] [i_1 + 1])))))))) : (min(-9218868437227405312, ((((arr_18 [i_1]) ? 1017756493 : (arr_13 [17] [i_1 - 3] [i_1] [i_2] [i_2] [i_4 + 1])))))));
                                arr_20 [i_4] [i_3] [i_2] [i_1] [i_0] = (arr_14 [i_0] [i_0] [i_2] [i_3]);
                                arr_21 [i_0] [i_0] [i_2] [i_4 + 2] [i_4] [i_3] = (((1 - var_6) > (arr_10 [i_4] [i_4] [2])));
                                var_22 = (min(var_22, (arr_0 [i_3])));
                            }
                        }
                    }
                    var_23 -= ((min((arr_10 [i_0] [i_1] [3]), ((~(-2147483647 - 1))))));
                    var_24 = (arr_7 [i_2]);
                }
            }
        }
        var_25 = (arr_6 [11]);
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        var_26 = ((var_3 ? 2147483643 : var_6));
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 0;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 14;i_8 += 1)
                {
                    {
                        var_27 = (min(var_27, (!1)));
                        var_28 = (!var_7);
                    }
                }
            }
        }
        arr_32 [i_5] = var_9;
        arr_33 [i_5] = (((~var_3) - (arr_22 [i_5])));
    }
    for (int i_9 = 0; i_9 < 15;i_9 += 1)
    {
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 15;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 15;i_11 += 1)
            {
                {
                    var_29 |= (-((~(arr_0 [i_11]))));
                    var_30 = ((3 > (((!(((6619477954304604337 & (arr_5 [i_9])))))))));
                }
            }
        }
        var_31 = (((((((min(1, -4))) ? var_13 : 18789))) ? (((((3 / (arr_9 [i_9] [i_9] [i_9] [i_9])))) ? (arr_2 [i_9] [i_9]) : ((0 ? (arr_8 [i_9] [i_9]) : 0)))) : (!var_1)));
    }
    #pragma endscop
}
