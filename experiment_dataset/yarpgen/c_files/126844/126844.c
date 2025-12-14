/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126844
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_14 += (((arr_2 [i_0 - 1] [i_0 - 1]) ? (arr_2 [i_0 - 1] [i_0 - 1]) : -106));
                var_15 = (min(var_15, ((max((((((((arr_2 [i_0] [i_0]) ? 3 : (arr_3 [i_1])))) && -1))), (max((max(11445021746371338364, var_9)), 0)))))));
            }
        }
    }
    var_16 = ((~((~(max(var_7, -1))))));
    #pragma endscop
}
