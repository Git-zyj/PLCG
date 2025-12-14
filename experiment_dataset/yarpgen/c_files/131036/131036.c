/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131036
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_20 = 134217216;
                var_21 = ((-((~(max(1363392066053702568, 1))))));
                var_22 = (~0);
            }
        }
    }
    var_23 = 1;
    #pragma endscop
}
