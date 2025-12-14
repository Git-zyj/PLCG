/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160026
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_4 [i_0] [16] [i_1] = (-((125 ? -817913093 : -419235206)));
                var_18 = (max(var_18, (((+(((arr_2 [i_1] [i_1] [i_0]) | (max(1657754853, 0)))))))));
            }
        }
    }
    var_19 += (min((~146), ((~(min(-28304, 9223372036854775807))))));
    #pragma endscop
}
