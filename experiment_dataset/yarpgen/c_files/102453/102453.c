/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102453
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min((((var_4 + 2147483647) >> (var_3 != var_9))), -var_2));

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            arr_4 [i_1] = (min((((arr_3 [i_1 - 1]) | (((arr_0 [8]) + 523243025)))), ((~(arr_2 [i_0 + 2] [i_0 + 2] [i_1])))));
            var_12 = (min(var_12, ((((arr_2 [i_0] [i_0] [12]) ? (max((min(-95947640, 36026)), ((~(arr_0 [i_0]))))) : (arr_2 [4] [6] [4]))))));
            var_13 = (min(var_13, ((max(19, 1758769499)))));
        }
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            arr_7 [12] = 1;
            arr_8 [i_0] [i_2] = (max((~var_10), ((max(var_3, (arr_5 [i_0 - 1] [4] [14]))))));
            arr_9 [i_2] = 298051839;
        }
        for (int i_3 = 1; i_3 < 14;i_3 += 1)
        {
            var_14 &= var_10;
            var_15 = ((-(!1758769499)));
            var_16 = 241;
        }
        var_17 = (min(var_17, var_2));
    }
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        var_18 = (max(-36026, (((arr_15 [i_4] [i_4]) + 36018))));

        /* vectorizable */
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            arr_18 [i_4] [i_5] = (arr_16 [i_4] [i_4]);
            arr_19 [i_4] [1] = (arr_12 [i_4]);
            var_19 = (min(var_19, (((arr_13 [i_5]) >> (((arr_15 [i_4] [i_5]) - 2028185525))))));
            var_20 = (max(var_20, 1));
        }
    }
    var_21 = (((((-((var_2 ? var_2 : var_3))))) ? ((((!var_5) ? 1 : var_3))) : ((((min(var_8, var_4))) ? (min(var_4, 1018962141007423077)) : (~var_7)))));
    #pragma endscop
}
