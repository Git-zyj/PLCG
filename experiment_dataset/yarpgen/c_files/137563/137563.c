/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137563
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (!var_4);
    var_20 = (max(var_20, 4611686018427387902));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_21 = (arr_1 [5] [5]);
                    arr_7 [13] = (max(-126, 1));
                }
            }
        }
    }
    var_22 = (min(((min((!var_8), (max(var_3, var_8))))), (((((var_2 ? var_17 : var_16))) ? (!var_12) : ((var_2 ? var_5 : 8223196453820825603))))));
    #pragma endscop
}
