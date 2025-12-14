/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182850
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(((min(var_4, var_5))), (!var_1)));
    var_17 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = (i_0 % 2 == zero) ? (max((((arr_1 [i_0 - 3] [i_0]) << (((arr_1 [i_0 - 3] [i_0]) - 1457818944)))), (((arr_5 [i_1] [3] [i_0]) << (((arr_4 [i_0 + 1] [i_0 - 3] [i_0 - 1]) - 220187335)))))) : (max((((((arr_1 [i_0 - 3] [i_0]) + 2147483647)) << (((((((arr_1 [i_0 - 3] [i_0]) - 1457818944)) + 1791633958)) - 12)))), (((arr_5 [i_1] [3] [i_0]) << (((arr_4 [i_0 + 1] [i_0 - 3] [i_0 - 1]) - 220187335))))));
                arr_7 [i_0] [i_1] = (min((!var_12), (max((((arr_2 [i_0] [i_0] [16]) ? var_4 : (arr_0 [i_0]))), ((max(var_15, var_12)))))));
                var_18 -= (arr_3 [i_1]);

                /* vectorizable */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_15 [i_3] [i_0] [i_1] = (arr_12 [i_0] [i_1] [i_1] [i_2] [i_1] [i_1]);
                                var_19 = (min(var_19, ((((arr_4 [3] [i_2] [i_4]) || (arr_8 [i_3]))))));
                            }
                        }
                    }
                    var_20 = (min(var_20, var_10));
                    var_21 = var_5;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            {
                                var_22 = arr_18 [i_0] [i_5] [i_2] [i_1] [i_0];
                                arr_20 [i_0] [i_1] [i_0] [i_0] [i_6] = ((~(var_14 % var_3)));
                            }
                        }
                    }
                    var_23 = (min(var_23, (arr_3 [i_1])));
                }
            }
        }
    }
    var_24 = ((var_6 * (!var_12)));
    /* LoopNest 2 */
    for (int i_7 = 3; i_7 < 19;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 21;i_8 += 1)
        {
            {
                var_25 &= (((!(arr_11 [i_8] [i_7 - 2]))));
                arr_27 [1] [i_8] = (arr_1 [i_7] [i_8]);
                var_26 = var_8;
            }
        }
    }
    #pragma endscop
}
