/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16187
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        arr_2 [20] = var_9;
        arr_3 [16] = ((((arr_0 [i_0] [9]) <= var_6)) ? (((arr_1 [i_0]) ^ var_12)) : ((-(arr_0 [i_0] [i_0]))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_13 = (min(var_13, ((max((!var_12), (((var_12 != var_4) % ((var_7 ? var_0 : (arr_0 [i_1] [i_1]))))))))));

        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            arr_10 [i_1] [i_2] [i_1] = (max((var_10 < var_2), var_3));
            var_14 -= (((arr_0 [i_1] [i_2]) / ((max(var_5, (arr_0 [i_1] [i_2]))))));
            var_15 = (max((((((var_4 ? var_10 : (arr_5 [i_1])))) ? ((((30032 >= (arr_9 [i_1] [15] [i_1]))))) : (max(var_11, (arr_6 [i_1] [i_1]))))), (arr_6 [17] [i_1])));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            arr_13 [i_1] = ((!(!var_11)));
            arr_14 [i_3] [i_3] |= (arr_6 [i_1] [i_3]);
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    {
                        arr_22 [i_1] [i_3] = -var_8;
                        var_16 = ((((35481 ? 2147483647 : 125))) ? (~140) : var_2);
                        var_17 = (((arr_6 [i_4] [i_1]) | -2));
                        var_18 = (min(var_18, ((((var_9 >= var_7) >> (((arr_17 [i_5] [0] [i_5] [i_5]) - 29010)))))));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 19;i_7 += 1)
                {
                    {
                        arr_28 [i_1] [i_6] [i_3] [i_1] = ((~-4) ? ((((arr_23 [i_7] [i_1] [i_1] [i_1]) >= var_0))) : var_2);
                        var_19 = (arr_15 [15] [i_7]);
                        arr_29 [i_1] [i_1] [i_6] [i_6] = var_12;
                    }
                }
            }
            var_20 *= ((var_5 + (arr_21 [11])));
        }
        var_21 *= 5;
        arr_30 [i_1] [i_1] = (((268435456 ^ 125) * ((var_11 + (((var_7 - (arr_6 [i_1] [i_1]))))))));
    }
    var_22 = -var_5;
    var_23 *= 121;
    #pragma endscop
}
