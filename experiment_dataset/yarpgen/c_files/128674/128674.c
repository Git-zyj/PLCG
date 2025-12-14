/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128674
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(-829328034, -1325168375700612542));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_21 = (max((max((!829328033), var_15)), (((!((max(4294967232, 537))))))));
                var_22 = -829328034;
            }
        }
    }
    var_23 = var_8;
    #pragma endscop
}
