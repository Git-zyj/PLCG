/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132000
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 19;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            var_18 = ((((((-(arr_0 [i_1] [i_1])))) ? var_16 : ((((arr_7 [i_4] [i_3] [i_2] [i_2] [i_0] [i_0]) == (arr_7 [i_2] [i_1] [i_2] [i_1] [i_2] [i_4])))))));
                            var_19 = ((((max(var_11, var_0))) || (arr_9 [i_0] [i_2] [i_3] [i_3] [i_3] [i_2] [i_4])));
                            var_20 -= ((((max(var_7, (arr_1 [11])))) - (max(152, (arr_10 [i_0] [4] [i_2] [i_3 - 1] [i_4])))));
                            var_21 = (((1 ? (arr_9 [i_0] [i_1] [i_2] [8] [i_3 - 2] [i_2] [i_4]) : (arr_7 [14] [i_3 - 1] [i_2] [i_1] [i_1] [i_0]))));
                            var_22 = (((((arr_9 [7] [i_2] [i_4] [i_4] [i_4] [i_2] [6]) ^ (arr_9 [12] [i_2] [12] [i_4] [18] [i_2] [i_3]))) & (max((arr_9 [i_3] [i_2] [i_4] [i_3 - 2] [i_3] [i_2] [i_3]), (arr_9 [i_4] [i_2] [i_4] [i_4] [i_4] [i_2] [16])))));
                        }
                        var_23 = max((((((arr_10 [i_0] [i_2] [i_2] [2] [i_2]) ? -7318356320702985805 : var_14)) - (((arr_8 [i_3] [i_3] [i_3 - 3] [i_3]) ? 137 : 7318356320702985804)))), (((1 && (!7318356320702985804)))));
                        var_24 -= var_4;
                        var_25 = (((~(max((arr_10 [i_3 - 1] [i_2] [i_0] [i_2] [i_0]), var_6)))));
                        var_26 = ((2150758102 ? 146 : 1));
                    }
                }
            }
        }
        var_27 = -0;
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        {
                            var_28 = var_9;
                            var_29 = (max(var_29, (arr_3 [i_5])));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_9 = 0; i_9 < 19;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 19;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 19;i_11 += 1)
                        {
                            {
                                var_30 = (1 & var_13);
                                var_31 += (((arr_5 [8] [8]) ? ((-(arr_24 [i_5] [i_10] [i_10]))) : (((arr_24 [i_9] [17] [i_9]) ? (arr_5 [1] [0]) : (arr_4 [i_5] [i_9] [i_9])))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
