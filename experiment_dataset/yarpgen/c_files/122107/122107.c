/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122107
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min((~33553920), (min((~var_1), (min(14587420101983525051, 4294967285))))));
    var_12 = (min(var_12, (min(((~(min(var_4, var_4)))), ((min((~var_0), (!3976486619))))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_13 = (!-1103815118);
                arr_5 [i_0] = min(((~(min(4216327878, 4216327889)))), (~4216327878));
            }
        }
    }
    #pragma endscop
}
