/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133007
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= ((var_11 ? var_0 : var_12));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [7] = (2543894110 ? 1751073193 : 1751073169);
                var_19 ^= ((4294967277 ? -102 : 1751073186));
                var_20 = (arr_3 [i_1]);
                var_21 = (((((arr_3 [i_0]) ? (arr_0 [i_1]) : (arr_3 [i_0])))) ? (max(1751073169, (arr_1 [i_1]))) : (((min((arr_0 [i_1]), (arr_1 [i_0]))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_22 = ((((min(4294967275, (arr_1 [i_3])))) ? ((min((arr_1 [i_0]), (arr_1 [1])))) : ((max((arr_1 [3]), (arr_1 [i_0]))))));
                            arr_11 [i_0] [i_1] = (arr_1 [i_2]);
                        }
                    }
                }
            }
        }
    }
    var_23 = (max((max(var_2, var_10)), var_15));
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 13;i_5 += 1)
        {
            {
                var_24 = ((2543894127 ? (((arr_8 [i_4] [i_5 + 1]) ? 1 : (arr_8 [i_4] [i_4]))) : (arr_2 [i_5 - 1] [i_4])));
                /* LoopNest 3 */
                for (int i_6 = 4; i_6 < 13;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            {
                                arr_25 [i_4] [i_4] = 2543894094;
                                var_25 = (max((min(-1044702546633618293, (arr_16 [i_4] [i_4]))), (min((arr_17 [i_4]), (arr_17 [i_4])))));
                                arr_26 [8] [i_5] [i_6] [i_5 + 1] = ((((min((arr_21 [i_5] [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 + 1]), (arr_16 [i_5 + 1] [i_5 - 1])))) ? (max((((18446744073709551615 ? 1 : 1))), 27)) : ((((arr_18 [i_5 + 1] [i_6] [i_6]) ? -17836 : 18446744073709551615)))));
                                var_26 &= (max((arr_23 [i_4] [13] [i_4] [i_7] [i_8]), (min((arr_2 [i_5 - 1] [i_6 - 1]), (arr_2 [i_5 - 1] [i_6 - 4])))));
                            }
                        }
                    }
                }
                var_27 = 4194303;
                var_28 = ((((((arr_20 [i_4] [i_5 + 1] [i_4]) ? (arr_7 [i_4] [i_4] [3] [i_4]) : (arr_7 [i_4] [13] [i_5] [i_5 - 1])))) ? (arr_12 [i_5] [i_5 + 1]) : 30));
                var_29 = (((1 ? 1879659216 : 1879659232)));
            }
        }
    }
    #pragma endscop
}
