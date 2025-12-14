/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18901
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_8 & (max(var_8, (var_9 / var_7)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_11 = (2416228043603330971 * 16805955275325510422);
                    var_12 = var_4;
                }
            }
        }
    }
    var_13 = (((((var_5 ? ((var_7 ? 137304735744 : 16805955275325510425)) : (~18446744073709551615)))) ? (((var_7 / (var_0 * 1)))) : 3736033755426464673));
    #pragma endscop
}
