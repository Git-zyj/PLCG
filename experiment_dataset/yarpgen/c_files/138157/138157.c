/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138157
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, ((((max(4671100656202006905, (min(16, 16)))))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_14 ^= 9547;
                arr_6 [15] [15] = (max(((((arr_1 [i_0 - 2]) ? 65520 : 0))), (max((arr_2 [5]), var_11))));
                arr_7 [i_0] [i_1] [8] = 0;
                var_15 = (min(var_15, 65520));
                arr_8 [i_0] = (max((((7 - 1821156898) ^ ((max(255, 425357414))))), 0));
            }
        }
    }
    #pragma endscop
}
