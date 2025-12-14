/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116917
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_13 [i_4] = var_6;
                                var_15 = ((((((arr_2 [i_0 - 1] [i_1 - 1]) ? (arr_2 [i_0] [i_0]) : 27319))) || ((max((arr_11 [i_4 - 3] [i_0] [i_1] [i_1] [i_0]), (arr_4 [i_3] [i_2] [i_1 + 1] [10]))))));
                                arr_14 [i_3] |= (((arr_11 [i_0] [i_0] [i_3] [i_3] [i_4]) ? ((((1272110627 < 248) ? 4294967286 : (28976 <= 1)))) : (((-1 > 1) ? var_11 : 6057853855456273029))));
                                var_16 = (((((1 != 108) ? ((((arr_7 [i_0] [i_0] [i_0]) ? var_13 : var_7))) : 4075066265157467229))) ? ((((max((arr_10 [i_4] [i_4]), 1))) ? (~1) : (((arr_5 [i_0 - 4]) + (arr_4 [i_0] [i_3] [i_1] [i_0]))))) : (((((!var_5) != (((arr_9 [i_0 - 3] [i_0 - 3]) ? (arr_5 [12]) : 2020631508)))))));
                                arr_15 [0] [i_4] [i_4] [i_3] [i_4] [0] = (((!1) ? ((30070 ? (arr_1 [i_0 + 2]) : var_6)) : ((((((min(72, 0))) && (((1272110622 ? 1 : 1)))))))));
                            }
                        }
                    }
                    var_17 = (((((133143986176 ? var_0 : 36559))) ? (((arr_7 [i_0] [i_0 + 1] [i_0]) >> (!4224212120))) : var_12));
                    var_18 = ((24576 ? 135 : 4243817240));
                }
                /* LoopNest 3 */
                for (int i_5 = 1; i_5 < 12;i_5 += 1)
                {
                    for (int i_6 = 4; i_6 < 9;i_6 += 1)
                    {
                        for (int i_7 = 4; i_7 < 12;i_7 += 1)
                        {
                            {
                                arr_23 [i_0] [i_1] [i_6] [i_0] [i_1] [2] = (((arr_7 [i_0] [i_1 - 4] [i_6 + 4]) ? (((((0 ? (arr_11 [i_0] [i_0] [11] [i_6 - 4] [i_7]) : (arr_16 [i_0 + 1] [i_0 + 1])))) ? (!var_2) : (1 > -2020631505))) : 35789));
                                var_19 = (((((((arr_17 [3] [i_1 - 4] [i_5] [i_1 - 4]) & 1)) % ((((arr_1 [i_0 - 2]) ? (arr_21 [i_6]) : (arr_6 [i_0] [i_0] [i_1 + 1] [i_0]))))))) ? ((~(!105))) : (!0));
                            }
                        }
                    }
                }
                var_20 ^= ((~((((((21 ? 1 : 51150072))) || -133143986176)))));
                arr_24 [i_0] [i_1 - 4] = (((~(max(-3770503589924293025, var_7)))));
            }
        }
    }
    #pragma endscop
}
