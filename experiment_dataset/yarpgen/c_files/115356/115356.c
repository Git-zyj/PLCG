/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115356
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((~(arr_0 [i_0] [i_0])));
        var_15 = (((((!(arr_1 [i_0 + 1] [3]))) ? ((1 ? 1 : 7784274210180764020)) : (arr_0 [i_0] [i_0]))) - 1);
    }
    for (int i_1 = 3; i_1 < 17;i_1 += 1)
    {
        var_16 += ((877384649245538811 ? (((((5549693837084521173 ^ (arr_3 [10])))) ? (max(1, (-9223372036854775807 - 1))) : (((arr_4 [i_1] [i_1]) % (arr_4 [i_1] [i_1]))))) : (((max((arr_3 [14]), -9223372036854775779)) % ((-(arr_3 [18])))))));
        var_17 = (max(var_17, (((((((1 ? (arr_3 [1]) : (arr_3 [2])))) + 9223372036854775807)) << ((((~(arr_3 [1]))) - 2611269632536608123))))));
    }
    for (int i_2 = 3; i_2 < 11;i_2 += 1)
    {
        var_18 = arr_4 [14] [i_2];
        var_19 += (((arr_5 [i_2]) - (min((((arr_3 [1]) ? (arr_3 [8]) : (arr_4 [i_2] [i_2]))), (max(-1, (arr_6 [i_2])))))));
        var_20 = ((max((max((arr_4 [i_2] [i_2 - 2]), (arr_5 [i_2]))), ((-(arr_5 [i_2]))))) ^ -1731405781347513528);
        var_21 = (((((((arr_5 [i_2]) ? (arr_6 [i_2]) : (arr_5 [i_2])))) ? (((arr_4 [i_2] [i_2]) - (arr_3 [i_2]))) : ((7015742400472835376 ? -3103654992794266904 : (arr_3 [i_2]))))) & (((((arr_3 [i_2]) < -576460752286646272)))));
    }
    var_22 = var_1;
    #pragma endscop
}
