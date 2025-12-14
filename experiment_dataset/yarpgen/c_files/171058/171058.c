/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171058
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] = max(((min((max(var_11, 1)), var_0))), (max((arr_0 [i_0]), (14506691142625271889 % 12240821023999966479))));
                var_15 = (min(var_15, (((-(-801924700 > -56))))));
            }
        }
    }
    var_16 = 67;
    #pragma endscop
}
