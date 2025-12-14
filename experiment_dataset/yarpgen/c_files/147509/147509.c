/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147509
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                var_14 = ((min(((1 ? (arr_6 [6] [i_1] [i_1]) : var_3)), (arr_3 [6] [6] [i_1 + 2]))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_15 = (max(var_15, (((-134159602 ? (arr_8 [i_3 - 1] [i_1] [i_1] [i_0 - 3]) : 1)))));
                            arr_12 [i_0] [5] [i_0] [i_0] = (((((min((arr_5 [i_3] [i_1] [i_2]), var_11)))) ? (((-((var_0 ? (arr_4 [i_3] [i_1]) : (arr_11 [i_0] [i_0] [i_0])))))) : (min((((3854415322 && (arr_2 [i_0] [i_0])))), 3854415310))));
                            var_16 = (arr_4 [i_2 - 2] [i_1 + 2]);
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 0;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 17;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 17;i_6 += 1)
            {
                {
                    var_17 = ((!(arr_17 [i_5])));
                    var_18 = (((((-(arr_16 [i_5])))) ? (arr_18 [i_6 - 1] [i_5 + 2]) : (((((max((arr_13 [i_5 + 1]), var_13)) == ((min(var_2, 2244813887)))))))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 0;i_7 += 1)
                    {
                        for (int i_8 = 3; i_8 < 18;i_8 += 1)
                        {
                            {
                                var_19 = ((((arr_23 [i_8] [i_8 - 3] [i_5 + 2] [i_5] [i_8]) ? (arr_23 [i_4] [i_8 - 2] [i_5 - 1] [i_5] [i_8]) : (arr_23 [i_7] [i_8 - 3] [i_5 - 1] [i_5] [i_8]))));
                                var_20 = (min(((((arr_19 [i_4 + 1]) | (arr_19 [i_4 + 1])))), (((arr_19 [i_4 + 1]) ? 1 : 3854415323))));
                                var_21 = (max((min(440551974, -24394)), (((arr_23 [i_5] [i_5] [i_8] [i_5] [i_8 - 1]) ? 2050153409 : 0))));
                                var_22 += ((((!(arr_23 [i_7] [i_7] [i_7 + 1] [16] [i_7]))) ? (arr_23 [i_7] [i_7] [i_7 + 1] [18] [i_7]) : (min(var_13, (arr_23 [i_7] [i_7] [i_7 + 1] [1] [i_7])))));
                                var_23 = ((var_3 ? (max(131071, 6515772250209492429)) : ((((!((min(var_11, var_11)))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 1; i_9 < 20;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 24;i_10 += 1)
        {
            {
                var_24 += 0;
                var_25 &= (((440551973 * 126) ? (((arr_25 [i_9 + 2]) ? (arr_29 [i_9 + 4] [i_10] [i_9]) : (arr_25 [i_9 - 1]))) : (min((arr_29 [i_9 - 1] [i_10] [18]), (arr_29 [i_9 + 1] [i_10] [i_9])))));
                var_26 = var_11;
            }
        }
    }
    var_27 = var_5;
    #pragma endscop
}
