/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172144
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_18 *= (max((max((var_7 != 8796093022207), var_9)), var_2));
                arr_5 [i_0] [i_1] [i_1] = ((!((((arr_0 [i_0 + 2]) ? (var_12 || var_10) : (((var_4 && (arr_4 [i_0])))))))));
                var_19 = ((min(((var_13 ? 32764 : var_6)), ((((arr_1 [i_1]) >= var_8))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    var_20 = (max(var_20, ((((arr_11 [i_3] [i_3]) ? (((((arr_11 [i_3] [i_4]) != 2680753027)) ? (var_3 & var_14) : (arr_4 [i_2]))) : var_10)))));

                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {

                        /* vectorizable */
                        for (int i_6 = 1; i_6 < 9;i_6 += 1) /* same iter space */
                        {
                            var_21 ^= var_11;
                            var_22 = (((((arr_9 [i_3] [i_4] [i_3]) | var_12)) ^ (var_9 ^ var_9)));
                        }
                        for (int i_7 = 1; i_7 < 9;i_7 += 1) /* same iter space */
                        {
                            var_23 -= ((((var_13 * var_2) / (arr_12 [i_5] [i_3] [i_3] [i_3]))) * ((((((arr_12 [i_5] [i_5] [i_5] [8]) > var_17)) ? ((2680753039 ? (arr_1 [i_5]) : var_13)) : var_11))));
                            var_24 = (max(var_24, ((min(((((var_8 || var_2) || (var_15 || var_10)))), (((arr_19 [i_7 + 1] [i_7 + 1] [i_7 - 1] [i_7] [i_7] [4]) ? var_4 : (arr_15 [i_7 + 1] [i_7 + 1] [i_7 - 1] [i_7] [i_7]))))))));
                            var_25 = (min(var_25, ((((((((((var_6 || (arr_7 [i_2] [i_4]))))) / var_0))) - (((arr_3 [i_7 - 1] [i_7 - 1]) & var_12)))))));
                        }
                        for (int i_8 = 1; i_8 < 9;i_8 += 1) /* same iter space */
                        {
                            var_26 ^= (arr_13 [5] [4] [5] [i_8 + 1] [i_5] [i_2]);
                            arr_22 [i_5] [i_4] [i_4] [i_2] [i_2] [i_2] = (max(((max(var_2, ((var_5 * (arr_1 [11])))))), (max(var_11, ((var_3 ? (arr_0 [i_8]) : 524032))))));
                        }
                        arr_23 [i_2] [i_3] [i_3] [i_3] [i_2] |= ((max((var_12 * var_9), ((((arr_1 [i_3]) < var_11))))));
                    }
                    for (int i_9 = 2; i_9 < 9;i_9 += 1)
                    {
                        arr_26 [i_2] [i_3] [8] [i_4] = (arr_13 [i_9] [i_9 + 1] [i_9] [i_9 - 1] [i_9] [i_9 - 2]);
                        var_27 = (min(var_27, (((+(max((arr_19 [i_2] [i_2] [i_2] [i_2] [i_2] [i_9]), var_9)))))));
                        var_28 = (max((var_4 ^ var_17), ((((!var_1) > (max(var_14, var_12)))))));

                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 10;i_10 += 1)
                        {
                            arr_30 [i_4] = (((arr_27 [8] [i_9 - 1] [8] [i_9]) ? (arr_21 [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_9 + 1]) : (arr_6 [i_9 - 2] [i_9 - 1])));
                            var_29 = 2305843009213693948;
                        }
                    }
                    var_30 = (max(var_30, (((((var_10 & ((((arr_12 [i_3] [i_2] [i_3] [i_3]) && (arr_15 [i_2] [i_2] [i_2] [4] [i_4])))))) << (((((arr_20 [i_3] [i_3] [i_3] [i_4]) ? var_14 : (min(var_0, 0)))) - 62)))))));
                }
            }
        }
    }
    var_31 = 0;
    #pragma endscop
}
