/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156924
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_1] = ((((var_9 >= ((32754 ? 28393 : -1891215111)))) ? ((~(!var_1))) : (max(var_11, ((28393 ? -28393 : -116))))));
                var_15 *= ((((((-28398 ? var_3 : 7045264279983839092))) ? (((2147483647 == (arr_3 [i_0 + 2] [i_1] [i_1])))) : (arr_1 [i_0] [i_1]))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 17;i_4 += 1)
                            {
                                arr_15 [i_3] [i_2] [i_2] [i_0] = (arr_4 [i_0] [i_3] [i_4]);
                                var_16 = ((1 < (((arr_8 [i_1 - 3] [i_1] [i_0]) ? 28389 : (arr_8 [i_1 - 2] [i_1 - 3] [i_0])))));
                                var_17 = (((!1) ? (min(-28396, (max((arr_10 [13] [i_1] [i_2] [i_1] [i_1] [i_2]), (arr_1 [i_4] [i_1]))))) : -28393));
                            }
                            for (int i_5 = 0; i_5 < 17;i_5 += 1)
                            {
                                arr_20 [i_0] [i_0] [i_0] [i_3] [i_2] [i_1] [i_1 + 1] = (arr_3 [i_1] [i_2] [i_3]);
                                var_18 = max((((117 && (arr_12 [i_0 + 1] [i_1 + 1])))), ((-107 ? (arr_12 [i_0 + 1] [i_1 - 1]) : (arr_12 [i_0 + 2] [i_1 - 3]))));
                                var_19 += (1 << 1);
                            }
                            var_20 *= ((+(((arr_4 [i_0 + 2] [i_1 + 1] [i_2 - 1]) ? (((!(arr_10 [i_0] [i_0 - 1] [2] [i_2] [6] [2])))) : 1))));
                        }
                    }
                }
                var_21 = ((4 ? ((max(var_3, ((max(var_10, (arr_13 [12] [i_1 - 2] [i_1]))))))) : (((((arr_9 [i_1]) ? 90 : 2147483647)) - (((var_0 <= (arr_8 [i_1 - 2] [i_1] [i_0 + 2]))))))));
                var_22 += (min(((((var_8 ? var_9 : var_6)) >> ((((1 ? (arr_13 [1] [i_0] [1]) : -64)) - 71)))), ((((arr_18 [i_0] [i_0] [0] [10] [i_1 + 1]) < (arr_18 [i_0] [i_0] [10] [i_0] [i_1 + 1]))))));
            }
        }
    }
    var_23 = ((max(1, 1)) ? (((((-127 - 1) == var_0)))) : var_10);
    #pragma endscop
}
