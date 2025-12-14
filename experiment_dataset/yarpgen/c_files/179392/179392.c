/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179392
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] = ((((((32767 < (arr_0 [i_0]))))) ? 2 : 35814));
        arr_4 [i_0] = ((((((-(arr_0 [i_0]))))) ? (((((arr_2 [i_0]) / var_10)) * (((arr_0 [i_0]) / (arr_2 [i_0]))))) : (arr_1 [i_0] [i_0])));
        arr_5 [i_0] = 29725;
        arr_6 [i_0] [i_0] = (arr_1 [i_0] [i_0]);
    }
    for (int i_1 = 4; i_1 < 13;i_1 += 1)
    {
        arr_9 [9] [i_1 - 2] = (((((arr_7 [i_1 - 1]) ? (arr_7 [i_1 - 2]) : (arr_7 [i_1 + 2]))) - (((arr_7 [i_1 - 2]) ? (arr_7 [i_1 - 1]) : (arr_7 [i_1 - 3])))));
        arr_10 [i_1] [i_1 - 3] = (arr_8 [i_1]);
    }
    var_20 = ((84 == ((1 ? ((35811 ? 29721 : 247)) : 17598))));
    var_21 = 24096;
    var_22 = 201;
    #pragma endscop
}
