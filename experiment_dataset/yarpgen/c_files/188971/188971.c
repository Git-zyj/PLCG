/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188971
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_18 = (max(var_18, (((!(arr_0 [i_0] [i_0 + 1]))))));
        arr_2 [i_0 + 1] = (((((arr_1 [i_0] [i_0 + 1]) / (arr_0 [i_0 + 1] [i_0 + 1]))) * (((0 <= (arr_1 [i_0] [i_0]))))));
        arr_3 [i_0] = ((-(((arr_0 [i_0 + 1] [i_0 + 1]) ? ((((arr_1 [6] [i_0]) ? 374524729 : (arr_1 [i_0] [4])))) : 1002495536))));
        arr_4 [i_0 + 1] = (((((arr_1 [i_0 + 1] [10]) ? (arr_0 [i_0 + 1] [i_0]) : (((arr_1 [i_0] [i_0]) ? (-2147483647 - 1) : 2147483647))))) ? (arr_0 [i_0] [i_0]) : ((-(arr_1 [i_0] [i_0 + 1]))));
        var_19 = (min(var_19, (((14 ? (arr_0 [i_0 + 1] [i_0 + 1]) : (arr_1 [i_0] [i_0 + 1]))))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            arr_10 [i_1] = ((((((arr_8 [i_1] [i_1]) ? (arr_8 [i_1] [i_2]) : (arr_7 [i_1] [i_2])))) ? ((~(arr_7 [i_1] [i_1]))) : (((((arr_7 [i_1] [i_2]) + 2147483647)) << (((arr_0 [i_1] [i_2]) - 28962))))));
            var_20 = (((arr_0 [i_1] [i_2]) ? (((arr_0 [i_1] [i_1]) ? (arr_0 [i_1] [i_1]) : (arr_0 [i_1] [i_2]))) : (((arr_7 [i_2] [i_1]) - -1634408057))));
            var_21 &= ((-24226 ? 9959 : 0));
        }
        var_22 = ((~(((arr_6 [i_1] [i_1]) ? ((3292471760 ? (arr_8 [i_1] [i_1]) : -105)) : ((0 % (arr_5 [i_1])))))));
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            {
                var_23 -= ((((((arr_13 [i_3] [i_4]) ? (arr_11 [i_4]) : (arr_15 [i_4] [i_3])))) ? (((arr_13 [i_4] [i_3]) ? (~-61) : (arr_14 [i_3]))) : (arr_14 [i_3])));
                arr_17 [i_3] [i_4] = (((arr_16 [i_4] [i_3]) ? (arr_15 [i_4] [i_3]) : (arr_13 [i_3] [i_3])));
                var_24 = (max(var_24, (arr_16 [4] [4])));
            }
        }
    }
    var_25 &= ((var_5 ? var_5 : ((-((1588003879 ? var_8 : var_11))))));
    #pragma endscop
}
