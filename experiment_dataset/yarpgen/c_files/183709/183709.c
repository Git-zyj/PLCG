/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183709
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_10 = ((((max(var_7, 1641166097) & (var_2 != var_5)))));
                            arr_12 [i_3] [i_1] [i_3] [i_1 - 3] = (((((var_2 ? (arr_7 [i_0 + 2] [i_0 + 1] [i_0 + 1] [i_0 - 1]) : (arr_7 [i_0 - 1] [i_0 + 2] [i_0 + 1] [i_0 + 1])))) ? ((max((arr_7 [i_0 - 1] [i_0 + 2] [i_0 - 1] [i_0 + 2]), (arr_7 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 + 2])))) : -22909));
                            arr_13 [i_0] [i_3] [1] [i_0] = (arr_2 [i_0 + 1]);
                            var_11 = (max(var_11, var_4));
                        }
                    }
                }
                var_12 = ((((-(arr_1 [i_0 - 1] [i_0 + 1]))) << ((((min((arr_6 [i_0 - 1] [i_1 - 2]), -22909))) + 22909))));
                var_13 = (max(var_13, ((((((arr_7 [i_0 - 1] [i_1 + 3] [i_0 - 1] [20]) && (arr_7 [i_0] [i_0] [i_0 - 1] [i_1 - 2]))) ? ((((arr_3 [i_1 - 4]) ? (arr_7 [i_1] [i_1 - 3] [i_1 - 3] [i_0]) : (arr_3 [i_0 + 1])))) : 15204060905485231619)))));
            }
        }
    }
    var_14 = var_1;
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        for (int i_5 = 3; i_5 < 16;i_5 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 18;i_7 += 1)
                    {
                        {
                            arr_23 [i_5] [i_5] = (((min((min(var_2, 37580)), (((var_7 || (arr_3 [6]))))))) & (arr_21 [1] [i_5] [i_5]));
                            var_15 = ((((arr_19 [i_5] [i_7 + 1] [i_7 - 1]) <= (arr_19 [i_5] [i_7 - 1] [i_7 - 1]))) ? (((var_7 <= (arr_19 [i_5] [i_7 + 1] [i_7 + 1])))) : (arr_7 [i_5 + 1] [i_6] [i_7] [i_7 + 1]));
                        }
                    }
                }

                /* vectorizable */
                for (int i_8 = 0; i_8 < 19;i_8 += 1)
                {
                    var_16 *= (~var_9);
                    arr_26 [i_4] [i_5] [i_5] [i_5] = (i_5 % 2 == 0) ? ((((arr_3 [i_4]) >> (((arr_24 [i_5]) + 843))))) : ((((arr_3 [i_4]) >> (((((arr_24 [i_5]) + 843)) - 14159)))));
                    arr_27 [i_5] [i_5] = (((((-30 ? var_1 : var_3)) + 9223372036854775807)) >> (31461 - 31401));
                }
                var_17 = (max((min(var_2, (!3242683168224319987))), var_2));
                var_18 &= var_2;
                var_19 = ((min(0, (arr_11 [i_5] [i_5 - 3] [i_5]))) ? (arr_10 [i_4] [i_5] [i_4] [i_5 - 3]) : (min((((arr_18 [9] [i_5] [i_5] [i_5]) ? (arr_20 [i_4] [i_5] [i_5]) : var_4)), (var_8 / 5848857503615080267))));
            }
        }
    }
    var_20 ^= var_1;
    #pragma endscop
}
