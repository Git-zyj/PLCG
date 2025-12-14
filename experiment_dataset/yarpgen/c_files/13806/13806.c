/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13806
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_13 = (arr_8 [i_1 + 2] [i_1 + 2] [i_2] [i_3]);
                            var_14 = (((((63055 > (max(var_11, 0)))))) | (min(703219920, ((((arr_9 [i_0] [i_0] [i_0] [i_2] [i_3]) ? 1 : var_5))))));
                            var_15 = (!((((arr_7 [i_0] [i_1 + 4] [i_2] [i_3]) ? ((1 ? (arr_0 [3]) : var_7)) : (!-19347)))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        {
                            arr_14 [i_0] [i_1 + 1] [i_4] [i_4] = (((-18183 * var_8) <= ((((!(arr_0 [i_4])))))));
                            var_16 = (max(var_16, (((-(arr_12 [i_0] [i_1] [i_1] [i_5]))))));
                            var_17 = max(((!(arr_9 [i_1 + 1] [i_1 + 1] [i_0] [i_1] [i_1 - 1]))), ((!(!var_6))));
                        }
                    }
                }
                var_18 = min(((!(arr_0 [i_1]))), ((!((!(arr_4 [i_0] [i_0]))))));
            }
        }
    }
    var_19 = 4503582447501312;
    #pragma endscop
}
