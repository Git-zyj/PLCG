/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180957
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= (min(var_2, (max(((var_10 ? var_6 : var_11)), var_14))));
    var_17 = (((var_11 | (((var_4 ? var_9 : 272554025))))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            arr_5 [i_0] [i_1] = (arr_4 [2] [1] [1]);
            var_18 = (((((((~(arr_3 [i_0]))) & (arr_0 [i_1])))) ? ((((((arr_1 [i_0] [i_0]) ? (arr_0 [i_1]) : (arr_1 [i_0] [i_1])))) ? (((var_15 ? (arr_4 [i_0] [i_0] [i_0]) : (arr_1 [i_0] [i_0])))) : (max(9, (arr_1 [i_0] [i_1]))))) : (((min(0, var_1)) >> (arr_1 [i_0] [0])))));
            var_19 = (min(var_19, ((max((((arr_2 [i_1] [7]) * (max((arr_3 [8]), var_4)))), ((-(arr_2 [i_0] [i_0]))))))));
        }
        /* vectorizable */
        for (int i_2 = 2; i_2 < 10;i_2 += 1)
        {

            for (int i_3 = 1; i_3 < 9;i_3 += 1) /* same iter space */
            {
                var_20 *= (arr_6 [i_2 + 1]);
                var_21 = (arr_10 [i_0]);
            }
            for (int i_4 = 1; i_4 < 9;i_4 += 1) /* same iter space */
            {
                arr_13 [i_0] [i_4 + 1] [i_4 + 1] = (arr_10 [i_0]);
                var_22 -= (arr_12 [4]);
                arr_14 [i_0] = ((arr_4 [10] [i_2 - 1] [i_2]) == (!var_8));
                arr_15 [i_0] [i_0] [i_0] = (((arr_10 [i_0]) ? (arr_9 [i_0]) : (arr_10 [i_0])));
            }
            for (int i_5 = 1; i_5 < 9;i_5 += 1) /* same iter space */
            {
                var_23 = (max(var_23, (((((((arr_18 [i_0] [i_2] [i_5 + 2] [i_2]) ? (arr_7 [i_0] [i_0]) : var_3))) ? (arr_12 [1]) : (arr_17 [i_2 + 1]))))));
                var_24 = ((~(((arr_2 [i_2] [0]) | (arr_3 [i_0])))));
                arr_19 [i_0] [i_0] = (arr_2 [i_0] [i_0]);
            }
            for (int i_6 = 1; i_6 < 8;i_6 += 1)
            {
                var_25 = (arr_21 [i_0] [i_6] [i_0] [i_0]);
                var_26 = (min(var_26, (arr_20 [i_0] [i_2] [i_6 - 1] [i_2 - 1])));
                arr_22 [i_0] [i_0] [i_0] = (((arr_20 [i_0] [i_6 - 1] [i_6 - 1] [i_2 - 1]) ? (arr_4 [i_2] [i_2 + 1] [i_2]) : (arr_7 [i_0] [i_6 - 1])));
                arr_23 [i_0] [i_0] = (arr_0 [i_0]);
            }
            var_27 = (min(var_27, (arr_21 [i_2 - 1] [8] [i_0] [i_2])));
        }
        var_28 -= (((~(arr_10 [8]))));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 11;i_8 += 1)
            {
                {
                    var_29 += (((((((((arr_27 [i_0] [i_7] [0] [i_0]) <= (arr_3 [4])))) + (~var_13)))) ? (((((((arr_7 [i_0] [i_7]) ? (arr_8 [i_7] [i_0]) : (arr_16 [i_0] [6] [4])))) ? (arr_3 [8]) : (arr_1 [10] [i_7])))) : (max((((arr_6 [i_7]) & (arr_27 [i_0] [i_0] [10] [i_0]))), ((((arr_12 [0]) ? (arr_9 [3]) : (arr_0 [i_0]))))))));
                    var_30 = ((-(((((-(arr_8 [i_0] [i_7])))) * ((var_3 / (arr_27 [4] [i_7] [4] [4])))))));
                    arr_29 [i_0] [i_0] [i_8] [i_8] = (max((!var_15), (arr_18 [i_0] [i_0] [i_0] [i_8])));
                }
            }
        }
        var_31 = ((-(arr_8 [i_0] [i_0])));
    }
    #pragma endscop
}
