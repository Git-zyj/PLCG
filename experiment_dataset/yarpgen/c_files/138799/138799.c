/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138799
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                var_15 = (~var_14);
                var_16 = var_9;
                var_17 = (min(var_17, (((((max(65521, 4294967291))) && (((var_8 ? -8026 : (arr_4 [i_1 + 1])))))))));
                var_18 = ((var_2 % ((65518 ? 236 : 8023))));
            }
        }
    }
    var_19 = ((-8002 ? -8026 : 224));
    var_20 = var_3;
    #pragma endscop
}
