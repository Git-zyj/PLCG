/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128045
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min((!2369), (max((~var_1), (!0)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = (max((max(2376, (!1))), (min((min(var_5, 26760)), (!var_0)))));
                var_19 = ((!((max(((-(arr_2 [i_0]))), (!var_13))))));
            }
        }
    }
    var_20 -= ((-((-((max(var_14, 10402)))))));
    var_21 = (min((max(-1, ((max(1, var_14))))), ((max((max(var_16, 1)), (min(var_12, var_16)))))));
    #pragma endscop
}
