/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14797
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_18 = (((arr_1 [i_1]) <= (((((arr_1 [i_1]) >= 41))))));
            var_19 *= (((arr_1 [i_0]) ? (var_5 | 10) : (arr_3 [i_0] [i_1] [i_1])));
        }
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            arr_6 [12] [i_0] [i_0] = (max((arr_0 [i_0]), (arr_5 [i_2])));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 18;i_4 += 1)
                {
                    {
                        var_20 ^= (((((max((arr_3 [7] [i_3] [i_4]), var_9)))) == ((~(arr_1 [i_0])))));
                        var_21 = (arr_2 [i_0] [i_2]);
                        var_22 = 120;
                    }
                }
            }
            var_23 = (max(var_23, 1));
        }
        for (int i_5 = 3; i_5 < 17;i_5 += 1)
        {
            arr_15 [15] [i_5] [15] = (arr_3 [i_0] [8] [i_5]);
            var_24 = (arr_5 [i_0]);
        }
        var_25 *= ((((max(var_12, (arr_14 [i_0] [i_0])))) ? (((((arr_9 [i_0]) || var_8)))) : ((((((arr_1 [i_0]) ? (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : var_5))) ? (!214) : (max(var_9, (arr_10 [1] [1])))))));
        var_26 = var_1;
        var_27 = (max(((((arr_3 [i_0] [i_0] [i_0]) == 54))), 417850705321147132));
    }
    for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
    {
        arr_20 [i_6] [i_6] = 417850705321147132;
        arr_21 [i_6] = (max(var_7, (max((arr_18 [i_6] [i_6]), (arr_11 [i_6] [6] [i_6] [i_6] [19] [i_6])))));
        var_28 = (((var_5 ? (arr_4 [i_6]) : 41)));
        arr_22 [i_6] = (max(((~(arr_1 [i_6]))), (((!(arr_1 [i_6]))))));
    }
    /* vectorizable */
    for (int i_7 = 2; i_7 < 9;i_7 += 1)
    {
        arr_25 [i_7] = 56;

        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            arr_28 [i_8] = (arr_13 [i_8]);
            arr_29 [i_7] [i_8] = var_7;
            arr_30 [i_7] [i_8] = (((!(arr_16 [i_7]))));
        }
        for (int i_9 = 0; i_9 < 12;i_9 += 1)
        {
            var_29 = (min(var_29, (((var_11 ? (arr_26 [i_7 + 2]) : (arr_17 [i_7 - 1] [i_7 - 2]))))));
            arr_34 [i_9] = (((arr_10 [i_7 + 2] [i_7 + 1]) + 43));
            arr_35 [i_9] [i_9] = ((var_11 | (arr_9 [i_7 + 3])));
        }
    }
    var_30 = (max(var_2, var_8));
    #pragma endscop
}
