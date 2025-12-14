/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109325
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 1073741824;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [19] = (-1 ? (-2147483647 - 1) : ((1490730906 ? 2147483641 : (min(1803254330, var_1)))));
                var_20 = (max(var_20, -1442097233));
            }
        }
    }
    #pragma endscop
}
