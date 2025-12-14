/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143479
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(524287, ((var_0 ? var_3 : (((max(1, var_0))))))));
    var_15 *= 2813736108;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        var_16 = var_1;
        var_17 |= var_5;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_14 [7] [i_0] [i_2] [i_0] [10] [i_0] = ((7 ? (arr_13 [i_4] [i_3] [i_2] [i_1] [i_0]) : (arr_1 [i_3])));
                                var_18 = (arr_11 [i_0]);
                            }
                        }
                    }
                    var_19 = (max(var_19, 40));
                    var_20 = (arr_0 [i_0] [i_0]);
                    var_21 = var_11;
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 25;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 25;i_8 += 1)
                {
                    {
                        arr_26 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = var_2;
                        arr_27 [i_5] [i_5] [i_5] [i_5] = (max(((max(((min(7, -1))), 1533788371))), (min(1, var_12))));
                        var_22 -= (arr_0 [i_5] [i_6]);
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 25;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 25;i_10 += 1)
            {
                {

                    for (int i_11 = 2; i_11 < 24;i_11 += 1)
                    {
                        var_23 = 4294443009;
                        var_24 |= var_9;
                        var_25 = var_3;
                    }
                    var_26 = min(var_3, 0);
                    var_27 |= (max(((((var_3 ? var_10 : var_3)))), (max((arr_22 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]), (min(var_5, (arr_21 [i_5])))))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 25;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 25;i_13 += 1)
            {
                {
                    var_28 = (max(var_28, ((((52617 ? (min(2139095040, 0)) : 1))))));
                    arr_42 [i_13] = var_12;
                }
            }
        }
        var_29 = (max(var_29, var_9));
    }
    for (int i_14 = 0; i_14 < 25;i_14 += 1) /* same iter space */
    {
        arr_46 [i_14] [i_14] = (max((max(7, 524287)), ((min(1, 1)))));
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 25;i_15 += 1)
        {
            for (int i_16 = 1; i_16 < 24;i_16 += 1)
            {
                {

                    for (int i_17 = 0; i_17 < 25;i_17 += 1)
                    {
                        var_30 = (max(var_30, -var_7));
                        arr_54 [i_14] = min(4803903894749067769, 7095920024251661888);
                        arr_55 [i_17] [i_14] [i_14] [i_14] = max((min((arr_21 [i_14]), -4803903894749067770)), ((min(((min(1, 127))), var_2))));
                        var_31 = var_8;
                    }
                    var_32 = (max(((max(0, 18543))), (max(0, (min(1, 1143914305352105984))))));
                    var_33 = (max(59699, 876377634));
                }
            }
        }
        var_34 = (~(max(-var_0, -185562104)));
        arr_56 [i_14] = 0;
    }
    /* vectorizable */
    for (int i_18 = 0; i_18 < 22;i_18 += 1)
    {
        var_35 = (!2678256358);
        var_36 = ((var_1 ? (arr_10 [i_18] [i_18] [i_18] [i_18]) : (arr_10 [i_18] [i_18] [i_18] [i_18])));
        var_37 = 4294443014;
        var_38 = (max(var_38, (arr_4 [i_18])));
    }
    var_39 = (max((((~(~12209)))), 1495059500));
    var_40 = (min(var_40, 11589031040142901921));
    #pragma endscop
}
