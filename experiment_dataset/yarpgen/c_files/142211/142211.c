/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142211
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, 17795));
    var_17 = 127;
    var_18 = var_10;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            arr_7 [i_0] [i_1] [i_1] = (((((max((arr_1 [i_0] [i_0]), 47758)))) * (47758 / 17791)));
            arr_8 [i_0] [6] [i_1] = 17819;
        }
        for (int i_2 = 4; i_2 < 10;i_2 += 1) /* same iter space */
        {
            arr_11 [i_0] [i_0] [i_0] = (((arr_2 [i_0] [i_2]) - ((max((arr_10 [i_2 - 3] [i_2 - 1] [i_2 - 2]), var_11)))));
            var_19 = (max(((47725 >> (((arr_1 [i_0] [7]) - 2553992018178212957)))), (((2330 | 17783) ? var_9 : (max((arr_10 [i_0] [0] [i_0]), (arr_9 [i_2])))))));
        }
        for (int i_3 = 4; i_3 < 10;i_3 += 1) /* same iter space */
        {
            var_20 = (max(((max(47756, 47763))), (min(((var_14 + (arr_1 [i_0] [1]))), (((1464 ? 1 : var_15)))))));
            var_21 = var_13;
            var_22 = (-66 ? 17790 : 7);
        }
        /* vectorizable */
        for (int i_4 = 4; i_4 < 10;i_4 += 1) /* same iter space */
        {
            var_23 = (((arr_0 [i_0]) ? (arr_15 [i_4 + 1] [i_4 - 1] [i_4 - 2]) : -var_12));
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        {
                            var_24 |= (((arr_18 [i_0] [i_5] [i_4 - 3]) - var_0));
                            var_25 = (((arr_15 [i_4] [i_4] [9]) ^ (!66)));
                        }
                    }
                }
            }
            arr_25 [i_0] [i_4] = ((-(arr_24 [i_0] [4] [i_4] [i_4 + 1] [i_4 - 1] [i_4] [8])));
        }
        arr_26 [i_0] [9] = var_13;
        var_26 |= (arr_14 [i_0] [i_0]);
    }
    #pragma endscop
}
