/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148330
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_18 = (!695809283148582981);

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        var_19 = (min(var_19, ((max((((arr_11 [i_3] [17] [17]) | (arr_11 [i_0] [i_1] [10]))), (((-((var_11 ? var_13 : (arr_3 [1] [i_2] [i_3])))))))))));
                        arr_12 [i_0] |= ((min(((var_14 ? 0 : 163), (arr_7 [i_3])))));
                    }
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        var_20 = ((((((arr_9 [i_0] [i_1]) <= 24990))) & (arr_9 [1] [13])));
                        arr_16 [i_4] [i_4] [i_2] [i_2] [i_0] [i_0] = (arr_1 [i_0] [i_0]);
                    }
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        var_21 = (arr_14 [i_0] [i_0] [i_2] [i_0]);
                        arr_19 [i_2] [i_5] [i_5] [i_5] = (min(((((arr_14 [i_0] [4] [i_2] [i_5]) ^ (arr_14 [i_0] [i_1] [i_2] [i_5])))), (arr_14 [i_5] [i_0] [i_1] [i_0])));
                    }
                }
            }
        }
    }
    var_22 = ((max(-8530036230643412810, (((127 ? var_2 : 0))))) & 0);

    for (int i_6 = 0; i_6 < 12;i_6 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 12;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 12;i_8 += 1)
            {
                {
                    arr_29 [i_6] [i_6] [i_6] [i_6] = (((((var_16 ? (arr_6 [i_7]) : (235 >= var_12)))) ? (((((10 || (arr_24 [i_6] [i_7] [i_7])))))) : ((((((arr_0 [i_8]) & 235))) ? (arr_21 [i_8]) : -7713444853071627115))));
                    arr_30 [i_6] [i_6] [i_8] = ((((arr_2 [i_7]) ? (arr_2 [i_8]) : 123)));
                    arr_31 [i_6] [i_6] [i_6] = ((((((1 ? (arr_18 [i_6]) : (arr_11 [i_6] [i_7] [i_8])))) % (arr_24 [i_8] [i_7] [i_6]))));
                }
            }
        }
        var_23 = var_16;
    }
    for (int i_9 = 0; i_9 < 12;i_9 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 12;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 12;i_11 += 1)
            {
                {
                    var_24 &= (max(((+(((arr_1 [i_11] [i_11]) ? (arr_10 [i_9] [i_9] [i_10] [i_11]) : 2235978241)))), var_17));
                    arr_39 [i_10] [i_11] = ((2235978228 ? ((((116 - 114) - 2235978254))) : (min(((var_3 ? 2235978228 : (arr_6 [i_9]))), (arr_3 [1] [i_10] [10])))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_12 = 0; i_12 < 12;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 12;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 12;i_14 += 1)
                {
                    {
                        var_25 = (min(var_25, (arr_5 [i_9] [i_12])));
                        var_26 = ((min((arr_3 [i_9] [i_13] [i_14]), ((3068871585 ? (arr_33 [i_13]) : (arr_22 [i_9]))))));
                        var_27 = ((((min(var_14, (arr_9 [i_9] [i_9])))) <= (~2058989059)));
                        arr_47 [i_9] [i_9] [i_12] [i_12] [1] = ((((((((-112 ? 642882968771725706 : var_10))) ? 2823881170 : (arr_26 [i_9] [i_9] [i_9])))) ? ((-2129394634 % ((var_9 ? (arr_35 [i_14] [i_13] [9]) : 17803861104937825895)))) : ((((268435455 != ((46887 ? 268435454 : var_10))))))));
                    }
                }
            }
        }
        var_28 = (min(var_28, ((((~17803861104937825928) < ((min((min((arr_26 [i_9] [i_9] [i_9]), (arr_17 [i_9]))), ((((arr_15 [i_9] [18] [i_9] [i_9] [i_9]) ? (arr_23 [8]) : (arr_33 [i_9]))))))))))));
    }
    #pragma endscop
}
