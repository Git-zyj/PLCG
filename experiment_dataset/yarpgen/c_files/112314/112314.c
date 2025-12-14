/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112314
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                arr_7 [i_0] = var_3;
                arr_8 [i_0] [i_0] = (max(var_7, ((-16 ? (((32767 ? 255 : 0))) : 9223372036854775807))));
            }
        }
    }
    var_19 = var_1;
    var_20 = -var_0;
    #pragma endscop
}
