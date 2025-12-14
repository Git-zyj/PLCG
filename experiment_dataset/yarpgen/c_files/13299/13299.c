/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13299
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 21;i_2 += 1) /* same iter space */
                {
                    arr_10 [i_2] [i_1] = (arr_6 [i_2]);
                    arr_11 [i_1] [20] [i_1] [i_0 + 1] = ((((min((arr_0 [i_0 + 1] [i_0 + 3]), (((!(arr_5 [i_0] [i_1] [i_2]))))))) || ((!(arr_4 [4])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_16 [i_4] [i_0 + 3] [i_1] [i_0 + 3] [i_3] [i_4] [i_4] = ((((((arr_13 [i_4] [i_1]) ? (arr_13 [i_0 - 1] [i_0 - 1]) : (arr_13 [i_2] [i_4])))) ? ((var_12 % (((arr_8 [i_4] [9] [3]) % (arr_4 [18]))))) : ((((((var_11 ^ (arr_9 [i_2] [i_4]))) + 2147483647)) >> (var_12 == var_14)))));
                                var_18 = ((-((min((var_0 <= var_14), var_14)))));
                            }
                        }
                    }
                    var_19 = ((!((((arr_14 [19] [9] [i_1] [i_0]) * -var_15)))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 4; i_6 < 18;i_6 += 1)
                        {
                            {
                                var_20 = var_14;
                                var_21 = ((((!((((arr_1 [i_1]) ? var_12 : var_10))))) ? ((((((arr_20 [2] [i_1] [13] [i_2] [i_5] [i_6] [i_6]) | var_3))) ? ((var_6 * (arr_8 [i_0] [i_2] [i_2]))) : (((!(arr_5 [i_5] [i_5] [i_2])))))) : 56));
                            }
                        }
                    }
                }
                for (int i_7 = 0; i_7 < 21;i_7 += 1) /* same iter space */
                {
                    arr_24 [4] [4] [i_0] = ((~(((arr_12 [i_0 + 3] [i_1] [i_7] [i_7]) ? (arr_2 [i_7]) : (arr_5 [i_1] [i_1] [i_0])))));
                    var_22 = (((arr_22 [i_7] [i_1] [i_0 - 1]) != (((arr_6 [i_0 - 2]) + (arr_9 [i_0] [6])))));
                    arr_25 [i_7] [i_0] = ((-(((arr_4 [i_7]) ? var_8 : ((var_17 ? (arr_15 [i_0] [i_0] [i_0] [i_1] [i_7] [i_7]) : (arr_8 [i_7] [i_0 + 4] [i_0 + 4])))))));
                }
                /* LoopNest 3 */
                for (int i_8 = 2; i_8 < 18;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            {
                                arr_34 [i_0 + 4] [i_0 + 1] [13] [i_0 + 4] [i_0 + 4] [i_9] [i_10] = ((~(((arr_0 [i_0 + 3] [i_1]) ? (arr_23 [i_10] [i_8 - 2] [4]) : (arr_21 [i_10] [i_9] [i_8] [0] [i_1] [i_0])))));
                                var_23 = ((((arr_13 [i_0 + 2] [i_0 + 4]) ? ((~(arr_3 [11]))) : (((var_0 >> (var_4 - 77)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = (max(var_13, (((-var_17 ? (var_3 / var_1) : ((var_3 ? var_11 : var_16)))))));
    var_25 = var_9;
    #pragma endscop
}
