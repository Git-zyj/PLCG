/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189196
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= -var_15;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_18 |= min((max(var_10, 1324867403)), var_10);
                            var_19 = (((arr_2 [i_1] [i_2] [i_3]) > (((max(2720, (arr_7 [i_1]))) >> (32767 - 32760)))));
                            arr_10 [i_3] [i_1] [i_3] = (min(((((min(var_12, var_3))) ? var_13 : var_10)), (867043181 / 867043181)));
                            arr_11 [i_0] [i_1] [i_2] [i_3] = (max((arr_7 [i_1]), ((var_11 << (-18266 + 18323)))));
                            var_20 = (min((((!(((var_5 ? 13 : var_5)))))), (max((~var_10), (~var_12)))));
                        }
                    }
                }
                var_21 = (min(var_21, var_16));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            {
                arr_17 [i_4] [i_4] [i_4] = ((-(-867043182 >= 9223372036854775807)));
                var_22 = (max(var_22, (((-(arr_7 [i_4]))))));
            }
        }
    }
    #pragma endscop
}
