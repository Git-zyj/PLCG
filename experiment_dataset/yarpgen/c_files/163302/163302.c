/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163302
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((max((((var_0 ? var_1 : var_11))), (~2681393100475599961)))) ? var_2 : 238));
    var_13 = (((var_5 + 2147483647) << (var_6 - 1)));
    var_14 = ((((min(var_5, (var_4 & 17)))) ? ((2 ? 237 : 34914)) : var_2));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_15 = ((arr_0 [i_0] [4]) << 0);
        arr_3 [i_0] = (!13);
        var_16 = (arr_2 [i_0] [i_0]);
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] [i_1] = 18;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                {
                    var_17 = ((((((-(arr_11 [i_2] [i_1]))) + 2147483647)) >> ((((var_11 ? (arr_11 [i_1] [i_1]) : var_6)) - 208))));
                    arr_14 [i_2] [i_2] [i_1] = (((((((min(224, (arr_1 [i_1] [i_2])))) ? (254 >= 5669257597018340204) : 37))) ? ((4 ? 250 : 1048575)) : ((max((arr_9 [i_1] [i_2]), ((233 ? 2147483643 : 2426989927)))))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            {
                                arr_21 [i_1] [i_1] [i_1] [i_4] [i_5] = (arr_2 [i_1] [i_1]);
                                arr_22 [i_1] [i_2] [i_2] [i_2] [i_2] = ((((48933 ? 18446744073708503009 : 16777216)) == (((arr_15 [i_1] [i_1] [i_1] [i_1] [1]) ? (min((arr_5 [i_4]), (arr_16 [i_1] [i_1] [i_1] [i_3] [i_1] [i_5]))) : (((1867977352 ? (arr_10 [8] [i_2] [i_1]) : (arr_12 [5] [5] [i_3] [5]))))))));
                            }
                        }
                    }
                }
            }
        }
        arr_23 [i_1] = 1048577;
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {

        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            arr_30 [i_6] [i_6] = (min((((max(250, 7212399631131203369)))), ((2211270214 ? 31 : 16352))));
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 10;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 10;i_9 += 1)
                {
                    {
                        var_18 = (arr_4 [i_7] [i_9]);
                        arr_38 [1] [i_7] [i_8] [i_9] [i_7] [i_6] = 3;
                        var_19 = (((arr_7 [i_8]) ? (arr_0 [i_6] [i_9]) : (((arr_16 [i_7] [10] [i_8] [i_7] [0] [0]) ? (((~(arr_34 [1] [i_6] [i_6] [i_7] [i_6])))) : (max(16379, var_0))))));
                    }
                }
            }
        }
        arr_39 [0] = ((!((((((102 ? 1094737439 : 0))) ? ((var_1 ? var_2 : var_5)) : (((arr_16 [8] [i_6] [i_6] [i_6] [i_6] [i_6]) ? (arr_7 [6]) : var_2)))))));
    }
    #pragma endscop
}
