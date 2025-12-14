/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13541
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 14;i_0 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_12 = (((arr_0 [i_0 + 3] [i_0 - 2]) ? ((0 ? -7 : (arr_1 [i_0] [i_0]))) : (arr_4 [i_0 + 3] [i_0 + 2] [i_0 - 1])));
            var_13 = (min(var_13, (arr_3 [i_0 + 1] [i_0 + 3])));
            arr_6 [i_1] [i_1] [i_1] = ((~(arr_4 [i_0 + 2] [i_0 + 3] [i_0 + 1])));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            var_14 *= (arr_8 [i_0 - 2]);
            arr_10 [i_0 - 1] = (arr_9 [i_0]);
            var_15 = ((((65529 ? (arr_8 [i_0]) : (arr_1 [9] [0])))) ? (arr_7 [i_0]) : ((((!(arr_8 [1]))))));
            var_16 = ((!(arr_1 [i_0 + 1] [i_0 + 3])));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            arr_13 [i_0] = var_3;
            arr_14 [i_0] = ((1 ? (arr_4 [i_0] [i_0] [i_0]) : (arr_8 [13])));
        }
        /* LoopNest 2 */
        for (int i_4 = 3; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 0;i_5 += 1)
            {
                {
                    arr_21 [8] [i_4 - 1] [i_4] [i_4 - 1] = max((((((~(arr_2 [i_0]))) << ((((283726776524341248 ? var_0 : (arr_11 [i_0] [i_0]))) - 19130))))), (((max(var_6, 1)) ? 3 : -990330446)));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 0;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            {
                                arr_26 [3] [i_4] [3] [i_6] = ((((~((var_2 ? var_3 : (arr_3 [i_0 - 2] [i_0 - 2]))))) >> ((((arr_16 [i_5 + 1] [i_5 + 1] [i_5 + 1]) <= (arr_8 [i_0 + 2]))))));
                                var_17 = (max((((arr_5 [i_0 + 1] [i_6] [i_0 - 1]) ? (arr_5 [i_0 - 2] [i_6] [i_0 - 2]) : (arr_2 [i_0 + 1]))), ((((arr_22 [i_4 - 1] [i_4 - 1] [i_6] [i_4 + 1]) ? (arr_22 [i_4 - 2] [i_4 - 3] [i_6] [i_4 + 1]) : (arr_22 [i_4 - 1] [i_4 - 1] [i_6] [i_4 + 2]))))));
                            }
                        }
                    }
                }
            }
        }
        arr_27 [i_0] = ((+(((arr_18 [i_0] [i_0]) ? ((((var_9 != (arr_4 [i_0] [8] [8]))))) : (((arr_7 [i_0]) / var_11))))));
    }
    for (int i_8 = 2; i_8 < 14;i_8 += 1) /* same iter space */
    {
        arr_30 [i_8 + 1] = (((((16911 ? 2047 : 1146898074)) >> (!var_9))));
        var_18 *= (max((arr_3 [i_8 + 2] [i_8]), ((~((~(arr_29 [i_8])))))));
        arr_31 [i_8 + 3] = (-2052135341 ? ((((((arr_17 [i_8 - 1] [i_8 - 1]) ? var_3 : (arr_25 [i_8 - 1] [i_8 + 3] [i_8 - 2] [16] [i_8 - 2] [i_8] [i_8 - 2])))) ? ((((arr_7 [i_8 - 1]) / (arr_2 [2])))) : (arr_0 [i_8 + 3] [i_8 - 1]))) : ((min(((((arr_19 [i_8] [i_8] [i_8] [i_8]) * (arr_29 [i_8])))), var_5))));
    }
    var_19 = -130653599;
    var_20 = ((((((var_9 ? var_5 : var_2)))) ? (!var_1) : (((((var_1 ? var_6 : var_9))) ? (min(1867588646148611778, 231)) : (!var_5)))));
    var_21 = var_9;
    #pragma endscop
}
