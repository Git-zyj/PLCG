/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173633
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(46376, 7168));
    var_16 = (var_2 == var_5);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_17 |= (((min((arr_13 [i_0] [i_1] [i_0] [i_3] [i_4 + 2]), (arr_3 [i_0])))));
                                arr_15 [i_1] [i_1] [i_2 - 1] [i_2 - 1] [i_4 - 2] [i_2 + 1] = 30760;
                                var_18 = (max(var_18, ((min(((((arr_14 [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_0]) ? (arr_7 [i_0] [i_2 - 1] [i_2 - 1]) : 0))), (arr_11 [i_0]))))));
                            }
                        }
                    }
                    arr_16 [i_0] [i_1] [i_2 - 1] [i_1] = (((((((((arr_0 [i_2 + 1] [i_2 - 1]) ? var_9 : (arr_3 [i_0])))) ? var_7 : (arr_5 [i_0] [i_1] [i_1] [i_0])))) ? ((((max(1, (arr_12 [i_0] [i_0] [i_2 + 1] [i_0] [i_2 + 1] [i_2 + 1])))) ? var_11 : 233562378843265152)) : (arr_1 [i_0] [i_1])));
                }
            }
        }
    }
    var_19 = var_14;
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 8;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 10;i_9 += 1)
                        {
                            {
                                var_20 = (min(36977508, 65533));
                                arr_29 [i_5] [i_6 - 1] [i_6] [i_7] [i_8] [i_6] = (((((((var_13 < (arr_28 [i_5] [i_5] [i_5] [i_8]))) ? (arr_10 [i_6 - 1] [i_6 - 1] [i_7] [i_8]) : (arr_25 [i_5] [i_6 - 1] [i_7] [i_6 - 1] [i_9])))) ? (arr_18 [i_9]) : (((1 ? (arr_26 [i_6] [i_6 - 2] [i_6] [i_6 + 1] [i_6 + 2] [i_9]) : (arr_22 [i_6] [i_6 + 2] [i_6 + 2]))))));
                                arr_30 [i_6] [i_8] [i_8] [i_7] [i_7] [i_6 + 2] [i_6] = (((min((arr_1 [i_6 - 2] [i_6 - 2]), 386778236)) + ((0 ? 7315 : var_11))));
                            }
                        }
                    }
                    var_21 = (91 + 10006336331603959294);
                }
            }
        }
    }
    #pragma endscop
}
