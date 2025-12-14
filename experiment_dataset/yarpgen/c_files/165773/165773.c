/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165773
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((!((((arr_3 [i_1]) ? (arr_2 [i_0] [1]) : var_8)))));
                var_15 = (((~45427) ? ((var_12 ? var_2 : var_1)) : (((18446744073709551615 ? 20108 : 0)))));
            }
        }
    }
    var_16 = ((var_3 ? var_5 : (+-18446744073709551591)));
    #pragma endscop
}
