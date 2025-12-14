/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134426
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = min((max(var_15, (((-58 ? var_0 : var_6))))), var_10);
    var_18 = ((!((((0 > var_5) ? (!var_3) : (!var_8))))));
    var_19 = var_16;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_20 = ((!((min((!1), (arr_1 [i_0]))))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_21 = ((-102 ? (((((var_2 + (arr_1 [i_0])))) ? (var_2 / var_13) : -7)) : var_10));
                                arr_16 [i_0] [1] [i_1] [3] [i_1] [i_3] [18] = ((!((((((var_12 ? var_1 : var_10))) ? -var_5 : (((((-2147483647 - 1) && var_13)))))))));
                            }
                        }
                    }
                    var_22 = ((~((162523281 ? (arr_8 [i_1] [10] [10]) : (arr_8 [i_1] [i_0] [i_1 + 1])))));
                    var_23 *= (((((~(~1)))) && (((arr_10 [i_1 - 1] [i_1] [16] [i_0] [i_1]) > (arr_10 [i_1 + 3] [i_1 + 3] [i_1 + 3] [i_0] [i_1])))));
                }
            }
        }
        arr_17 [i_0] [i_0] = (((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : ((max((arr_13 [i_0] [i_0] [16] [i_0] [i_0] [i_0] [i_0]), (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [12] [i_0]))))));
        arr_18 [i_0] &= (((min((!var_7), -var_1)) - (((!(arr_11 [10] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
    }
    #pragma endscop
}
