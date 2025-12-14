/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115528
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = min(((var_13 ? 1139994358 : var_5)), var_17);
    var_21 = var_0;
    var_22 = (!var_4);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_23 |= (((~var_18) ? (min((arr_1 [i_0]), var_5)) : ((((!(((var_0 ? var_4 : var_10)))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_24 = (((((min(var_7, var_0))) ? (((arr_7 [i_0] [i_0] [1] [i_3]) * var_3)) : (arr_1 [i_3 - 1]))));
                            arr_11 [i_0] [i_2] = (min((((max(var_14, (arr_4 [2]))) / ((((arr_3 [2]) - var_2))))), (arr_6 [7] [i_2] [4] [1])));
                            arr_12 [i_0] [i_0] [i_2] [10] [i_1] |= (min((arr_3 [i_3 - 1]), ((max(0, -9223372036854775800)))));
                        }
                    }
                }
                var_25 += ((!((!(-1139994385 - var_1)))));
                var_26 = (min(var_26, var_19));
            }
        }
    }
    #pragma endscop
}
