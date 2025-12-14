/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137963
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_10 - ((max(var_16, (((var_3 ? var_4 : var_13))))))));
    var_18 = var_3;
    var_19 = ((!var_16) > (((!var_13) ? (!var_7) : (min(var_14, var_8)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {
                var_20 *= (arr_4 [i_1]);
                var_21 = (max(var_21, -var_2));
                var_22 = (arr_4 [i_0 + 3]);
            }
        }
    }
    #pragma endscop
}
