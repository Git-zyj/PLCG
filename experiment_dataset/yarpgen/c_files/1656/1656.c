/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1656
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    arr_7 [i_2] = (1 + 1);
                    arr_8 [i_1] [i_2 - 2] = ((min((min(1, (arr_5 [i_0] [i_1] [1] [1]))), ((((arr_5 [i_0] [i_0] [3] [8]) <= (arr_1 [i_2] [i_0])))))) - ((((((36919 ? 1 : 27))) ? (((14117477148254863798 ? 1 : var_9))) : var_0))));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        var_17 -= (arr_10 [i_3]);
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 13;i_5 += 1)
            {
                {
                    var_18 *= 15;

                    for (int i_6 = 4; i_6 < 13;i_6 += 1)
                    {
                        var_19 ^= -var_14;
                        var_20 -= (min(-4, 214));
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        var_21 *= -52349;
                        var_22 = var_12;
                        var_23 = (min(var_23, 3824521564));
                    }
                    for (int i_8 = 1; i_8 < 13;i_8 += 1)
                    {
                        var_24 = (min(var_24, var_1));
                        var_25 |= ((~(1 * 1)));
                    }
                }
            }
        }
        var_26 += (max(var_11, var_0));
    }
    for (int i_9 = 0; i_9 < 25;i_9 += 1)
    {
        var_27 = (min(var_27, (min((((1 ? 2127684993 : 248))), ((1 & (((arr_23 [i_9]) ? (arr_23 [i_9]) : 1198248431))))))));
        var_28 = ((248 ? -1094743250237357688 : 21));
        var_29 = (min(var_29, (((!(((var_16 ? (arr_24 [i_9]) : (arr_23 [i_9])))))))));

        for (int i_10 = 1; i_10 < 1;i_10 += 1)
        {
            var_30 = (((~var_5) ? (arr_25 [i_9] [i_10] [1]) : ((((max(var_14, var_6))) ? (~131) : ((229 ? (arr_27 [i_9] [1]) : var_13))))));
            var_31 = ((134 ? -7403853335810970970 : (((-(arr_25 [i_9] [i_10] [i_10 - 1]))))));
            var_32 ^= -214;
        }
        var_33 &= var_13;
    }
    #pragma endscop
}
