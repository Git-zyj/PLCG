/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136495
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_5, ((36472 + ((var_2 ? 0 : var_9))))));
    var_17 = (var_7 ? ((-(!-13))) : var_2);
    var_18 *= var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
                {
                    var_19 -= ((!(arr_1 [i_1])));
                    var_20 = (max(var_20, (((!(arr_1 [i_1]))))));
                }
                for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
                {
                    var_21 = -26409;
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        for (int i_5 = 3; i_5 < 22;i_5 += 1)
                        {
                            {
                                var_22 = (((arr_9 [i_0] [i_0] [i_0] [i_3] [i_4] [23]) ? (min(-1595118358, (((arr_11 [i_5] [i_4] [i_1] [i_1] [i_0]) ? var_4 : (arr_1 [i_0]))))) : (arr_13 [i_5 - 1] [i_0] [i_5 + 1] [i_5 - 1] [i_5 - 3] [i_0] [i_5])));
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_5 [14] [i_0] [14] [i_4]);
                                arr_15 [i_0] [i_1] [i_3] [i_4] [i_5] = (arr_13 [i_5] [i_0] [20] [5] [i_1] [i_0] [i_0]);
                            }
                        }
                    }
                }
                for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
                {
                    arr_19 [i_1] [i_1] [i_1] |= ((-(arr_1 [i_1])));
                    var_23 = ((var_13 ? (((arr_17 [i_0] [i_0] [i_0]) ? (arr_17 [i_0] [i_1] [i_6]) : (arr_17 [i_0] [i_0] [i_0]))) : (((((arr_17 [1] [i_1] [1]) + 2147483647)) << (((((arr_17 [i_6] [i_1] [i_0]) + 24330191)) - 10))))));
                    var_24 = ((~(arr_8 [i_0] [i_1] [i_1])));
                    var_25 = ((-(((-13 * (arr_8 [i_0] [i_1] [i_0]))))));
                    arr_20 [i_0] [i_0] [i_1] [i_1] = 36120;
                }
                for (int i_7 = 0; i_7 < 25;i_7 += 1) /* same iter space */
                {
                    arr_23 [i_0] [i_0] [i_7] = 1438911775373190937;
                    var_26 = (max(var_26, var_10));
                }
                var_27 = (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                var_28 = (arr_2 [i_0]);
            }
        }
    }
    #pragma endscop
}
