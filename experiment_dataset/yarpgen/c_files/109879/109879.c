/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109879
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((max((((arr_2 [0]) - var_0)), ((min((arr_0 [i_0]), (arr_0 [i_0])))))) + ((((!(arr_2 [i_0]))))));
        arr_4 [i_0] [i_0] = (((((arr_2 [i_0]) ? ((41811432844938046 ? var_13 : (arr_0 [i_0]))) : (min((arr_0 [i_0]), (arr_0 [i_0]))))) << (((var_9 <= (max(1, (arr_2 [i_0]))))))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 9;i_3 += 1)
            {
                {
                    var_17 = ((((((4194303 % 3660187394) ? (arr_1 [i_1]) : (arr_2 [i_1])))) ? ((min(((~(arr_7 [i_2] [i_2] [i_2]))), (var_6 | 524287)))) : (((((arr_5 [i_1] [i_1]) >= 4194308)) ? (arr_7 [i_3 + 1] [i_2] [i_3 + 1]) : ((max((arr_11 [i_1] [i_2] [i_3 - 1]), (arr_5 [i_2] [7]))))))));
                    arr_13 [i_2] = ((((max(-36028797018963967, (min(18404932640864613570, 62))))) ? (((((4194336 ? 18404932640864613570 : 127)) != ((((arr_7 [i_1] [i_1] [i_1]) ? (arr_9 [i_3] [i_3 + 1] [9] [i_1]) : (arr_0 [i_3]))))))) : 1));
                    arr_14 [3] [i_2] [i_3 - 3] = ((~((min(var_11, (arr_9 [i_3 - 4] [i_3 - 4] [i_3 - 4] [i_3 - 3]))))));
                    arr_15 [i_1] [i_2] [i_3] = ((((min(var_12, (arr_8 [i_1] [6])))) ? ((((((-1 + 2147483647) << (((((arr_1 [i_3 - 2]) + 25281)) - 21)))) + (((!(arr_10 [i_2] [i_3 - 2]))))))) : (max((!var_5), (arr_6 [i_1])))));
                }
            }
        }
        arr_16 [i_1] = (((arr_7 [i_1] [i_1] [i_1]) ? ((max(4194337, (arr_1 [i_1])))) : ((((arr_5 [i_1] [i_1]) ? (arr_5 [i_1] [i_1]) : (arr_5 [i_1] [i_1]))))));
    }
    /* LoopNest 2 */
    for (int i_4 = 3; i_4 < 11;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        {
                            var_18 = var_16;
                            arr_28 [i_5] = -255;
                            var_19 ^= ((18446744073705357311 | ((((arr_17 [i_4 - 1]) ? (arr_17 [i_4 - 2]) : (arr_0 [i_4 + 2]))))));
                        }
                    }
                }
                arr_29 [i_5] [i_5] = (((3435725346925463168 - var_13) >> ((((+(((arr_19 [i_4 - 2] [i_4 - 2]) ? (arr_27 [i_5] [i_5] [i_4 + 2] [i_4 - 2]) : var_6)))) + 24381))));
                arr_30 [i_4] [i_5] = (((((-(((1 && (arr_0 [i_5]))))))) == 4294967295));
                arr_31 [i_5] = ((((min(-1, (arr_18 [i_4 + 2])))) ? (max((arr_25 [i_4] [i_5] [i_5] [i_5]), (1 - 4194325))) : 51487));
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 14;i_8 += 1)
                {
                    for (int i_9 = 4; i_9 < 10;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 12;i_10 += 1)
                        {
                            {
                                arr_40 [i_4] [i_5] [5] [i_9] [i_9] [1] = (max(((~((~(arr_23 [i_5] [i_10]))))), ((((~var_5) || ((((arr_1 [i_9]) ? 4294967295 : (arr_25 [i_4] [i_4] [i_5] [i_9])))))))));
                                arr_41 [13] [i_5] [i_8] [i_9] [i_5] = 32;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
