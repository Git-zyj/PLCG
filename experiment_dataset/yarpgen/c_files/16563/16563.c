/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16563
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [5] [6] = (((arr_0 [i_0]) + ((var_3 ? 5 : var_2))));
        arr_3 [i_0] [i_0] = (max(((!((min((arr_0 [i_0]), var_8))))), (((var_7 % var_12) == (((min(var_7, 0))))))));
        var_13 = (max(var_13, (((~91) ? (min(var_10, (arr_0 [i_0]))) : (((((((65535 + (arr_1 [i_0])))) > 18446744073709551615))))))));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            var_14 = ((var_6 / (max((((arr_7 [6]) ? var_10 : 8)), var_0))));
            var_15 = var_2;
        }
        var_16 = 7;
        var_17 = -1938468651;
    }
    for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
    {
        var_18 = var_11;
        var_19 = var_7;
        var_20 -= (max(((~(~65522))), (((((arr_8 [i_3] [i_3]) + 2147483647)) << (var_11 - 1)))));
    }
    for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
    {
        var_21 = 2626118448;
        arr_14 [i_4] = ((((((arr_11 [i_4]) >= (((var_4 ? (arr_13 [i_4]) : (arr_10 [i_4] [i_4]))))))) == 65535));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 16;i_6 += 1)
            {
                for (int i_7 = 3; i_7 < 16;i_7 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_8 = 1; i_8 < 1;i_8 += 1) /* same iter space */
                        {
                            arr_25 [2] [i_8] [i_6] [i_8] [i_8] = var_12;
                            var_22 *= ((arr_20 [i_6 - 1] [i_5] [i_6 - 1] [10] [i_8 - 1]) % var_5);
                            arr_26 [1] [1] [i_8] [i_5] [i_4] = ((-(arr_13 [i_6 - 2])));
                        }
                        for (int i_9 = 1; i_9 < 1;i_9 += 1) /* same iter space */
                        {
                            arr_29 [i_9] [i_4] [i_6] [i_4] [i_4] = (((~1) < (max(1, ((min(var_6, (arr_27 [i_9] [0] [0] [0] [0]))))))));
                            arr_30 [i_4] [0] = (((((arr_24 [i_6 - 1] [i_7 - 3] [i_9 - 1] [i_9] [3] [i_9 - 1]) < 1)) ? 1 : (arr_12 [i_4] [2])));
                        }
                        for (int i_10 = 1; i_10 < 1;i_10 += 1) /* same iter space */
                        {
                            var_23 = (min(var_23, ((min((min(var_1, ((16 ? var_8 : (arr_33 [i_6]))))), (((!(((var_8 ? var_9 : var_2)))))))))));
                            var_24 = ((13608368659004851759 ? 2147483647 : 1));
                            arr_34 [i_6] [i_6] [16] [i_6] &= max((((!(102 ^ var_0)))), (min(((-2147483623 ? var_5 : 558434474)), ((min((arr_27 [i_10] [i_7] [1] [1] [1]), var_1))))));
                            var_25 = (min(var_25, var_7));
                        }
                        arr_35 [i_7 - 3] [i_6] [i_5] [i_4] [i_4] [4] = (max((min((((var_2 ? var_9 : (arr_16 [i_5] [i_6] [i_7])))), (-7 + var_10))), (((!(max(var_11, var_11)))))));
                        var_26 = (max(var_26, (((-(((var_9 ? var_10 : -102))))))));
                    }
                }
            }
        }
        arr_36 [i_4] [i_4] = (~(((!((max((arr_12 [i_4] [i_4]), (arr_19 [i_4] [i_4] [i_4]))))))));
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 17;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                {
                    arr_42 [i_4] [i_11] [i_11] [i_4] = (((1 > 16886397588575182905) < 10925749188977411297));
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 17;i_13 += 1)
                    {
                        for (int i_14 = 2; i_14 < 13;i_14 += 1)
                        {
                            {
                                var_27 = (1 % 1);
                                var_28 = (arr_8 [16] [i_14]);
                                arr_50 [i_11] [i_11] [i_12] [i_12] = 16886397588575182905;
                                var_29 -= ((min((max(var_0, 9859141231522525262)), (((var_6 ? (arr_17 [i_14] [i_12]) : 1953172846))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_30 = (min(var_5, var_1));
    #pragma endscop
}
