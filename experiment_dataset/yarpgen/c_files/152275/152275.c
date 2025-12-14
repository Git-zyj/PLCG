/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152275
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [0] [0] [0] &= ((((!(arr_0 [i_0 - 1]))) ? 11543406658329136190 : (~9073061806451558030)));
                var_18 = 1;
            }
        }
    }
    var_19 = 30602;
    #pragma endscop
}
