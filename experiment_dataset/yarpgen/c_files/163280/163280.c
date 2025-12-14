/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163280
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_11 = (min((((((~(arr_5 [i_0] [i_1] [i_0])))) ? (arr_4 [i_0] [i_2]) : 1)), ((~((min(27, var_3)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_2] = (min((arr_2 [i_2]), ((-(!1)))));
                                arr_15 [i_0] [i_0] [i_0] [2] [i_0] [i_0] [i_2] = (min((((!(arr_7 [i_0] [i_2])))), ((1 ? ((var_8 ? var_4 : var_1)) : (arr_6 [i_0] [i_2] [i_0])))));
                            }
                        }
                    }
                    arr_16 [i_2] = (arr_12 [i_0] [i_1] [i_2] [i_1] [i_1]);
                    var_12 = 4180;
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 12;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    var_13 = (min(var_13, ((min(var_3, ((var_3 ? (arr_1 [i_6 + 2]) : (arr_3 [12] [i_6] [i_7]))))))));
                    var_14 *= var_0;
                }
            }
        }
    }
    var_15 = (min(var_3, var_5));
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 17;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 17;i_9 += 1)
        {
            {
                arr_32 [i_9] = (min((arr_26 [i_9]), (arr_5 [i_8] [7] [7])));
                var_16 = (min((((arr_12 [i_8] [11] [i_8] [i_9] [i_9]) ? var_4 : (arr_12 [i_8] [i_9] [i_9] [5] [i_9]))), ((max((arr_12 [i_8] [i_9] [i_9] [i_9] [i_8]), (arr_12 [i_8] [i_9] [i_9] [i_9] [i_8]))))));
                /* LoopNest 2 */
                for (int i_10 = 1; i_10 < 14;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        {
                            arr_37 [i_9] [i_9] [i_10] [i_9] = var_2;
                            arr_38 [i_9] [i_9] [i_9] [i_11] = ((!(((1 ? 1 : 1)))));
                            arr_39 [i_11] [i_9] [i_8] [i_8] [i_9] [i_8] = ((var_9 ? 1 : 4294967295));
                            var_17 = (max(var_17, (((((max((arr_10 [i_8] [i_9] [i_10] [i_9] [i_10 + 1]), (arr_10 [i_8] [i_9] [12] [i_11] [i_10 + 2])))) << (arr_3 [i_8] [i_8] [i_8]))))));

                            for (int i_12 = 0; i_12 < 1;i_12 += 1)
                            {
                                arr_44 [i_8] [1] [i_9] [i_10] [i_11] [i_12] = var_9;
                                var_18 = ((!(((var_0 ? var_10 : (arr_25 [i_8] [i_9]))))));
                                var_19 &= ((!(((!var_4) && (((var_6 ? var_6 : var_1)))))));
                                var_20 = (~var_3);
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = (max(var_21, ((1 ? var_7 : 0))));
    #pragma endscop
}
