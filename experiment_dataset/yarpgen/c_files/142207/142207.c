/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142207
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_2;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_16 = (min(var_16, (arr_1 [i_0] [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    arr_10 [14] [i_1] [11] [14] = ((((((367821235142464209 & -1) ? ((max((arr_1 [i_0] [i_1]), -1))) : (arr_6 [i_2 - 1] [i_2 + 1] [i_2 - 1] [i_2 - 1])))) ? (((arr_0 [i_0]) | (arr_2 [i_2 + 1]))) : (((~(!1))))));
                    var_17 = (((((~(arr_4 [i_0] [i_0])))) ? ((max((arr_8 [i_2] [i_0] [i_0] [i_0]), (arr_6 [i_1] [i_1] [i_2] [i_2 + 1])))) : ((((arr_1 [i_0] [i_0]) == (arr_5 [i_0] [i_1] [i_1]))))));
                    var_18 = var_5;
                }
            }
        }

        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            var_19 = ((~(((-2147483647 - 1) ? (arr_7 [i_3] [i_3] [i_0]) : (((arr_5 [i_0] [i_0] [i_0]) ? (arr_0 [2]) : -2147483624))))));
            var_20 ^= (arr_4 [i_0] [i_3]);
            var_21 = (max(((724776682 / ((var_12 ? var_13 : 18078922838567087406)))), ((-((724776674 ? (arr_0 [i_0]) : 63))))));
        }

        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            var_22 += (arr_12 [i_0] [i_0] [i_0]);
            var_23 = -var_1;
            var_24 = ((~((max((arr_1 [i_4] [i_4]), (arr_1 [i_0] [i_4]))))));
            var_25 = (((((((max((arr_7 [i_0] [i_0] [i_0]), var_3))) + (min(var_1, var_6))))) ? ((-8457 ? 5540530758109125779 : ((((arr_9 [i_4] [14] [i_0]) + -724776675))))) : (((~(var_1 && var_5))))));
        }
    }
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        var_26 = (min(var_26, ((((((arr_15 [i_5]) ? (arr_15 [i_5]) : ((max((arr_16 [i_5]), 16461))))) / ((max((arr_16 [i_5]), var_12))))))));
        var_27 = ((724776675 ? ((-(arr_16 [i_5]))) : ((((arr_16 [14]) ? (-2147483647 - 1) : 2024418358)))));
        var_28 = (max(var_28, ((((-260773787 | 1725714852) ? -2147483626 : (-2147483647 - 1))))));
        var_29 = (((((arr_16 [i_5]) & (arr_16 [i_5]))) - (arr_16 [i_5])));
        var_30 = (max(var_30, (arr_16 [i_5])));
    }
    for (int i_6 = 0; i_6 < 25;i_6 += 1)
    {
        var_31 ^= (((65529 ? 438856076 : (arr_17 [i_6] [24]))));
        arr_21 [i_6] = (arr_20 [i_6]);
    }
    var_32 = (max(var_32, (((var_9 ? (((((max(2147483647, 135))) ? 3 : (max(0, var_7))))) : (3630420217971602400 - -575943899))))));
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 22;i_7 += 1)
    {
        for (int i_8 = 2; i_8 < 21;i_8 += 1)
        {
            {
                arr_27 [i_7] = (arr_23 [i_8 - 1] [i_8 - 2]);
                var_33 = (((arr_24 [i_7]) ? 1346209816 : (((6923815734780903402 - 1503437996) + (((4294967282 ? 2147483647 : 1)))))));
                var_34 += ((~(~var_14)));
            }
        }
    }
    #pragma endscop
}
