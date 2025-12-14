/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176647
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_13;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_20 = (((-127 - 1) ? var_8 : 0));
                                var_21 = (((((0 ? (~-32756) : (arr_7 [i_0 - 2] [i_1 + 2] [i_2 - 1] [i_3 + 4])))) & (arr_9 [i_1 + 2])));
                                var_22 = (max(var_22, (((((!(arr_0 [12]))) ? ((((min(0, var_16))) ? (arr_1 [6]) : (min(32759, (arr_4 [i_0] [i_1] [i_0] [i_3 + 3]))))) : ((((!(((arr_7 [i_2] [i_2] [i_1] [i_0]) <= (arr_5 [i_2] [i_2]))))))))))));
                                var_23 = (((((32760 ? (var_13 & var_15) : (((arr_8 [1] [1] [i_3] [i_4]) ? (arr_6 [i_0] [i_2]) : (arr_10 [5] [i_0] [11] [i_2 + 1] [i_1] [i_0] [i_0])))))) ? (arr_3 [i_0] [i_3 - 1] [i_0 + 3]) : (7502444203880738920 < 60393)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_24 = ((20611 | (~var_9)));
                                arr_16 [i_5] [i_5] [i_5] [i_1] [i_5] |= 18420;
                                var_25 = (max((((arr_7 [i_0] [i_0] [i_6] [i_5]) - var_8)), -24964));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 17;i_8 += 1)
                        {
                            {
                                var_26 = (min(((var_18 ? var_10 : (arr_4 [i_1 - 1] [i_0] [i_0 + 1] [2]))), (arr_19 [i_0] [i_0] [i_2 + 1] [i_0] [i_8])));
                                var_27 = ((!(((-(188 <= 2661576592))))));
                                arr_23 [i_7] [i_7] [i_1] [i_7] |= (-20616 / -1);
                            }
                        }
                    }
                    arr_24 [i_1] [i_0] = var_5;
                    var_28 += -var_16;
                }
            }
        }
    }
    var_29 = ((((1326548038 ? var_7 : var_8)) == 255));
    var_30 = (var_7 ^ var_2);
    #pragma endscop
}
