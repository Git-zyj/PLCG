/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127741
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((-((max(56, (var_1 >= var_15))))));

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        var_17 = 1;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    var_18 = ((!(((4402928888145089751 ? var_4 : -1)))));
                    var_19 = (((var_4 ? (arr_2 [i_0 - 2]) : (arr_2 [i_0 - 2]))));
                    var_20 = (((~((4294967295 ? 1 : (arr_5 [i_1]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_21 = ((((arr_10 [i_3] [i_2] [i_2] [i_2 + 1] [i_2] [i_2]) - (arr_10 [5] [4] [i_3] [i_2 + 1] [3] [i_0]))));
                                var_22 = (((var_14 / (arr_11 [10] [i_0 - 1] [i_2 + 2] [10] [i_3] [i_3]))));
                                var_23 = ((-17 * (arr_4 [i_1] [i_0])));
                                var_24 = arr_6 [i_0] [i_1] [i_1];
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_5 = 2; i_5 < 17;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 19;i_7 += 1)
                {
                    {
                        var_25 = (((!16) == (max(var_10, 2452649926))));
                        var_26 = 238;

                        for (int i_8 = 0; i_8 < 20;i_8 += 1)
                        {
                            var_27 = (-(max((arr_15 [i_7 - 1] [i_6] [i_6]), ((7 ? (arr_6 [i_0] [i_5] [i_6]) : (arr_8 [i_7] [i_5] [i_0]))))));
                            var_28 = -4402928888145089752;
                            var_29 = (max(((var_1 ? (arr_15 [i_0 - 3] [i_5 + 1] [i_6]) : (((-1 ? -4402928888145089752 : var_3))))), ((max(((max(-14603, 127))), var_5)))));
                        }
                        for (int i_9 = 1; i_9 < 1;i_9 += 1)
                        {
                            var_30 = (min((arr_11 [i_0] [i_0] [i_0] [i_7] [i_9] [i_6]), (arr_15 [i_0 - 2] [i_7 - 1] [i_6])));
                            var_31 = (((((-30938 ^ (arr_8 [i_9 - 1] [i_6] [9])))) ? ((-((max(var_6, var_10))))) : ((~((var_1 + (arr_26 [i_0] [i_5 + 3] [i_6] [i_7] [i_9])))))));
                        }
                        var_32 = (max((((var_2 << (((arr_5 [i_0 - 3]) + 4298116634693831781))))), (arr_5 [i_0 - 2])));
                        var_33 = var_6;
                    }
                }
            }
        }
        var_34 = (max(4402928888145089754, ((max(-1, (arr_18 [i_0 - 1] [i_0 - 2]))))));
    }
    for (int i_10 = 3; i_10 < 10;i_10 += 1) /* same iter space */
    {
        var_35 = 50;
        var_36 = ((~(max((max(var_11, (arr_0 [i_10]))), (((~(arr_16 [i_10] [i_10 + 1] [i_10]))))))));
    }
    for (int i_11 = 3; i_11 < 10;i_11 += 1) /* same iter space */
    {
        var_37 = (((var_3 ? (max((arr_22 [i_11] [i_11] [i_11] [i_11] [i_11 + 1]), 9223372036854775807)) : -var_12)));
        var_38 = (max((((1 ? (arr_8 [i_11] [i_11 - 3] [i_11 - 1]) : 1))), (((arr_29 [i_11] [i_11]) | (((arr_17 [i_11]) ? var_14 : (arr_5 [i_11 - 2])))))));
    }
    var_39 = var_15;
    #pragma endscop
}
