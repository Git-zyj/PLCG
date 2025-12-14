/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128535
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(59, 2199023255551));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_20 = (~4294967294);
                var_21 = (min(var_21, ((min(4294967293, 2038605204)))));
                var_22 = ((4095 ? 17810870737131241081 : 78));
            }
        }
    }
    #pragma endscop
}
