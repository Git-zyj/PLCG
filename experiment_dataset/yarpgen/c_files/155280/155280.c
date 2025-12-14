/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155280
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, ((((min(var_10, 92)) < (((((var_9 * var_9) >= 3873393662518958371)))))))));
    var_16 = (((var_13 | 6144) == 20080));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_6 [i_1] [i_1] = (!6557623160494281761);
                    var_17 |= -6144;
                    var_18 -= (min((arr_4 [i_0 - 1] [i_0] [i_0 - 4]), ((min((((!(arr_0 [i_0 - 2] [7])))), var_6)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_1 + 2] [i_1] [0] [i_0] [i_3] [i_4] = ((!(((((arr_9 [2] [i_1] [i_1] [i_1] [4]) ? 5370 : (arr_7 [i_0] [i_1 - 2] [i_2] [i_4])))))));
                                var_19 = (max((arr_2 [i_1 - 3] [i_1 - 3]), (min((arr_2 [i_0] [i_0]), (arr_9 [i_0 - 3] [i_0 - 3] [i_1] [i_0] [i_2])))));
                                var_20 = (!-var_13);
                                arr_12 [i_4] [i_4] [i_2] [i_3] [i_4] &= 46735;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
