/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106120
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_15;
    var_20 += (max(var_5, (((~((var_1 << (var_17 - 11092))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                var_21 = (((min(13451944607822658989, (arr_2 [i_0]))) >= 706648662));
                arr_4 [i_0] [i_1] [i_1 - 2] = (max(((660151053466723408 ? 0 : 1073741823)), var_17));
                var_22 *= var_6;
            }
        }
    }
    #pragma endscop
}
