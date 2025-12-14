/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128982
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((min((min(-3425194197625238953, 14229278400228189746)), (((var_7 ? var_5 : var_9)))))) ? var_10 : var_9));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_0 - 2] [i_0 - 1] = ((3671760580 ? 1639 : 2802450911));
                arr_6 [i_0] [i_1] |= ((((var_11 ? var_4 : -18638)) << ((((42694 << (((var_11 + 5128916725262158424) - 23)))) - 1366186))));
            }
        }
    }
    var_15 = var_10;
    #pragma endscop
}
