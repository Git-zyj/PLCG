/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118696
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= var_0;
    var_14 = var_4;
    var_15 = (((var_9 <= var_2) ? -17037 : (min(var_4, ((min(-17045, var_12)))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                arr_7 [i_0] = (-17045 + 944655489);
                var_16 = ((!(!-17048)));
                var_17 = -17037;
            }
        }
    }
    #pragma endscop
}
