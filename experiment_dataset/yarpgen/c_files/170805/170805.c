/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170805
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (var_2 / var_5);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            {
                var_12 = (((((max(0, -5285102807450630648)))) - (((max((arr_0 [i_0]), var_7)) & (arr_3 [i_0 - 2] [1])))));
                arr_5 [i_0] [i_1] [i_0] = (((((1 ? 4182207417474475951 : 1296359336))) ? (arr_3 [i_0 + 2] [i_0 + 1]) : (--464954089048595313)));
            }
        }
    }
    var_13 = ((1 ? ((max((491520 / var_8), ((var_3 ? 41213 : var_8))))) : (((((min(65535, 1)))) & ((0 ? 11360888225879243373 : 0))))));
    #pragma endscop
}
