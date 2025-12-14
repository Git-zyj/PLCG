/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109825
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_7 ? 0 : (((((var_5 ? 0 : var_10))) ? var_2 : (((1 ? 1 : var_1)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_13 = (min(var_13, ((((-1 - var_7) ? (arr_1 [i_0] [i_0]) : ((min(1, -29473))))))));
                arr_6 [i_0] [i_1] = (arr_2 [i_0] [i_1 + 1] [i_1]);
                var_14 = (min((min(1, (-28 ^ 8796093022207))), -3417853457749276365));
                arr_7 [i_1] = (i_1 % 2 == 0) ? ((((((((min((arr_1 [i_0] [i_0]), 27526))) ? (arr_5 [i_1] [i_1] [i_1 - 1]) : (((arr_3 [i_1]) ? (arr_1 [i_0] [i_0]) : var_2))))) ? (((var_2 + 9223372036854775807) << (((((arr_5 [i_1 + 1] [i_1] [i_1 + 1]) + 609)) - 62)))) : (arr_2 [i_1] [i_0] [i_1])))) : ((((((((min((arr_1 [i_0] [i_0]), 27526))) ? (arr_5 [i_1] [i_1] [i_1 - 1]) : (((arr_3 [i_1]) ? (arr_1 [i_0] [i_0]) : var_2))))) ? (((var_2 + 9223372036854775807) << (((((((((arr_5 [i_1 + 1] [i_1] [i_1 + 1]) + 609)) - 62)) + 30940)) - 13)))) : (arr_2 [i_1] [i_0] [i_1]))));
                var_15 = ((((min(var_5, var_8))) ? ((~(arr_5 [i_1] [i_1] [i_1 - 1]))) : ((max((arr_5 [i_0] [i_1] [i_1 + 1]), (arr_5 [i_0] [i_1] [i_1 - 1]))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 4; i_3 < 9;i_3 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_16 = ((~(((!((min(var_10, (arr_15 [i_2] [i_2] [i_2])))))))));
                                var_17 = ((!(((var_7 ? ((min((arr_0 [i_5] [i_5]), (arr_4 [i_4] [i_4] [i_4])))) : (((arr_21 [i_2] [i_2] [i_2]) ? var_10 : (arr_11 [i_6]))))))));
                                var_18 = ((((min((~1), (max(3840675093, (arr_20 [i_4] [i_4])))))) ? ((((arr_21 [i_3 - 1] [i_3 - 4] [i_2]) ? (arr_2 [i_2] [i_2] [i_6]) : (arr_18 [i_5])))) : var_11));
                            }
                        }
                    }
                }
                var_19 = (((((~(min(var_1, 0))))) ? ((84 ? 35519 : (-7460 > 1))) : 29268));
                var_20 = (arr_2 [i_2] [i_2] [i_2]);
                var_21 = ((((min((min((arr_21 [i_2] [i_2] [i_2]), (arr_3 [i_2]))), (~var_9)))) ? ((((((var_2 ? (arr_19 [i_2] [i_2] [i_2] [i_2] [i_2]) : var_10)) >= (((-(arr_1 [i_2] [i_2])))))))) : var_2));
            }
        }
    }
    var_22 = var_3;
    #pragma endscop
}
