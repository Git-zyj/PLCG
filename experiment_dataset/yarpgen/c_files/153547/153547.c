/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153547
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, (((((((((-8399415105643055576 + 9223372036854775807) >> (var_9 + 14057))) * var_2))) ? ((((((var_4 ? var_4 : 7860))) ? 8310 : ((var_9 ? var_0 : var_10))))) : var_7)))));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            arr_5 [i_0] [i_0] [i_1] = var_11;
            arr_6 [i_0] [i_0] = (arr_4 [i_0 + 1] [i_1]);
            var_13 = (min(var_13, (((var_1 ? (arr_0 [i_0 - 1] [i_0 - 1]) : (arr_0 [i_0 - 1] [i_1]))))));
            var_14 = var_6;
            var_15 = (min(var_15, ((((((7862 ? var_1 : -3053029340546334584))) ? (arr_0 [7] [i_1]) : ((-(arr_3 [i_0] [i_1] [i_1]))))))));
        }
        for (int i_2 = 2; i_2 < 16;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 15;i_5 += 1)
                    {
                        {
                            arr_17 [i_5] [10] [i_3] [8] [i_0] = (57674 % 7860);
                            arr_18 [i_0] [i_2] [i_0] [i_4 + 3] [i_5] [i_2] [i_2] = (7862 - var_7);
                        }
                    }
                }
                var_16 = (arr_8 [i_0 + 1] [i_2 - 2]);
            }
            arr_19 [i_0 - 1] [i_2 - 2] [i_2 - 2] = var_8;
        }
        var_17 = var_4;

        for (int i_6 = 1; i_6 < 13;i_6 += 1)
        {
            var_18 = (-10969 % (arr_9 [i_0 - 3] [i_6 - 1] [i_6 + 3]));
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                for (int i_8 = 3; i_8 < 16;i_8 += 1)
                {
                    {
                        arr_27 [4] [i_0] [i_0] [i_7] [i_8] = (((arr_15 [i_8 - 2] [i_8 - 2] [i_8 - 3]) ? (arr_15 [i_8 - 1] [i_8 - 1] [i_8 - 1]) : (arr_15 [i_8 - 1] [i_8 + 1] [i_8 + 1])));
                        var_19 = ((7860 & (arr_14 [i_8 - 2] [i_8 - 3])));
                    }
                }
            }
        }
    }
    var_20 ^= ((var_6 << (((min(var_5, var_5)) - 175))));
    /* LoopNest 3 */
    for (int i_9 = 3; i_9 < 17;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 18;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 18;i_11 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_12 = 2; i_12 < 17;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 18;i_13 += 1)
                        {
                            {
                                var_21 *= (-(((((var_3 ? var_1 : -29554))) ? var_2 : ((var_9 - (arr_37 [16] [i_11] [i_12] [i_11]))))));
                                var_22 = (((arr_32 [i_9 - 3] [i_12 + 1] [i_11]) ? ((var_6 ? 57666 : (arr_28 [i_9]))) : var_3));
                                arr_41 [i_9] [i_10] [i_11] [i_12] [i_12] [i_13] [i_12] = ((57697 | (min(57673, var_6))));
                                var_23 = (max((max((108086391056891904 || 57697), 677658149485832521)), 57670));
                            }
                        }
                    }
                    arr_42 [i_9] [i_10] [i_9] = ((3708 ? (((((!var_2) < (max(var_2, (arr_40 [i_9] [i_9] [i_10] [i_9] [i_11]))))))) : 0));
                }
            }
        }
    }
    #pragma endscop
}
