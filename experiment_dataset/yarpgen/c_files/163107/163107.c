/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163107
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((var_8 ? var_0 : var_6))) & var_6));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] = (max((((!((min(1, 32788)))))), (((1 ? 1 : 1)))));
                    var_20 = (arr_5 [1] [10] [i_0] [i_0]);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_21 = 284288440;
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (((~1) ? (max(3971, (arr_5 [i_3 - 1] [i_1] [i_4 + 1] [i_4 + 1]))) : ((max(var_6, (arr_9 [i_0]))))));
                            }
                        }
                    }
                    arr_14 [i_0] [i_0] = (((((-182519188 ? -182519200 : 6705746162347259421))) - ((min((~3972), var_18)))));
                }
            }
        }
    }
    var_22 = ((91 ? var_10 : ((var_5 ^ ((4525298678322861783 >> (8847432126198691364 - 8847432126198691308)))))));
    var_23 = var_14;
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 9;i_6 += 1)
        {
            {
                arr_20 [3] [i_6 + 2] [i_6 - 1] &= var_13;
                var_24 += var_14;
                arr_21 [i_5] [i_5] = (min(-13555572841591434913, (max(-9599311947510860247, var_14))));
            }
        }
    }
    #pragma endscop
}
