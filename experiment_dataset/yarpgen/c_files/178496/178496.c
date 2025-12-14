/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178496
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (-16 != 15);
    var_18 = (((((-16 ? var_13 : var_16))) ^ 16));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_19 += (-15 || 16);
                    var_20 = (((min(((var_10 / (arr_1 [i_0] [i_2]))), var_11)) * (((var_10 / (((arr_3 [10]) / -15)))))));
                }
            }
        }
    }
    #pragma endscop
}
