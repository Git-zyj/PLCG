/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103589
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_19 = (min(536838144, 21369));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        {
                            var_20 = 0;
                            var_21 = (max(var_21, var_2));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            {
                var_22 = (((max((arr_16 [i_4]), (arr_16 [i_4]))) ^ (((((min((-127 - 1), var_6)) > 27794))))));
                var_23 |= (max((((arr_16 [i_4]) / (arr_16 [i_5]))), (((arr_16 [i_4]) ? (arr_16 [i_5]) : (arr_16 [i_4])))));
            }
        }
    }
    var_24 = (var_11 < ((max(-1, ((var_0 ? var_4 : var_7))))));
    #pragma endscop
}
