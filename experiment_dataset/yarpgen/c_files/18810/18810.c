/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18810
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (4 * -1);
    var_19 &= var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            {
                var_20 *= ((-63 == (~var_11)));
                var_21 = -1;
            }
        }
    }
    var_22 = var_7;
    #pragma endscop
}
