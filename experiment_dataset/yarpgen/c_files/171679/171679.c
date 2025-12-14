/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171679
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] [i_1] = 8631178450555234570;
                var_13 = ((0 ? ((-1 ? ((2784279312 ? -11 : 8631178450555234570)) : (((-32760 ? 22 : 25))))) : 8));
            }
        }
    }
    var_14 = (-9223372036854775807 - 1);
    var_15 = (min(var_15, 65532));
    var_16 = ((-1 ? 31 : -3125));
    #pragma endscop
}
