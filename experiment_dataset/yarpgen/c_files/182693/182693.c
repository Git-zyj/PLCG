/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182693
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_11 = var_4;
                    var_12 = var_7;
                    arr_10 [i_0] [i_2] [2] = var_3;
                    arr_11 [i_0] [i_1] [i_2] = (((var_4 >= (arr_5 [i_0 - 2]))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 18;i_4 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
                    {
                        var_13 = ((var_9 ? ((var_10 ? var_9 : (arr_3 [i_4] [14]))) : (arr_2 [i_5])));
                        var_14 = var_3;
                    }
                    for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
                    {

                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            var_15 ^= ((+(((arr_14 [i_0] [i_7]) + (!var_7)))));
                            arr_25 [i_7] [i_6] [i_4 - 1] [i_3] [i_0] = var_9;
                        }
                        var_16 = ((max(var_7, var_9)));
                        var_17 = ((~((~(arr_6 [i_4 - 1] [i_0 + 2])))));
                    }
                    for (int i_8 = 0; i_8 < 19;i_8 += 1) /* same iter space */
                    {
                        var_18 = (min(var_18, ((((~(arr_19 [i_0 - 1] [i_4 + 1] [i_4 + 1] [i_8])))))));
                        var_19 = ((((max((max(var_5, var_9)), ((((arr_16 [i_0] [i_3] [i_4] [i_8]) ? var_1 : var_4)))))) ? var_0 : (max((min(var_0, var_3)), ((var_3 ? var_6 : var_3))))));
                    }
                    var_20 = ((((((((var_8 ? var_10 : var_1))) ? (arr_5 [i_0]) : var_8))) ? (((arr_27 [2] [i_3] [i_3] [i_3]) ? (arr_27 [4] [12] [i_4 + 1] [i_4 + 1]) : (arr_27 [14] [i_4] [i_4 + 1] [i_4]))) : var_3));
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 16;i_9 += 1)
                    {
                        for (int i_10 = 3; i_10 < 17;i_10 += 1)
                        {
                            {
                                var_21 = ((arr_28 [i_10] [i_9] [i_9] [i_4] [i_3] [i_0]) + (arr_4 [i_0 - 3] [i_4 - 1]));
                                var_22 = min((var_3 ^ var_2), var_3);
                                var_23 = ((var_4 ? (arr_29 [i_0 - 1] [i_0] [i_0] [i_0 + 2] [16] [i_0 - 1]) : ((max((arr_5 [i_4 - 1]), var_5)))));
                            }
                        }
                    }
                    arr_34 [1] [i_3] [i_4] = ((max((!var_4), var_6)));
                    var_24 = (min(var_24, var_7));
                }
            }
        }
    }
    var_25 ^= var_7;
    #pragma endscop
}
