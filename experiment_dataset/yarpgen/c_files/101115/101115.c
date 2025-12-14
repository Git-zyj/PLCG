/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101115
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_9 ? var_2 : -0));
    var_11 = (((((min(var_0, var_1))) ? var_7 : (!var_6))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 9;i_1 += 1) /* same iter space */
        {
            var_12 = (min(var_2, (((arr_2 [0]) ? -var_8 : var_7))));
            var_13 = 125;
            arr_4 [i_1 + 1] [i_1] [8] = (min(((max((arr_3 [3] [i_1 - 1]), var_5))), (max(var_1, var_5))));
        }
        for (int i_2 = 1; i_2 < 9;i_2 += 1) /* same iter space */
        {
            arr_9 [i_2] = (((((!var_1) | ((var_8 ? var_4 : -124)))) & (((!(-5229244055889435860 && var_9))))));

            for (int i_3 = 1; i_3 < 7;i_3 += 1)
            {
                var_14 |= (max((max((((!(arr_8 [i_0] [i_0])))), (max(var_5, (arr_6 [i_0]))))), ((((!(arr_10 [i_0] [i_0] [i_0])))))));
                var_15 += ((~((((max(0, var_1))) ? var_6 : (~var_0)))));
            }
        }
        arr_12 [i_0] [i_0] = 9344323863258550469;
        var_16 &= ((var_5 & (var_0 & 1)));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        var_17 = (var_0 <= var_3);
        var_18 = var_1;
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_19 = var_9;
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 3; i_8 < 20;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 19;i_9 += 1)
                        {
                            {
                                var_20 &= ((var_2 ? (max((((var_9 ^ (arr_20 [i_8] [i_5])))), (arr_22 [i_8 + 1] [i_8 + 1] [i_9 + 1] [9]))) : ((((((var_8 ? (arr_20 [i_7] [i_8]) : (arr_19 [i_5] [i_6] [1] [1])))) ? var_7 : (var_7 & var_7))))));
                                var_21 = (((((var_3 ? var_1 : var_2))) || (!58)));
                            }
                        }
                    }
                    arr_27 [i_5] = var_9;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 25;i_10 += 1)
    {
        /* LoopNest 2 */
        for (int i_11 = 1; i_11 < 1;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 25;i_12 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 25;i_13 += 1)
                    {
                        for (int i_14 = 4; i_14 < 24;i_14 += 1)
                        {
                            {
                                arr_40 [1] [i_13] [i_12] [i_12] [i_11] [i_10] [i_10] = (arr_28 [i_10]);
                                var_22 = ((-2702 ? -24597 : 0));
                                var_23 = (((arr_39 [i_11 - 1] [i_11 - 1] [i_12] [i_14 + 1] [i_14] [i_14 - 1] [i_14]) ? (arr_35 [i_11 - 1] [i_11 - 1] [22] [i_13] [i_14]) : 9102420210451001148));
                            }
                        }
                    }
                    var_24 &= (~var_9);
                }
            }
        }
        /* LoopNest 2 */
        for (int i_15 = 1; i_15 < 24;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 25;i_16 += 1)
            {
                {
                    arr_46 [1] [7] [i_16] = var_3;
                    var_25 = (arr_45 [i_10] [i_10] [i_15 - 1] [9]);
                }
            }
        }
    }
    var_26 = (max(63, 43839));
    var_27 = ((((max((max(var_9, 0)), (var_5 ^ var_0)))) ? ((1030720377 & (!var_2))) : var_2));
    #pragma endscop
}
