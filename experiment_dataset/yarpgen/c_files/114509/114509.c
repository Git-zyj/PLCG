/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114509
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((-(!1986)));
        var_11 = (max(-1, (max(((0 ? -1 : var_9)), -1))));
        var_12 = ((~(~var_6)));
        arr_4 [i_0] = (((max((~3483042969), 1)) - var_4));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            arr_7 [i_0] = (((arr_5 [i_1] [i_0] [i_0]) ? ((~(arr_2 [15]))) : (arr_2 [i_0])));
            arr_8 [i_0] [i_0] [4] = 53256;
            var_13 = var_7;
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        arr_13 [4] [i_1] [i_1] [5] = 1;
                        arr_14 [i_3] [i_2] [i_2] [i_1] [i_0] |= ((!(arr_6 [i_0] [i_0] [i_0])));
                        var_14 = (--1990);
                        var_15 = 1;
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        arr_18 [i_4] = ((+(min((arr_17 [i_4] [i_4]), (((-(arr_6 [i_4] [i_4] [22]))))))));
        arr_19 [i_4] = ((((((60 ? (arr_11 [i_4] [i_4] [i_4]) : -16))) ? var_0 : ((min(-12, (arr_0 [i_4])))))) == ((max((arr_2 [i_4]), (arr_5 [i_4] [i_4] [i_4])))));
        var_16 = 1;
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_17 = (max(var_17, var_5));
        arr_23 [i_5] = (!1);
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                {
                    arr_29 [i_6] [i_6] = ((!((!(arr_26 [18] [i_7])))));
                    var_18 = (arr_1 [i_5]);

                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        arr_34 [i_5] [i_7] [14] [i_8] [i_7] [i_7] = (min((((arr_12 [i_5] [i_8] [i_8]) ? (arr_12 [i_5] [i_6] [i_7]) : var_7)), ((max((arr_21 [i_5] [i_5]), (arr_21 [i_7] [i_7]))))));
                        arr_35 [i_5] [i_5] [i_5] [3] = arr_10 [i_8] [i_7] [i_6];
                    }
                    for (int i_9 = 0; i_9 < 23;i_9 += 1)
                    {
                        arr_38 [i_5] [i_6] [i_6] [i_6] [i_7] [i_9] = (min((arr_37 [i_5] [i_5] [i_7] [i_7]), (min((((!(arr_5 [3] [i_7] [i_9])))), (((arr_37 [i_9] [11] [16] [11]) ? 14887 : 15))))));
                        arr_39 [11] [11] [11] [i_9] = ((!((min((arr_32 [i_5] [i_5] [i_7] [i_5]), -var_9)))));
                    }
                    var_19 = arr_20 [i_5];
                }
            }
        }
        arr_40 [i_5] = (arr_26 [i_5] [4]);
    }
    var_20 = (max(var_20, var_2));
    #pragma endscop
}
