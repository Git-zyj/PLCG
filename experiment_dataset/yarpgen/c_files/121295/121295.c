/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121295
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_1 ^ (((~4989389277439436716) | var_5))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_18 = ((!((!((min((arr_1 [i_0] [i_1]), 4989389277439436716)))))));
                arr_6 [i_0] = ((((var_8 || (arr_5 [i_0] [i_0])))));
            }
        }
    }
    var_19 = (!63);
    #pragma endscop
}
