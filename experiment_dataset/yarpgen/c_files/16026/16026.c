/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16026
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        {
                            var_21 = ((-(arr_4 [i_0] [i_0] [i_0])));

                            for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
                            {
                                var_22 = ((!(((arr_10 [i_0 - 1]) && ((((arr_13 [i_3] [i_3] [i_3]) - (arr_11 [i_4]))))))));
                                var_23 = ((var_5 >= var_0) ? ((((!((((arr_6 [i_0] [i_0] [i_0]) ^ (arr_5 [i_0 - 1] [i_0 - 1])))))))) : (min(((var_14 ? 105 : var_7)), (arr_6 [1] [i_3] [i_4]))));
                                var_24 = (((!var_12) ? (((max(var_2, (arr_10 [i_0]))) >> (((max(var_17, var_6)) - 2700450410)))) : ((((arr_10 [i_3]) ? (20 || 30) : (((arr_1 [i_3] [i_1]) | 0)))))));
                            }
                            for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
                            {
                                var_25 = (max((max(((max(21, 175))), 16534088213197760655)), 2675237860));
                                var_26 = (max(166, -29));
                            }
                            var_27 = ((+(((!var_9) | ((2675237860 ? (arr_13 [i_3] [i_3] [i_3]) : var_14))))));
                            var_28 = ((!((max((((arr_8 [i_0] [i_1] [i_2] [i_3]) + 213)), (~53))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 8;i_7 += 1)
                    {
                        {
                            var_29 = arr_3 [i_0 - 1];
                            var_30 = ((((((-2147483644 + 2147483647) >> (175 - 174)))) ? ((var_11 ? (arr_6 [i_1 + 4] [i_7] [i_7 + 2]) : (arr_18 [i_1 + 1] [i_1 + 1] [i_7 + 2]))) : ((var_12 ? (arr_18 [i_1 + 4] [i_7 - 2] [i_7 + 1]) : (arr_18 [i_1 + 3] [i_1] [i_7 - 2])))));
                        }
                    }
                }
            }
        }
    }
    var_31 = var_9;
    var_32 = ((((((2632095681087271094 ? 15 : var_10)))) ? ((42 ? var_5 : 1400455667451934542)) : var_14));
    #pragma endscop
}
