/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141263
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, ((((!(var_7 - var_11)))))));
    var_14 = var_11;
    var_15 = (max(13800980514008901174, var_4));

    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_16 = var_6;
        var_17 = (min(var_17, ((max(var_6, (max((~-1998002522545834241), (arr_3 [16]))))))));
        var_18 += (arr_0 [12]);
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] [i_1] = var_12;
        arr_9 [i_1] = (arr_3 [1]);
        var_19 -= (((arr_0 [0]) / ((~(max(var_5, (arr_2 [4] [4])))))));
        arr_10 [i_1] [i_1] = var_5;
    }
    for (int i_2 = 4; i_2 < 15;i_2 += 1)
    {
        var_20 -= (((arr_1 [12]) != (!162)));
        arr_13 [i_2] [i_2 - 4] = var_10;
    }
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        var_21 = (144112989052600320 << 1);
        arr_17 [i_3] = (arr_14 [i_3]);
    }
    #pragma endscop
}
