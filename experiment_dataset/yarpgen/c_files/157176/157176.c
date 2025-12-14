/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157176
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_11;
    var_21 = ((((max(16918175190698794251, ((5209040966754313623 ? 18446744073709551615 : 5430455181742489852))))) ? (min((min(var_2, var_15)), (var_6 * 0))) : ((776438802488848348 & (max(16918175190698794257, var_18))))));
    var_22 = (16918175190698794251 >> (1528568883010757374 - 1528568883010757333));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_23 ^= (~((var_15 ? (arr_6 [i_0 + 2] [i_0 + 1] [i_0]) : var_5)));
                var_24 = 16918175190698794275;
            }
        }
    }
    var_25 ^= var_9;
    #pragma endscop
}
