/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118436
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [i_0] [0] = ((((min((((arr_5 [i_0] [i_0] [20]) ? (arr_0 [i_0]) : (arr_4 [i_0] [i_0]))), var_4))) ? (max((-2147483647 - 1), 9713281)) : ((0 ? -25 : (arr_0 [i_1 - 2])))));
                arr_7 [i_0] = (((((((arr_2 [i_0] [i_0]) ? (-2147483647 - 1) : var_1)))) ? (max((var_11 && 2147483647), (min(31, (arr_5 [i_0] [i_0] [i_0]))))) : (min((arr_3 [i_0] [i_0] [12]), ((((arr_5 [i_0] [i_0] [i_0]) < (arr_5 [11] [11] [11]))))))));

                /* vectorizable */
                for (int i_2 = 2; i_2 < 22;i_2 += 1)
                {
                    arr_10 [i_0] [i_0] [i_0] [i_0] = var_12;
                    arr_11 [i_0] [i_0] [i_0] = -1717006038;
                    var_13 = (arr_3 [i_1] [i_1] [i_1]);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 23;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 22;i_4 += 1)
        {
            {
                arr_16 [i_4] = ((var_0 ? (arr_15 [i_4 + 2] [i_4 + 1]) : (arr_14 [i_4 + 2] [i_4 - 1] [i_4 - 1])));
                var_14 = (min(var_14, ((((arr_13 [i_3 - 1]) ? var_8 : (((((15 ^ (arr_13 [i_3])))) ? (arr_12 [i_3 - 1]) : (var_8 | 2147483647))))))));
                arr_17 [i_3 - 1] [i_4] [i_4 + 2] = -90;
            }
        }
    }

    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 20;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 18;i_7 += 1)
            {
                {
                    var_15 += (((((-2147483647 & -1963019319) <= 886361670))) & ((var_4 >> (1205284622 - 1205284621))));
                    var_16 = (arr_9 [i_7] [i_7 + 2] [i_7 + 3] [i_7 + 3]);
                }
            }
        }
        arr_27 [i_5] [i_5] = var_1;
        var_17 = (max((min(((2147483647 + (-127 - 1))), ((886361670 ^ (arr_0 [i_5]))))), (min(((min((arr_23 [i_5]), (arr_22 [i_5] [i_5])))), 127))));
        /* LoopNest 2 */
        for (int i_8 = 1; i_8 < 20;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 21;i_9 += 1)
            {
                {
                    arr_33 [i_9] [i_9] [i_9] = ((((var_10 ? var_12 : (min(var_7, -1848496721)))) > ((((((126 ? var_7 : var_6)) + 2147483647)) << (arr_31 [i_8 + 1] [i_9 + 1] [i_9 + 1] [i_9 - 1])))));
                    arr_34 [i_5] = -var_8;
                    var_18 = (((min(-14, (((arr_4 [i_8] [i_9]) ? var_2 : (arr_32 [i_8] [i_8] [i_8 - 1]))))) / ((-846276657 + (arr_28 [i_8 - 1] [21])))));
                }
            }
        }
        var_19 = (((((var_1 ? (((arr_15 [i_5] [i_5]) | (arr_13 [i_5]))) : (arr_5 [i_5] [i_5] [i_5])))) ? ((-128 | (arr_20 [i_5] [i_5]))) : (min(((var_6 ? (arr_31 [i_5] [i_5] [i_5] [i_5]) : var_9)), (var_6 & -37)))));
    }
    #pragma endscop
}
