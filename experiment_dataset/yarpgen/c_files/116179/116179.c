/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116179
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_14 = (max((min((~var_7), ((min((arr_1 [i_0]), 90))))), (((((-24579 ? var_12 : var_2))) ? ((var_0 ? 8577 : -24576)) : -1214264990))));
        var_15 = ((((-((810803927 ? 9469 : var_12))))) ? (max((max(810803915, -24580)), 0)) : 1);
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_16 = -0;
        /* LoopNest 2 */
        for (int i_2 = 4; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                {
                    var_17 = (max((((881179254 ? (!-20725) : 0))), (((!5527901502797962182) ? ((max(var_1, 1791566812))) : -810803930))));
                    var_18 = (max((max(var_5, 1109175163)), 24579));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            {
                                var_19 = var_5;
                                var_20 = (((~var_5) && ((((((22064 ? var_9 : var_3))) ? (arr_11 [i_2] [5] [i_3] [i_4]) : 0)))));
                            }
                        }
                    }
                    arr_17 [i_1] [i_1] [i_1] [i_1] = var_10;
                }
            }
        }
        arr_18 [i_1] [i_1] = 206;
        arr_19 [i_1] [i_1] = (arr_9 [i_1] [4] [i_1]);
    }
    var_21 = var_8;
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 23;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            {
                var_22 = (min((((((!(arr_21 [i_7]))) ? ((max(-431, 65))) : ((max(46630, -12)))))), ((-(min(3413788041, var_9))))));
                arr_24 [i_6] [i_6] [i_7] = ((~((1 ? 309891403 : 1))));
                var_23 -= var_0;
                var_24 = ((+((var_12 ? (((var_13 ? (arr_20 [i_6]) : var_3))) : (((arr_22 [i_7] [i_6] [i_7]) & 613215805))))));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 23;i_8 += 1)
                {
                    for (int i_9 = 3; i_9 < 21;i_9 += 1)
                    {
                        {
                            arr_30 [i_7] [i_7] [i_7] [i_7] = ((1 ? (max(1, (min(4249566923, 9578697742048739392)))) : 9578697742048739365));

                            for (int i_10 = 0; i_10 < 23;i_10 += 1)
                            {
                                var_25 = (min(var_25, (!var_13)));
                                var_26 = (max(var_26, ((max(var_9, var_12)))));
                                var_27 = (max(var_27, 1));
                            }
                            for (int i_11 = 0; i_11 < 23;i_11 += 1)
                            {
                                arr_36 [i_6] [11] [i_7] = 1;
                                arr_37 [i_6] [i_7] [i_8] [i_6] [i_8] [i_9] [6] = ((((max((var_4 >> 0), ((max(var_8, 900382806495880783)))))) ? (((!((min(4249566923, var_9)))))) : var_8));
                                arr_38 [i_11] [14] [i_11] [i_9 + 1] [i_9 + 1] [4] [i_7] = 28;
                            }
                            for (int i_12 = 0; i_12 < 23;i_12 += 1) /* same iter space */
                            {
                                var_28 = ((((max(3185792129, (max((arr_39 [i_6] [i_7] [i_8] [i_9] [i_12]), 1109175161))))) ? ((((var_9 ? 98 : var_4)) - (var_5 ^ var_7))) : (var_2 != var_2)));
                                var_29 += (((1 ? 1 : (arr_33 [i_7] [i_9 - 2] [i_7] [i_12] [i_12]))));
                                arr_41 [8] [i_7] [i_8] [i_7] = (!1000633411);
                                arr_42 [i_6] &= (max((-73 != -10), ((((var_11 ? var_12 : (arr_33 [i_8] [i_12] [i_8] [i_12] [12]))) > (min(33554431, 3985075893))))));
                                arr_43 [i_6] [i_7] = (((arr_27 [i_7] [i_7] [i_7] [i_9 - 3]) ? (!-94) : 1109175156));
                            }
                            for (int i_13 = 0; i_13 < 23;i_13 += 1) /* same iter space */
                            {
                                arr_46 [i_7] [i_7] [i_7] [i_7] [i_7] = ((max(var_9, var_8)));
                                arr_47 [i_7] [i_8] [12] [i_8] [10] [i_8] [i_8] = var_9;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
