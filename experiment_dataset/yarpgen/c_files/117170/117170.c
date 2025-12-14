/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117170
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_8, var_14));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                var_19 = ((((((534861318863938571 != 4795512315097458670) & (min(2305843009213693952, 0))))) ? (max((((arr_3 [i_1] [3]) ? (arr_1 [11]) : (arr_1 [i_0]))), (arr_1 [5]))) : ((min((arr_2 [i_1 - 1] [i_1] [i_0 + 1]), var_4)))));

                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    arr_6 [i_0] [i_1] [i_1] [i_2] = (((min((arr_4 [i_0] [11] [i_0 + 1] [i_0 + 1]), (arr_1 [9])))) | var_11);
                    arr_7 [i_0 + 1] [i_0] [i_0] [i_1] = (min(((((((arr_1 [i_1]) == var_17)) ? ((var_1 ? (arr_0 [i_1] [i_1]) : (arr_3 [12] [i_0 + 1]))) : var_5))), (((((var_7 ? 534861318863938564 : (arr_2 [i_2] [i_1] [i_0 + 1])))) ? -534861318863938545 : var_15))));
                    arr_8 [i_1] = (min(-419726494, 4779));
                    var_20 = (((arr_3 [i_0] [i_0 + 1]) ? ((min((arr_3 [i_0 + 1] [i_0 + 1]), 86))) : ((max((arr_2 [i_1 + 2] [i_1] [i_0 + 1]), (arr_2 [i_1 + 2] [i_1] [i_0 + 1]))))));
                }
                /* vectorizable */
                for (int i_3 = 2; i_3 < 16;i_3 += 1)
                {
                    var_21 = (((arr_10 [i_0] [i_1] [i_0]) | (((var_6 >= (arr_4 [i_0 + 1] [i_0] [18] [i_0]))))));
                    arr_12 [i_1] = ((var_15 >= ((((((arr_3 [i_0 + 1] [i_0 + 1]) + 2147483647)) << (var_7 - 1839657832))))));
                    arr_13 [i_1] = (arr_3 [i_0] [i_1 + 1]);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            {
                arr_19 [1] [i_4] [3] = (arr_15 [0] [i_5]);
                var_22 = (((((-4779 ? -4779 : 199))) ? ((((!(((10165 ? var_0 : (arr_15 [i_4] [i_4])))))))) : ((-(arr_15 [11] [i_5])))));
            }
        }
    }
    var_23 = (var_5 > var_15);
    #pragma endscop
}
