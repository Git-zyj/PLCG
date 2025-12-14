/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174410
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= var_14;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 = (arr_1 [i_0]);
        var_17 = (min(var_17, ((((((-(((arr_1 [16]) ? var_8 : (arr_0 [i_0])))))) ? ((+(((arr_0 [7]) ? (arr_1 [12]) : var_12)))) : var_10)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                {
                    arr_8 [i_2] = var_3;
                    arr_9 [i_2] [i_2] = arr_1 [i_3];
                    var_18 = var_3;
                }
            }
        }
        /* LoopNest 3 */
        for (int i_4 = 2; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 9;i_6 += 1)
                {
                    {
                        var_19 *= -1;
                        var_20 = (min(var_20, (arr_6 [i_1])));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 11;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 13;i_8 += 1)
            {
                {
                    var_21 = (arr_5 [i_7 + 2] [i_7 + 2]);
                    arr_21 [i_8] [6] [i_1] = (~var_4);
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 20;i_9 += 1)
    {
        var_22 *= ((((max(177, 18446744073709551615))) ? ((var_0 << ((((min((arr_22 [i_9]), -23395))) + 23397)))) : (arr_22 [i_9])));
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 20;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 19;i_11 += 1)
            {
                for (int i_12 = 1; i_12 < 19;i_12 += 1)
                {
                    {
                        var_23 -= (min(var_4, (min((arr_24 [i_11]), (min(18446744073709551604, (arr_1 [i_10])))))));
                        var_24 = (((((((-(arr_25 [i_9] [1] [i_12])))) && (arr_25 [17] [i_9] [i_9]))) ? (((~((41442 ? (arr_31 [i_10]) : (arr_22 [8])))))) : ((max((arr_30 [1] [i_9] [13] [i_10] [i_11 + 1] [i_12 + 1]), (arr_31 [i_10]))))));
                        arr_32 [i_9] [i_11] [i_11] [i_12] = (~-64);
                        var_25 = (arr_25 [i_9] [i_10] [3]);
                        arr_33 [i_9] [i_10] &= var_6;
                    }
                }
            }
        }
        arr_34 [i_9] &= (((~var_4) ? (arr_0 [i_9]) : (((arr_22 [i_9]) | var_13))));
    }
    var_26 = -var_2;
    #pragma endscop
}
