/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161557
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, var_19));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_21 *= (!var_18);
                var_22 = (min(2748456549, 12691));
                var_23 ^= ((116 % (arr_2 [i_0])));
            }
        }
    }
    #pragma endscop
}
