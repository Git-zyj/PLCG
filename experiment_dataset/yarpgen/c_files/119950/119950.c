/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119950
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_18 = (((arr_4 [i_0 - 1]) ? (((((arr_1 [i_0] [i_1]) > (arr_3 [i_0 - 1] [i_0 - 1]))))) : (((arr_0 [i_1] [i_0 - 1]) ? (arr_0 [i_0 - 1] [0]) : (arr_0 [i_0] [i_1])))));
            arr_6 [i_0 - 1] = (((arr_3 [i_0 - 1] [i_1]) && (arr_2 [i_0 - 1])));
        }
        arr_7 [i_0] = ((~(min((arr_5 [i_0 - 1]), (min((arr_0 [i_0] [i_0]), (arr_5 [i_0])))))));

        for (int i_2 = 1; i_2 < 8;i_2 += 1)
        {
            arr_11 [i_2 + 1] = ((-((12901 ? (arr_0 [i_2 + 1] [i_2 - 1]) : (((arr_10 [i_0 - 1] [i_2 - 1]) ? (arr_8 [i_0 - 1] [i_0 - 1] [i_2 - 1]) : (arr_4 [i_2])))))));
            arr_12 [i_0 - 1] = (((((~(max((arr_4 [i_0]), (arr_8 [i_0 - 1] [i_0] [i_0 - 1])))))) ? (((arr_3 [i_0 - 1] [i_0 - 1]) ? (((((arr_4 [6]) > (arr_3 [i_2] [i_0 - 1]))))) : (arr_4 [2]))) : ((((arr_0 [i_0] [6]) ? ((~(arr_3 [i_0] [i_2]))) : (arr_10 [i_2 - 1] [4]))))));
            var_19 = ((arr_1 [i_0] [i_0 - 1]) + (min((((arr_8 [i_2 - 1] [i_0 - 1] [5]) ? (arr_5 [i_0 - 1]) : (arr_10 [i_0 - 1] [i_0]))), (((!(arr_8 [i_0 - 1] [i_0 - 1] [i_0 - 1])))))));
            var_20 += (arr_2 [i_0 - 1]);
        }
        var_21 = (min(var_21, (((!(((((((arr_8 [i_0] [i_0 - 1] [i_0 - 1]) ? (arr_9 [i_0]) : (arr_9 [0])))) ? (arr_3 [i_0] [i_0 - 1]) : (((arr_4 [i_0 - 1]) ? (arr_10 [i_0 - 1] [i_0]) : (arr_10 [9] [i_0])))))))))));
    }
    for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
    {
        var_22 = (min(var_22, (((((((((arr_15 [2] [i_3]) ? (arr_15 [i_3] [i_3]) : (arr_13 [i_3]))) / (((arr_14 [i_3] [i_3]) ? (arr_15 [i_3] [i_3]) : (arr_13 [i_3])))))) ? (arr_15 [i_3] [i_3]) : ((((max((arr_15 [i_3] [i_3]), (arr_15 [6] [6])))) ? (((arr_15 [i_3] [i_3]) ? (arr_13 [i_3]) : (arr_15 [i_3] [i_3]))) : (((arr_15 [i_3] [i_3]) ? (arr_13 [i_3]) : (arr_13 [i_3]))))))))));
        arr_16 [i_3] = (((((arr_15 [i_3] [i_3]) ? (arr_13 [i_3]) : (arr_13 [16])))));
    }
    for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
    {
        arr_19 [i_4] [i_4] = ((((18294420282864272977 ? 1645692787 : 19)) >= (((((((arr_14 [i_4] [i_4]) ? (arr_14 [i_4] [i_4]) : (arr_15 [i_4] [i_4])))) ? (arr_17 [i_4]) : ((-(arr_15 [i_4] [i_4]))))))));
        arr_20 [i_4] [i_4] = (arr_13 [i_4]);
        var_23 = ((-(arr_18 [i_4] [i_4])));
    }
    var_24 = ((-(max((~24966), var_5))));
    #pragma endscop
}
