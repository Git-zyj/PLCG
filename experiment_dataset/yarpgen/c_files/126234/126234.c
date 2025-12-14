/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126234
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_11 = (min(var_11, (arr_1 [i_0])));
                arr_4 [i_0] [i_0] = (arr_3 [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_12 = (arr_2 [i_1] [2] [i_3]);
                            var_13 -= (((arr_7 [i_3] [13] [i_1] [i_0]) ? (((((min(7216244822471294571, 27396320))) ? (arr_2 [11] [i_1] [i_2]) : 184))) : (max((((arr_2 [0] [i_1] [i_2]) & var_5)), 72))));
                        }
                    }
                }
            }
        }
    }
    var_14 = (max((((((var_5 >> (var_8 + 794832208)))) ? ((var_2 ? var_5 : var_1)) : (min(var_10, var_7)))), ((((((198 >> (var_4 - 74)))) ? -var_10 : var_8)))));
    var_15 = 754024513;
    #pragma endscop
}
