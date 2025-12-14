/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110750
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_13 = (min(var_13, ((((1 - 4258841254) == (((-(1 * 1)))))))));
                var_14 *= (max(((-5227758525926145471 | (((2 >> (8610889078193921659 - 8610889078193921639)))))), -65519));
                var_15 &= 127;
            }
        }
    }
    var_16 = ((((min(var_12, (45029 > var_6)))) != (max((1 - 2), 1))));
    var_17 = var_7;
    #pragma endscop
}
