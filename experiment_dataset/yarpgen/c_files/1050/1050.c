/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1050
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_5;
    var_17 = -21;
    var_18 -= -1;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_19 = (min(var_19, 1798095991644867895));
        arr_2 [i_0] [i_0] = var_8;
        arr_3 [i_0] [i_0] = var_15;
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        arr_7 [i_1] = (1 * ((var_13 * ((var_9 ? (arr_6 [6]) : -1)))));
        var_20 = (max(var_20, (((var_4 % ((((max((arr_0 [i_1]), (arr_4 [i_1])))) - var_1)))))));
    }
    for (int i_2 = 1; i_2 < 9;i_2 += 1)
    {

        /* vectorizable */
        for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    {
                        arr_17 [10] [10] [i_2] = (((arr_10 [i_2 + 4]) + 4367659518292679979));
                        var_21 = var_12;
                    }
                }
            }
            arr_18 [i_3] [i_2] [5] = var_8;
        }
        for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
        {
            var_22 = ((4294967295 ? 1048320 : 12));
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 13;i_8 += 1)
                {
                    for (int i_9 = 3; i_9 < 10;i_9 += 1)
                    {
                        {
                            var_23 = var_1;
                            var_24 = (((-1 ^ var_12) ? (arr_26 [i_2] [i_6] [i_7]) : var_9));
                            arr_29 [i_9 + 1] [i_8] [i_7] [1] [i_8] [i_2] = var_8;
                        }
                    }
                }
            }
            var_25 = (max(var_25, var_8));
        }
        var_26 = min(((min(67192991, 3679716919))), (((arr_12 [i_2] [i_2] [i_2]) - ((var_6 ? (arr_28 [i_2] [i_2] [1] [i_2] [i_2] [i_2] [6]) : (arr_15 [i_2] [1] [i_2] [i_2 + 4] [1]))))));
    }
    for (int i_10 = 3; i_10 < 19;i_10 += 1)
    {

        for (int i_11 = 1; i_11 < 19;i_11 += 1)
        {
            /* LoopNest 3 */
            for (int i_12 = 0; i_12 < 21;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 21;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 1;i_14 += 1)
                    {
                        {
                            var_27 = var_13;
                            arr_43 [i_12] [i_12] [i_12] [i_12] [i_14] = var_4;
                        }
                    }
                }
            }
            var_28 = (min(var_28, var_13));
            var_29 = (max(var_29, ((min((((arr_37 [i_10] [i_10] [i_10] [i_10] [i_11 + 1] [11]) ? var_9 : (arr_39 [i_10] [18] [i_10] [18] [i_10 + 1]))), 5406657897102383921)))));
        }
        /* vectorizable */
        for (int i_15 = 0; i_15 < 21;i_15 += 1)
        {
            var_30 = (((arr_46 [i_10] [i_10 + 1]) == var_12));
            var_31 = var_6;
        }
        for (int i_16 = 1; i_16 < 20;i_16 += 1)
        {
            var_32 = (max(var_32, var_4));
            arr_50 [i_16] = (((max(var_5, ((1350012366 ? 196514262 : -9004053657314789174)))) / 2099224848));
        }
        /* vectorizable */
        for (int i_17 = 0; i_17 < 21;i_17 += 1)
        {
            var_33 = var_11;
            var_34 = 125;
        }
        arr_55 [7] [11] = 2;
        var_35 = var_5;
        var_36 = -5406657897102383930;
    }
    #pragma endscop
}
