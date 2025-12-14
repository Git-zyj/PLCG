/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171501
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_20 *= (((arr_0 [i_0] [i_3]) ? (((arr_8 [i_0 - 2] [16] [i_4 + 2] [i_4 + 1]) ? 34924 : (arr_8 [i_0 - 2] [24] [i_4 - 1] [i_4 + 2]))) : 34906));
                                arr_12 [i_1] [i_1] [i_2] [i_1] [i_4 + 1] = ((((min((!1), (~var_8)))) ? ((((min(1, (arr_2 [24])))) ? (1 || 2345) : ((1074674286 * (arr_4 [i_0] [i_1] [i_3] [i_0]))))) : var_19));
                            }
                        }
                    }
                }
                var_21 = (min((min((((!(arr_11 [i_0 + 1] [i_1] [i_1] [i_0 - 1])))), (arr_10 [i_1] [i_1] [i_1] [i_0 + 1] [i_0 - 2]))), (min(1023, (arr_10 [i_0] [i_1] [i_1] [i_1] [i_1])))));
                arr_13 [i_1] = 1786701791;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_7 = 1; i_7 < 22;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 23;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 24;i_9 += 1)
                        {
                            {
                                var_22 = ((-(((1 == (((25866 ? -1786701792 : 71))))))));
                                var_23 &= (min(63191, 1));
                                arr_26 [i_8] [i_8 - 1] [16] |= ((((!var_0) >= var_5)));
                            }
                        }
                    }
                }
                var_24 = 2337;
            }
        }
    }
    var_25 = ((~(((var_15 >= ((min(var_1, 1755053639))))))));
    var_26 = var_18;
    #pragma endscop
}
