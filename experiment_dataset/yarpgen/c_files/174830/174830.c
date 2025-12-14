/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174830
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    var_18 = (min((((arr_4 [i_0] [i_1] [i_2] [i_2 + 1]) ? 112 : (~1))), 1));
                    var_19 ^= ((-2347069214 ? ((max((arr_5 [i_0] [i_0]), var_6))) : (arr_2 [i_0] [i_2 + 1] [i_2])));
                }
            }
        }
    }
    var_20 = var_6;
    var_21 = (((((var_8 ? var_10 : 8190))) ? var_9 : 112));
    #pragma endscop
}
