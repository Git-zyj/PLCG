/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176845
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_18 = ((!((max(((var_0 ? var_0 : var_15)), (((var_0 ? var_7 : var_9))))))));
                var_19 = ((0 ? -23031 : -18));
            }
        }
    }
    var_20 -= (max((max(((var_3 ? 0 : var_5)), ((var_1 ? 27775 : 23047)))), ((((var_10 ? var_12 : var_10))))));
    var_21 = ((-var_12 ? (((27801 ? var_8 : 27549))) : ((((((1596982247 ? var_15 : 79379272))) ? (~var_17) : ((max(var_2, var_13))))))));
    #pragma endscop
}
