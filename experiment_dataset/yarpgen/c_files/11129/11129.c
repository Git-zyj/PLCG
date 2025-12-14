/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11129
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_4;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] = 1;
        arr_4 [i_0] [0] = 65535;
        var_12 = (max(9223372036854775807, ((~(arr_0 [i_0])))));
        var_13 = (arr_2 [i_0] [7]);
        arr_5 [i_0] [10] &= (min((arr_0 [2]), (((!(arr_0 [4]))))));
    }
    for (int i_1 = 2; i_1 < 19;i_1 += 1)
    {
        var_14 = (min((arr_6 [i_1 - 2] [0]), ((((((arr_7 [i_1]) ? (arr_7 [i_1]) : var_5))) ? (~0) : ((max((arr_6 [i_1 - 1] [i_1 + 1]), 0)))))));
        var_15 = ((arr_6 [i_1] [i_1]) ? var_6 : ((max((arr_6 [i_1] [13]), ((((arr_6 [i_1] [i_1 + 1]) || 13318)))))));

        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    {
                        var_16 -= 1;
                        var_17 = (min(var_17, (((~(arr_7 [i_1 + 1]))))));
                    }
                }
            }
            var_18 = (max(var_18, 1));
            /* LoopNest 2 */
            for (int i_5 = 4; i_5 < 18;i_5 += 1)
            {
                for (int i_6 = 3; i_6 < 17;i_6 += 1)
                {
                    {
                        var_19 += (arr_11 [i_1]);
                        var_20 *= (max((~-33), (arr_17 [i_1] [i_1] [i_1 - 2] [i_6 - 3] [i_2] [i_1 + 1])));
                        var_21 += (arr_12 [i_1 - 1] [i_6]);
                        var_22 = -1;

                        for (int i_7 = 2; i_7 < 18;i_7 += 1)
                        {
                            arr_25 [i_1 - 2] [i_2] [i_5] [i_6] [i_2] [i_5] = (max(2097036395, 64830));
                            var_23 = (max(var_23, ((((((~(8113 / -1979305127)))) || (((arr_14 [i_1 + 1]) && (arr_14 [i_1 - 2]))))))));
                            var_24 -= (arr_11 [i_1]);
                        }
                        for (int i_8 = 3; i_8 < 18;i_8 += 1)
                        {
                            var_25 = var_10;
                            var_26 = (max(var_26, 19));
                            var_27 = ((((min(((5290923712876870627 ? -1007564290 : var_10)), (arr_26 [i_1] [i_1 - 2] [i_1 + 1] [i_1 - 1] [i_2] [i_1 + 1] [i_1 - 1])))) ? (((((1 ? (arr_27 [i_2] [i_5]) : var_1))) ? 9766 : (min(16874186567255171897, 18446744073709551615)))) : (((((1858 || var_7) <= var_2))))));
                            var_28 = ((~(2726155351 >= var_2)));
                            arr_28 [i_2] [i_5] [i_5] [i_2] [i_5] [i_5 - 3] [i_5] = (~31174);
                        }
                    }
                }
            }
        }
        for (int i_9 = 0; i_9 < 20;i_9 += 1) /* same iter space */
        {
            var_29 = (((((arr_20 [i_1] [i_1 + 1] [i_1 + 1]) - (((var_1 ? var_8 : -28362)))))) - (((arr_13 [i_1 + 1] [i_1 - 2]) - 67106816)));
            arr_32 [i_1 - 1] [i_9] = (arr_18 [i_1] [i_1 - 2] [i_1 - 2] [i_1] [i_1] [i_1]);
        }
        for (int i_10 = 0; i_10 < 20;i_10 += 1) /* same iter space */
        {
            var_30 -= var_4;
            var_31 = (max(var_31, ((((arr_9 [0] [i_1] [i_1 - 2]) - 30099)))));
        }
    }
    for (int i_11 = 0; i_11 < 14;i_11 += 1)
    {
        var_32 ^= ((~(63 | 1)));
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 14;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 14;i_13 += 1)
            {
                {
                    var_33 = (max(var_33, 54));
                    var_34 = ((arr_35 [i_12]) ? (((14228 && (((4294967295 ? 6908689258168708400 : 28)))))) : var_8);
                }
            }
        }
    }
    #pragma endscop
}
