/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164907
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((var_5 ? (1969676861 | 2325290434) : (2325290432 == var_12))) > ((((var_1 >= var_4) ? var_11 : (var_6 != var_4))))));
    var_21 = ((!((((((var_10 ? var_10 : var_14))) ? (-2 > 268427264) : (!2325290432))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [3] = (arr_0 [i_0]);
        var_22 = (min(var_22, ((((arr_0 [i_0]) ? 83 : -6787731010606256034)))));

        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            var_23 = (max(var_23, (!var_7)));
            var_24 *= (arr_4 [i_0] [10] [i_1 + 1]);
        }
        arr_5 [i_0] = (arr_4 [i_0] [i_0] [i_0]);
    }
    #pragma endscop
}
