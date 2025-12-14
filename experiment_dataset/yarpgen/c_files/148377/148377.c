/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148377
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_11 = ((!(((var_3 ? (((var_10 ? (arr_0 [6]) : 133))) : (var_2 + 7115244681742725555))))));
        var_12 = (max(var_12, ((min(((-(arr_0 [i_0]))), (arr_0 [10]))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_13 = (((var_9 * 1) * var_0));
        var_14 = (min(var_14, (((var_2 + (arr_0 [i_1]))))));
        var_15 = (arr_0 [i_1]);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 12;i_4 += 1)
            {
                {
                    var_16 = (var_1 >= var_9);
                    var_17 = (~((var_10 ? (arr_2 [i_3]) : var_8)));
                    arr_15 [i_2] [i_2] = (((1634566709 + 9566) & -1634566711));
                    var_18 = (min(var_18, (((var_4 >= (arr_3 [i_4 - 1]))))));
                }
            }
        }
        var_19 = ((((-1634566728 ? 6143 : 1557530635938659971))) - var_8);
        /* LoopNest 3 */
        for (int i_5 = 2; i_5 < 11;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    {
                        var_20 = ((var_9 == ((-(arr_24 [i_6] [i_5] [i_2])))));
                        var_21 = (arr_12 [i_2] [i_5 - 2] [i_5 - 2] [i_2]);
                        var_22 = (arr_2 [i_2]);
                    }
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 13;i_8 += 1) /* same iter space */
    {
        var_23 = ((-((min((arr_7 [i_8] [i_8] [i_8]), (arr_7 [i_8] [i_8] [2]))))));
        arr_30 [i_8] [i_8] = (min((((min(var_1, var_5)) * ((((var_3 == (arr_1 [i_8]))))))), ((min((60 > var_7), -70)))));
        var_24 = (min(var_24, (((!(((min(var_0, -66)))))))));
    }
    var_25 = var_4;
    var_26 = (var_0 ^ var_5);
    #pragma endscop
}
