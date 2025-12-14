/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123070
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    var_17 -= (max((((((max(11791, (arr_4 [5] [1] [i_2])))) ? (((arr_3 [i_2]) ? 14622 : var_16)) : var_5))), (((((max(14615, (arr_4 [i_0] [i_0] [i_0]))))) - (arr_5 [i_2] [i_2] [i_2 + 3])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_18 &= ((max((arr_5 [i_1] [i_1 + 3] [i_2 + 3]), var_0)));
                                var_19 = ((((-14595 & (arr_7 [i_2])))));
                                arr_14 [i_0] [i_2] [i_2] [i_3] = max(var_4, (!var_1));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        {
                            arr_20 [i_0] [0] [i_5] [i_5] = ((+(min(var_11, (((arr_10 [i_0] [i_1 + 1] [i_5] [9] [9]) ? (arr_5 [i_0] [i_1] [6]) : var_15))))));
                            var_20 -= (arr_15 [i_6] [4]);
                            arr_21 [i_5] [i_1] [i_5] [i_6] = ((-(arr_5 [i_0] [i_0] [i_1 + 4])));
                            var_21 = ((-(((min((arr_0 [i_0] [i_1 + 1]), var_6))))));
                        }
                    }
                }
            }
        }
    }
    var_22 = var_1;
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 16;i_8 += 1)
        {
            {
                arr_27 [i_7] [i_8] = var_4;
                var_23 = (arr_19 [i_8] [i_8] [i_7] [i_7] [i_8] [i_8]);
                var_24 = (min(((~((max(14609, var_7))))), (1 / 14608)));
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 15;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 16;i_10 += 1)
                    {
                        {
                            arr_32 [4] [i_8] [i_8] [14] [i_8] = (arr_10 [i_7] [i_8] [i_9] [14] [14]);
                            var_25 = (min(var_25, ((~((max(22155, 32767)))))));
                        }
                    }
                }
                var_26 = (((arr_4 [i_7] [i_8] [i_8]) ? (max(9896915692188973150, (arr_4 [i_8] [i_8] [i_8]))) : (((+((19308 ? (arr_28 [13] [i_7] [i_7] [i_8]) : 14623)))))));
            }
        }
    }
    #pragma endscop
}
