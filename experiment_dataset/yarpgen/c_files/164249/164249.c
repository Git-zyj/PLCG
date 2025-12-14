/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164249
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= var_4;
    var_17 = 3977380672;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            {
                var_18 = (((((7340032 & (arr_1 [i_1 - 4])))) ? ((+(min((arr_3 [i_0]), 317586624)))) : ((((!((317586624 < (arr_2 [i_0] [i_0])))))))));
                var_19 = ((!((((!var_8) - (var_13 & -123))))));
            }
        }
    }
    #pragma endscop
}
