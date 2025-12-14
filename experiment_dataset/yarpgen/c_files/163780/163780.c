/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163780
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_14;

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_19 = var_8;
            var_20 ^= (((((~(arr_1 [i_0 + 1])))) ? (min(661378537063735594, var_9)) : var_6));
        }
        var_21 -= max(((min((arr_3 [i_0] [i_0 + 2] [i_0 + 2]), ((var_11 ? var_12 : var_11))))), var_14);
    }
    var_22 = var_0;
    #pragma endscop
}
