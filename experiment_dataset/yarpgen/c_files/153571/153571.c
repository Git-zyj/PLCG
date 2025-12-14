/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153571
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((var_10 < (-9223372036854775807 - 1))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                arr_4 [i_0] [7] = (~var_2);
                var_13 = (max((min(((((arr_3 [6] [6]) ? var_3 : var_9))), 9223372036854775807)), ((((arr_2 [i_1] [i_0] [i_0]) | var_6)))));
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_14 = (-9223372036854775807 - 1);
                            var_15 -= (max(((+(((arr_2 [0] [i_2] [i_3]) << (-22636 + 22645))))), (((arr_3 [i_1] [i_3]) ? ((var_9 ? var_4 : (arr_2 [i_0] [i_0] [5]))) : ((max(0, var_9)))))));
                            arr_10 [i_2] [i_2] = var_2;
                        }
                    }
                }
                var_16 = max(((28718 ? (arr_8 [i_1] [i_1] [i_1] [16]) : (arr_7 [i_1 + 1] [8] [i_1] [i_1 + 1]))), 2100090616);
            }
        }
    }
    var_17 = (max(((~((9223372036854775807 ? 32767 : var_8)))), (((max(8388607, var_11))))));
    var_18 = (((((10578344677161066275 ? -17437 : 5253948038850802665))) ? ((var_4 ? 0 : 2966538284)) : var_5));
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 15;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 17;i_5 += 1)
        {
            {
                var_19 = ((((arr_1 [i_4 + 1] [i_4 - 1]) ? (arr_1 [i_4 + 3] [i_4 + 1]) : (arr_1 [i_4 + 3] [i_4 + 1]))));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        {
                            var_20 |= ((-((min(var_9, var_9)))));
                            arr_20 [i_4] [i_4] [1] [i_4] = 1;
                            var_21 = -var_4;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
