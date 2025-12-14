/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12270
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        var_20 += ((0 ? 4294967295 : 4294967295));
        arr_2 [i_0] = (0 && 0);
        arr_3 [i_0] = 4294967295;
    }
    for (int i_1 = 3; i_1 < 20;i_1 += 1)
    {
        var_21 = (max(((((max(4294967295, 11789093452031897439))) ? 57376 : (max(var_13, 57376)))), ((((max(6657650621677654177, var_16))) ? ((6657650621677654176 ? (arr_6 [i_1]) : 3681007314)) : (arr_6 [10])))));

        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            var_22 = var_3;
            var_23 = ((((8160 ? 3217666254509510543 : 255)) ^ (((var_18 ? (max(613959982, (arr_6 [i_2]))) : (arr_6 [i_1 + 1]))))));
        }
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 11;i_5 += 1)
            {
                for (int i_6 = 3; i_6 < 13;i_6 += 1)
                {
                    {
                        var_24 -= -3217666254509510543;
                        var_25 = 37433;
                    }
                }
            }
        }
        var_26 = (!0);
        var_27 = ((-((~(arr_9 [i_3])))));
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 13;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 14;i_8 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 3; i_9 < 12;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 12;i_10 += 1)
                        {
                            {
                                arr_34 [i_9] [i_9] [i_8] [i_9] [i_3] = var_7;
                                var_28 = var_2;
                            }
                        }
                    }
                    var_29 = (((max(28933, 11110818517941626473))) ? (((57375 ? (arr_32 [i_7 - 1] [i_7 - 1]) : ((-(arr_12 [i_3] [i_3] [i_3])))))) : (max(20309, 3681007314)));
                    var_30 = (arr_11 [i_7] [i_8]);
                }
            }
        }
    }
    var_31 = var_7;
    /* LoopNest 3 */
    for (int i_11 = 1; i_11 < 14;i_11 += 1)
    {
        for (int i_12 = 2; i_12 < 15;i_12 += 1)
        {
            for (int i_13 = 2; i_13 < 15;i_13 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_14 = 4; i_14 < 13;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 16;i_15 += 1)
                        {
                            {
                                var_32 = (max(var_32, var_4));
                                var_33 = ((~(arr_37 [i_12 - 2] [i_12])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 16;i_16 += 1)
                    {
                        for (int i_17 = 3; i_17 < 12;i_17 += 1)
                        {
                            {
                                var_34 = (((((var_17 ? (var_11 * var_12) : -119))) ? 0 : (((arr_44 [i_12 - 1] [i_11 + 2]) ? (var_0 / -636406616) : -220823975))));
                                arr_55 [i_11] [i_11] [i_11] [i_11] [15] = (((((max((arr_49 [i_11 - 1] [i_11] [i_11] [i_11]), (arr_7 [i_11] [i_11]))))) | var_16));
                                var_35 = (arr_51 [i_11] [0] [i_11] [15] [i_11] [i_11]);
                                arr_56 [i_12] [i_11] [5] [i_17] = (((arr_39 [i_11] [i_11] [i_11]) && ((((!var_8) ? ((((!(arr_47 [i_13] [i_13]))))) : 11789093452031897439)))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_18 = 2; i_18 < 15;i_18 += 1)
    {
        for (int i_19 = 0; i_19 < 1;i_19 += 1)
        {
            for (int i_20 = 4; i_20 < 15;i_20 += 1)
            {
                {
                    var_36 = (max(var_36, -119));
                    var_37 = (arr_6 [i_18]);
                    var_38 -= (max(2147483647, (arr_7 [i_20 - 1] [i_18])));
                    arr_66 [i_18 + 1] [7] [13] = ((((var_17 && (var_17 || var_15))) ? ((var_12 ? (arr_65 [i_20 - 3] [i_19] [1] [i_19]) : 3681007314)) : var_19));
                    var_39 = -3217666254509510543;
                }
            }
        }
    }
    #pragma endscop
}
