/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160971
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 7065363902966868934;
    var_16 = (min(var_16, var_4));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_17 ^= ((max(((((arr_8 [i_0] [i_0] [i_0]) || var_1))), var_13)));
                                arr_15 [i_1] [i_1] [i_1] = ((min((arr_13 [i_0] [i_0] [i_1] [i_0] [i_2 + 2]), (arr_13 [i_2] [i_2] [i_1] [i_2] [i_2 + 2]))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 17;i_6 += 1)
                        {
                            {
                                arr_22 [i_1] [i_1] = ((!(((((((!(arr_8 [i_6] [i_6] [i_6]))))) + (min(553886980, var_2)))))));
                                var_18 = (((arr_12 [i_2] [i_2 + 2] [i_2 + 2] [i_2] [i_2]) ? 3741080316 : (((arr_13 [i_2] [i_2 + 2] [i_1] [i_1] [i_2 + 2]) ? (arr_13 [i_2] [i_2 + 2] [i_1] [i_2 + 2] [i_1]) : var_2))));
                                arr_23 [i_1] [i_1] = ((min((arr_13 [i_5 - 2] [i_5 - 2] [i_1] [i_1] [i_2 - 3]), (arr_13 [i_5 - 2] [i_5 - 2] [i_1] [i_5 - 2] [i_2 - 1]))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 14;i_7 += 1)
                    {
                        for (int i_8 = 4; i_8 < 16;i_8 += 1)
                        {
                            {
                                arr_31 [i_8] [i_8] [i_8] [i_8] [i_8] [i_1] [i_1] = var_1;
                                var_19 = max((((arr_20 [i_0] [i_8 + 2] [i_8 + 2] [i_8 + 2] [i_7 + 2] [i_8 + 2] [i_8 + 2]) ? 0 : (((var_0 ? (arr_21 [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_0 [i_0])))))), 1231469224);
                                arr_32 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] = ((~(max((max(4048666786, (arr_13 [i_0] [i_0] [i_1] [i_0] [i_0]))), (min((arr_28 [i_0] [i_1] [i_1] [i_0] [i_1] [i_0]), var_6))))));
                                var_20 = -18;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
