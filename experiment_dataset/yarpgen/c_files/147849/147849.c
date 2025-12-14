/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147849
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, ((((!var_8) | var_9)))));
    var_19 -= 10243054264148952870;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 3; i_2 < 19;i_2 += 1)
                {
                    var_20 = (!(((var_0 ? (arr_2 [i_1] [i_0]) : (arr_0 [i_0] [i_0])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_15 [18] [i_1] [i_1] = 1;
                                var_21 -= (var_16 | 1);
                                arr_16 [i_0] [i_1] [i_2 + 3] [i_3] [i_3] [20] = (((arr_6 [i_0] [i_2 - 1] [i_2] [i_3]) << var_5));
                            }
                        }
                    }
                    var_22 ^= (arr_13 [i_0] [i_1] [i_2 - 2]);
                    var_23 = (min(var_23, (((!(arr_13 [i_2 + 1] [i_2 - 3] [i_2 - 2]))))));
                }
                for (int i_5 = 2; i_5 < 20;i_5 += 1)
                {
                    var_24 ^= (((arr_11 [i_0] [i_0] [i_0] [i_0] [2] [i_0] [17]) >= ((min(var_14, (arr_11 [i_0] [i_0] [i_5 - 1] [i_5] [i_5 - 1] [i_0] [i_1]))))));
                    arr_19 [i_0] [i_1] = (((((~164) & (arr_3 [i_0]))) << (((((arr_6 [i_0] [i_0] [i_5] [i_5 + 1]) ? (arr_6 [15] [i_1] [i_5 + 1] [i_5 - 1]) : -2)) - 70))));
                }
                var_25 += (1 ? (min(((max(830, 1))), 3737442308966308891)) : ((((arr_5 [i_0]) ? 1 : (arr_5 [i_0])))));
                var_26 = (max((arr_1 [21]), (((((arr_7 [i_0] [i_0]) <= (arr_0 [i_0] [3]))) ? (((arr_2 [i_1] [i_0]) + (arr_13 [2] [4] [i_1]))) : (arr_13 [i_0] [17] [i_0])))));
                var_27 += 0;
            }
        }
    }
    #pragma endscop
}
