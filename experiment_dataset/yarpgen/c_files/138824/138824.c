/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138824
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_16;
    var_18 = var_8;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 = (arr_0 [i_0]);
        var_20 += (arr_1 [i_0]);
        var_21 = (((arr_2 [i_0] [i_0]) - (arr_2 [i_0] [i_0])));
        var_22 = ((arr_2 [i_0] [18]) ? (((arr_2 [i_0] [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0]))) : ((((arr_2 [12] [12]) > (arr_1 [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_23 -= ((((arr_1 [i_1]) ? (arr_2 [i_0] [i_0]) : (arr_5 [i_0]))));
                    var_24 *= (arr_0 [i_1]);
                    var_25 = ((-(arr_4 [i_0])));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
    {
        var_26 = (((((arr_7 [i_3] [14]) ? (arr_8 [i_3] [i_3]) : (arr_1 [i_3])))) ? (arr_8 [i_3] [i_3]) : (arr_0 [i_3]));
        var_27 ^= ((!((((arr_2 [i_3] [i_3]) ? (arr_1 [i_3]) : (arr_3 [i_3] [i_3]))))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
    {
        var_28 = ((!(arr_0 [i_4])));
        var_29 = ((arr_11 [i_4]) <= (arr_11 [i_4]));
        var_30 = (((((arr_4 [i_4]) ? (arr_9 [i_4]) : (arr_10 [i_4]))) < ((((!(arr_12 [i_4])))))));
    }
    /* LoopNest 2 */
    for (int i_5 = 3; i_5 < 12;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            {
                var_31 = (min(var_31, ((min((((((~(arr_3 [i_5] [i_5])))) & (((arr_3 [i_5] [i_5]) ? (arr_14 [i_6]) : (arr_17 [i_5] [i_5] [i_6]))))), ((max((arr_3 [i_5] [7]), (((arr_3 [i_5] [i_6]) ? (arr_7 [i_6] [i_5]) : (arr_9 [14])))))))))));
                /* LoopNest 3 */
                for (int i_7 = 2; i_7 < 13;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            {
                                var_32 = (min(((-(((arr_18 [i_8] [i_8] [i_7 + 1]) ? (arr_8 [i_6] [i_6]) : (arr_12 [i_6]))))), (arr_5 [i_7])));
                                arr_27 [i_6] [12] [i_7] [i_6] [i_6] = ((arr_11 [i_6]) ? (((arr_18 [i_5 + 1] [i_6] [i_7]) ^ (min((arr_14 [i_6]), (arr_0 [i_9]))))) : (max((min((arr_12 [i_6]), (arr_15 [i_6]))), (arr_19 [i_5 - 2] [i_7] [i_5 - 2] [i_9]))));
                                arr_28 [i_5] [i_6] [i_7 - 1] [i_8] [i_6] [i_9] = (+(min(((max((arr_9 [i_6]), (arr_5 [i_7])))), (((arr_11 [i_6]) ? (arr_12 [i_6]) : (arr_10 [i_6]))))));
                                var_33 = (min(((min((arr_12 [i_6]), (arr_3 [i_5] [i_6])))), (min(298921907, ((max((arr_12 [i_6]), (arr_16 [i_6]))))))));
                            }
                        }
                    }
                }
                arr_29 [i_5 - 3] [12] |= ((-119 >= (arr_1 [i_5 - 2])));
            }
        }
    }
    var_34 = ((var_4 ? (min(var_2, ((max(var_13, var_7))))) : var_13));
    #pragma endscop
}
