/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106688
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = min(var_10, (!25112));
    var_19 = (+-65535);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_20 -= max(var_9, 63171);
                arr_5 [i_1] [i_1] [i_1] = (((arr_0 [i_0] [i_0]) % -45000));
            }
        }
    }
    #pragma endscop
}
