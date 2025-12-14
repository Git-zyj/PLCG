/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139507
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_12 += ((1 ? (18446744073709551615 > 0) : ((65535 ? 112 : 1630688117))));
                    var_13 = ((20 ? 22 : (!var_6)));
                }
            }
        }
    }
    var_14 = var_8;
    #pragma endscop
}
