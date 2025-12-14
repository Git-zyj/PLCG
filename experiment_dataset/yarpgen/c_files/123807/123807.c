/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123807
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max((min((min(var_12, var_4)), (1 - var_18))), (((!(((14632222845081435382 ? var_1 : var_9))))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_21 = (max(540907337, 8230));
        var_22 = (max(var_22, (((((min(var_0, (arr_0 [i_0])))) ? (!127) : (((arr_0 [i_0]) * var_18)))))));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_23 = (max(var_23, (((-(((!(arr_1 [i_1])))))))));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    arr_13 [i_1] [i_1] [i_2] [i_1] = ((~(arr_10 [i_2] [i_2])));
                    arr_14 [7] [i_2] [i_2] [i_2] = ((-1833975811 ? 3814521228628116260 : 3814521228628116235));
                    arr_15 [i_2] = var_17;
                    var_24 = (max((min(14632222845081435380, 9223372036854775807)), (arr_0 [i_2 - 1])));
                }
            }
        }
    }
    for (int i_4 = 1; i_4 < 20;i_4 += 1) /* same iter space */
    {
        var_25 = (min(var_25, ((max(3814521228628116233, 14632222845081435386)))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                {
                    arr_27 [i_5] [i_6] [2] [i_6] = var_2;
                    arr_28 [i_5] [i_5] [i_6] = (min(((((arr_17 [i_4 - 1]) ? (arr_17 [i_4 - 1]) : var_17))), (14632222845081435377 ^ 255)));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 19;i_8 += 1)
            {
                {
                    var_26 = (max((((arr_32 [i_7] [i_8 + 1]) ? var_9 : (arr_32 [i_7] [i_8 + 2]))), (((var_8 != (arr_32 [i_7] [i_8 + 1]))))));
                    var_27 = (max(var_27, ((((-127 - 1) >= -90)))));
                    var_28 += (((((var_13 - (arr_23 [i_4])))) ? 3379292163 : (((((-(arr_25 [i_4] [i_7 - 1] [i_7 - 1] [i_8])))) - 3814521228628116248))));
                    var_29 = (min((((((arr_29 [i_7]) > var_1)) ? -14632222845081435396 : ((((arr_23 [i_4]) / (arr_24 [i_4] [17] [i_8])))))), 3814521228628116229));
                }
            }
        }
    }
    for (int i_9 = 1; i_9 < 20;i_9 += 1) /* same iter space */
    {
        var_30 = (~1);
        var_31 = min((arr_22 [i_9] [i_9 - 1]), (max(((max(16851, (arr_33 [i_9 + 1] [i_9])))), 3814521228628116260)));
    }
    var_32 *= var_11;
    #pragma endscop
}
