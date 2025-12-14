/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119601
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_20 = 7420846291963465492;
                var_21 = 116;
            }
        }
    }
    var_22 = 1453091944;
    var_23 = 3137927313111759360;
    #pragma endscop
}
