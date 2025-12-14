/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186036
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_18 = (min(1975, (arr_1 [i_0])));
        var_19 = (arr_0 [i_0] [i_0]);
        arr_2 [i_0] [i_0] = 0;
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = ((((((-(arr_0 [i_1] [i_1]))) >= (((arr_1 [i_1]) - (arr_4 [i_1] [i_1]))))) ? (~209) : ((~((min((arr_3 [i_1]), (arr_1 [i_1]))))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                var_20 = (min(var_20, ((((arr_9 [i_2] [i_2] [i_2]) < 1)))));
                                arr_17 [i_4] [i_3] [i_3] [i_3] [i_3] [i_2] = ((((arr_0 [i_1] [i_2]) & (arr_0 [i_5] [i_5]))));
                            }
                        }
                    }
                    var_21 = (min(var_21, (((var_9 ? ((-(arr_15 [i_1] [i_1] [i_1] [i_1] [i_1]))) : 4095)))));
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
    {
        var_22 = (max((((!(arr_9 [i_6] [i_6] [i_6])))), (~var_3)));
        arr_22 [i_6] [i_6] = (min(1, (min(-5531053732085661857, (var_17 % var_3)))));
        var_23 = (arr_6 [i_6] [i_6]);
    }
    for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
    {
        var_24 = (74 ^ -0);
        var_25 = ((!(arr_11 [i_7] [i_7] [i_7] [i_7] [10] [i_7])));
    }
    var_26 = var_5;
    /* LoopNest 2 */
    for (int i_8 = 2; i_8 < 9;i_8 += 1)
    {
        for (int i_9 = 1; i_9 < 10;i_9 += 1)
        {
            {
                var_27 ^= (max((((((max(16216, 155))) | (arr_30 [i_9 + 1] [i_9 + 1])))), ((-var_10 ? ((var_17 ? (arr_27 [i_8] [i_8]) : (-9223372036854775807 - 1))) : ((((arr_26 [i_8] [i_8 + 3]) + (arr_25 [0]))))))));
                var_28 = (var_12 * (((max((arr_28 [i_8] [i_8] [i_9]), (arr_27 [i_9] [i_9]))) ^ (((-1644059770 - (arr_29 [i_8] [i_9])))))));
                var_29 = ((((min((arr_26 [i_9 + 2] [i_9 - 1]), (arr_26 [i_9 - 1] [i_9 + 2])))) + (!var_11)));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_10 = 0; i_10 < 21;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 21;i_11 += 1)
        {
            for (int i_12 = 1; i_12 < 1;i_12 += 1)
            {
                {
                    var_30 = (arr_34 [i_10] [i_10] [i_10]);
                    var_31 = (((arr_37 [i_10] [i_10]) ? (~-206) : (arr_33 [i_10] [i_11])));
                }
            }
        }
    }
    #pragma endscop
}
