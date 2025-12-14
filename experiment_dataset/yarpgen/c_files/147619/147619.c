/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147619
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_15, ((~(var_11 & var_17)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_19 = (min(var_19, (((min(((var_16 & (arr_4 [i_1])), var_9)))))));
                var_20 = (arr_3 [i_0] [i_1]);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_4] = (arr_4 [i_1]);
                                var_21 = (((((((arr_12 [i_0] [i_2] [i_2] [i_3] [i_4] [i_4]) ? (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : var_11))) ? ((var_11 ? (arr_4 [i_1]) : (arr_3 [i_0] [i_1]))) : (var_17 != var_9))));
                            }
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    var_22 = (max((max((arr_9 [i_0]), (arr_16 [i_5] [i_1] [i_5] [i_0]))), ((-(arr_9 [i_5])))));
                    var_23 = (max(var_23, var_12));
                    var_24 = (min(var_24, (((((((arr_13 [i_0] [i_5]) ? (arr_6 [i_0] [i_1] [i_1] [i_0]) : (arr_10 [i_0] [i_1] [i_5] [i_1] [i_5])))) ? var_0 : (((((!(arr_13 [i_0] [i_1])))))))))));
                }
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    var_25 = var_9;
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                var_26 *= (arr_7 [1] [i_1] [i_7] [i_8]);
                                var_27 = ((((((arr_21 [i_0]) ? (arr_3 [i_0] [i_0]) : (arr_3 [i_0] [i_0])))) ? (arr_27 [i_0] [i_1] [i_1] [i_6] [i_6] [i_0] [i_8]) : (((min(var_13, (arr_5 [i_7] [i_1] [i_1])))))));
                                var_28 = var_7;
                            }
                        }
                    }
                }
            }
        }
    }
    var_29 = ((var_1 ^ (min((min(var_6, var_6)), ((var_7 ? var_7 : var_1))))));
    #pragma endscop
}
