/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146382
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= var_1;
    var_20 = (max(var_20, (((var_12 * (max(var_15, -var_12)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_21 = (((((min(var_14, var_7))) ? (arr_10 [i_1] [i_1] [i_2] [i_3]) : var_1)));
                            var_22 = (min(var_22, (arr_12 [i_0] [4] [i_0] [i_0 + 1])));
                            var_23 = (arr_2 [i_0]);
                            var_24 += ((!((((arr_0 [i_0 - 1]) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 - 1]))))));
                        }
                    }
                }
                var_25 *= (min((((arr_10 [2] [i_0 - 1] [i_0 - 1] [2]) * (arr_13 [10] [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]))), ((-(arr_10 [10] [i_0 - 1] [i_0 - 1] [10])))));
                var_26 -= var_6;
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        {
                            var_27 -= (22 ^ 120);
                            arr_20 [i_1] [i_1] [15] [i_1] [1] [i_5] = (arr_17 [1] [i_1] [i_4] [i_5] [i_5]);
                            arr_21 [10] [i_0] [i_1] [i_0] [i_1] = 105;
                            var_28 ^= (max((min(9, 0)), 187));
                        }
                    }
                }
            }
        }
    }
    var_29 = (min(var_3, (-22589 - 151)));
    #pragma endscop
}
