/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164691
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    var_19 -= (max((min(var_14, (max(var_11, var_9)))), 8575095258283667801));
                    var_20 = 254;
                    var_21 = (((((var_17 ? (max(284917479, var_15)) : (arr_1 [i_0])))) > ((-var_2 ? var_8 : 3))));
                }
                var_22 = (max(var_22, (arr_5 [i_0] [2] [i_0])));
                var_23 = var_3;
            }
        }
    }
    var_24 += var_8;
    #pragma endscop
}
