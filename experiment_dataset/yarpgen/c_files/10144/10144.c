/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10144
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_16 = (max(var_16, -60));
                var_17 = (max(var_17, (((6034917458075408593 ? (((-822691561694258409 ? -1 : 1))) : ((6 ? 12411826615634142995 : 6034917458075408580)))))));
                var_18 = 1;
            }
        }
    }
    var_19 = (max(var_19, var_12));
    #pragma endscop
}
