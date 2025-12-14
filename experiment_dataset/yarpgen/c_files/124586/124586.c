/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124586
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_18 -= ((!(((11494625374303024038 ? 2147483648 : (~var_2))))));
                var_19 = var_4;
            }
        }
    }
    var_20 *= (~var_7);
    var_21 = (min(var_12, (((min(var_6, var_8)) | (((var_16 ? var_17 : -1)))))));
    #pragma endscop
}
