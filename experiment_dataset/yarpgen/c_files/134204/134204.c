/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134204
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, (((((11774725985758624767 ? ((var_10 ? 16930843443426662980 : var_0)) : -1)) < var_3)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((1 - (!0)));
                var_12 = (max(var_12, (((((!(var_4 % 8076737032082203339))) ? (max(-13, ((var_5 / (-9223372036854775807 - 1))))) : (((-(arr_1 [i_0])))))))));
                var_13 ^= ((((((arr_1 [i_0]) - -32767))) ? (2147483647 - 1) : (((arr_1 [i_0]) ? ((1 ? (arr_3 [i_1] [i_1] [i_1]) : 0)) : -5303709427152475865))));
                arr_5 [i_0] [i_0] = (20 < -1);
            }
        }
    }
    var_14 = (((((~(~var_3)))) ? var_8 : ((~((1 ? 60 : -6755063757820472860))))));
    var_15 = (max(var_15, ((max(4693025006364812964, 13)))));

    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 7;i_4 += 1)
            {
                {
                    arr_15 [i_4] [i_3] [i_3] [2] = -4693025006364812964;
                    var_16 = var_8;
                    arr_16 [i_2] [i_4] [i_4 + 4] = (max((((((-5310924211076235748 ? 9223372036854775807 : 1))) ? (var_10 > 127) : var_1)), (((!(((var_7 ? 0 : var_0))))))));
                }
            }
        }
        var_17 = (max((arr_0 [i_2] [i_2]), (2147483647 >= 255)));
        /* LoopNest 3 */
        for (int i_5 = 3; i_5 < 9;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    {
                        arr_25 [2] [i_5] [i_6] [i_7] [i_7] [i_2] = (!5224810371807587586);
                        arr_26 [i_6] [i_2] = ((!((max(1, -736698509)))));
                    }
                }
            }
        }
        arr_27 [i_2] |= ((44667 | (4620765155884598483 && var_4)));
    }
    for (int i_8 = 0; i_8 < 20;i_8 += 1) /* same iter space */
    {
        var_18 *= var_8;
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 20;i_10 += 1)
            {
                {
                    arr_35 [i_8] [i_8] [i_8] [i_8] = var_3;
                    arr_36 [i_8] = ((!(!-5310924211076235762)));
                }
            }
        }
        var_19 = (((((var_10 | ((var_6 ? (arr_30 [i_8] [i_8]) : 120))))) ? (arr_31 [i_8] [i_8]) : (arr_0 [i_8] [i_8])));
        var_20 = 63;
    }
    for (int i_11 = 0; i_11 < 20;i_11 += 1) /* same iter space */
    {
        arr_40 [i_11] [i_11] = ((var_2 > ((255 ? 1251948650 : -5310924211076235740))));
        arr_41 [i_11] = (max(255, 5752695779679749238));
        var_21 = (max(var_21, 2147483647));
    }
    #pragma endscop
}
