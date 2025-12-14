/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169681
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            arr_5 [9] = ((~(min(5, 168))));
            var_13 = (max(var_13, ((((((5 ? 65535 : 207))) || (((-(arr_1 [i_0] [i_1])))))))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        var_14 = ((-((((-(arr_8 [i_0] [i_1] [i_2] [7] [7] [3])))))));
                        var_15 = (((((max(65535, (arr_1 [i_0] [i_0]))))) <= (((arr_6 [i_1] [i_1] [i_2]) ? (arr_1 [i_0] [i_3]) : (arr_6 [i_0] [i_1] [i_2])))));
                    }
                }
            }
        }

        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            var_16 += min((((~(((arr_0 [i_0]) | var_3))))), ((var_6 ? (max((arr_7 [0] [i_4] [0]), 4891642807183840968)) : ((((arr_1 [i_0] [3]) ? (arr_6 [i_0] [i_0] [i_4]) : var_6))))));
            var_17 = (max(var_9, (max((1 <= 235373373), (~var_4)))));
            var_18 |= 18446744073709551615;
            var_19 = var_10;
        }
        for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 9;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    {
                        var_20 = (min(var_20, ((((min((min(var_4, 1)), var_5))) <= ((~(arr_11 [i_0])))))));
                        var_21 = 18446744073709551613;
                        var_22 = (((~var_5) <= (((-((((arr_19 [i_5] [i_6] [i_5]) || var_3))))))));
                    }
                }
            }
            var_23 = ((((18446744073709551611 || ((min(var_9, var_4))))) ? 1 : var_7));
            arr_21 [i_0] [8] [8] = (min(((3971439959548107289 ? var_11 : (arr_17 [i_0] [i_5] [i_5] [i_5]))), (((((max(154, var_8))) ? var_9 : (arr_6 [i_0] [i_5] [7]))))));
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 10;i_8 += 1) /* same iter space */
        {
            arr_26 [i_0] = (+((var_0 ? (arr_23 [3]) : (arr_11 [i_0]))));
            var_24 = (arr_24 [i_0]);
        }
        for (int i_9 = 0; i_9 < 10;i_9 += 1) /* same iter space */
        {
            var_25 = ((min(((2147483647 ? 1 : (arr_17 [0] [i_9] [i_9] [i_0])), (((-2026441740 && (arr_2 [i_0] [i_9]))))))));
            arr_29 [i_0] [i_0] = (min((arr_6 [i_9] [i_9] [i_9]), (((arr_19 [i_0] [i_9] [i_0]) ? -5437 : (arr_19 [0] [i_9] [i_0])))));
        }

        for (int i_10 = 0; i_10 < 10;i_10 += 1)
        {
            arr_32 [i_0] [i_10] [i_0] = ((!(var_10 / 5266)));
            var_26 ^= 14475304114161444327;
            var_27 = (min(var_27, ((min(((min((~65535), (max(var_8, (arr_10 [i_0])))))), 330567203736838934)))));
        }
        var_28 = (arr_15 [i_0] [3] [i_0]);
    }
    var_29 |= ((((((((~var_9) + 2147483647)) << ((((2147483647 ? var_11 : var_6)) - 780102038))))) ? var_2 : var_7));
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 17;i_11 += 1)
    {
        for (int i_12 = 3; i_12 < 15;i_12 += 1)
        {
            {
                var_30 = 65507;

                /* vectorizable */
                for (int i_13 = 1; i_13 < 14;i_13 += 1)
                {
                    var_31 = (max(var_31, (((!(arr_35 [i_13 + 2]))))));
                    arr_42 [i_12] [i_13] = var_8;
                    var_32 = 264241152;
                }
            }
        }
    }
    #pragma endscop
}
