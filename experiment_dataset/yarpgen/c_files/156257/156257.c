/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156257
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 65535;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                var_14 += ((var_2 ? ((((arr_0 [i_0] [i_0]) > var_2))) : (arr_0 [i_0] [i_1 - 1])));
                var_15 = (max(-1585190167, (((arr_0 [i_1 - 2] [i_1 - 1]) ? var_8 : (arr_0 [i_1 + 1] [i_1 + 1])))));
                arr_5 [i_1] = (((((2532850270 ? 58416 : 2147483623))) ? (((((arr_3 [i_1 + 1] [i_1]) <= 7099)))) : ((13706 ? 70368744177663 : (arr_3 [i_1 - 1] [i_1])))));
            }
        }
    }
    var_16 = var_2;
    var_17 = var_5;
    var_18 = var_0;
    #pragma endscop
}
