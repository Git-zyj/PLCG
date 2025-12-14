/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183192
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_16 -= (arr_0 [i_0] [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_13 [i_2 - 3] [i_2] [i_2 - 1] [i_2 - 3] [i_2] [i_2 - 3] = (9717087051285959165 | (arr_12 [i_2 - 3] [i_2 + 2] [i_2] [i_2 - 2] [20]));
                                var_17 = (min((9717087051285959165 & 9717087051285959165), ((((arr_6 [i_2]) & (arr_6 [i_2]))))));
                                arr_14 [i_2] [i_2] = var_10;
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        var_18 = (max(var_18, ((((arr_8 [i_0] [i_0] [i_2]) + (116 / var_0))))));
                        var_19 = (max((arr_15 [i_0] [i_0] [i_2] [i_0] [i_2]), (var_2 | var_2)));
                    }
                }
            }
        }
        arr_18 [i_0] = (min((((!(arr_15 [i_0] [i_0] [i_0] [i_0] [i_0])))), ((min(-13394, 0)))));
        var_20 = (((((1 ? 32767 : ((((arr_7 [i_0] [i_0] [i_0]) > 116)))))) + (min(1152921504606715904, 39784))));
    }
    for (int i_6 = 0; i_6 < 25;i_6 += 1)
    {
        arr_21 [i_6] = ((((min(((min((arr_19 [i_6] [i_6]), 127))), var_15))) ? ((((max(991304736, 63))) ? ((((arr_19 [i_6] [i_6]) < var_15))) : (arr_20 [i_6]))) : (!64)));
        arr_22 [i_6] [5] = 19691;
    }
    var_21 = (min((((var_1 | var_5) & 255)), (((((2494 ? 45844 : 191)) / ((max(var_2, 57777))))))));
    var_22 = var_12;
    #pragma endscop
}
