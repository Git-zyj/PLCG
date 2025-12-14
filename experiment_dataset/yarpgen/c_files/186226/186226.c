/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186226
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= ((var_12 & ((var_4 ^ (var_15 & var_11)))));
    var_19 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = (min((2805 | 2805), (min((((var_3 ? var_5 : var_1))), (((arr_0 [i_0] [i_1]) / var_4))))));
                arr_5 [i_0] [i_0] [i_0] = var_10;
                var_20 = (min(var_20, (arr_1 [i_0] [i_0])));
                var_21 += ((+(((~var_5) ? (max((arr_3 [i_0] [i_1] [i_0]), var_4)) : (arr_0 [i_0] [i_0])))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            {
                var_22 *= (arr_8 [i_3]);
                var_23 = (20 - var_6);
            }
        }
    }
    #pragma endscop
}
