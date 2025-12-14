/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171166
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_16 = ((+(((arr_4 [i_0] [i_0]) ? (arr_8 [i_0] [i_0] [9] [6] [i_3]) : (min((arr_8 [i_0] [i_0] [i_0] [9] [i_3]), (arr_8 [i_0] [2] [i_2] [i_2] [i_3])))))));
                            var_17 = (min(var_17, ((max(((~(((arr_7 [i_0] [i_1] [i_2] [6]) - (arr_1 [i_0] [7]))))), (((arr_6 [i_2] [i_2 - 1] [i_3 - 1]) + (arr_6 [i_2] [i_2 - 1] [i_3 - 1]))))))));
                            var_18 *= max(((~(((arr_3 [1] [1]) ? (arr_3 [i_2] [8]) : (arr_2 [i_1] [i_3]))))), (max((arr_7 [i_0] [i_0] [i_0] [6]), (~18014398509481983))));
                            var_19 = (max(var_19, ((((((((-(arr_2 [9] [i_3])))))) == (arr_8 [i_3 - 1] [i_3] [i_2 + 1] [i_1] [i_0]))))));
                            var_20 = (~18428729675200069632);
                        }
                    }
                }
                var_21 = ((((max((((arr_1 [i_0] [i_1]) ? (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_7 [i_0] [i_0] [i_0] [0]))), ((min((arr_7 [i_0] [i_0] [i_0] [4]), (arr_1 [i_0] [i_1]))))))) ? (((~0) ? (arr_2 [3] [8]) : (arr_6 [i_0] [12] [i_0]))) : (((arr_0 [i_0]) ? (arr_9 [i_0]) : (arr_0 [i_0])))));
                /* LoopNest 2 */
                for (int i_4 = 4; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 11;i_5 += 1)
                    {
                        {
                            var_22 = (min(var_22, ((((((((~(arr_9 [i_0]))) - (arr_4 [i_1] [i_1])))) * (min(55710, 8707135632538262654)))))));
                            var_23 = ((!(max((arr_12 [9] [i_4] [12] [i_5]), (((arr_9 [i_0]) > (arr_0 [i_4])))))));
                            arr_14 [5] [i_4] [0] = (((((arr_9 [i_5 - 1]) ? (arr_0 [i_4 - 3]) : (arr_0 [i_4 + 2]))) >= (arr_12 [i_1] [i_4] [0] [i_4 - 4])));
                            var_24 |= ((((((arr_1 [i_5 - 3] [i_1]) ? (min((arr_4 [i_1] [3]), (arr_11 [i_1] [10] [i_5]))) : (min((arr_11 [i_5] [i_1] [i_0]), (arr_4 [10] [0])))))) % (((arr_3 [i_1] [i_4]) ? -1127582198227271091 : (((arr_4 [i_5] [i_5 + 2]) ? (arr_5 [i_0] [i_1] [i_4 - 1] [i_0]) : (arr_10 [i_4] [i_1] [i_0])))))));
                        }
                    }
                }
            }
        }
    }
    var_25 = (var_3 ? (var_9 | var_8) : (min(((var_0 ? var_14 : var_15)), ((var_5 ? var_12 : var_8)))));
    var_26 = (min((((!(((var_5 ? var_3 : var_10)))))), var_11));
    var_27 = (min((((((var_8 ? var_7 : var_15))) ? var_12 : ((var_0 ? var_8 : var_5)))), var_10));
    #pragma endscop
}
