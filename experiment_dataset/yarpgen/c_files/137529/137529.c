/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137529
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            var_16 = min(((((max(var_5, 188))) ? 79 : ((((arr_4 [i_0]) >= (arr_3 [i_0])))))), (((max(var_11, (arr_0 [i_0] [i_1]))))));
            arr_6 [i_0] = var_12;
            var_17 = var_2;
        }
        arr_7 [i_0] = ((~(arr_5 [i_0 + 1] [i_0])));
    }
    for (int i_2 = 1; i_2 < 12;i_2 += 1)
    {
        var_18 += var_7;

        /* vectorizable */
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            var_19 = var_2;
            var_20 = (!49);
        }
        for (int i_4 = 1; i_4 < 11;i_4 += 1)
        {
            arr_16 [i_2] [i_4] [i_2] = ((((min(var_4, var_11))) ? (17565 % -24250) : 51));
            var_21 = (!((!((min(5, 232))))));
            arr_17 [i_2] [i_2] [i_2] = ((~(((!(arr_8 [i_2 + 2]))))));
        }
    }
    for (int i_5 = 2; i_5 < 21;i_5 += 1)
    {
        var_22 = ((var_13 ? (arr_19 [i_5]) : (((((~(arr_18 [i_5] [i_5 - 1]))) == (arr_20 [i_5 + 1] [18]))))));
        arr_21 [i_5] = (min((min(121, 65513)), (arr_20 [i_5 - 1] [i_5 - 1])));
        var_23 = (max(var_23, (((!(!var_9))))));
        arr_22 [i_5] [i_5] = ((110 || ((min(var_15, var_7)))));
    }
    var_24 = (min(((((var_9 ? var_10 : 1765139181)))), 2121301912));
    #pragma endscop
}
