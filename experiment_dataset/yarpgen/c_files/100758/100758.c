/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100758
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_15 = (((((min((arr_0 [i_0 - 2]), (arr_0 [i_0 - 1]))))) - (min((((var_13 ? var_14 : (arr_0 [i_0])))), (arr_1 [i_1 - 1])))));
                var_16 = (min(var_6, ((var_4 ? (arr_1 [12]) : (arr_3 [i_1] [i_0 + 1] [i_1 + 1])))));

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    var_17 *= (max((max((arr_4 [i_0 + 2] [i_1 - 1]), (arr_4 [i_0 - 4] [i_1 + 1]))), var_7));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_18 = ((arr_3 [i_1] [8] [i_3]) | var_1);
                                var_19 = ((20 << (-7917871275309601001 + 7917871275309601006)));
                            }
                        }
                    }
                }
                for (int i_5 = 2; i_5 < 17;i_5 += 1) /* same iter space */
                {
                    var_20 = (arr_7 [i_1] [15] [15] [4]);
                    var_21 = max(var_1, (var_7 | -6539547236351480363));
                    var_22 = (max(var_22, var_4));
                }
                for (int i_6 = 2; i_6 < 17;i_6 += 1) /* same iter space */
                {
                    var_23 = (((min(var_7, (arr_13 [i_1] [i_1])))) ? (min((arr_9 [i_0 - 1] [i_0] [i_0] [i_1] [i_1] [i_6 + 2]), (arr_9 [i_0] [i_1 + 1] [i_6] [i_1] [i_6 + 4] [i_6 + 3]))) : (arr_3 [i_1] [i_1 - 1] [i_6]));
                    var_24 = (!7917871275309601004);
                    var_25 = (((((((arr_14 [i_1] [i_1] [i_1]) | var_0)) + (arr_18 [i_1] [i_1])))) ? (((arr_3 [i_1] [i_6 + 4] [i_6 + 2]) ? var_4 : (arr_3 [i_1] [i_6 + 4] [i_6 + 4]))) : (arr_4 [i_0 - 4] [i_1 - 1]));
                    var_26 = (min(var_26, ((max(((max(var_11, (((!(arr_18 [i_0] [i_1]))))))), var_0)))));
                    var_27 = (min(19, 32208));
                }
            }
        }
    }
    var_28 = var_12;
    #pragma endscop
}
