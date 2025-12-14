/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178915
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_16 = (~-32);

                /* vectorizable */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    arr_7 [i_0] [i_2] [i_2] = (arr_0 [i_1] [i_1]);
                    var_17 = (max(var_17, (((34 ? var_14 : -32)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_18 &= (((arr_5 [i_2 + 1] [i_2 + 1] [i_2 + 1]) + (arr_9 [i_4] [i_2 + 1] [i_2 + 1])));
                                var_19 = (min(var_19, (arr_10 [i_0] [9] [i_2] [i_1] [18] [i_3] [i_4])));
                                var_20 += ((var_11 ? (arr_11 [i_1] [i_2] [i_2] [i_2] [i_2 + 1] [i_2]) : (((arr_0 [7] [6]) | (arr_1 [9])))));
                            }
                        }
                    }
                    var_21 = (min(var_21, (arr_5 [i_0] [i_0] [i_0])));
                }
                for (int i_5 = 1; i_5 < 20;i_5 += 1)
                {

                    for (int i_6 = 1; i_6 < 19;i_6 += 1)
                    {
                        var_22 = ((((1 ? 1 : 1))) ? (!var_5) : ((+(((arr_13 [i_0] [i_1] [i_5] [i_5] [i_0]) ? (arr_1 [6]) : var_7)))));
                        arr_19 [i_0] [i_0] &= (min((((34 ? 0 : 1))), -7392642709815279249));
                        var_23 = (arr_4 [i_1] [i_6]);

                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            var_24 = (min(var_24, ((((arr_5 [i_1] [i_5] [i_6]) && (!6))))));
                            var_25 = (arr_21 [i_1] [i_1] [i_0] [9] [i_7]);
                            var_26 *= ((((min((arr_12 [i_5 + 1] [i_6 + 2] [i_6 + 1] [i_6] [i_7] [i_7]), 65507))) | (((var_5 < (arr_21 [i_6 - 1] [i_5 - 1] [1] [i_5 - 1] [i_0]))))));
                            var_27 = (min(var_27, var_9));
                        }
                    }
                    var_28 = (min(var_28, (arr_17 [i_5] [i_5 + 1] [i_1] [i_1])));
                    var_29 += (arr_21 [12] [i_5] [i_1] [i_0] [16]);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 1; i_8 < 1;i_8 += 1)
    {
        for (int i_9 = 1; i_9 < 12;i_9 += 1)
        {
            {
                var_30 = (min(var_30, ((min((min(12, (min(var_5, 6)))), 241)))));
                var_31 = (max(var_31, (((((max((arr_0 [15] [15]), ((var_8 ? (arr_14 [i_8]) : var_12))))) || (arr_13 [16] [i_9] [i_8] [i_8] [16]))))));
                var_32 = (((((var_12 >> (arr_12 [i_8 - 1] [i_9 + 2] [i_9 + 3] [i_9] [i_9] [i_9 + 1])))) ? ((max((arr_12 [i_8 - 1] [i_9 + 3] [i_9 + 3] [1] [2] [i_9 + 3]), (arr_12 [i_8 - 1] [i_9 + 1] [i_9 + 3] [0] [i_9] [i_9 + 3])))) : ((1023 ? (arr_12 [i_8 - 1] [i_9 + 2] [i_9 + 3] [i_9 + 3] [i_9] [i_9 + 2]) : (arr_12 [i_8 - 1] [i_9 - 1] [i_9 + 3] [i_9 - 1] [i_9 + 3] [i_9 + 2])))));
            }
        }
    }
    var_33 = (max(var_13, (max(1, ((0 ? -4 : 1))))));
    #pragma endscop
}
