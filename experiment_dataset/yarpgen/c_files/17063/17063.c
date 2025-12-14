/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17063
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, (((var_12 ? var_9 : var_11)))));

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_16 = (max(1, (!1)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_17 = var_6;
                                var_18 = (arr_7 [10]);
                            }
                        }
                    }
                    arr_11 [i_0] [i_0] [0] [0] = (max((arr_1 [i_0 + 2]), (min((arr_1 [i_0 + 2]), (arr_1 [i_0 + 2])))));
                }
            }
        }
        arr_12 [i_0] = ((((arr_6 [i_0] [14] [i_0 + 2]) ? ((1 ? (arr_10 [i_0 + 1] [i_0] [i_0] [i_0] [i_0]) : (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]))) : (arr_10 [i_0] [i_0 + 1] [i_0] [i_0 - 1] [i_0]))));
    }
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        var_19 ^= (max(((((arr_9 [i_5] [i_5] [i_5] [i_5] [i_5]) != (arr_7 [i_5])))), (max(var_4, (arr_2 [i_5] [i_5] [i_5])))));
        var_20 = min((arr_6 [i_5] [i_5] [i_5]), (arr_6 [i_5] [i_5] [i_5]));
        var_21 = (((arr_4 [i_5] [i_5] [1]) != (arr_6 [i_5] [i_5] [i_5])));
        var_22 *= (((arr_0 [i_5]) ? ((~(arr_7 [i_5]))) : ((((((max(127, 1))) > (arr_1 [i_5])))))));
    }
    for (int i_6 = 3; i_6 < 21;i_6 += 1) /* same iter space */
    {
        var_23 = (((arr_9 [i_6] [4] [i_6] [i_6 - 3] [i_6]) < (~var_6)));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 23;i_8 += 1)
            {
                {
                    var_24 = (arr_19 [6] [i_7]);
                    var_25 = (max((((arr_21 [2] [i_6 + 2] [i_6 - 2]) + (arr_21 [i_8] [i_6 - 2] [i_6 - 2]))), (((arr_9 [i_6] [i_6] [i_6 - 1] [i_6] [i_6 - 1]) ? (arr_1 [i_6 - 1]) : (arr_9 [i_6] [i_6] [i_6 - 1] [1] [i_6 - 1])))));
                    arr_22 [i_8] [i_6] = (max(((((!var_9) >> ((((max((arr_18 [i_6]), (arr_21 [i_6] [13] [i_6])))) - 33))))), (~var_7)));
                }
            }
        }
    }
    for (int i_9 = 3; i_9 < 21;i_9 += 1) /* same iter space */
    {
        var_26 = (((((arr_21 [i_9 - 3] [i_9 + 1] [i_9 + 1]) ^ (arr_21 [i_9 - 2] [i_9] [i_9])))) ? ((((var_11 ? (arr_13 [i_9 + 1] [i_9]) : (arr_0 [i_9]))) | 2996293793)) : var_7);
        var_27 = (min((arr_8 [i_9 - 2] [i_9 - 2]), (((~(arr_6 [i_9 - 3] [i_9 - 1] [i_9]))))));
        var_28 = (244 == 5243671076324932126);
    }
    #pragma endscop
}
