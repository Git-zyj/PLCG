/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124709
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (!var_13);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_18 = ((((var_4 * (arr_4 [i_0] [1] [i_0]))) / (((arr_3 [i_0] [0] [0]) ? ((((arr_5 [i_0] [i_0]) == 1))) : (arr_0 [i_0])))));
                var_19 &= (max((((arr_2 [i_1]) ? (arr_1 [i_0]) : var_13)), var_6));
            }
        }
    }
    #pragma endscop
}
