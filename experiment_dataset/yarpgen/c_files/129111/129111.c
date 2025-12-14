/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129111
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, (~var_4)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] = ((((!4032) << (var_10 - 43293))));
                var_12 = (min(var_12, (!0)));
            }
        }
    }
    #pragma endscop
}
