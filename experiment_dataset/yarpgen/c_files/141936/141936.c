/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141936
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 = ((!(max((arr_0 [i_0]), (arr_0 [i_0])))));
        arr_2 [i_0] = 1;
    }
    var_16 &= (max(((var_9 ? (~var_13) : (max(-28, var_4)))), var_1));
    var_17 = var_0;

    for (int i_1 = 2; i_1 < 21;i_1 += 1)
    {
        arr_5 [i_1] = (((((var_14 + ((min((arr_4 [i_1]), (arr_4 [i_1]))))))) ? (arr_4 [i_1]) : var_1));
        arr_6 [i_1] = (min((min((arr_4 [i_1 - 2]), (arr_3 [i_1 - 2] [i_1 - 1]))), var_0));
        var_18 = (!var_14);
        arr_7 [i_1] = (~(((max((arr_3 [i_1] [i_1]), (arr_3 [i_1] [i_1]))) - (~var_13))));

        for (int i_2 = 0; i_2 < 0;i_2 += 1)
        {
            arr_10 [i_1] [i_1] = (min((arr_9 [i_1]), (((arr_8 [i_1]) ? (arr_3 [i_1 - 2] [i_1 + 1]) : (((arr_3 [i_2] [i_1]) ? var_6 : var_7))))));

            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                var_19 = (max(var_19, (((((((max((arr_11 [14] [i_2] [i_3]), (arr_9 [i_1])))) & (~var_14))) > (+-461942861))))));
                var_20 = 624365441849616927;
            }
            var_21 = ((((min((arr_12 [i_1 - 2] [i_2 + 1]), (arr_12 [i_1 - 1] [i_2 + 1])))) - (((arr_12 [i_1 - 2] [i_2 + 1]) ? (arr_12 [i_1 - 1] [i_2 + 1]) : var_7))));
        }
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        arr_15 [i_4] [i_4] = (-(max((arr_3 [i_4] [i_4]), (arr_3 [i_4] [i_4]))));
        var_22 = -1554836077;
        arr_16 [i_4] [14] |= arr_8 [i_4];
    }
    for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
    {

        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            arr_22 [i_6] [i_5] [i_6] = (((var_7 + 461942852) >> (min(((var_12 >> (1554836081 - 1554836047))), ((min(881180775, 1)))))));
            arr_23 [i_5] [i_6] [i_6] = 1;
        }
        var_23 |= (min(((((min(var_9, var_7))) ^ ((~(arr_18 [2]))))), ((((~(arr_21 [i_5]))) & ((min((arr_17 [2]), (arr_19 [i_5] [i_5] [i_5]))))))));
        var_24 = ((!((!(!1)))));
        var_25 *= (((-(arr_18 [20]))) > (((((-28 ? 0 : 18446744073709551615)) > 20827))));
    }
    for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
    {
        var_26 = (max(var_26, ((max((arr_17 [8]), (max((arr_17 [2]), -126)))))));
        var_27 = (((max(1, 1))) != 1);
    }
    #pragma endscop
}
