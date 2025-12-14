/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123623
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_8;
    var_18 -= (min(((((min(-6751396081761604142, var_3))) ? ((var_9 ? -29252 : 32747)) : var_11)), 33));
    var_19 = ((-(43418 * 2313377330)));
    var_20 = (min(((-13507017029705215621 ? ((var_2 ? (-32767 - 1) : var_11)) : 23303)), var_5));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_21 = (min((min((arr_2 [i_0 - 3] [9]), (arr_2 [i_0 - 3] [i_0]))), (var_11 - 15)));
                var_22 ^= ((-(((arr_1 [i_0] [i_0]) ^ (min(2486839584, 32767))))));
            }
        }
    }
    #pragma endscop
}
