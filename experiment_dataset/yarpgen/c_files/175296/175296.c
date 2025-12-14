/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175296
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_20 = (((-(arr_1 [i_0] [2]))));
                var_21 ^= 0;
                var_22 = (((!(arr_2 [2] [i_1]))) ? ((262136 ? -9223372036854775778 : 13301)) : (((arr_3 [i_0] [i_0] [i_1]) ? ((var_8 ? (arr_0 [1]) : (arr_3 [i_1] [3] [i_0]))) : (arr_3 [2] [i_1] [i_1]))));
                arr_4 [i_0] [i_1] = (((((4126 ? 177 : 177))) ? ((((!(((-(arr_1 [i_0] [i_0])))))))) : ((((((arr_1 [i_0] [i_1]) ? (arr_0 [i_0]) : (arr_0 [0])))) ? (((arr_0 [i_0]) ? var_5 : (arr_1 [i_0] [i_0]))) : ((var_5 ? (arr_3 [i_0] [3] [i_1]) : (arr_0 [i_1])))))));

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    arr_9 [i_0] [i_1] [i_0] = (arr_8 [i_0]);
                    arr_10 [i_0] = ((~(((arr_0 [i_1]) ? (arr_0 [i_0]) : (arr_0 [i_0])))));
                    var_23 = (min(var_23, (((((((arr_1 [i_0] [i_0]) ? (arr_7 [i_0] [i_0] [i_0]) : (arr_7 [i_0] [i_0] [i_0])))) ? (max((((arr_5 [i_1] [i_1]) ? var_10 : (arr_6 [i_2] [i_1] [i_0]))), (((arr_5 [i_1] [i_1]) ? (arr_7 [i_0] [14] [i_0]) : var_0)))) : ((((((arr_0 [i_0]) ? (arr_2 [i_0] [i_1]) : var_7))) ? (((arr_8 [i_1]) ? (arr_6 [i_0] [6] [6]) : var_17)) : var_4)))))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 19;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            {
                                var_24 -= (max(((-(arr_17 [i_4]))), ((max(var_1, (arr_23 [i_6 - 1]))))));
                                arr_25 [i_3] [i_5] = (((arr_13 [i_3]) ? (((!((((arr_11 [i_7] [i_3]) ? (arr_11 [i_7] [3]) : (arr_18 [i_3]))))))) : (arr_12 [i_3])));
                                var_25 = (max(var_25, var_8));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 20;i_9 += 1)
                        {
                            {
                                var_26 = (((((((((arr_21 [i_8] [i_5] [i_3] [i_3]) ? (arr_26 [i_3] [i_3] [i_5] [i_8] [i_4]) : (arr_29 [i_9] [i_8] [i_5] [i_4] [i_4] [i_3])))) ? (arr_27 [i_5] [i_5] [i_5] [i_5]) : (arr_28 [i_4] [i_5])))) ? ((((!(arr_17 [i_3]))))) : (arr_22 [i_3] [i_3] [13])));
                                var_27 = arr_27 [i_3] [i_3] [i_3] [15];
                            }
                        }
                    }
                    arr_32 [i_3] [i_4] [i_3] = (~(arr_12 [i_3]));
                    var_28 |= ((-(((arr_15 [i_3]) ? (arr_15 [i_3]) : var_9))));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_10 = 0; i_10 < 19;i_10 += 1)
    {
        var_29 += (arr_14 [i_10] [i_10]);
        var_30 = (((arr_26 [i_10] [18] [i_10] [i_10] [i_10]) ? (arr_26 [i_10] [14] [i_10] [i_10] [i_10]) : (arr_26 [i_10] [4] [i_10] [i_10] [0])));
    }
    var_31 = var_19;
    var_32 = ((((((!var_8) ? var_12 : var_9))) ? var_11 : var_12));
    #pragma endscop
}
