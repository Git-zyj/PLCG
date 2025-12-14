/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126634
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_18 = ((!(arr_1 [i_0])));
        var_19 &= (((arr_0 [i_0 + 1]) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 - 1])));
        arr_2 [2] [2] = (arr_1 [i_0 - 2]);
        var_20 = (min(var_20, (((((!(arr_1 [8]))) ? (arr_0 [i_0 + 1]) : (((arr_1 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))))))));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        var_21 = ((((-(arr_4 [i_1]))) + ((-(arr_0 [i_1])))));
        var_22 = ((-(((!(arr_0 [i_1]))))));
        var_23 = (min(var_23, (((((!(((~(arr_1 [i_1]))))))) | (min(((max((arr_0 [i_1]), (arr_3 [i_1])))), (((arr_1 [i_1]) ? (arr_3 [i_1]) : (arr_3 [i_1])))))))));
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
    {
        var_24 = (min((((arr_3 [i_2]) ? (arr_3 [3]) : (((arr_5 [i_2]) << (((arr_0 [i_2]) - 117)))))), (min(((~(arr_7 [i_2]))), (arr_3 [i_2])))));
        var_25 -= ((!(((-((max((arr_1 [i_2]), (arr_3 [i_2])))))))));

        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            arr_13 [i_2] [15] = ((((min((arr_4 [i_2]), (arr_4 [i_2])))) ? (((!(arr_3 [i_2])))) : ((-(arr_0 [13])))));
            var_26 ^= ((((((arr_7 [i_2]) & (arr_11 [12] [i_3])))) ? ((~(arr_11 [i_2] [i_2]))) : (arr_12 [i_3] [i_2] [i_2])));
            var_27 = (max(var_27, ((min((((!(arr_6 [i_2])))), (arr_12 [i_2] [i_3] [17]))))));
        }
        var_28 *= (((((arr_0 [i_2]) ? (arr_0 [i_2]) : (arr_0 [i_2]))) & (arr_0 [i_2])));
    }
    for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
    {
        arr_17 [i_4] [i_4] = ((((min((arr_0 [i_4]), (arr_10 [i_4] [i_4] [i_4])))) ? (arr_0 [i_4]) : (arr_16 [i_4] [i_4])));
        var_29 ^= (max(((-(arr_3 [i_4]))), ((((arr_11 [i_4] [i_4]) && ((!(arr_15 [i_4] [i_4]))))))));
    }
    var_30 |= var_8;
    var_31 = ((~(~-var_0)));
    #pragma endscop
}
