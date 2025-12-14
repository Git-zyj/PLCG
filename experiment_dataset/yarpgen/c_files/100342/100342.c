/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100342
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_18 += (!var_14);
                arr_6 [i_0] [i_0] = ((!((((arr_1 [i_0]) - ((-24875 ? (arr_1 [i_0]) : var_1)))))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] = ((35433 ? (max(var_6, (~-28927))) : 113));
        arr_10 [i_2] = arr_5 [i_2] [i_2] [3];
    }
    for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                {

                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        arr_24 [8] [i_4] [i_5] [i_4] = (max(var_10, (arr_11 [i_3] [i_5])));
                        var_19 = max((((arr_0 [i_3]) + 10007667024938205050)), ((max(var_15, (arr_0 [i_6])))));
                        arr_25 [i_3] [i_3] [i_4] [i_4] = ((-((((max((arr_20 [i_3] [i_4] [i_5] [i_3]), (arr_8 [i_3] [i_4])))) ? (arr_0 [i_3]) : (arr_20 [7] [i_4] [i_4] [i_6])))));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 14;i_7 += 1) /* same iter space */
                    {
                        var_20 ^= var_4;
                        arr_29 [i_3] [3] [i_3] [i_5] [5] [i_4] = (arr_2 [i_5] [i_7]);
                    }
                    for (int i_8 = 0; i_8 < 14;i_8 += 1) /* same iter space */
                    {
                        arr_34 [i_4] [i_3] = var_13;
                        arr_35 [i_5] [i_3] [i_4] [i_5] [i_5] [0] &= (arr_22 [i_3] [i_5] [i_8]);
                        arr_36 [i_3] [i_8] [i_4] [i_5] [i_5] [8] &= ((-(((((var_13 ? var_4 : 35448))) ? (min(12553507779265632773, 16)) : ((-31785 ? 0 : 12051))))));
                    }
                    for (int i_9 = 0; i_9 < 14;i_9 += 1) /* same iter space */
                    {
                        arr_39 [i_3] [9] [i_4] = (arr_32 [i_4] [i_4]);
                        var_21 = (max((max(((-(arr_0 [i_9]))), ((max((arr_3 [i_3] [i_5] [i_9]), 5711))))), (arr_7 [i_4])));
                        arr_40 [i_9] [i_4] [i_4] [i_4] [i_4] &= 38256;
                    }
                    arr_41 [i_3] [i_4] [i_4] [i_5] = (max(((min(19811, 79))), 65534));
                }
            }
        }
        arr_42 [i_3] = (((((arr_12 [i_3] [i_3]) >> (28549 - 28506))) == (arr_12 [i_3] [i_3])));
        var_22 -= (arr_32 [i_3] [i_3]);
    }
    var_23 = ((((min((var_15 < var_2), -var_11))) ? ((min(var_12, var_7))) : (var_8 * var_11)));
    #pragma endscop
}
