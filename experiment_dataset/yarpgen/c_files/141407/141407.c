/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141407
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_13 = (-(min(0, ((max(6, var_7))))));

                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        var_14 = (((max((arr_5 [i_0] [i_0]), (arr_3 [i_3 - 1] [i_3] [i_1 - 4])))) % var_0);
                        var_15 = (((min(1056964608, ((3 ? -6934007220175572326 : 18227421636370908885)))) >= -4123087948261375191));
                    }
                    for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
                    {
                        var_16 = ((6 ? 4504538866476223640 : (-9223372036854775807 - 1)));
                        var_17 = (min(var_17, (((!(arr_12 [i_0] [i_0 + 1] [i_0] [9]))))));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
                    {
                        var_18 *= (((var_0 ? var_2 : (arr_11 [i_0] [i_1] [i_0] [10]))));
                        var_19 = 114;
                        var_20 = ((!((((arr_7 [i_0] [i_0] [i_0]) ? var_0 : (arr_12 [5] [i_1 - 1] [i_2] [i_5]))))));
                        var_21 = (((arr_2 [i_1 - 1] [i_0 + 2]) ? (((arr_16 [i_5] [i_0] [8] [i_1] [i_0] [i_0]) >> (((arr_11 [i_0] [i_1] [i_2] [i_1]) - 32)))) : 79));
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_22 = (((((arr_21 [i_0] [i_0] [i_2] [i_6] [i_7 - 1]) ? (arr_21 [i_0] [i_1] [i_2] [i_6] [i_7]) : (arr_21 [i_0] [4] [i_2] [i_6] [i_2]))) != (!-64)));
                                var_23 = (max((min((arr_13 [10] [i_1 - 3] [i_2] [i_6] [i_6] [i_6]), (~13))), ((((max(27, 9)) > (-16 * 120))))));
                                var_24 = 7029936483262371065;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
