/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184088
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_17 += min((((arr_1 [2]) ? (arr_1 [1]) : (arr_1 [1]))), (min(var_3, (((arr_1 [10]) ? var_11 : (arr_1 [1]))))));
                var_18 = (min(var_18, (arr_2 [i_1 - 1])));
            }
        }
    }

    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_19 = 1;
        arr_6 [i_2] = (((((0 * 0) ? var_12 : (!2147483627)))) ? (((((var_1 ? var_14 : (-2147483647 - 1)))) ? (arr_4 [i_2] [i_2]) : var_3)) : (arr_4 [i_2] [i_2]));
        var_20 -= (max((arr_5 [1]), (arr_4 [i_2] [15])));
        arr_7 [i_2] [i_2] = (1 > 1);
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_21 = (((1 <= (!var_16))));
        arr_11 [i_3] [i_3] = (((((-(arr_10 [i_3])))) ? (arr_8 [11] [i_3]) : (((arr_10 [0]) ? 1 : var_7))));
        var_22 = -var_4;
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_23 = ((!((((arr_5 [i_4]) & (arr_14 [i_4] [i_4]))))));
        arr_15 [i_4] [i_4] = var_4;

        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
        {
            var_24 = (((1 != (arr_12 [i_4] [i_5]))) && (arr_12 [i_4] [i_5]));
            arr_19 [i_4] [i_5] = ((1 ? (((1 || (arr_17 [i_4])))) : ((((((arr_17 [i_4]) - 1))) ? -709845443 : (((arr_17 [i_4]) ? 1 : var_15))))));

            for (int i_6 = 1; i_6 < 15;i_6 += 1)
            {
                /* LoopNest 2 */
                for (int i_7 = 4; i_7 < 15;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 0;i_8 += 1)
                    {
                        {
                            var_25 = ((min((1529461471 < 1180971137), var_10)) >= (((((var_3 ? var_15 : (arr_17 [i_4])))) ? var_6 : (((var_10 != (arr_26 [i_4] [i_5] [i_6 - 1] [i_7] [i_4])))))));
                            arr_28 [i_4] [i_5] [i_4] = (arr_24 [i_4] [i_8] [i_4] [i_8] [i_8 + 1] [i_8]);
                            var_26 = (((((arr_4 [i_6 - 1] [i_6 - 1]) ? (arr_4 [i_6 - 1] [i_6]) : (arr_4 [i_6 - 1] [i_8 + 1])))) ? (((!(arr_17 [i_4])))) : (((((arr_23 [i_4]) ? (arr_12 [i_4] [1]) : var_7)) << var_7)));
                        }
                    }
                }
                arr_29 [i_4] [i_4] = (max(((min(var_8, (arr_4 [1] [i_6])))), var_14));
                var_27 -= ((((arr_22 [i_6 + 2] [14] [i_6 - 1] [8] [i_6]) ? ((var_5 ? (arr_20 [1] [i_5] [i_5] [i_6 - 1]) : var_2)) : var_1)) > -481775324);
                arr_30 [i_4] [i_4] [i_5] [i_5] = ((((var_4 ? (arr_25 [i_6 - 1] [i_6] [i_6] [i_6 - 1] [i_6 - 1]) : (arr_21 [i_6 - 1] [i_6 + 1] [i_6] [i_4])))) ? (((((arr_16 [1]) ? (arr_22 [i_4] [i_5] [i_5] [i_4] [i_6]) : (arr_18 [i_4] [i_5] [i_6]))))) : (min((((arr_26 [i_4] [10] [i_5] [i_5] [i_4]) ? var_8 : var_1)), (((arr_26 [4] [i_4] [i_4] [i_5] [i_4]) ? var_12 : var_10)))));
            }
        }
        for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
        {
            arr_33 [14] [i_4] = (max((arr_25 [i_4] [i_4] [i_4] [i_9] [i_4]), (arr_23 [i_4])));
            var_28 -= ((((min(1421783113, -1))) ? ((min((arr_14 [i_4] [i_9]), 0))) : (max(1, -1197278024))));
        }
    }
    var_29 = (max(((((1757121696 ? 1 : 1)) & (min((-2147483647 - 1), 481775318)))), (((((481775317 ? 1 : 1))) ? -1084207759 : -577309700))));
    #pragma endscop
}
