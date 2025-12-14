/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110193
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= (((65530 + var_7) ? var_6 : (((((939524096 ? 2944877791 : var_1))) ? var_6 : var_15))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_20 = (max((((-(arr_3 [i_1] [2])))), (((arr_3 [i_0] [i_1]) ? (arr_4 [i_0]) : (arr_4 [i_0])))));
                var_21 = 841613377;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    var_22 = (max(var_22, (((2944877783 ? 1350089503 : (((-(arr_0 [5])))))))));

                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        var_23 += (arr_3 [9] [9]);
                        var_24 = var_14;
                    }
                }
            }
        }
    }
    var_25 = (min(var_25, 1350089506));
    var_26 = ((((((var_7 ? var_5 : var_9)))) ? ((9345 ? (2552481693 - var_15) : var_18)) : (min(var_2, 0))));
    #pragma endscop
}
