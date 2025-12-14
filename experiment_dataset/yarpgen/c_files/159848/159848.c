/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159848
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_11 = (min(var_11, (((((((((arr_14 [i_0] [i_0] [i_1 + 1] [11] [i_3] [i_0]) ^ (-127 - 1))) >= (!1)))) ^ (arr_14 [i_0] [i_2] [i_2] [i_3] [i_0 - 2] [i_1]))))));
                            var_12 = ((((((arr_9 [i_1 + 1] [i_0] [i_1 - 2]) ? (arr_9 [i_1 - 2] [i_0] [i_1 - 1]) : var_0))) ? ((((max(1, 111))) + (((236 > (arr_4 [i_0 - 1] [i_0 - 1] [i_2])))))) : ((-28 - ((min(var_0, var_0)))))));
                            arr_15 [i_0 - 1] [i_0] [i_0] [i_0 - 1] [i_0 - 2] [i_0] = (arr_2 [i_0] [i_0]);
                            arr_16 [i_0] [i_2] = (max((max((((arr_8 [i_0] [i_1]) | 1)), (arr_6 [i_3]))), (((arr_6 [i_0 - 2]) | (arr_8 [i_0] [i_0])))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_26 [i_4] [i_0] [i_0] [i_0] [i_6] [i_0] [i_0] = (((((~((var_2 ? var_6 : (arr_4 [i_0 + 1] [i_0 + 1] [i_0 + 1])))))) ? ((((arr_13 [i_0]) ? var_10 : var_9))) : (max(((-(arr_8 [i_0] [i_1]))), (arr_21 [i_1] [i_1] [i_1 - 2] [i_1 - 2] [10] [10])))));
                                arr_27 [i_0 + 1] [i_0] [i_0] [i_0 + 1] = (((((32768 ? (arr_19 [i_0] [i_1] [i_1]) : (arr_19 [i_0 + 1] [i_0] [i_1])))) && ((!(arr_19 [i_0 - 3] [i_0] [i_1])))));
                                arr_28 [i_0 - 2] [i_0] [i_0 - 3] [i_0 - 2] = ((max(var_2, (~var_7))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_13 *= ((((min(((max(var_9, var_5))), var_3))) ? (((!(var_0 | var_0)))) : var_1));
    #pragma endscop
}
