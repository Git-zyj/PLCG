/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123470
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123470 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123470
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 1;

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = var_0;
        var_17 ^= (max(var_6, -101));
        var_18 = (((((((max((arr_1 [i_0]), var_12))) ? (max((arr_1 [i_0]), -113)) : (120 | 0)))) ? (~var_2) : (min((max(127, var_8)), (arr_0 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_19 = var_3;
        var_20 = (max((((!((max((arr_3 [i_1]), (arr_1 [i_1]))))))), var_1));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_21 = (((arr_5 [i_2]) ^ ((0 ? (arr_5 [i_2]) : var_3))));

        for (int i_3 = 1; i_3 < 13;i_3 += 1)
        {
            var_22 = var_3;
            var_23 = (max(var_23, (!var_4)));
            var_24 = (arr_8 [i_2] [i_2]);
        }
        for (int i_4 = 3; i_4 < 13;i_4 += 1)
        {
            var_25 ^= (arr_8 [i_4] [i_4 - 1]);
            var_26 = (min(var_26, (((var_7 ? -116 : ((1709916817 / (arr_6 [i_4 - 1]))))))));
            var_27 = ((~(arr_10 [i_4] [i_4 - 3] [i_4 + 1])));
            var_28 = 152;
        }
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            var_29 = ((((!(arr_0 [i_5]))) ? (((!(arr_12 [i_2] [i_5])))) : (!var_3)));
            var_30 ^= ((-(arr_10 [i_5] [i_2] [i_2])));
        }
        arr_15 [i_2] = ((var_1 ? (arr_9 [i_2] [i_2] [i_2]) : (arr_9 [i_2] [i_2] [i_2])));
    }
    for (int i_6 = 0; i_6 < 10;i_6 += 1)
    {
        var_31 = (max((arr_3 [i_6]), ((((((var_4 ? var_6 : var_13))) || var_9)))));
        /* LoopNest 3 */
        for (int i_7 = 4; i_7 < 6;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 10;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 9;i_9 += 1)
                {
                    {
                        var_32 = ((max(var_11, (((arr_16 [i_6]) ? (arr_12 [i_6] [i_6]) : 1)))) ^ ((((max(var_0, (arr_20 [i_6])))) ? (((arr_0 [i_9]) ? var_10 : var_10)) : (max((arr_16 [i_6]), 2052629553)))));
                        var_33 = (-((max((arr_12 [i_7 - 3] [i_7 + 3]), (arr_12 [i_7 + 4] [i_7 + 1])))));
                        var_34 = (min(var_34, ((min(var_5, (((((!(arr_14 [i_6] [i_6]))) || (((var_0 ? (arr_17 [i_9] [i_6]) : (arr_24 [i_6] [i_7 - 2] [i_6] [i_6]))))))))))));
                        var_35 = ((((!(arr_26 [i_9 - 1] [i_8]))) ? (arr_26 [i_6] [i_7 + 1]) : (arr_26 [i_9 - 1] [i_9 - 1])));
                    }
                }
            }
        }
        var_36 = (((((+(((arr_13 [i_6] [i_6]) ^ var_12))))) ? (max(-var_8, ((max(-101, var_9))))) : (max(var_8, (((-96 <= (arr_20 [i_6]))))))));
    }
    var_37 = (min(var_37, ((max(var_2, -12)))));
    #pragma endscop
}
