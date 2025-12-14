/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14595
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_13 = arr_4 [i_0] [i_0] [i_0] [8];
                    var_14 = (((max((max(-13231, (arr_5 [i_0] [i_0] [i_2] [7]))), (((1152640029630136320 || (arr_0 [i_1]))))))) ? ((((max((arr_4 [11] [i_0] [i_1] [i_2]), 829309141354653061))) ? ((32752 ? 17294104044079415298 : 6710771363745756202)) : ((((arr_0 [i_1]) ? (arr_3 [i_0] [i_2]) : 19550))))) : ((((!(arr_1 [i_1]))))));
                }
            }
        }
    }
    var_15 = var_10;
    var_16 = (-((-5434 + (17294104044079415296 | 5448))));
    #pragma endscop
}
