/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125021
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (61376 ? 1157090237 : 32766);
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        arr_9 [i_3] [i_0] [i_0] [i_0] = (arr_2 [i_3]);
                        arr_10 [i_0] = (~18446744073709551615);
                        var_12 -= (18446744073709551614 % 1391662538);
                    }
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {

                        /* vectorizable */
                        for (int i_5 = 1; i_5 < 18;i_5 += 1)
                        {
                            var_13 -= (!1391662538);
                            arr_16 [i_0] [i_1] [4] [i_4] [i_5] = 0;
                            var_14 &= (((arr_11 [i_0] [i_1] [i_0] [i_0] [i_0]) ? 350 : 4130));
                            var_15 *= (((((var_0 ? (arr_14 [18] [i_1] [18] [i_4] [i_4]) : 18446744073709551615))) ? 1470096405125217901 : (arr_1 [18] [i_0 - 3])));
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            var_16 = (((arr_5 [i_0 - 1] [i_0 - 1]) ? var_5 : (((~(arr_0 [i_1]))))));
                            arr_19 [i_6] [i_0] [i_4] [i_2 + 1] [i_0] [i_0 + 1] = 16976647668584333709;
                        }
                        arr_20 [i_2] [i_0] [i_2] [19] [i_0] = (((((-13115 ? 1 : 832972019))) || 72057594037927935));
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 20;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 0;i_8 += 1)
                        {
                            {
                                arr_28 [i_0] [i_0] [i_2] [i_0] [17] [i_7 + 1] [i_8 + 1] = ((((max(-14, 5))) ? 3312345230 : (13113 / 18446744073709551597)));
                                arr_29 [i_0] [i_0] [i_0] [i_7] [i_8] = (max((~0), -var_3));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 19;i_10 += 1)
                        {
                            {
                                arr_34 [i_0] [1] [i_2 - 1] [i_2 - 1] [i_0] [i_9] [i_10 - 1] = (65535 && 144);
                                arr_35 [i_0] [i_0] [i_0] [i_0] [i_9] [i_0] = (((((18446744073709551606 > (arr_26 [i_0] [16] [i_2]))) && var_8)));
                                arr_36 [i_0] = max((((!((max((arr_12 [10] [17] [i_2] [7] [7]), (arr_14 [15] [15] [i_2] [13] [i_10 - 1]))))))), (((((var_10 ? (arr_2 [i_9]) : (arr_0 [i_0])))) ? ((var_7 ? var_6 : (arr_1 [i_0 + 1] [i_0]))) : (65534 * 0))));
                            }
                        }
                    }
                    var_17 |= var_2;
                }
            }
        }
    }
    #pragma endscop
}
