/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182787
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 0;
    var_16 = var_7;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 9;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((var_9 >> (((arr_1 [i_0 - 1] [i_0 - 1]) - 2534089669))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 9;i_3 += 1)
                {
                    {
                        var_17 = ((var_7 >> (arr_8 [i_3])));
                        arr_9 [i_0] [i_1] [i_3] [i_0] = (78 + 177);
                        var_18 ^= var_13;
                    }
                }
            }
        }
        var_19 = (max(var_19, var_13));
    }
    for (int i_4 = 1; i_4 < 9;i_4 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 0;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    arr_18 [i_4] [5] [i_5 + 1] [i_5] = (max(-1, ((var_13 ? (arr_6 [i_4] [i_4] [i_6]) : var_13))));
                    var_20 = (arr_6 [i_4] [i_4] [i_6]);

                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        arr_22 [i_4] [i_4] [i_7] [i_7] &= (arr_21 [i_7]);
                        var_21 -= (((((var_14 ? ((max(var_10, var_2))) : (arr_14 [i_5] [i_6])))) ? (arr_3 [i_4 + 1] [i_4 + 1] [i_4 + 1]) : (((min((arr_16 [i_4] [i_5 + 1] [i_4 - 1] [i_4 - 1]), 178))))));
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 10;i_8 += 1) /* same iter space */
                    {
                        var_22 = (max(var_22, var_7));
                        arr_25 [i_4] [i_5] [i_6] [i_5] [i_8] = 78;
                        var_23 = (min(var_23, ((((arr_19 [i_4 - 1] [i_4 + 1] [i_4 - 1] [i_4 + 1]) | (arr_13 [1]))))));
                    }
                    for (int i_9 = 0; i_9 < 10;i_9 += 1) /* same iter space */
                    {
                        var_24 = ((((max((((arr_6 [i_4] [i_5] [i_9]) / (arr_14 [i_4] [i_4]))), (arr_15 [i_5] [i_5 + 1] [i_5 + 1])))) ? (((!(~1017230294)))) : ((var_1 ? 1 : 1))));
                        var_25 = (min(var_25, 126));
                    }
                }
            }
        }
        arr_28 [i_4] &= ((~(((max(var_1, 1)) - (arr_10 [i_4])))));
        var_26 = (min(((-((235 ? var_6 : var_7)))), ((max(var_6, var_13)))));
    }
    #pragma endscop
}
