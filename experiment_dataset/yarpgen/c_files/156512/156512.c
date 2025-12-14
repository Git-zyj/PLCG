/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156512
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [12] = 9;
                var_21 -= var_18;
                var_22 = ((((576320014815068160 ^ (arr_5 [i_0 + 1] [i_0 - 1] [i_0 + 1]))) / 576320014815068158));
                var_23 = var_5;
                var_24 = ((((((arr_3 [i_0] [i_0 - 1] [i_1]) / (arr_5 [i_0 + 1] [i_0 + 1] [i_1])))) ? 1 : (min((arr_1 [i_0 - 1]), var_14))));
            }
        }
    }
    var_25 = var_7;
    #pragma endscop
}
