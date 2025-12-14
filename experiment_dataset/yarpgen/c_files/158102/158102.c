/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158102
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= ((!(((-((var_19 ? 5292530335452892792 : var_3)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_21 = (!var_0);
                var_22 |= (!47);
                var_23 = (max(var_23, (((1512272086 > ((34886 ? 2614105953 : 63664)))))));
                var_24 = (max(((max((~1332020747), -268560835))), 16762031123195089483));
            }
        }
    }
    #pragma endscop
}
