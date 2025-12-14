/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189052
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 4889472784416498444;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_14 = ((16 >> (-32759 + 32788)));
                var_15 |= (((21912 / -32766) * -1));
            }
        }
    }
    var_16 *= 102;
    #pragma endscop
}
