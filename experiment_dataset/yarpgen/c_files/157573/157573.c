/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157573
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_5;
    var_13 = ((~(((7766048529137241568 ^ var_7) ? var_7 : var_4))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                arr_4 [14] [14] = (((((var_1 ? (arr_2 [i_1 - 1] [i_1 - 1] [i_1 + 1]) : ((var_10 ? -7766048529137241568 : var_0))))) ? (((arr_0 [i_1 + 1]) ^ (arr_0 [i_1 - 1]))) : ((max((arr_3 [i_1] [i_1] [i_1 + 2]), 121)))));
                arr_5 [0] [14] = -1548359811;
                arr_6 [i_0] = ((((135 ? 1 : (arr_2 [i_0] [i_0] [i_1 + 1]))) & (((arr_0 [i_1 + 1]) ? 111 : (arr_0 [i_1 + 1])))));
            }
        }
    }
    var_14 = ((var_11 ? (~var_8) : 7968915086971811840));
    #pragma endscop
}
