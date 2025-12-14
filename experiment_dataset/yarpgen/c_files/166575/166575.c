/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166575
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_2] = (arr_6 [i_0 + 1] [i_1]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_3] [i_2] [i_3] [i_3] = (156 > 0);
                                arr_16 [i_0] [i_1] [i_3] [i_2 - 3] [i_4] = ((!(arr_3 [i_0 + 1] [i_1])));
                                arr_17 [i_0] [i_1] [i_3] |= (arr_5 [i_3] [i_3] [i_0 + 3]);
                                arr_18 [i_4] [i_2] [i_0 - 1] = (max(-255, (min((arr_5 [i_2 + 1] [i_2] [i_2 + 2]), (arr_10 [i_0 + 2] [i_0 - 1] [i_2 - 2] [i_2 + 1])))));
                                arr_19 [i_0 + 3] [i_1] [i_2] [i_3] [i_4] = ((min(4035199484870659176, 1)));
                            }
                        }
                    }
                    arr_20 [i_0] = (min(((((((arr_8 [i_0 - 1] [i_1] [i_0] [i_2]) ? (arr_12 [i_2]) : var_6))) ? (arr_8 [i_0] [i_1] [i_1] [i_2]) : var_7)), ((((arr_2 [i_0 - 3]) | ((0 % (arr_14 [i_0 + 1] [i_0] [i_0] [i_0] [i_1] [i_2 - 1] [i_2]))))))));
                    arr_21 [i_0] [i_0] [i_0 + 2] [i_0] = min((max((((14411544588838892439 ? (arr_8 [i_0] [i_0] [i_2] [i_1]) : (arr_14 [i_0 + 2] [i_0 - 1] [i_0] [i_1] [i_1] [i_2 - 1] [i_2])))), 4035199484870659172)), (!14411544588838892461));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            {
                                arr_26 [i_6] = (min((arr_7 [i_6] [i_5] [i_1]), ((min((arr_14 [i_6] [i_5] [i_2] [i_2] [i_2] [i_1] [i_0]), (!288230376151711743))))));
                                arr_27 [i_1] = max(var_2, (((arr_11 [i_0] [i_1] [i_0] [i_5] [i_6]) % (arr_8 [i_2 - 3] [i_2 + 1] [i_2 + 3] [i_2 - 3]))));
                                arr_28 [i_6] [i_5] [i_2 - 1] [i_1] [i_6] = ((!(arr_3 [i_2 + 3] [i_0 - 2])));
                                arr_29 [i_6] [i_6] [i_2 - 2] [i_6] [i_0 - 2] = (((arr_22 [i_0 - 1] [i_2 - 2] [i_2 + 1] [i_2] [i_2 - 1] [i_5]) ? (arr_6 [i_2 - 2] [i_0 - 1]) : ((min((var_5 != 18446744073709551615), (arr_2 [i_0 - 1]))))));
                                arr_30 [i_0] [i_1] [i_6] [i_5] [i_6] = ((var_8 ? 26385 : ((min(-12, 26385)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
