/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179887
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, (((~((-(!4))))))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((-(arr_1 [i_0])));
        arr_3 [i_0] = (((((arr_0 [i_0]) ? (arr_1 [i_0]) : ((-(arr_0 [i_0]))))) + ((0 ? (max((arr_0 [i_0]), 937171967)) : 3357795328))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 0;i_2 += 1)
        {
            var_18 -= (((arr_9 [i_2 + 1] [i_2 + 1] [i_2 + 1]) - (arr_9 [i_2 + 1] [i_2 + 1] [i_2 + 1])));
            var_19 += ((!(arr_4 [i_2 + 1])));
            var_20 *= var_7;
            arr_10 [i_1] [i_1] [1] = ((((arr_7 [i_2 + 1]) < (arr_4 [i_2]))));
            var_21 = (~var_9);
        }
        var_22 = (min(var_22, (arr_7 [i_1])));
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 15;i_4 += 1)
            {
                {
                    arr_16 [i_1] [i_4] = (arr_14 [i_4] [i_4 - 2] [i_4]);
                    var_23 = (((-(arr_7 [i_4 + 1]))));
                }
            }
        }
        arr_17 [i_1] = (((arr_13 [i_1]) ? ((5460 ? (arr_15 [i_1]) : 5460)) : (((var_16 + (arr_6 [i_1]))))));
    }
    for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
    {
        var_24 = (((max((arr_9 [i_5] [i_5] [i_5]), (arr_9 [i_5] [i_5] [i_5]))) ? (((arr_9 [i_5] [i_5] [i_5]) | (arr_9 [i_5] [i_5] [i_5]))) : (((arr_9 [i_5] [i_5] [i_5]) ? (arr_9 [i_5] [i_5] [i_5]) : (arr_9 [i_5] [i_5] [i_5])))));
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 13;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 14;i_8 += 1)
                {
                    {
                        var_25 = (min((min((((12631 ? var_1 : var_5))), (arr_15 [i_6]))), (((!((min((arr_11 [i_7 + 1] [i_6]), (arr_1 [i_5])))))))));
                        arr_30 [i_6] [i_6] = (arr_0 [i_6]);
                    }
                }
            }
        }
        var_26 = ((~((var_8 ? var_13 : (arr_25 [i_5] [i_5] [i_5] [i_5])))));
        arr_31 [i_5] = (max((min((1 ^ 189), 937171967)), (((((!(arr_0 [1]))) ? (((-127 - 1) ? (arr_12 [i_5] [i_5] [i_5]) : (arr_13 [i_5]))) : (((!(arr_1 [i_5])))))))));
        var_27 = (min((arr_0 [i_5]), (((arr_25 [i_5] [i_5] [i_5] [1]) + 2991885813))));
    }
    var_28 = ((!((max((5472 * var_8), var_13)))));
    #pragma endscop
}
