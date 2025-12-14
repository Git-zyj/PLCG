/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16584
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_17 = (max(var_17, var_4));
                var_18 -= ((((((((var_4 ? var_4 : var_7))) ? (arr_3 [i_0] [i_1]) : ((var_15 ? 3651087488019702292 : var_5))))) ? (max(var_2, (max(var_0, (arr_4 [14]))))) : -var_13));
                var_19 -= (((arr_4 [i_0]) ? (((var_16 ? var_16 : var_15))) : var_9));
            }
        }
    }

    for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
    {
        var_20 += 0;
        var_21 = (arr_4 [i_2]);
        arr_10 [i_2] [i_2] = (((var_12 > (var_11 & var_13))));
        var_22 = (max(((max(5149, (((arr_0 [i_2]) | var_12))))), (((var_16 == var_3) ? var_14 : (arr_8 [i_2])))));
        arr_11 [i_2] = var_10;
    }
    for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
    {

        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            arr_17 [1] [1] [i_4] = var_6;
            var_23 ^= (max(((1 ? var_13 : var_7)), 0));
        }
        for (int i_5 = 1; i_5 < 12;i_5 += 1)
        {
            arr_22 [9] [i_5] = ((var_3 ? ((~((~(arr_19 [i_5] [i_3] [i_5]))))) : var_5));

            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                var_24 = ((~255) ? var_6 : 1);
                var_25 ^= var_16;

                /* vectorizable */
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    arr_27 [i_7] [i_5] [i_3] = var_3;
                    var_26 += (((((var_10 ? var_3 : var_2))) ? (arr_21 [2]) : var_1));
                    var_27 = var_0;
                }
                var_28 = (max(var_9, var_10));
            }
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {

                for (int i_9 = 1; i_9 < 12;i_9 += 1)
                {

                    for (int i_10 = 1; i_10 < 1;i_10 += 1)
                    {
                        var_29 ^= ((~((var_4 ? 1 : var_13))));
                        arr_38 [i_3] [i_5] [i_8] [i_8] [i_10] [i_5] = var_1;
                        var_30 = (max(var_30, var_14));
                    }
                    var_31 = var_8;
                }
                for (int i_11 = 0; i_11 < 13;i_11 += 1)
                {
                    var_32 = var_12;
                    arr_42 [0] |= max((((((arr_39 [4] [i_5 - 1] [i_8] [i_11]) ? var_16 : var_8)) & var_15)), var_3);
                    var_33 += -1188037625;
                    var_34 = (min(var_34, var_14));
                }
                var_35 = (max((max(((max(var_8, var_5))), ((-(arr_16 [i_3] [2]))))), ((max(var_13, var_6)))));
                arr_43 [i_3] [i_5] = ((var_7 ? var_9 : ((~(arr_8 [1])))));
            }
            arr_44 [i_5] = ((((max((arr_12 [i_5 - 1] [i_5 - 1]), var_5))) && var_8));
        }
        for (int i_12 = 0; i_12 < 13;i_12 += 1)
        {
            var_36 = ((35098 | (max(var_10, 0))));
            var_37 = ((var_8 ? (arr_18 [i_3] [i_12]) : var_2));
            var_38 = (min(var_38, (arr_21 [4])));
            var_39 *= ((((arr_16 [i_3] [i_12]) ? var_10 : (((max(var_12, var_8)))))));
        }
        for (int i_13 = 0; i_13 < 1;i_13 += 1)
        {
            var_40 = var_12;
            arr_51 [i_3] [i_3] [i_13] = var_2;
            var_41 = ((!(((var_8 ? var_3 : (arr_6 [i_3]))))));
            var_42 += ((~((~((~(arr_35 [i_3] [1] [i_3] [i_13] [6] [i_13])))))));
            var_43 = (((-(max(var_7, var_16)))));
        }
        arr_52 [i_3] [i_3] = (max(var_10, (((var_8 ? var_14 : var_8)))));
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 13;i_14 += 1)
        {
            for (int i_15 = 1; i_15 < 10;i_15 += 1)
            {
                {
                    var_44 = ((((arr_4 [i_15 + 3]) == (arr_4 [i_15 + 3]))));
                    arr_58 [i_3] [i_15] [i_15] = (arr_47 [i_15] [i_15]);
                    arr_59 [i_3] [i_15] [i_15] = var_6;
                }
            }
        }
    }
    #pragma endscop
}
