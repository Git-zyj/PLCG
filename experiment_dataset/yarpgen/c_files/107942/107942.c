/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107942
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_4 [i_0] [0] [4] &= (((((((((arr_0 [i_0] [21]) ? (arr_1 [22]) : (arr_2 [i_1])))) ? ((var_5 ? (arr_2 [i_0]) : (arr_0 [11] [1]))) : (arr_3 [i_0])))) ? (((((~(arr_3 [i_0])))) ? ((max((arr_3 [i_1]), (arr_3 [i_0])))) : (arr_1 [12]))) : var_1));
                arr_5 [i_0] = (((((arr_2 [i_1]) <= (arr_0 [i_1] [i_0]))) ? var_10 : (arr_0 [i_0] [i_0])));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 3; i_2 < 9;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 10;i_5 += 1) /* same iter space */
                    {

                        for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
                        {
                            var_12 = (max(var_12, ((((-32759 ? var_3 : 124))))));
                            var_13 = (((arr_8 [6]) - (arr_6 [i_2 + 2] [i_2])));
                            arr_18 [i_2] [i_2] = ((!(arr_9 [i_5])));
                            var_14 = -11622;
                        }
                        for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
                        {
                            var_15 += (((arr_13 [i_5 + 1] [i_5 + 1] [i_5] [i_5 + 1] [i_5 + 1] [i_7]) && 71));
                            var_16 += var_11;
                            var_17 = ((-2855283433951423259 ? ((~(arr_17 [i_2] [i_3] [i_4] [i_5 + 1] [i_5] [i_7]))) : ((~(arr_9 [i_7])))));
                            arr_21 [i_2] [i_2] [i_4] [i_5 - 1] [i_7] = ((-14220 ? (arr_8 [i_2 + 1]) : (arr_20 [i_5 - 1] [i_2] [i_2 + 2] [i_2] [3])));
                            var_18 = ((+(((arr_3 [i_2]) ? var_5 : (arr_15 [i_2] [i_2] [i_2] [i_4] [i_5 - 1] [i_7])))));
                        }
                        for (int i_8 = 2; i_8 < 9;i_8 += 1)
                        {
                            arr_26 [i_2] [i_3] [i_3] [i_2] [i_5] [i_8] = var_8;
                            var_19 = (i_2 % 2 == 0) ? ((((((arr_23 [i_2] [i_8 - 1] [i_8] [2] [i_8 + 2]) + 2147483647)) >> ((((arr_1 [i_2]) <= var_8)))))) : ((((((((arr_23 [i_2] [i_8 - 1] [i_8] [2] [i_8 + 2]) - 2147483647)) + 2147483647)) >> ((((arr_1 [i_2]) <= var_8))))));
                        }
                        for (int i_9 = 0; i_9 < 11;i_9 += 1)
                        {
                            var_20 -= (((arr_1 [i_3]) + (arr_1 [i_3])));
                            var_21 = (((arr_10 [i_2] [i_2 + 2] [i_5 + 1]) - (arr_10 [i_2 - 3] [i_2 + 1] [i_5 - 1])));
                            arr_29 [i_2] [i_3] [i_2] [i_5] [i_9] = ((-2561885387 ^ ((94 ? 15543 : (arr_7 [i_2])))));
                            var_22 = (min(var_22, (((!(((9944274402432574868 ? var_10 : (arr_22 [i_2 - 3] [i_3] [i_4] [i_5] [i_3])))))))));
                            var_23 = ((!(arr_6 [i_2 + 1] [i_2])));
                        }
                        var_24 = ((((((arr_27 [i_2] [i_5] [i_4] [i_5] [1] [8] [i_5 + 1]) * (arr_3 [i_2])))) ? (arr_24 [3] [i_2] [i_5 + 1] [i_5]) : (arr_2 [i_2])));
                    }
                    for (int i_10 = 1; i_10 < 10;i_10 += 1) /* same iter space */
                    {
                        var_25 = (~219);

                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            arr_34 [i_2] [i_2] [2] [i_10 - 1] [i_11] = (min((arr_3 [i_2 - 2]), ((((6298082246048127454 ? (arr_8 [i_3]) : (arr_23 [i_2] [i_3] [i_4] [i_10] [i_11])))))));
                            var_26 = (((((arr_17 [7] [i_11] [i_11] [i_11] [i_11] [i_10 - 1]) & (arr_17 [i_11] [i_11] [i_11] [i_11] [i_11] [i_10 - 1]))) * (((!(arr_17 [i_11] [i_11] [i_11] [i_10] [10] [i_10 - 1]))))));
                            var_27 *= (arr_2 [i_2]);
                        }
                    }
                    var_28 = ((+((15543 ? (((arr_2 [5]) ? (arr_31 [i_2 + 1] [i_2] [i_2] [i_2] [i_4] [i_4]) : (arr_24 [i_2] [4] [i_3] [i_4]))) : (arr_0 [i_2 - 3] [i_2 - 2])))));
                }
            }
        }
    }
    #pragma endscop
}
