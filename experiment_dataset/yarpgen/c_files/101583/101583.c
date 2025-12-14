/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101583
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((((((((arr_2 [i_0]) ? var_6 : (arr_4 [i_0] [i_0])))) ? (arr_4 [i_0] [i_1]) : (((arr_0 [i_0]) ? (arr_4 [i_0] [i_0]) : (arr_5 [i_0] [i_0 - 1])))))) ? (arr_4 [i_0] [i_1]) : (((((192 ? 0 : 16325268437813806032))) ? ((-(arr_0 [i_0]))) : 70)));
                arr_7 [i_0] = (!-1382);
                var_13 = (((arr_0 [6]) ? (arr_2 [i_0 + 1]) : (min((arr_0 [8]), (arr_0 [6])))));
            }
        }
    }
    var_14 = ((var_4 ? (233 || 340004063) : var_11));
    #pragma endscop
}
