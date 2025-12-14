/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106910
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_6, (((max(var_5, 9223372036854775808)) << (var_4 - 92)))));
    var_18 = 28310;
    var_19 = (((72 ? 7848 : var_1)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_0] = (arr_0 [i_3]);
                            var_20 = (min(var_20, ((((((max(-911596716, (arr_4 [2]))))) ? (((var_7 ? var_2 : 52))) : 8)))));
                        }
                    }
                }
                var_21 = (max((max((max((arr_1 [i_1]), (arr_4 [i_0]))), (arr_1 [i_0]))), (((((((arr_7 [i_0]) ? (arr_0 [1]) : (arr_6 [3] [i_0] [i_0] [3])))) ? (arr_7 [i_0]) : (arr_0 [i_1 + 2]))))));
                var_22 -= (((((arr_3 [i_0]) ^ -440685997))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        {
                            arr_15 [i_0] [2] [5] [i_4] [i_0] = ((((min(var_10, (max(var_6, (arr_2 [i_0])))))) ? (max(-8269020087033878791, (max(8269020087033878791, var_9)))) : (!2076983520)));
                            arr_16 [i_0] [i_1] [i_1 + 1] [i_1] [7] [i_1 + 2] = var_15;
                            var_23 = (max(var_23, (((min(0, (8269020087033878791 | -72)))))));
                        }
                    }
                }

                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    var_24 = (((((((max(1, (arr_1 [i_0])))) ? (min((arr_7 [i_0]), 8269020087033878791)) : (((arr_17 [i_0]) ? 1 : -7968020697604293777))))) ? ((-7849 ? ((max(60, (arr_0 [i_0])))) : (arr_9 [11] [i_1] [i_1] [i_1 - 2]))) : (((-((113 ? 112 : (arr_0 [i_1]))))))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            {
                                arr_25 [i_0] [i_1] [1] [i_1] [i_0] = (((-41 && (arr_13 [i_1 - 2] [i_1 + 1] [i_1 + 2] [i_1 + 2]))));
                                arr_26 [i_0] [i_0] [i_6] [i_8] = ((((((!var_5) ^ ((-2076983520 ? 12406889543581265778 : 21))))) ? ((+(((arr_4 [i_0]) ? var_13 : -1443713210)))) : ((((-1443713210 ? -8269020087033878791 : (arr_17 [i_6])))))));
                                arr_27 [i_0] [6] [i_1 - 2] [i_0] [i_7] [i_1 - 2] = (arr_22 [2] [2] [i_1] [i_6] [2] [i_8] [i_8]);
                                var_25 = (max(var_6, (arr_5 [i_0])));
                                arr_28 [i_0] [i_1] [i_6] [i_0] [i_8] = ((max((max(var_13, 8269020087033878791)), var_0)));
                            }
                        }
                    }
                    var_26 = ((((max((var_2 + -2076983521), var_14))) ? ((((arr_2 [12]) | 7848))) : ((((max((arr_9 [i_6] [i_6] [i_1] [i_0]), var_5))) ? ((var_3 ? (arr_24 [i_0] [i_0] [i_0] [2] [11] [i_0] [i_0]) : -1547262708819050572)) : (max((arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), -2076983520))))));
                }
            }
        }
    }
    var_27 = ((((max(var_6, (-7271045557905375407 || 12406889543581265778)))) / 245));
    #pragma endscop
}
