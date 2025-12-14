/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144930
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_18 = min((arr_0 [2]), 503127703);
        var_19 = (min(var_19, (((((-(arr_1 [i_0 - 2]))) != (min(var_11, 1456059413)))))));
        var_20 = 186;
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {
        var_21 = max(var_9, (min((arr_2 [i_1]), (arr_2 [i_1]))));
        var_22 -= (arr_3 [i_1]);
        arr_4 [i_1] = (((!(((-6528628237483290021 ^ (arr_2 [i_1])))))));
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
    {
        var_23 ^= ((!(!var_13)));
        arr_9 [5] = (-1 ? -8 : 225);

        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            var_24 = (~-5350016093620312436);
            arr_12 [i_3] [i_2] [i_2] = (+(((((arr_7 [i_2]) + 2147483647)) >> (((arr_7 [i_2]) + 918136925)))));
        }
    }
    var_25 = ((((min(95, (8388607 <= 255)))) <= -13));
    #pragma endscop
}
