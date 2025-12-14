/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13289
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = ((var_7 || ((min((arr_0 [i_0] [i_0]), var_2)))));
        arr_5 [i_0] = (max((arr_0 [10] [i_0]), ((max((arr_1 [i_0]), var_11)))));
        arr_6 [i_0] [i_0] = (((((-(arr_2 [i_0] [i_0])))) ? (23006 | var_0) : ((max((arr_1 [i_0]), (arr_1 [i_0]))))));
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {
                        arr_15 [i_0] [i_1] [i_1] [i_3] |= (arr_12 [i_3] [i_1] [i_0]);
                        arr_16 [i_0] = (((-(arr_11 [13]))));
                        arr_17 [i_0] [i_1] [i_2] [i_2] [i_2] = (((-(~var_5))));
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
    {
        arr_20 [i_4] = ((((arr_19 [10]) / ((19634 ? (arr_10 [i_4] [i_4] [1] [1]) : 19611)))));
        arr_21 [i_4] [i_4] = (arr_14 [i_4] [i_4] [i_4] [i_4] [i_4]);
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
    {
        arr_24 [i_5] = ((-((40627 ? (arr_0 [i_5] [i_5]) : var_12))));
        arr_25 [i_5] &= (var_14 / var_0);
        arr_26 [i_5] [i_5] = var_17;
    }
    var_19 = var_15;
    var_20 = var_5;
    #pragma endscop
}
