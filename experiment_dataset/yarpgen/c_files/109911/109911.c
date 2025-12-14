/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109911
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [1] &= ((~((~(((arr_0 [14]) ? (arr_1 [18] [18]) : 1))))));
        var_11 = (min(var_11, ((max((((var_3 || (209 + 209)))), (((((arr_0 [22]) ? 33 : var_1)) & (arr_0 [4]))))))));
        var_12 = (((((0 ? (arr_0 [i_0]) : (arr_0 [i_0])))) & (max((arr_1 [i_0] [i_0]), var_5))));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            var_13 = ((!((max(134217472, var_5)))));
            arr_7 [i_1] = (((-(arr_5 [i_2] [i_1] [i_1]))) ^ (!17548507684997529189));
            arr_8 [i_1] [i_2] = ((~(((!((!(arr_1 [i_1] [i_1]))))))));
            arr_9 [i_1] = ((!(arr_4 [i_1] [i_1])));
        }
        for (int i_3 = 1; i_3 < 9;i_3 += 1)
        {
            var_14 = (max(var_14, (((!((((var_0 < var_2) ? var_9 : (arr_11 [i_1] [4] [i_1])))))))));
            var_15 = (max(var_15, ((((((((((arr_6 [i_1] [4]) + 2147483647)) >> var_7)) >= (var_7 != 88))) ? ((~((884162885452127482 & (arr_3 [6] [6]))))) : ((-(arr_1 [i_3] [i_3 + 1]))))))));
        }
        var_16 = (~-113);
    }

    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                {
                    arr_19 [i_4] [i_5] = 1;
                    arr_20 [i_4] = 14738732405604930310;
                    var_17 *= (max(((((-92 > (arr_18 [i_6] [i_6] [14] [i_6]))) ? (63 <= 9431) : (max((arr_16 [12]), var_7)))), (arr_18 [i_6] [i_5] [i_4] [i_4])));
                }
            }
        }
        var_18 = (max(var_18, (arr_17 [i_4] [2] [2])));
    }
    #pragma endscop
}
