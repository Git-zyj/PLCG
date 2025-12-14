/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133871
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_15 = 21377;
                var_16 = (min(var_16, (arr_3 [i_0 + 3])));
                var_17 = (min(0, var_4));
                var_18 += (arr_3 [i_0]);
            }
        }
    }
    var_19 |= var_5;
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            {
                var_20 = var_10;
                var_21 = (max(((min(var_3, (arr_7 [i_2] [i_2 - 1])))), (max((((arr_6 [i_2] [i_2]) ? (arr_9 [i_2] [i_2] [i_3]) : -108)), (((((arr_6 [7] [i_3]) + 9223372036854775807)) << (9977328283289362431 - 9977328283289362431)))))));
                var_22 = ((max((arr_6 [i_2 + 3] [i_2 + 3]), (arr_6 [i_2 + 2] [i_2]))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 4; i_6 < 14;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 16;i_8 += 1)
                        {
                            {
                                var_23 = (min(var_23, 9977328283289362452));
                                arr_22 [i_7] [17] [1] [1] [14] [5] = (((!var_3) || ((((arr_12 [i_6 - 3]) ? (arr_15 [i_8 + 1] [i_6 + 2] [i_5 + 3]) : (arr_15 [i_8 - 1] [i_6 - 4] [i_5 + 2]))))));
                                var_24 = (min(var_24, (arr_20 [i_5 + 2] [i_5 + 2] [i_5 - 2] [i_5 + 2])));
                                var_25 = (min(var_25, var_10));
                                var_26 = (max(var_26, 8469415790420189197));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 2; i_9 < 17;i_9 += 1)
                    {
                        for (int i_10 = 3; i_10 < 17;i_10 += 1)
                        {
                            {
                                arr_28 [i_4] [i_10] [i_4] [i_9] [i_4] = (((((32764 ? 9977328283289362431 : -20866))) ? -2670121260 : (((arr_5 [i_4] [i_4]) ? var_9 : (arr_23 [i_4] [i_5] [i_5] [i_5] [i_5 + 3] [i_10 - 1])))));
                                arr_29 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = var_2;
                                arr_30 [i_4] [i_5] [9] [i_9] [i_4] = ((((!((min(2033183914, (arr_19 [i_9 + 1] [i_5] [0] [i_10 - 2] [i_10 - 2] [i_6 - 4] [i_6])))))) ? ((((arr_25 [i_9 + 1] [i_9] [i_9 - 2] [i_9 + 1] [i_9 - 1]) ? var_13 : (arr_7 [i_4] [i_9 + 1])))) : (min((arr_9 [i_4] [i_6 - 1] [i_9]), var_3))));
                            }
                        }
                    }
                    arr_31 [i_4] [i_4] [i_4] = ((((0 ? 1023 : -3488953491122020075))) ? (min((arr_10 [i_4] [i_5] [i_6]), (arr_12 [i_4]))) : 1);
                }
            }
        }
    }
    #pragma endscop
}
