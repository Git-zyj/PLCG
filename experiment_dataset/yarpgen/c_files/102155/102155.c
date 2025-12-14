/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102155
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_14 = ((!(arr_3 [i_0 + 2])));
        var_15 -= var_6;
        var_16 -= ((((((!(((6592404895890247466 ? 35184372088831 : (arr_3 [i_0])))))))) > (min((((arr_1 [i_0] [i_0]) / (arr_3 [i_0]))), 20))));
        var_17 += var_2;
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_8 [i_0] = -21;
                    var_18 = var_9;

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        var_19 = (min(var_19, -125));
                        var_20 = (((((arr_6 [i_0 + 1] [i_1 - 1]) & (arr_7 [i_1 + 3] [i_1 + 3] [i_2] [i_3])))) ? (((arr_7 [i_1 - 1] [i_1] [i_0] [i_3]) ? (arr_7 [i_1 + 2] [i_1] [i_2] [5]) : (arr_7 [i_1 + 1] [i_1] [i_1] [i_3]))) : ((~(arr_7 [i_1 + 2] [i_1] [i_1] [i_1 + 2]))));
                    }
                    for (int i_4 = 2; i_4 < 12;i_4 += 1) /* same iter space */
                    {
                        var_21 ^= (arr_12 [i_1] [i_1 + 3] [i_2] [i_4]);
                        var_22 ^= (((((((var_9 ? -20 : -125))) ? (arr_11 [i_0] [i_1 + 2] [i_4 - 1] [i_1 + 2]) : ((((arr_16 [i_2] [i_2] [i_2] [i_4]) <= (arr_15 [i_0])))))) != (max((var_13 & var_13), 20))));
                    }
                    /* vectorizable */
                    for (int i_5 = 2; i_5 < 12;i_5 += 1) /* same iter space */
                    {
                        var_23 = (min(var_23, (arr_7 [i_0] [i_0] [i_0 - 1] [i_1 + 2])));
                        var_24 ^= (((!(arr_15 [i_0]))) ? ((((arr_17 [i_0] [i_0] [i_5] [i_5] [i_5] [i_0]) & 20))) : var_7);
                    }
                    arr_19 [i_0] [i_1] [i_1] = (((((9005000231485440 ? (arr_0 [i_0]) : (arr_15 [i_0 + 1])))) ? ((((arr_1 [i_0] [i_1]) + (arr_7 [i_0 + 2] [i_2] [i_0 + 2] [i_1 + 3])))) : (((arr_10 [i_0 + 2] [i_1 + 3]) ? 2031785523 : (arr_10 [i_0 - 1] [i_1 + 1])))));
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 16;i_6 += 1)
    {
        var_25 -= ((var_7 || (arr_20 [i_6])));
        arr_22 [i_6] [i_6] = (max((max((arr_21 [i_6]), -8668996707735786791)), (arr_21 [i_6])));
        var_26 -= ((((var_3 / (arr_20 [i_6]))) | (arr_20 [i_6])));
    }
    /* LoopNest 3 */
    for (int i_7 = 1; i_7 < 9;i_7 += 1)
    {
        for (int i_8 = 2; i_8 < 10;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 11;i_9 += 1)
            {
                {
                    var_27 ^= (((arr_10 [i_9] [i_7]) & (((var_4 ^ ((125 >> (((arr_1 [i_8 - 2] [i_8]) - 5712246468384923112)))))))));
                    var_28 *= ((var_4 + (arr_27 [i_7] [i_7] [i_9])));
                }
            }
        }
    }
    var_29 += -21;
    #pragma endscop
}
