/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166803
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_12 = ((-(min(3730944664984892914, var_2))));

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            arr_5 [i_0] = (((((((arr_0 [i_1] [i_0 + 1]) ^ 1))) ? (arr_0 [i_0] [i_1]) : (((-(arr_1 [i_0] [i_0])))))));
            arr_6 [i_0] [i_0] = 1;
            var_13 = (max(var_13, (((var_3 ? var_2 : (max(var_8, (arr_2 [8] [8]))))))));
            var_14 = (arr_2 [i_0] [i_0]);
        }
        arr_7 [10] |= ((((((!78) == 1))) == var_0));
        var_15 |= (((arr_0 [i_0 + 1] [i_0 - 1]) ? (arr_1 [i_0 - 1] [4]) : ((var_2 ? (arr_0 [i_0 + 1] [i_0 + 1]) : 1768434833))));
        arr_8 [i_0] [i_0] = (max(-1, (min(((var_0 ? 8302078378596515261 : 2177097598)), (~var_9)))));
    }
    var_16 = ((min(var_7, var_1)));
    var_17 = var_8;
    #pragma endscop
}
