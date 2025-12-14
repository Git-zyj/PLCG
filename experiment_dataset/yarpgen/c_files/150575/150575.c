/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150575
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min((max((~11), -95)), ((~(~-8991)))));
    var_18 = (var_2 > var_13);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] = (min((arr_3 [i_0] [i_1]), (arr_2 [i_0 + 4])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_19 = (((((-(arr_12 [i_0 + 2] [i_1] [i_2] [i_3 - 1])))) ? (-127 - 1) : (arr_12 [i_0] [i_1] [8] [i_3])));
                            arr_13 [i_0 + 3] [i_1] [i_2] [i_2] [i_3 + 2] [i_3] = ((-(((((var_15 ? var_1 : (arr_5 [i_1] [i_2] [i_1])))) ? 8683172132648541850 : (arr_3 [i_0] [i_1])))));
                        }
                    }
                }
                var_20 -= -114;
                var_21 = ((!(arr_5 [i_1] [i_1] [i_1])));
            }
        }
    }
    var_22 = (max(var_22, var_14));
    var_23 = ((var_14 * (((((var_0 ? var_0 : var_8))) ? (var_2 ^ 9763571941061009766) : ((var_10 ? 8683172132648541855 : var_4))))));
    #pragma endscop
}
