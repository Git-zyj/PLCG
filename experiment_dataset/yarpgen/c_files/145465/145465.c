/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145465
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= -var_5;

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_18 *= ((((((arr_10 [i_0 - 2]) ? (arr_10 [i_0 - 1]) : 33))) ? (((((((var_1 ? (arr_14 [i_3] [i_2]) : 25))) <= (min(var_10, var_12)))))) : var_6));
                                var_19 = (((arr_12 [i_2] [i_2 + 3] [i_2 + 2] [i_2 + 2] [i_2]) * (arr_4 [i_4 - 2] [i_0])));
                            }
                        }
                    }
                    arr_15 [i_0] [i_0] = (max((arr_4 [9] [i_0]), ((((arr_6 [i_0] [i_0]) < var_15)))));
                    var_20 = (((var_3 ? (arr_9 [i_0] [i_0]) : 33)));
                    var_21 = (arr_5 [i_0 + 1]);
                    var_22 = ((((((13888177647764840445 ? var_0 : (arr_10 [i_2]))))) >= var_3));
                }
            }
        }
        var_23 *= (((((((var_3 - (arr_9 [i_0 + 1] [8])))) ? (arr_11 [i_0 + 1] [i_0] [20] [i_0]) : var_7)) < (arr_11 [i_0] [i_0] [i_0] [i_0])));
        arr_16 [i_0] [4] |= var_6;

        for (int i_5 = 1; i_5 < 20;i_5 += 1)
        {
            var_24 |= (3261507024 || 0);
            arr_19 [6] [i_5] [i_0] = (max((min((((arr_10 [i_0]) ? 116 : (arr_6 [i_0] [1]))), -889651591699611360)), ((max((var_14 >= var_15), (((arr_1 [i_0]) < 10485688142092275962)))))));
        }
        for (int i_6 = 4; i_6 < 20;i_6 += 1)
        {
            arr_24 [i_0] = ((((((arr_4 [i_0] [i_0]) ? 0 : (min(var_6, -4382381179357984371))))) ? (arr_4 [i_0 + 1] [i_0]) : var_3));
            var_25 = (((arr_2 [i_0 - 3]) - (((arr_8 [i_0] [i_0 + 1] [i_6] [12]) + var_6))));
        }
    }
    #pragma endscop
}
