/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144696
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((((var_7 ? var_6 : var_8))) ? (37761 | var_9) : (!var_7))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        {

                            for (int i_4 = 2; i_4 < 11;i_4 += 1)
                            {
                                var_15 = var_8;
                                arr_10 [i_4 + 2] [i_3] [i_2] [i_3] [i_0] = ((!0) ? ((min((arr_6 [i_0 + 1] [i_1] [i_3 + 1] [i_3]), (arr_8 [i_1] [i_1] [i_2] [i_0] [i_4 + 4] [i_3] [i_1])))) : (min(-1665039265, -29359)));
                            }
                            for (int i_5 = 3; i_5 < 13;i_5 += 1)
                            {
                                var_16 = ((~((-((~(arr_12 [i_3])))))));
                                var_17 = (arr_12 [i_3]);
                                arr_13 [i_3] [i_3] [i_3 + 2] [i_2] [i_2] [i_1 - 1] [i_3] = (((max((arr_6 [i_0] [i_1 + 2] [i_0] [i_3]), (!1))) ? 1 : ((((!((!(arr_11 [i_0] [i_3] [i_2])))))))));
                            }
                            for (int i_6 = 1; i_6 < 14;i_6 += 1)
                            {
                                arr_18 [i_3] [i_3] [i_2] [i_3] [i_6] = max(((~(arr_1 [i_0 + 1] [i_1 - 2]))), (var_7 & var_11));
                                arr_19 [i_0] [i_0 - 2] [i_0] [i_3] [i_0] = (arr_8 [i_0] [i_1] [i_1] [i_2] [i_2] [i_3] [i_6 - 1]);
                            }
                            var_18 = ((((max((arr_15 [i_3 + 2] [i_1 + 2] [i_2] [i_0 - 2] [i_2] [i_2]), (((-(arr_4 [i_1]))))))) % (max((((arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) << (var_1 + 602954871))), (((arr_7 [i_0] [i_3] [i_2] [i_2] [i_0] [i_3]) ? (arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : var_5))))));
                        }
                    }
                }
                var_19 *= -29358;
            }
        }
    }
    #pragma endscop
}
