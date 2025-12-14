/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133452
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_6 [i_2] [i_1] = (min((min((arr_1 [i_1] [i_0]), (arr_1 [i_1] [i_0]))), var_9));
                    arr_7 [i_0] [i_1] [1] = 3465432634;
                }
            }
        }
    }
    var_19 = var_13;
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 19;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 22;i_4 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 22;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        {
                            var_20 = (~23462);
                            var_21 = (min(var_21, 42073));

                            for (int i_7 = 0; i_7 < 23;i_7 += 1)
                            {
                                var_22 = -26760;
                                var_23 = (min(var_23, (((((1 ? 16040046281434473337 : (arr_17 [i_3 - 1] [i_4] [i_5 - 1] [i_6] [i_7] [i_6])))) ? var_15 : ((-(arr_17 [i_3] [i_4] [i_4] [i_5 - 2] [i_6] [i_7])))))));
                            }
                            for (int i_8 = 0; i_8 < 23;i_8 += 1)
                            {
                                arr_27 [i_3 + 3] [i_3] [i_4] [i_5] [i_6] [i_8] [i_8] = min(((max(1696, 1668))), (((arr_26 [i_4] [i_4 - 2]) ? (arr_26 [i_4] [i_4 - 3]) : (arr_26 [i_4] [i_4 - 2]))));
                                var_24 = var_12;
                                arr_28 [3] [i_4] [22] [i_4] [i_3] = (max(18171, (max((arr_10 [i_4]), (arr_10 [i_4])))));
                                var_25 -= (arr_14 [1] [i_3]);
                                arr_29 [i_3 - 1] [i_4] [i_4] [i_8] = var_0;
                            }
                            for (int i_9 = 0; i_9 < 1;i_9 += 1)
                            {
                                var_26 = ((arr_9 [i_9]) ? 4447 : (max((arr_12 [i_5] [i_3]), ((1 ? (arr_24 [i_3]) : (arr_31 [i_3] [i_5] [i_4]))))));
                                arr_34 [i_6] [i_6] [i_4] [i_6] [7] [1] = (arr_10 [i_4]);
                            }
                            var_27 = arr_12 [i_3] [i_4 + 1];
                        }
                    }
                }
                arr_35 [i_3] [0] |= -2147483647;
            }
        }
    }
    #pragma endscop
}
