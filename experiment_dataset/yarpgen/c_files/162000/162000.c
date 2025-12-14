/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162000
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= var_3;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_4 [4] [i_0] = (((((min((arr_3 [i_0] [i_0]), var_1)))) < ((((((arr_3 [i_0] [i_0]) ? var_4 : var_0))) ? ((var_10 ? var_1 : var_4)) : (arr_0 [i_0])))));

        /* vectorizable */
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            var_13 = (((arr_5 [i_1 + 1] [i_1 + 2]) ? (arr_6 [i_1 + 2] [i_1 + 2] [i_1 + 2]) : (arr_5 [i_1 - 1] [i_1 - 1])));
            var_14 ^= (((arr_2 [i_0] [i_1 - 1]) || 1));
            var_15 = (-(arr_6 [i_1 - 1] [i_1] [9]));
            arr_8 [i_0] [i_1 + 2] [i_1] = (((arr_5 [i_1 + 2] [i_1 + 1]) ? (arr_6 [i_1 + 2] [i_1 - 1] [i_1 + 2]) : (arr_5 [i_1 - 1] [i_1 - 1])));
        }
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            var_16 = (((((-var_11 ? var_9 : ((var_3 ? var_7 : 0))))) / ((((arr_3 [i_0] [i_0]) ? (arr_10 [i_0] [i_2]) : (arr_6 [10] [i_2] [i_2]))))));

            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                var_17 = (min((((arr_9 [i_0] [i_0]) * 1)), (arr_2 [i_2] [i_2])));
                var_18 = 2975100054;
                var_19 = max((((arr_10 [i_2] [i_3]) >= (arr_9 [i_0] [i_0]))), (var_2 && var_2));
                var_20 = 3762506267635483689;
            }
        }
        arr_13 [13] [13] = ((((((arr_1 [i_0]) ? var_8 : var_11)) <= ((min(1, var_3))))));
        var_21 = ((((min((arr_9 [i_0] [i_0]), (arr_1 [i_0])))) ? 41335 : 48891));
    }
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        arr_16 [i_4] = (((((~(((arr_15 [i_4]) ? (arr_15 [i_4]) : var_3))))) ? var_1 : 17877));
        var_22 &= (min((arr_15 [i_4]), ((((~(arr_15 [i_4])))))));
    }
    #pragma endscop
}
