/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183690
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    var_13 = (min(var_13, ((((((((var_3 >> (((arr_2 [i_1]) - 3971347995))))) >= var_9)) ? ((((((arr_0 [7] [2]) ? (arr_5 [i_2] [0] [i_2]) : var_2)) >= (arr_2 [i_0])))) : (arr_3 [21]))))));

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        var_14 = (((!var_6) ? var_4 : (arr_7 [i_2] [i_2])));
                        var_15 = (arr_3 [i_3]);
                    }
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
                        {
                            var_16 -= ((((min(var_11, (max((arr_5 [i_0] [4] [10]), (arr_11 [i_1] [i_1] [i_5])))))) ? var_2 : ((min(var_3, ((max((arr_11 [i_0] [i_1] [i_2]), (arr_9 [i_5] [12])))))))));
                            arr_18 [1] [1] [i_2] [1] [i_5] = (((((var_6 | ((1 ? 11778599697694225135 : 1))))) ? ((((arr_1 [i_0]) ? (arr_1 [i_5]) : (arr_1 [i_1])))) : (((arr_16 [12] [i_0] [12] [i_1] [9] [i_1] [i_1]) ? (var_9 ^ var_6) : (((min(1, 88))))))));
                            var_17 -= (arr_9 [i_4] [i_4]);
                        }
                        for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
                        {
                            var_18 ^= (((var_0 && var_1) == (((arr_15 [i_0] [i_0] [i_1] [i_2] [i_2] [i_0]) ^ (var_11 * var_11)))));
                            var_19 = (min(var_19, (arr_8 [i_0] [i_0] [i_0] [i_0] [13] [i_0])));
                        }
                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            var_20 = (min((((((min(103, 1))) <= (arr_17 [19] [i_1] [i_2] [i_4] [i_1] [i_7])))), var_2));
                            arr_23 [i_1] = var_8;
                            var_21 = (min(var_9, ((min((min(var_6, var_0)), (arr_9 [i_2] [i_2]))))));
                        }
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            var_22 -= (((arr_21 [i_0]) ? (arr_1 [i_0]) : var_9));
                            var_23 = (arr_10 [i_0] [i_0] [i_0] [i_0]);
                            var_24 = (max(var_24, var_8));
                            var_25 = ((arr_6 [i_0] [i_0] [i_0] [i_0]) / (min(var_10, (arr_5 [5] [i_8] [5]))));
                            var_26 ^= -var_0;
                        }
                        var_27 = var_9;
                        var_28 = (min(var_28, var_0));
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 22;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 22;i_10 += 1)
                        {
                            {
                                var_29 = (max(var_29, (((~(max((arr_2 [i_1]), (arr_2 [i_10]))))))));
                                arr_31 [i_10] [i_0] [i_0] [i_1] [i_1] [i_0] |= (arr_11 [i_0] [i_0] [i_0]);
                                var_30 ^= var_2;
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 22;i_11 += 1)
                    {
                        var_31 += (((arr_11 [i_0] [i_2] [i_11]) + var_8));
                        arr_35 [18] [i_1] = (arr_5 [i_1] [20] [i_1]);
                        var_32 = var_10;
                        arr_36 [i_0] [i_0] [19] [i_11] = (((arr_0 [i_0] [i_0]) ? (arr_0 [i_2] [i_0]) : (arr_0 [i_0] [i_11])));
                    }
                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 22;i_12 += 1)
                    {
                        var_33 = (max(var_33, var_11));
                        var_34 = (arr_30 [13] [13] [10] [i_2] [13] [i_12]);
                        var_35 = var_3;
                    }
                }
                arr_40 [i_1] = (((((arr_3 [i_1]) / var_4))) || var_5);
            }
        }
    }
    #pragma endscop
}
