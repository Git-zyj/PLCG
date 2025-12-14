/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134414
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = max((!10412242018242932708), ((!((max(-1042600179, var_10))))));
    var_15 = -1042600179;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_1] = (min(((((min(1974757784, (arr_3 [i_1] [i_1])))) ? 0 : (arr_3 [i_1] [4]))), 10617));
                arr_6 [i_1] [i_1] [i_1] = ((1 & (((!((((arr_3 [i_1] [i_1]) ? (arr_4 [i_1]) : (arr_3 [i_1] [i_1])))))))));
                var_16 = ((+(((arr_1 [i_0]) ? (var_11 / var_4) : (arr_1 [i_1])))));
                var_17 *= (max((max(((var_13 ? var_10 : (arr_0 [i_0]))), 8034502055466618907)), var_1));
            }
        }
    }
    #pragma endscop
}
